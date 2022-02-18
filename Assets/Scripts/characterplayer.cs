using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class characterplayer : MonoBehaviour
{
    //Speeds.
    public float movementSpeed = 16f; //A little call back, ROBLOXians move at 16 studs a second.
    public float rotationSpeed = 96f; //For now, a slow, but manageable speed. I don't want a cap, I want mouse control in the future. Very important given the verticality of my game.
    public float jumpSpeed = 32f; //How much velocity to add to our jump height.
    public float jetpackSpeed = 1.7f; //How fast the jetpack actually is.
    private float speedLimiter = .5f; //A speed limiter applied to everything EXCEPT the jetpack.

    //States and handling.
    enum currentAction { Default, Jump, Run, Die };
    public gman Manager;
    //Ground handling
    public float groundDistance = 0.1f; // ... I don't know what this is.
    public LayerMask groundLayer; // Our ground layer.
    //Projectile
    public GameObject playerProjectile; //The projectile. Has to be installed in the Unity editor, much to my chagrin.
    //Jetpack.
    private bool activeJetpack = false;
    //Jumpjet
    private bool airControl = false;
    private float airMovementX;
    //private float airMovementY;
    private float softAltCap = 32f;
    private float hardAltCap = 128f;

    //Horizontal and Vertical inputs. This is a new way to handle that, and explorercam.cs could probably use it, but explorercam.cs is just a generic placeholder.
    private float verticalIn;
    private float horizontalIn;

    //Rigidbody and colliders.
    private Rigidbody rB;
    private Collider colliding;


    // Start is called before the first frame update
    void Start()
    {
        rB = GetComponent<Rigidbody>(); //Grabs the Rigidbody component and puts it into rB.
        colliding = GetComponent<CapsuleCollider>(); //Likewise, grabs the collider to put into col. Renamed to colliding because of Intellisense.
        groundLayer = LayerMask.GetMask("Ground"); //And now I don't have to care about what's going into this. groundLayer is GROUND.
        Manager = GameObject.Find("GHands").GetComponent<gman>(); //Assign Gman's hands to handle everything.
    }

    // Update is called once per frame
    void Update()
    {
        //Intellisense really screwed me over. I'm really considering refactoring verticalInput and horizontalInput to drop INPUT because it kept trying to autocomplete to that instead of my intended Input.GetAxis.
        verticalIn = Input.GetAxis("Vertical") * movementSpeed * speedLimiter; //* Time.deltaTime;
        horizontalIn = Input.GetAxis("Horizontal") * rotationSpeed * speedLimiter; //* Time.deltaTime;

        //And here we have the jump command.
        if (checkGround() && Input.GetKeyDown(KeyCode.Space))
        {
            rB.AddForce(Vector3.up * (jumpSpeed * speedLimiter), ForceMode.Impulse);
        }

        if (Input.GetMouseButtonDown(0) && Manager.fireRocket == true) //If M1 is pressed, we fire!
        {
            Vector3 offset = new Vector3(transform.right.x * 0.65f, 0.7f, transform.right.z * 0.65f);
            GameObject newProjectile = Instantiate(playerProjectile, transform.position + offset, transform.rotation) as GameObject; //Creates the stinkin' projectile. In the future, it might be best to leave the rest of it as a script in the prefab.
        }

        if (Input.GetKeyDown(KeyCode.Z) && activeJetpack == false) { activeJetpack = true; } else if (Input.GetKeyDown(KeyCode.Z) && activeJetpack == true) { activeJetpack = false; }

        /*//No longer necessary, in lieu of the new movement system.
        //Being the "smart" guy I am, I get to drop Time.deltaTime from this calculation by doing it sooner.
        transform.Translate(Vector3.forward * verticalInput);
        transform.Rotate(Vector3.up * horizontalInput);*/
    }
    void FixedUpdate() // Run at every physics update. AND SUDDENLY IT STOPS WORKING GOD FUCKING DAMN IT. THANK YOU UNITY.
    {
        if (checkGround() == false && airControl == false) //Disables air control if you're in the air and lack the jumpjet.
        {
            verticalIn = airMovementX;
            horizontalIn = 0;
        }
        else
        {
            //airMovementY = horizontalIn;
            airMovementX = verticalIn;
        }
        //Rotational vector.
        Vector3 rotVec = Vector3.up * horizontalIn;

        //Quaternions, my biggest enemy. Applies a angle to the character(?).
        Quaternion angleRot = Quaternion.Euler(rotVec * Time.fixedDeltaTime);

        //Moves and rotates the character based on key inputs.
        rB.MovePosition(transform.position + transform.forward * verticalIn * Time.fixedDeltaTime);
        rB.MoveRotation(rB.rotation * angleRot);

        //Handle jetpacking!
        if (activeJetpack == true && Manager.checkJetpack == true)
        {
            Manager.checkJetpack = true;
            airControl = true;
            rB.AddForce(Vector3.up * jetpackSpeed * speedLimiter * heightCheck(), ForceMode.Impulse);
        }
        else
        {
            activeJetpack = false; Manager.checkJetpack = false; airControl = false;
        }
    }

    private bool checkGround() // I have no idea what this function is doing.
    {
        //Define the collision boundaries? I guess???
        Vector3 itemBottom = new Vector3(colliding.bounds.center.x, colliding.bounds.min.y, colliding.bounds.center.z);

        //Honestly, can't even begin to break this down. Checks the bottom to the ground layer? Something like that.
        bool state = Physics.CheckCapsule(colliding.bounds.center, itemBottom, groundDistance, groundLayer, QueryTriggerInteraction.Ignore);

        //Whatever it is, returns a bool... Which, at the current moment, NEVER returns true.
        return state;
    }

    private float heightCheck() // Just checks the current height and returns how much force should be maintained.
    {
        /*float now = 1f;
        if (transform.position.y >= softAltCap && transform.position.y <= hardAltCap) {
            rB.constraints = RigidbodyConstraints.FreezePositionY;
            //now = now - ((transform.position.y - softAltCap) * (1 / (hardAltCap - softAltCap)) / 2);
            //Manager.miscDBG1 = now;
        } else if (transform.position.y > hardAltCap)
        {
            now = 0f;
        }
        return now;*/
        return 1f;
    }
}