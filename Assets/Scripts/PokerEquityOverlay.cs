using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PokerEquityOverlay : MonoBehaviour
{
    [SerializeField] TMP_Text holeText;
    [SerializeField] TMP_Text boardText;
    [SerializeField] TMP_Text equityText;
    [SerializeField] TMP_Text notesText;

    string CardStr(PokerCard c){
        string[] R={"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
        string[] S={"♠","♥","♦","♣"};
        return $"{R[c.r]}{S[c.s]}";
    }

    public void Show(List<PokerCard> hole, List<PokerCard> board, float equity, string notes)
    {
        if (holeText)  holeText.text  = $"Hole: {(hole.Count>0?CardStr(hole[0]):"?")} {(hole.Count>1?CardStr(hole[1]):"?")}";
        if (boardText) boardText.text = $"Board: {string.Join(" ", board.ConvertAll(CardStr))}";
        if (equityText) equityText.text = $"Win %: {(equity*100f):F1}%";
        if (notesText) notesText.text = string.IsNullOrEmpty(notes) ? "" : notes;
    }
}