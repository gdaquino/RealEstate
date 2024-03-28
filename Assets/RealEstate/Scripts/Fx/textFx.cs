using UnityEngine;
using System.Collections;

public class textFx : MonoBehaviour {

	///*************************************************************************///
	/// This class will handle the 3d text object (NotificationText prefab) that shows the information when 
	/// purchasing or selling a property.
	///*************************************************************************///

	public AudioClip sfx;			//AudioClip
	public GameObject textChild;	//main 3d text object

	// Do not edit these variables
	public Vector3 startingPoint;
	public string publicText = "";
	public string publicPrice = "";
	private string textOutput = "";
	private Vector3 startingSize = new Vector3(3.5f, 0.001f, 1);
	private float lifetime = 4.0f;

	IEnumerator Start (){
		init();
		Destroy(gameObject, lifetime);
		
		StartCoroutine(increaseScale());	//increase the size of this object by time
		StartCoroutine(move());				//move it upward.
		
		yield return new WaitForSeconds(1);
		StartCoroutine(fadeout());			
	}

	//************************************************************************
	// Init
	//************************************************************************
	void init (){
		textOutput = publicText + publicPrice;				//set the text
		//set the starting position of this info box
		startingPoint = new Vector3(transform.position.x,
		                        	2,
		                            transform.position.z);
		textChild.GetComponent<TextMesh>().text = textOutput;	//Apply the text to the object
		//apply the Y value
		transform.position = new Vector3(transform.position.x,
		                                 startingPoint.y,
		                                 transform.position.z);
		transform.localScale = startingSize / 2;			//animate the object from half size to full size
	}

	//************************************************************************
	// Increase the scale of info box by time
	//************************************************************************
	IEnumerator increaseScale (){
		float t = 0.0f;
		while(t < 1.0f) {
			t += Time.deltaTime * 3.1f;
			transform.localScale = startingSize * t * 1.2f;
			yield return 0;
		}
	}

	//************************************************************************
	// Move the info box upward by time
	//************************************************************************
	IEnumerator move (){
		float t = 0.0f;
		while(t < 3.0f) {
			t += Time.deltaTime * 0.7f;
			transform.position = new Vector3(transform.position.x,
			                                 transform.position.y,
			                                 startingPoint.z + (t/0.8f));
			yield return 0;
		}
	}

	//************************************************************************
	// Fade the info box by modifying it's transparency
	//************************************************************************
	IEnumerator fadeout (){
		float t = 0.0f;
		while(t < 3.0f) {
			t += Time.deltaTime * 1.5f;
			GetComponent<Renderer>().material.color = new Color(GetComponent<Renderer>().material.color.r,
			                                    GetComponent<Renderer>().material.color.g,
			                                    GetComponent<Renderer>().material.color.b,
			                                    1 - (t/2));
			textChild.GetComponent<Renderer>().material.color = new Color(textChild.GetComponent<Renderer>().material.color.r,
			                                              textChild.GetComponent<Renderer>().material.color.g,
			                                              textChild.GetComponent<Renderer>().material.color.b,
						                                  1 - (t/2));
			yield return 0;
		}
	}

}