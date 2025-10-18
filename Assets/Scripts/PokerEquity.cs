using System;
using System.Collections.Generic;
using UnityEngine;

/// Suits: S,H,D,C  Ranks: A,K,Q,J,10...2
public readonly struct PokerCard {
    public readonly int r; // 12..0  (A=12, K=11, ... 2=0)
    public readonly int s; // 0..3   (S=0,H=1,D=2,C=3)
    public PokerCard(int rank, int suit) { r = rank; s = suit; }
    public static bool TryParse(string rank, string suit, out PokerCard card) {
        card = default;
        string[] ranks = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
        int ri = Array.IndexOf(ranks, rank?.ToUpper());
        if (ri < 0) return false;
        int si = "SHDC".IndexOf((suit??" ").ToUpper()[0]);
        if (si < 0) return false;
        card = new PokerCard(ri, si);
        return true;
    }
}

public static class PokerEquity
{
    static System.Random rng = new System.Random();

    public static float EstimateEquity(List<PokerCard> hole, List<PokerCard> board, int opponents, int iters = 5000)
    {
        if (hole.Count < 2) return 0f;
        var deck = BuildDeck();
        RemoveFromDeck(deck, hole);
        RemoveFromDeck(deck, board);

        int wins=0, ties=0, plays=0;

        for (int it=0; it<iters; it++)
        {
            // sample remaining community
            var drawBoard = new List<PokerCard>(board);
            while (drawBoard.Count < 5) drawBoard.Add(Draw(deck));

            // sample opponents
            var oppHands = new List<(PokerCard, PokerCard)>();
            for (int o=0; o<opponents; o++) oppHands.Add((Draw(deck), Draw(deck)));

            // evaluate hero
            var heroBest = Best5(hole[0], hole[1], drawBoard);
            int cmpSum = 0;

            foreach (var (c1,c2) in oppHands)
            {
                var oppBest = Best5(c1, c2, drawBoard);
                int cmp = CompareHands(heroBest, oppBest); // +1 hero better, 0 tie, -1 worse
                cmpSum += cmp;
            }

            if (cmpSum > 0) wins++;
            else if (cmpSum == 0) ties++;
            plays++;

            // restore deck (cheap reset: rebuild)
            deck = BuildDeck();
            RemoveFromDeck(deck, hole);
            RemoveFromDeck(deck, board);
        }

        return (wins + 0.5f*ties) / Mathf.Max(1, plays);
    }

    // --- Helpers ---

    static List<PokerCard> BuildDeck() {
        var d = new List<PokerCard>(52);
        for (int s=0; s<4; s++) for (int r=0; r<13; r++) d.Add(new PokerCard(r,s));
        return d;
    }
    static void RemoveFromDeck(List<PokerCard> deck, List<PokerCard> cards) {
        foreach (var c in cards) deck.RemoveAll(x => x.r==c.r && x.s==c.s);
    }
    static PokerCard Draw(List<PokerCard> deck) {
        int i = rng.Next(deck.Count);
        var c = deck[i];
        deck.RemoveAt(i);
        return c;
    }

    // Create all 7C5 combos and return best 5-card rank tuple
    static HandRank Best5(PokerCard h1, PokerCard h2, List<PokerCard> board) {
        var seven = new PokerCard[7] { h1,h2, board[0],board[1],board[2],board[3],board[4] };
        HandRank best = default; bool set=false;
        // iterate all 5-card choices (21 combos)
        for (int a=0;a<7;a++) for (int b=a+1;b<7;b++)
        for (int c=b+1;c<7;c++) for (int d=c+1;d<7;d++)
        for (int e=d+1;e<7;e++) {
            var rank = Rank5(seven[a],seven[b],seven[c],seven[d],seven[e]);
            if (!set || rank.CompareTo(best) > 0) { best = rank; set=true; }
        }
        return best;
    }

