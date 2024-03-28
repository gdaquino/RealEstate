using UnityEngine;
using System.Collections;
using System;
using UnityEngine.SceneManagement;

public class CareerMapManager : MonoBehaviour {

	///*************************************************************************///
	/// CareerMapManager will load the game scene with parameters set by you
	/// for the selected level. It will saves those values inside playerPrefs and
	/// tehy will be fetched and applied in the game scene.
	///*************************************************************************///

	public static int userLevelAdvance;
	private int totalLevels;
	private GameObject[] levels;

	public AudioClip menuTap;
	private bool canTap;
	private float buttonAnimationSpeed = 9;

	void Awake (){
		Time.timeScale = 1.0f;
		canTap = true; //player can tap on buttons
		
		if(PlayerPrefs.HasKey("userLevelAdvance"))
			userLevelAdvance = PlayerPrefs.GetInt("userLevelAdvance");
		else
			userLevelAdvance = 0; //default. only level 1 in open.
			
			
		//get total levels
		levels = GameObject.FindGameObjectsWithTag("levelSelectionPin");
		totalLevels = levels.Length;
		
		//Lock all levels
		for(int i = 0; i < totalLevels; i++) {
			levels[i].GetComponent<ItemMover>().enabled = false;
			levels[i].GetComponent<BoxCollider>().enabled = false;
			print(levels[i].name);
		}
		
		//unlock levels based on user level
		for(int j = 0; j < totalLevels; j++) {
			if(userLevelAdvance >= levels[j].GetComponent<CareerLevelSetup>().levelID - 1) {
				levels[j].GetComponent<ItemMover>().enabled = true;
				levels[j].GetComponent<BoxCollider>().enabled = true;
			}
		}
	}

	void Start (){
		//prevent screenDim in handheld devices
		Screen.sleepTimeout = SleepTimeout.NeverSleep;
	}

	void Update (){
		if(canTap)	
			StartCoroutine(tapManager());
	}
	///***********************************************************************
	/// Process user inputs
	///***********************************************************************
	private RaycastHit hitInfo;
	private Ray ray;
	IEnumerator tapManager (){

		//Mouse of touch?
		if(	Input.touches.Length > 0 && Input.touches[0].phase == TouchPhase.Ended)  
			ray = Camera.main.ScreenPointToRay(Input.touches[0].position);
		else if(Input.GetMouseButtonUp(0))
			ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		else
			yield break;
			
		if (Physics.Raycast(ray, out hitInfo)) {
			GameObject objectHit = hitInfo.transform.gameObject;
			print(objectHit.name);
			if(objectHit.tag == "levelSelectionPin") {
				canTap = false;
				playSfx(menuTap);
				StartCoroutine(animateButton(objectHit));
				
				//save the game mode
				PlayerPrefs.SetString("gameMode", "CAREER");
				PlayerPrefs.SetInt("careerLevelID", objectHit.GetComponent<CareerLevelSetup>().levelID);
				
				//save mission variables
				PlayerPrefs.SetInt("careerGoalBallance", objectHit.GetComponent<CareerLevelSetup>().careerGoalBallance);
				PlayerPrefs.SetInt("careerAvailableTime", objectHit.GetComponent<CareerLevelSetup>().careerAvailableTime);
				PlayerPrefs.SetInt("careerStartingBallance", objectHit.GetComponent<CareerLevelSetup>().careerStartingBallance);
				
				//save available tiers for this level
				//we have 4 tiers, so...
				for(int i = 0; i < 4; i++) {
					PlayerPrefs.SetInt(	"careerTierAvailable_" + i.ToString(), 
										Convert.ToInt32(objectHit.GetComponent<CareerLevelSetup>().availableTiers[i]));
				}
				
				yield return new WaitForSeconds(1.0f);
				SceneManager.LoadScene("Game-c#");
			}	
		}
	}

	///***********************************************************************
	/// Animate button by modifying it's scale
	///***********************************************************************
	IEnumerator animateButton ( GameObject _btn  ){
		Vector3 startingScale = _btn.transform.localScale;
		Vector3 destinationScale = startingScale * 1.1f;
		//yield return new WaitForSeconds(0.1f);
		float t = 0.0f; 
		while (t <= 1.0f) {
			t += Time.deltaTime * buttonAnimationSpeed;
			_btn.transform.localScale = new Vector3(Mathf.SmoothStep(startingScale.x, destinationScale.x, t),
			                                        _btn.transform.localScale.y,
			                                        Mathf.SmoothStep(startingScale.z, destinationScale.z, t));
			yield return 0;
		}
		
		float r = 0.0f; 
		if(_btn.transform.localScale.x >= destinationScale.x) {
			while (r <= 1.0f) {
				r += Time.deltaTime * buttonAnimationSpeed;
				_btn.transform.localScale = new Vector3(Mathf.SmoothStep(destinationScale.x, startingScale.x, r),
				                                        _btn.transform.localScale.y,
				                                        Mathf.SmoothStep(destinationScale.z, startingScale.z, r));
				yield return 0;
			}
		}
		
		if(r >= 1)
			canTap = true;
	}

	///***********************************************************************
	/// play audio clip
	///***********************************************************************
	void playSfx ( AudioClip _sfx  ){
		GetComponent<AudioSource>().clip = _sfx;
		if(!GetComponent<AudioSource>().isPlaying)
			GetComponent<AudioSource>().Play();
	}

}