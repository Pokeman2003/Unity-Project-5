using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pickupbehavior : MonoBehaviour
{
    public GameObject GHands;
    public gman Manager;
    public byte itemType = 0;
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
        switch (collision.gameObject.name)
        {
            case "Character_Player":
                Manager.giveItem(itemType);
                Destroy(transform.parent.gameObject); //Destroys the parent.
                break;
            default:
                break;
        }
    }
}
