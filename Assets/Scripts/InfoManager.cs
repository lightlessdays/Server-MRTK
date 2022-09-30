using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfoManager : MonoBehaviour
{

    [SerializeField] AudioSource audioToPlay;

    public void PlayAudio()
    {
        audioToPlay.Play(0);
    }
}
