using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pickupbehavior : MonoBehaviour
{
    public GameObject GHands;
    public gman Manager;
    // Start is called before the first frame update
    void Start()
    {
        Manager = GameObject.Find("GHands").GetComponent<gman>();
    }

    // Update is called once per frame
    void Update()
    {
    }
    // Ran once collision occurs.
    void OnCollisionEnter(Collision collision)
    {
        Debug.Log("Armor armed!");
        Manager.items += 1;
        Destroy(transform.parent.gameObject); //Destroys the parent.
    }
}
