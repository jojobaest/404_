using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ProcessPokerDisplay
{
    private TextMeshProUGUI playerNameText;
    private Image playerAvatarImage;
    private TextMeshProUGUI playerChipsText;
    private TextMeshProUGUI playerBetText;

    public ProcessPokerDisplay(GameObject playerDisplay)
    {
        playerNameText = playerDisplay.transform.Find("PlayerName").GetComponent<TextMeshProUGUI>();
        playerAvatarImage = playerDisplay.transform.Find("PlayerAvatar").GetComponent<Image>();
        playerChipsText = playerDisplay.transform.Find("PlayerChips").GetComponent<TextMeshProUGUI>();
        playerBetText = playerDisplay.transform.Find("PlayerBet").GetComponent<TextMeshProUGUI>();
    }

    public void UpdatePlayerName(string name)
    {
        playerNameText.text = name;
    }

    public void UpdatePlayerAvatar(Sprite avatar)
    {
        playerAvatarImage.sprite = avatar;
    }

    public void UpdatePlayerChips(int chips)
    {
        playerChipsText.text = $"Chips: {chips}";
    }

    public void UpdatePlayerBet(int bet)
    {
        playerBetText.text = $"Bet: {bet}";
    }
}