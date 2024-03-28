using UnityEngine;
using System.Collections;

public class PathManager : MonoBehaviour {

///*************************************************************************///
/// This class will enable city cars to follow indicated paths.
///*************************************************************************///

public Material[] carMaterial;			//available materials (Texture) for 4 directions
private float waypointRadius  = 0.2f;	//Distance to waypoints as a reach threshold.
private bool  loop = true;				//Can follow the paths infinite times?
public float speed = 1.0f;						//Path following speed

private Vector3 moveDirection;
private int targetwaypoint;
private Transform xform;
public Transform motherHolder; 			//A parent gameObject which holds all the child waypoints inside (as position dummies)
private Transform[] waypoints; 			//A new array which will be build based on motherHolder's childs
private int index = 0;
private Transform child;

//*********************************************************************
// Simple Init
//*********************************************************************	
void Awake (){

	//put all childrens in motherHolder into the waypoints array
	waypoints = new Transform[motherHolder.childCount];       
    foreach(Transform child in motherHolder) 
    	waypoints[index++] = child as Transform;
}

//*********************************************************************
// Check if there is enough waypoints for this object to build a path to follow?
//*********************************************************************	
void Start (){
    xform = transform;
    if(waypoints.Length <= 0) {
        Debug.Log("No waypoints on " + name);
        enabled = false;
    }
    targetwaypoint = 0;
}

//*********************************************************************
// Calculate a new heading for destination
//*********************************************************************	
void Update (){
		   
    moveDirection = waypoints[targetwaypoint].position - xform.position;						
    moveDirection = moveDirection.normalized * Time.deltaTime * speed;
    xform.position += moveDirection;
    if(Vector3.Distance(xform.position, waypoints[targetwaypoint].position) <= waypointRadius) {
        targetwaypoint++;
        if(targetwaypoint >= waypoints.Length) {
            targetwaypoint = 0;
            if(!loop)
                enabled = false;
        }
    }
	
	//apply correct texture to the car
	if(	waypoints[targetwaypoint].position.x > xform.position.x && 
		waypoints[targetwaypoint].position.z > xform.position.z ) {
		GetComponent<Renderer>().material = carMaterial[3];
	} else if(	waypoints[targetwaypoint].position.x > xform.position.x && 
		waypoints[targetwaypoint].position.z < xform.position.z ) {
		GetComponent<Renderer>().material = carMaterial[1];
	} else if(	waypoints[targetwaypoint].position.x < xform.position.x && 
		waypoints[targetwaypoint].position.z < xform.position.z ) {
		GetComponent<Renderer>().material = carMaterial[0];
	} else{
		GetComponent<Renderer>().material = carMaterial[2];
	}
	 
	//resolve a rational depth for the car
	transform.position = new Vector3(transform.position.x,
	                                 0.12f + (transform.position.z / 50),
	                                 transform.position.z);
}


}