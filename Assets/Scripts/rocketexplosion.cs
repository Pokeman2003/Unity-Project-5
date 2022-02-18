using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rocketexplosion : MonoBehaviour
{
    public float finalSize = 5.5f; //The final spheroid size.
    private float size; // Current spheroid size.
    public float increaseSpeed = 20f; //The constant rate which the size is increased.
    private float time = 0f; //Time counter.
    public int timeFinal = 300; //The amount of time in milliseconds.

    // Start is called before the first frame update
    void Start()
    {
        name = "Explosion"; //This oughta wake 'em up.
        Debug.Log("Begin explosion.");
        size = transform.localScale.x;
        //Debug.Log("SIZE:" + size + ". POSITION:" + transform.position);
        timeFinal = timeFinal / 1000;
    }

    // Update is called once per physics update.
    void FixedUpdate()
    {
        if (finalSize > size)
        {
            //Debug.Log("Unfinished.");
            size = size + (increaseSpeed * Time.fixedDeltaTime);
            //Debug.Log(size);
            transform.localScale= new Vector3(size, size, size);
        } else
        {
            //Debug.Log("Finished.");
            time = time + Time.fixedDeltaTime;
            transform.localScale = new Vector3(finalSize, finalSize, finalSize);
        }
        if (time > timeFinal) {
            //Debug.Log("KABOOOOM!");
            Destroy(gameObject); //The explosion is complete. Nothing more must be done.
        }
    }
}
