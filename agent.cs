using Meta.XR.BuildingBlocks.AIBlocks;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.Collections;
using System.Linq;
using UnityEngine;
using Meta.XR;
using System;
public class PokerLLMAgent : MonoBehaviour
{
    [SerializeField] private GameObject llm;  // Creates a spot to drag Quest LLM block here

    [System.Serializable]
    public class PokerGameState
    {
        public string[] playerCards;
        public string[] communityCards;
        public int potSize;
        public int currentBet;
        public int playerChips;
        public string[] availableActions;
    }

    [System.Serializable]
    public class PokerDecision
    {
        public string action;
        public int amount;
    }
    private void extractCards()
    {
        string systemPrompt = @"
            You are analyzing a poker game state.
            Determine:
            1. The cards on the table (community cards).
            2. Your player cards.
            Given the game state, output valid JSON:
            {     ""community_cards"": [<card1>, <card2>, <card3>, <card4>, <card5>],
    ""player_cards"": [<card1>, <card2>]}
            ";
        string stateJson = JsonConvert.SerializeObject(state);
        string prompt = systemPrompt + "\nGame state:\n" + stateJson;
        
       llm.SendMessage(prompt, OnLLMResponse); //use the llm building block on Unity for
    }
    private void calculateExpected()
    {
        string systemPrompt = @"
            You are a poker decision agent.
            Your task is to analyze the current game state and compute the expected value (EV) of a specific decision, the best action 
            to maximize winning, and 
            Given the game state, output valid JSON:
            { ""expected_value"": <float>,""action"": ""call"" | ""raise"" | ""fold"",> }
            ";
        string stateJson = JsonConvert.SerializeObject(state);
        string prompt = systemPrompt + "\nGame state:\n" + stateJson;
        
        llm.SendMessage(prompt, OnLLMResponse); //use the llm building block on Unity for
    }
        public void RecommendAction(PokerGameState state)
    {
        string systemPrompt = @"
        You are a poker decision agent.
        Given the game state, output valid JSON:
        { ""action"": ""call"" | ""raise"" | ""fold"", ""amount"": <number> }
        ";
        string stateJson = JsonConvert.SerializeObject(state);
        string prompt = systemPrompt + "\nGame state:\n" + stateJson;

        // Send directly to the LLM building block on Quest
        llm.SendPrompt(prompt, OnLLMResponse);
    }

    private void OnLLMResponse(string response)
    {
        Debug.Log("LLM Block responded: " + response);

        try
        {
            PokerDecision decision = JsonConvert.DeserializeObject<PokerDecision>(response);
            ExecuteDecision(decision);
        }
        catch
        {
            Debug.LogWarning("Could not parse response from LLM: " + response);
        }
    }

    private void GiveReasoning(PokerGameState state, PokerDecision decision)
    {
         string systemPrompt = @"
            You are a poker coach.
            Your task is to analyze the current game state and compute why this is th emos
            Given the game state, output valid JSON:
            { ""expected_value"": <float> }
            ";
        string stateJson = JsonConvert.SerializeObject(state);
        string decisionJson = JsonConvert.SerializeObject(decision);
        string prompt = systemPrompt + "\nGame state:\n" + stateJson + "\nDecision:\n" + decisionJson;
        
        llm.SendPrompt(prompt, OnLLMResponse); //use the llm building block on Unity for
    }
}
