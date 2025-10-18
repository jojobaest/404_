using System;
using System.Collections.Generic;
using System.Linq;

public class PokerGameState
{
    public string[] playerCards;
    public string[] communityCards;
    public string[] availableActions;
}

public static class PokerEvaluator
{
    private static readonly string[] Ranks = { "2","3","4","5","6","7","8","9","T","J","Q","K","A" };
    private static readonly string[] Suits = { "h","d","c","s" };

    public static double ComputeExpectedValue(PokerGameState state, string action)
    {
        // Get all cards in play
        var knownCards = state.playerCards.Concat(state.communityCards).ToHashSet();
        var deck = GenerateDeck().Where(c => !knownCards.Contains(c)).ToList();

        // If board complete, no enumeration needed
        if (state.communityCards.Length == 5)
        {
            double winProb = ComputeWinProbability(state.playerCards, state.communityCards, deck);
            return ExpectedValueFromWinProb(action, winProb);
        }

        // Enumerate all possible remaining boards
        int remaining = 5 - state.communityCards.Length;
        var allCombinations = Combinations(deck, remaining);

        int wins = 0;
        int total = 0;

        foreach (var combo in allCombinations)
        {
            var finalBoard = state.communityCards.Concat(combo).ToArray();
            double result = CompareHands(state.playerCards, finalBoard);
            if (result > 0) wins++;
            total++;
        }

        double winProbFinal = (double)wins / total;
        return ExpectedValueFromWinProb(action, winProbFinal);
    }

    private static double ExpectedValueFromWinProb(string action, double winProb)
    {
        double gain = action == "raise" ? 100 : action == "call" ? 50 : 0;
        double loss = gain;
        return (winProb * gain) - ((1 - winProb) * loss);
    }

    private static List<string> GenerateDeck()
    {
        var deck = new List<string>();
        foreach (var r in Ranks)
            foreach (var s in Suits)
                deck.Add(r + s);
        return deck;
    }

    // CompareHands: returns >0 if player wins, 0 tie, <0 loss
    private static int CompareHands(string[] player, string[] board)
    {
        // Simple placeholder: high card comparison only (for demonstration)
        // Replace with proper evaluator logic (e.g. rank 5-card hands)
        int playerScore = RankHand(player.Concat(board).ToArray());
        int oppScore = RankHand(RandomOpponentHand(board.Concat(player)));
        return playerScore.CompareTo(oppScore);
    }

    private static int RankHand(string[] cards)
    {
        // Extremely simplified evaluator: max rank value only
        return cards.Max(c => Array.IndexOf(Ranks, c[0].ToString()));
    }

    private static string[] RandomOpponentHand(IEnumerable<string> excluded)
    {
        var deck = GenerateDeck().Where(c => !excluded.Contains(c)).ToList();
        return deck.Take(2).ToArray(); // deterministic subset for demo
    }

    private static IEnumerable<IEnumerable<T>> Combinations<T>(IEnumerable<T> list, int length)
    {
        if (length == 0) yield return new T[0];
        else
        {
            int i = 0;
            foreach (var item in list)
            {
                var remaining = list.Skip(i + 1);
                foreach (var combo in Combinations(remaining, length - 1))
                    yield return new[] { item }.Concat(combo);
                i++;
            }
        }
    }
}

public class Program
{
    public static void Main()
    {
        var state = new PokerGameState
        {
            playerCards = new[] { "Ah", "Kd" },
            communityCards = new[] { "2c", "7s", "Jh" },
            availableActions = new[] { "fold", "call", "raise" }
        };

        foreach (var action in state.availableActions)
        {
            double ev = PokerEvaluator.ComputeExpectedValue(state, action);
            Console.WriteLine($"{action}: EV = {ev:F4}");
        }
    }
}
