using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//Rise and shine, Mr. Freeman...
//Rise, and smell the ashes.
/*
Some stuff about the game:
Enemy types:
Recon - Jumpjet - Limited to light machine gun. Warns everyone. Works in tandem with rocketeers. Jumps across small gaps for a surprise attack. Can't fly. Fire in rapid bursts.
Rocketeer - Increased Fuel - Flies quite often. Immediately takes to the air to try to aerially bombard you if recon spots you. Doesn't check for fuel.
Blockadesman - Armor - Heavy duty, can even take a rocket to the face. Rather slow though.
Bombadier - Firepower Upgrade - Fires arcing rockets. Attempts to bombard from their position based on Recon intel. Fires in trios.
Rocketman - None. - Only rockets. Uses standard AI, with no special gimmicks.
Light - None. - Only machine gun. Uses standard AI, with no special gimmicks.
Medium - None. - Both rockets and machine gun. Uses standard AI, with no special gimmicks.

Powerup descriptions:
Jumpjet - Air control, increased speed in air, spends once and must recharge.
Increased Fuel - Triples your fuel and doubles the recharge time.
Armor - Doubles your health. Lets you sustain all but direct hits.
Firepower Upgrade - Lets you fire 4 rockets in rapid succession, before needing to do a lengthy reload.

Refills by current defaults:
Jumpjet:3.75 seconds.
Jetpack:40 seconds 
Jetpack(INCREASED):60 seconds.
Firepower:12 seconds.
 */
public class gman : MonoBehaviour
{
    //Internals
    private int itemCount = 0; //Generic value.
    private int playerHP = 100; //Generic value.
    private float rRecharge = 0f; //How much deltatime has it been since Rocket usage.
    private float jRecharge = 0f; //How much deltatime has it been since Jumpjet usage.
    private float fRecharge = 0f; //How much deltatime has it been since jetpack(Flying) usage.
    private float mRecharge = 0f; //How much deltatime has it been since Machinegun usage.
    //Jetpack handling.
    private bool jetPackActive = false; //Whether or not the jetpack is active at this current moment.
    private float playerFuel = 20f; //Done in seconds.
    private float fuelRefill = .5f; //How much per second?
    private float fuelMinimum = 3f; //How many seconds of fuel minimum to take off.
    private float fuelMax = 20f; //What's your maximum fuel?
    private int fBeginRecharge = 480; //How long in milliseconds before you begin regaining fuel?
    //Jumpjet handling
    private bool jumpJet = false; //Whether or not you own the JumpJet.
    private float jFuel = 3f; //3 seconds of jumpjet fuel.
    private float jFuelRefill = .8f; //How fast the refill should be per second.
    private float jFuelMinimum = 0f; //How much jFuel do you need?
    private float jFuelMax = 3f; //What's the maximum?
    private int jBeginRecharge = 1; //How many milliseconds before you regain fuel? Has to be 1, otherwise the code will begin to just refuel in midflight. I think.
    //Rocket handling.
    private bool rReady = false;
    private int rFireSpeed = 150; //In milliseconds.
    private int rReload = 1200; // In milliseconds, how long until reload?
    private int rLoaded = 1; //How many rockets are loaded in currently?
    private int rMax = 4; //How many rockets maximum can you hold?
    private int rBeginRecharge = 800; //800 milliseconds until you begin loading new rockets. Ignored if you don't have any left.
    private float rLastReload = 0f; //What was rRecharge the last time it reloaded?
    //Machine gun handling.
    private int mFireSpeed = 13; //How many milliseconds before firing another shot.
    private int mReload = 500; //How many milliseconds for a reload?
    private int mMax = 30; //How many rounds in the magazine max?
    private int mLoaded = 30; //How many rounds in the magazine now?
    //Some strings
    private string HealthLabel = "HEALTH";


    //Externals
    public int items
    {
        get { return itemCount; }
        set
        { 
           itemCount = value;
            Debug.LogFormat("Item count: {0}", itemCount);
        } 
    }

    public int health
    {
        get { return playerHP; }
        set
        {
            playerHP = value;
            Debug.LogFormat("HP is at: {0}", playerHP);
        }
    }

    public bool checkJetpack
    {
        get { 
            if ((jetPackActive == true && playerFuel < 0) || (jetPackActive == false && playerFuel < fuelMinimum)) { jetPackActive = false; return false; }
            return true;
            }
        set {
            jetPackActive = value;
        }
    }

    public bool fireRocket
    {
        get
        {
            if (rLoaded > 0) { rLoaded = rLoaded - 1; rRecharge = 0; return true; } else { return false; }
        }
    }

    void Start()
    {
        
    }

    // Update is called once per frame
    /*void Update()
    {
        
    }*/
    void Update()
    {
        //Debug.Log("Deltatime currently is:" + Time.deltaTime * 100);
        rRecharge = rRecharge + Time.deltaTime;
        fRecharge = fRecharge + Time.deltaTime;
        jRecharge = jRecharge + Time.deltaTime;
        mRecharge = mRecharge + Time.deltaTime;
        //Debug.Log((float)fBeginRecharge / 1000 + " < " + fRecharge);

        if (((float)fBeginRecharge / 1000) < fRecharge && playerFuel < fuelMax) { playerFuel = playerFuel + Time.deltaTime; } else if (fBeginRecharge > fRecharge && playerFuel > fuelMax) { playerFuel = fuelMax; }
        if (((float)rBeginRecharge / 1000) < rRecharge && rLoaded < rMax) { rLoaded = rMax; rRecharge = 0; Debug.Log("TEST"); } else if (rBeginRecharge > rRecharge && rLoaded > rMax) { rLoaded = rMax; }

        if (jetPackActive == true)
        {
            fRecharge = 0f;
            if (checkJetpack == true) { playerFuel = playerFuel - Time.deltaTime; } else { jetPackActive = false; }
        }
    }

    void OnGUI()
    {
        GUI.Box(new Rect(20, 20, 150, 25), "HEALTH:" + playerHP);
        GUI.Box(new Rect(20, 50, 150, 25), "FUEL:" + playerFuel);
        //GUI.Box(new Rect(20, 90, 150, 25), "JUMPJET:" + jFuel);
        //GUI.Box(new Rect(20, 120, 150, 25), "MACHINE GUN:" + mLoaded);
        GUI.Box(new Rect(20, 90, 150, 25), "ROCKETS:" + rLoaded);
    }
}