    // Hand strength as sortable tuple: (cat, r1,r2,r3,r4,r5)
    // cat: 8=StraightFlush,7=FourKind,6=FullHouse,5=Flush,4=Straight,3=Trips,2=TwoPair,1=Pair,0=High
    public readonly struct HandRank : IComparable<HandRank> {
        public readonly int cat; public readonly int r1,r2,r3,r4,r5;
        public HandRank(int c,int a,int b,int c2,int d,int e){cat=c;r1=a;r2=b;r3=c2;r4=d;r5=e;}
        public int CompareTo(HandRank o){
            int[] A={cat,r1,r2,r3,r4,r5}, B={o.cat,o.r1,o.r2,o.r3,o.r4,o.r5};
            for(int i=0;i<6;i++){int d=A[i]-B[i]; if (d!=0) return d;}
            return 0;
        }
    }

    static int[] SortRanksDesc(List<int> rs){ rs.Sort(); rs.Reverse(); return rs.ToArray(); }

    static HandRank Rank5(PokerCard a, PokerCard b, PokerCard c, PokerCard d, PokerCard e)
    {
        var cards = new[]{a,b,c,d,e};
        int[] cnt = new int[13]; int[] suit = new int[4];
        foreach (var x in cards){ cnt[x.r]++; suit[x.s]++; }

        bool isFlush = Array.Exists(suit, v => v==5);

        // Straight (handle A as high or low)
        int straightHigh = -1;
        for (int hi=12; hi>=4; hi--) {
            bool ok=true;
            for (int k=0;k<5;k++) if (cnt[(hi-k+13)%13]==0) { ok=false; break; }
            if (ok) { straightHigh = hi; break; }
        }
        // A-2-3-4-5: when straightHigh==4 it already covers wheel (since ranks 4..0)

        if (isFlush && straightHigh>=0) return new HandRank(8, straightHigh,0,0,0,0);

        // group counts
        var ranksByCount = new List<(int r,int n)>();
        for (int r=12;r>=0;r--) if (cnt[r]>0) ranksByCount.Add((r,cnt[r]));
        ranksByCount.Sort((x,y)=> {
            int d = y.n.CompareTo(x.n); if (d!=0) return d;
            return y.r.CompareTo(x.r);
        });

        // Four / Full house / Trips / Pairs
        if (ranksByCount[0].n==4) {
            int quad = ranksByCount[0].r; int kicker = ranksByCount[1].r;
            return new HandRank(7, quad, kicker,0,0,0);
        }
        if (ranksByCount[0].n==3 && ranksByCount[1].n==2) {
            return new HandRank(6, ranksByCount[0].r, ranksByCount[1].r,0,0,0);
        }
        if (isFlush) {
            var hi = new List<int>();
            foreach (var x in cards){ if (suit[x.s]==5) hi.Add(x.r); }
            hi.Sort(); hi.Reverse();
            return new HandRank(5, hi[0],hi[1],hi[2],hi[3],hi[4]);
        }
        if (straightHigh>=0) return new HandRank(4, straightHigh,0,0,0,0);
        if (ranksByCount[0].n==3) {
            // trips + highest two kickers
            var kick = new List<int>(); foreach (var rc in ranksByCount) if (rc.n==1) kick.Add(rc.r);
            kick.Sort(); kick.Reverse();
            return new HandRank(3, ranksByCount[0].r, kick[0], kick[1],0,0);
        }
        if (ranksByCount[0].n==2 && ranksByCount[1].n==2) {
            int hiPair = Math.Max(ranksByCount[0].r, ranksByCount[1].r);
            int loPair = Math.Min(ranksByCount[0].r, ranksByCount[1].r);
            int kicker = ranksByCount[2].r;
            return new HandRank(2, hiPair, loPair, kicker,0,0);
        }
        if (ranksByCount[0].n==2) {
            var kick = new List<int>(); for (int i=1;i<ranksByCount.Count;i++) if (ranksByCount[i].n==1) kick.Add(ranksByCount[i].r);
            kick.Sort(); kick.Reverse();
            return new HandRank(1, ranksByCount[0].r, kick[0], kick[1], kick[2],0);
        }

        // High card
        var highs = new List<int>(); foreach (var rc in ranksByCount) highs.Add(rc.r);
        var H = SortRanksDesc(highs);
        return new HandRank(0, H[0],H[1],H[2],H[3],H[4]);
    }

    static int CompareHands(HandRank a, HandRank b) => a.CompareTo(b);
}