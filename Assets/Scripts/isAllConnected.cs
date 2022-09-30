using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class isAllConnected : MonoBehaviour
{
    public List<GameObject> gameObjects;
    public List<Vector3> positions;
    public bool isServerOn = true;
    [SerializeField] GameObject screen;

    private void Awake()
    {
        foreach(GameObject i in gameObjects)
        {
            positions.Add(i.transform.position);
        }
    }

    private void Update()
    {
        for(int i = 0; i< gameObjects.Count; i++)
        {
            if (!(gameObjects[i].transform.position == positions[i]))
            {
                isServerOn = false;
                screen.SetActive(false);
            }
        }
    }
}
