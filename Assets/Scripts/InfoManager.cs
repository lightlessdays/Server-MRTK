using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfoManager : MonoBehaviour
{

    [SerializeField] AudioSource audioUPS;
    [SerializeField] AudioSource audioSwitch;
    [SerializeField] AudioSource audioFirewall;
    [SerializeField] AudioSource audioNAS;
    [SerializeField] AudioSource audioServer;

    public void UPSTouch()
    {
        audioUPS.Play(0);
    }

    public void SwitchTouch()
    {
        audioSwitch.Play(0);
    }

    public void FirewallTouch() {
        audioFirewall.Play(0);
    }

    public void ServerTouch()
    {
        audioServer.Play(0);
    }
}
