using UnityEngine;
using TMPro;

public class PokerHandInfoUpdater : MonoBehaviour
{
    [SerializeField] TMP_Text measurementText;
    [SerializeField] float updateInterval = 1.0f;

    float timer = 0f;
    string originalTemplate;

    void Start()
    {
        if (measurementText == null)
            measurementText = GetComponent<TMP_Text>();

        // Save the original text (with [MEASUREMENT] as placeholder)
        originalTemplate = measurementText.text;
    }

    void Update()
    {
        timer += Time.deltaTime;
        if (timer >= updateInterval)
        {
            timer = 0f;

            // generate new random value
            int randomValue = Random.Range(0, 100);

            // replace [MEASUREMENT] only — leave all other text alone
            string updated = originalTemplate.Replace("[MEASUREMENT]", randomValue.ToString());

            // apply it
            measurementText.text = updated;
        }
    }
}