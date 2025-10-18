using UnityEngine;
using TMPro;

public class PokerOptimalMoveUpdater : MonoBehaviour
{
    [SerializeField] TMP_Text actionText;
    [SerializeField] float updateInterval = 1.5f; // seconds between updates

    float timer = 0f;
    string originalTemplate;

    // The poker actions to choose from
    readonly string[] pokerActions = { "Raise", "Check", "Fold", "Call" };

    void Start()
    {
        if (actionText == null)
            actionText = GetComponent<TMP_Text>();

        // store the original text, e.g. "Action: [ACTION]"
        originalTemplate = actionText.text;
    }

    void Update()
    {
        timer += Time.deltaTime;
        if (timer >= updateInterval)
        {
            timer = 0f;

            // pick a random action from the list
            string randomAction = pokerActions[Random.Range(0, pokerActions.Length)];

            // replace [ACTION] with the chosen move
            string updated = originalTemplate.Replace("[MEASUREMENT]", randomAction);

            // update text on screen
            actionText.text = updated;
        }
    }
}