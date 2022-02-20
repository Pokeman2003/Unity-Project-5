using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bulletbehavior : MonoBehaviour
{
    // Lots of cool stuff here my friend!
    //This is closer to the book.
    public float projectileSpeed = 4f; //Our projectile speed.
    public float finalTime = 1f; // The delay before deletion, no matter what.
    Rigidbody rB = new Rigidbody(); //Init the rigid body.

    void Start()
    {
        name = "Bullet"; //Renames to a generic rocket, so the enemy can't distinguish them. They're blind.
        rB = GetComponent<Rigidbody>(); // Get the rigidbody of our new projectile.
        transform.Rotate(90f, transform.rotation.y, 0f, Space.Self);
        rB.velocity = transform.up * (projectileSpeed); //Add the initial velocity.
    }

    void OnCollisionEnter(Collision item)
    {
        Debug.Log("Bullet hit " + item.gameObject.name + ".");
        switch (item.gameObject.name)
        {
            //Destroy with ballistic collisions.
            case "Bullet":
                Destroy(gameObject);
                break;
            case "Explosion":
                Destroy(gameObject);
                break;
            case "Rocket":
                Destroy(gameObject);
                break;

            default: //Richochet upon hitting something not useful.
                Vector2 richoangle = new Vector2(Random.value *finalTime- 0.7f, Random.value * -finalTime - 0.7f);
                Quaternion richochet = new Quaternion();
                richochet = Quaternion.Inverse(transform.rotation);
                richochet.x = richochet.x * richoangle.x;
                richochet.z = richochet.z * richoangle.y;
                transform.rotation = richochet;
                rB.velocity = transform.up * (projectileSpeed);
                break;
        }
    }

    // FixedUpdate is called once per physics update.
    void Update()
    {
        finalTime = finalTime - Time.deltaTime;
        if (finalTime/4 > 0) { rB.velocity = transform.up * (projectileSpeed) * finalTime/4; } else if (finalTime < 0) { Destroy(gameObject); }
    }
}
