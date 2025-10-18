using UnityEngine;
using Unity.Labs.LLM;

public class PokerEVTester : MonoBehaviour
{
    public LLM llm; // assign in Inspector

    async void Start()
    {
        string userInput = @"{ ""pot"": 200, ""bet"": 50, ""hand"": [""Ah"", ""Kh""], ""board"": [""As"", ""7d"", ""2c""] }";
        string systemPrompt = @"
          You are a poker decision agent.
            Your task is to analyze the current game state and compute the expected value (EV) of a specific decision.
            Given the game state, output valid JSON:
            { ""expected_value"": <float> }
            ";

        string result = await llm.QueryAsync(systemPrompt, userInput);
        Debug.Log("Response: " + result);
    }
}
