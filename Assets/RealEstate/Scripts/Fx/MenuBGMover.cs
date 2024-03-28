using UnityEngine;
using System.Collections;

public class MenuBGMover : MonoBehaviour {

///*************************************************************************///
/// This class will simply moves the background object from side to side.
///*************************************************************************///

private bool canMove;
private float speed;

void Awake (){
	canMove = true;
	speed = 0.25f;
}

void Update (){
	if(canMove)
		StartCoroutine(AnimateMenuBG());
}

IEnumerator AnimateMenuBG (){
	canMove = false;
	float t = 0.0f; 
	while (t <= 1.0f) {
		t += Time.deltaTime * speed;
		transform.position = new Vector3(Mathf.SmoothStep(2, -2, t),
		                                 transform.position.y,
		                                 transform.position.z);
		yield return 0;
	}
	
	float r = 0.0f; 
	if(transform.position.x <= -2) {
		while (r <= 1.0f) {
			r += Time.deltaTime * speed;
			transform.position = new Vector3(Mathf.SmoothStep(-2, 2, r),
			                                 transform.position.y,
			                                 transform.position.z);
			yield return 0;
		}
	}
	
	if(r >= 1)
		canMove = true;
}

}