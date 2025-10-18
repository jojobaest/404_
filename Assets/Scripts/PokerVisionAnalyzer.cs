using System;
using System.Collections;
using System.Text.RegularExpressions;
using TMPro;
using UnityEngine;
using Meta.XR.BuildingBlocks.AIBlocks; // LlmAgent

public class PokerVisionAnalyzer : MonoBehaviour
{
    [Header("References")]
    [Tooltip("Drag the [BuildingBlock] Large Language Models' LlmAgent here")]
    public LlmAgent llm;

    [Tooltip("Main overlay line, e.g., 'Hand Value: [MEASUREMENT]'")]
    public TextMeshProUGUI handText;

    [Tooltip("Optional: second line for best move (e.g., 'Optimal Move: [MEASUREMENT]')")]
    public TextMeshProUGUI bestMoveText;

    [Header("Behavior")]
    public KeyCode triggerKey = KeyCode.Space;
    [Min(0.5f)] public float analysisCooldown = 3f;
    [Tooltip("How long to wait for an LLM reply (seconds)")]
    public float replyTimeout = 20f;

    [Header("Prompting")]
    [TextArea(3, 10)]
    public string systemPrompt =
        "You are a poker table analyst. You will receive a single passthrough image from a Meta Quest " +
        "that shows community cards, one player's hand, and the surrounding table. " +
        "Your job is to extract JUST THREE FIELDS and return STRICT JSON:\n" +
        "{ \"hand\": <short label>, \"win_prob_percent\": <0-100 number>, \"best_move\": <one or two words> }\n" +
        "Hand must be a compact label (e.g., 'Top Pair', 'Two Pair', 'Flush Draw', 'Air', etc.). " +
        "win_prob_percent must be a number (no % sign). best_move is one of: 'Fold', 'Check', 'Call', 'Bet', 'Raise'. " +
        "If the cards are unclear, make your best guess and be conservative.";

    [TextArea(1, 5)]
    public string userPrompt = "Analyze the image for poker strength. Return JSON only — no prose.";

    bool _busy;

    void Update()
    {
        if (!_busy && OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch))
        {
            //Debug.log("[PokerVision] Triggering analysis via controller button.");
            StartCoroutine(AnalyzeOnce());
        }
    }

    IEnumerator AnalyzeOnce()
    {
        if (llm == null)
        {
            Debug.LogError("[PokerVision] LlmAgent reference is missing.");
            yield break;
        }

        _busy = true;

        if (handText) handText.text = "Hand Value: [Analyzing…]";
        if (bestMoveText) bestMoveText.text = "Optimal Move: [Analyzing…]";

        // Subscribe once to the LLM reply
        string reply = null;
        void OnReply(string s) => reply = s;
        llm.OnAssistantReply += OnReply;

        // Kick off a single prompt WITH passthrough image (the block handles the capture)
        // Falls back to text if passthrough isn’t available.
        _ = llm.SendPromptWithPassthroughImageAsync(BuildFullPrompt());

        // Wait for reply or timeout
        float t = 0f;
        while (reply == null && t < replyTimeout)
        {
            t += Time.deltaTime;
            yield return null;
        }
        llm.OnAssistantReply -= OnReply;

        if (reply == null)
        {
            ApplyFailure("No reply (timeout).");
            yield return Cooldown();
            yield break;
        }

        // Some models wrap JSON with prose. Try to extract a JSON object.
        string json = TryExtractJson(reply);
        if (string.IsNullOrEmpty(json)) json = reply.Trim();

        // Parse into our schema
        Result parsed = null;
        try
        {
            parsed = JsonUtility.FromJson<Result>(json);
        }
        catch (Exception)
        {
            // Try a super-lightweight fallback if the model returned key:value pairs without strict JSON
            parsed = FuzzyParse(reply);
        }

        if (parsed == null || string.IsNullOrEmpty(parsed.hand))
        {
            ApplyFailure("Could not parse LLM result.");
            Debug.LogWarning($"[PokerVision] Raw reply:\n{reply}");
            yield return Cooldown();
            yield break;
        }

        // Clamp and pretty-print
        var pct = Mathf.Clamp(parsed.win_prob_percent, 0f, 100f);
        if (handText) handText.text = $"Hand Value: {parsed.hand} ({pct:0.#}%)";
        if (bestMoveText) bestMoveText.text = $"Optimal Move: {SanitizeMove(parsed.best_move)}";

        yield return Cooldown();
    }

    string BuildFullPrompt()
    {
        // Many LLM blocks accept a single combined string. If your block separates
        // system vs user messages, you can switch to that API. For now, combine.
        return $"System: {systemPrompt}\n\nUser: {userPrompt}";
    }

    void ApplyFailure(string reason)
    {
        if (handText) handText.text = $"Hand Value: [Error]";
        if (bestMoveText) bestMoveText.text = "Optimal Move: [—]";
        Debug.LogWarning($"[PokerVision] {reason}");
    }

    IEnumerator Cooldown()
    {
        yield return new WaitForSeconds(analysisCooldown);
        _busy = false;
    }

    // --- Helpers -------------------------------------------------------------

    [Serializable]
    class Result
    {
        public string hand;
        public float win_prob_percent;
        public string best_move;
    }

    static string TryExtractJson(string s)
    {
        var m = Regex.Match(s, "{[\\s\\S]*}");
        return m.Success ? m.Value : null;
    }

    static Result FuzzyParse(string s)
    {
        // VERY rough fallback: hand: X, win_prob_percent: Y, best_move: Z
        var r = new Result();

        var mHand = Regex.Match(s, @"hand\s*[:=]\s*([A-Za-z ]+)", RegexOptions.IgnoreCase);
        if (mHand.Success) r.hand = mHand.Groups[1].Value.Trim();

        var mPct = Regex.Match(s, @"win[_ ]?prob(?:ability)?[_ ]?percent\s*[:=]\s*([0-9]+(\.[0-9]+)?)", RegexOptions.IgnoreCase);
        if (mPct.Success && float.TryParse(mPct.Groups[1].Value, out var pct)) r.win_prob_percent = pct;

        var mMove = Regex.Match(s, @"best[_ ]?move\s*[:=]\s*([A-Za-z ]+)", RegexOptions.IgnoreCase);
        if (mMove.Success) r.best_move = mMove.Groups[1].Value.Trim();

        if (string.IsNullOrEmpty(r.hand) && string.IsNullOrEmpty(r.best_move)) return null;
        return r;
    }

    static string SanitizeMove(string move)
    {
        if (string.IsNullOrWhiteSpace(move)) return "—";
        move = move.Trim();
        // normalize to expected small set
        string m = move.ToLowerInvariant();
        if (m.Contains("fold")) return "Fold";
        if (m.Contains("check")) return "Check";
        if (m.Contains("call")) return "Call";
        if (m.Contains("raise")) return "Raise";
        if (m.Contains("bet")) return "Bet";
        return char.ToUpper(move[0]) + move.Substring(1);
    }
}