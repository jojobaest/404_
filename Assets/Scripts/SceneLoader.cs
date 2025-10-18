// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    // Load the only scene
    public void Load()
    {
        SceneManager.LoadScene("Sample Scene");
    }
}
