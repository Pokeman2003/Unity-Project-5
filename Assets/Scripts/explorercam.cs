using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class explorercam : MonoBehaviour
{
    //A generic freecam experience.
    public float Speed = 1f; //Public speed!
    public float RotationLR;
    public float RotationUD;
    public Vector3 resetPos;
    public Vector2 resetRot;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Exploration camera loaded! RLR, RUD, rP, rR!");
        RotationLR = transform.eulerAngles.y;
        RotationUD = transform.eulerAngles.x;
        resetPos = transform.position;
        resetRot = new Vector2(RotationUD, RotationLR); //Crappy fix for a really annoying problem.
        Debug.Log(RotationLR);
        Debug.Log(RotationUD);
        Debug.Log(resetPos);
        Debug.Log(resetRot);
    }

    // Update is called once per frame
    void Update()
    {
        //Update the rotation
        transform.rotation = Quaternion.identity;
        transform.Rotate(RotationUD, RotationLR, 0f, Space.Self);

        //Quit the game.
        if (Input.GetKey(KeyCode.Escape))
        {
            Application.Quit();
        }
        
        // Control scheme.
        // Forward/back.
        if (Input.GetKey(KeyCode.W))
        {
            transform.position += (Vector3.forward * Time.deltaTime * 8f * Speed) * Mathf.Cos(RotationLR * Time.deltaTime * 8f * Speed);
            transform.position += (Vector3.left * Time.deltaTime * 8f * Speed) * Mathf.Sin(-RotationLR * Time.deltaTime * 8f * Speed);
            transform.position += (Vector3.up * Time.deltaTime * 8f * Speed) * (-RotationUD * Time.deltaTime * 8f * Speed);
        }
        if (Input.GetKey(KeyCode.S))
        {
            transform.position += (Vector3.back * Time.deltaTime * 8f * Speed) * Mathf.Cos(-RotationLR * Time.deltaTime * 4f * Speed);
            transform.position += (Vector3.right* Time.deltaTime * 8f * Speed) * Mathf.Sin(RotationLR * Time.deltaTime * 4f * Speed);
            transform.position += (Vector3.up * Time.deltaTime * 8f * Speed) * (RotationUD * Time.deltaTime * 4f * Speed);
        }
        //Tank controls are cool.
        if (Input.GetKey(KeyCode.A))
        {
            RotationLR = RotationLR + (-45f * Time.deltaTime * Speed);
        }
        if (Input.GetKey(KeyCode.D))
        {
            RotationLR = RotationLR + (45f * Time.deltaTime * Speed);
        }
        //Angle controls.
        if (Input.GetKey(KeyCode.UpArrow))
        {
            RotationUD = RotationUD + (-45f * Time.deltaTime * Speed);
        }
        if (Input.GetKey(KeyCode.DownArrow))
        {
            RotationUD = RotationUD + (45f * Time.deltaTime * Speed);
        }
        //Speed controls.
        if (Input.GetKey(KeyCode.LeftArrow))
        {
            Speed = Speed - Time.deltaTime;
        }
        if (Input.GetKey(KeyCode.RightArrow))
        {
            Speed = Speed + Time.deltaTime;
        }

        //Resets. Rotation, speed, position.
        if (Input.GetKey(KeyCode.KeypadPlus))
        {
            RotationLR = resetRot.y;
            RotationUD = resetRot.x;
        }
        if (Input.GetKey(KeyCode.KeypadMinus))
        {
            Speed = 1f;
        }
        if (Input.GetKey(KeyCode.KeypadEnter))
        {
            transform.position = resetPos;
        }
        //"True" resets. Resets to 0. Rotation, and position.
        if (Input.GetKey(KeyCode.Keypad7))
        {
            RotationLR = 0;
            RotationUD = 0;
        }
        if (Input.GetKey(KeyCode.Keypad4))
        {
            transform.position = resetPos;
        }

        //Reset the rotation if a full 360 is complete.
        if (Mathf.Abs(RotationLR) > 360f)
        {
            RotationLR = 0f;
        }
        if (Mathf.Abs(RotationUD) > 360f)
        {
            RotationUD = 0f;
        }
    }
}
