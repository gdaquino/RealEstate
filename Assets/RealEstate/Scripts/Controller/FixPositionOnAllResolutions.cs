using UnityEngine;
using System.Collections;

public class FixPositionOnAllResolutions : MonoBehaviour {

	//***************************************************************************//
	// This class gets the user's screen size and shift 3d gui elements in/out to match 
	// every popular resolutions.
	// applying this class to any 3d gameObject will make them to stay inside view, 
	// in all resolutions.
	//***************************************************************************//

	private float positionFix = 0.0f;		//adjustment to gui elements
	private float initialPosition = 0.0f;	//starting position of this element

	void Start (){
		initialPosition = transform.position.x;
		//dynamic fixing of 3d GUI element positions
		//default screen width is considered 800px and 
		//all other resolutions should be constructed based on this value
		float screenWidth = Screen.width;
		float screenHeight = Screen.height;
		float displayRatio = screenWidth / screenHeight;
		
		//smaller or same size of Nexus S (800-480-1.66f)
		if(displayRatio <= 1.67f && displayRatio > 1.6f) {
			positionFix = 0.0f;
		} else if(displayRatio > 1.67f && displayRatio <= 1.78f) {
			//nexus 7 (1280-720-1.77f)
			positionFix = (displayRatio - 1.67f) * 3.4f;
			if(initialPosition >= 0)
				positionFix *= 1;
			else
				positionFix *= -1;
		} else if(displayRatio >= 1.5f && displayRatio <= 1.6f) {
			//small & Mini class phones (480-320-1.5f)
			positionFix = (1.67f - displayRatio) * 4.9f;
			if(initialPosition >= 0)
				positionFix *= -1;
			else
				positionFix *= 1;
		} else if(displayRatio >= 1.3f && displayRatio < 1.5f) {
			//iOS - iPAD mini
			positionFix = (1.67f - displayRatio) * 5.2f;
			if(initialPosition >= 0)
				positionFix *= -1;
			else
				positionFix *= 1;
		}

		//Debug!
		//print("PositionFix for " + gameObject.name + " is: " + positionFix);
		//apply new position to element
		transform.position = new Vector3(initialPosition + positionFix,
		                                 transform.position.y,
		                                 transform.position.z);
	}

}