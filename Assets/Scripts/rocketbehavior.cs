using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rocketbehavior : MonoBehaviour
{
    // Lots of cool stuff here my friend!
    //This is a serious deviation from the book...
    public float projectileMaxSpeed = 64f; //Our projectile max speed.
    public float projectileVelocity = 1.01f; //The exponential increase of this from 1/15th of the max speed.
    public float projectileSpeed;
    public float finalTime = 96f; // The delay before deletion, no matter what.
    private int speedCount = 0;
    public int primeTime = 100; //At what point should the speedcount prime the explosion?
    Rigidbody rB = new Rigidbody(); //Init the rigid body.
    public GameObject explosionObject; // Obviously, the explosion object.

    void Start()
    {
        name = "Rocket"; //Renames to a generic rocket, so the enemy can't distinguish them. They're blind.
        projectileSpeed = projectileMaxSpeed / 30f;
        rB = GetComponent<Rigidbody>(); // Get the rigidbody of our new projectile.
        rB.velocity = transform.forward * (projectileSpeed); //Add the initial velocity.
        Destroy(gameObject, finalTime);

    }

    void OnCollisionEnter(Collision item)
    {
        if (primeTime < speedCount)
        {
            GameObject newExplosion = Instantiate(explosionObject, transform.position, transform.rotation) as GameObject; // Create my explosion.
            Destroy(gameObject); //And destroy the rocket, so it doesn't interfere with the explosion.
        } else
        {
            int mistake = primeTime - speedCount;
            Debug.Log("Rocket hit " + item.gameObject.name + " but prime time was " + mistake + " cycles away from explosions!"); // There's a certain amount of cycles before an explosion can occur.
        }
    }

    // FixedUpdate is called once per physics update.
    void FixedUpdate()
    {
        if (projectileMaxSpeed > projectileSpeed)
        {
            //Debug.Log(speedCount + "." + projectileSpeed);
            projectileSpeed = projectileSpeed + (Mathf.Pow(projectileVelocity, speedCount) * Time.fixedDeltaTime);
            speedCount = speedCount + 1;
            rB.velocity = transform.forward * (projectileSpeed);
        }
    }
}
