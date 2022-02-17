using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameracharacter : MonoBehaviour
{
    //The offset and the target.
    public static Vector3 defOffset = new Vector3(0f, 1.6f, -8f);
    public Vector3 viewOffset = defOffset;
    private Transform targetObj;
    //Adjusts the camera slightly to adjust for those three.
    enum currentAction { Default, Jump, Run, Die };

    // Start is called before the first frame update
    void Start()
    {
        //Find the object. Secure its transformation. Store in targetObj.
        targetObj = GameObject.Find("Character_Player").transform;
    }

    // LateUpdate is called once per frame, at the end. Unfortunately, Fixed and LastUpdate do not work for me. As of today, a day after this complaint was made, it all works.
    void LateUpdate()
    {
        //Transform the position to behind the target, and then rotate the camera to look at the object itself.
        transform.position = targetObj.TransformPoint(viewOffset);
        transform.LookAt(targetObj);
    }
}
