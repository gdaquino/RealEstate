using UnityEngine;
using System.Collections;

public class ItemMover : MonoBehaviour {
		
	///*************************************************************************///
	/// This class animates the level indicators in the Career scene by moving them
	/// up and down.
	///*************************************************************************///

	private float speed = 1;		// up/down movement speed
	private float offset = 0.35f;	// scale/movement amount
	private Vector3 startingPos;	
	private float newTarget;
	private bool  canCycle;
	private bool  canScale;

	private Vector3 initialScale;

	void Awake (){
		canScale = true;
		canCycle = true;
		initialScale = transform.localScale;
		startingPos = transform.position;
		newTarget = startingPos.z + offset;
	}

	void Update (){
		if(canCycle) {
			StartCoroutine(move());
			canCycle = false;
		}
		
		if(canScale) {
			canScale = false;
			StartCoroutine(scaleEffect());
		}
	}

	//Move up
	IEnumerator move (){
		float t = 0.0f;
		while(t < 1.0f) {
			t += Time.deltaTime * speed;
			transform.position = new Vector3(transform.position.x,
			                                 transform.position.y,
			                                 Mathf.SmoothStep(startingPos.z, newTarget, t));
			yield return 0;
		}
		if(transform.position.z <= newTarget)
			StartCoroutine(back());
	}

	//Move down
	IEnumerator back (){
		float t = 0.0f;
		while(t < 1.0f) {
			t += Time.deltaTime * speed;
			transform.position = new Vector3(transform.position.x,
			                                 transform.position.y,
			                                 Mathf.SmoothStep(newTarget, startingPos.z, t));
			yield return 0;
		}
		if(transform.position.z <= startingPos.z)
			canCycle = true;
	}

	//Scale animation
	IEnumerator scaleEffect (){
		float t = 0.0f; 
		while (t <= 1.0f) {
			t += Time.deltaTime * 3;
			transform.localScale = new Vector3(Mathf.SmoothStep(initialScale.x, initialScale.x + offset, t),
			                                   transform.localScale.y,
			                                   transform.localScale.z);
			yield return 0;
		}
		
		float r = 0.0f; 
		if(transform.localScale.x >= initialScale.x + offset -0.1f) {
			while (r <= 1.0f) {
				r += Time.deltaTime * 3;
				transform.localScale = new Vector3(Mathf.SmoothStep(initialScale.x + offset, initialScale.x, r),
				                                   transform.localScale.y,
				                                   transform.localScale.z);
				yield return 0;
			}
		}	
		
		if(transform.localScale.x <= initialScale.x) {
			yield return new WaitForSeconds(0.4f);
			canScale = true;
		}
	}

}