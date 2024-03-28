using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
//using admob;

public class PauseManager : MonoBehaviour {

	//***************************************************************************//
	// This class manages pause and unpause states.
	//***************************************************************************//

	public static bool soundEnabled;
	public static bool isPaused;
	private float savedTimeScale;
	public GameObject pausePlane;

	private GameObject AdManagerObject;

	enum Page {
		PLAY, PAUSE
	}
	private Page currentPage = Page.PLAY;

	void Awake (){		
		soundEnabled = true;
		isPaused = false;
		
		Time.timeScale = 1.0f;

		//AdManagerObject = GameObject.FindGameObjectWithTag("AdManager");
		
		if(pausePlane)
	    	pausePlane.SetActive(false); 
	}

	void Update (){
		//touch control
		touchManager();
		
		//optional pause
		if(!globalGameController.gameIsFinished) {
			if(Input.GetKeyDown(KeyCode.P) || Input.GetKeyUp(KeyCode.Escape)) {
				//PAUSE THE GAME
				switch (currentPage) {
		            case Page.PLAY: 
						PauseGame(); 
						break;
		            case Page.PAUSE: 
						UnPauseGame(); 
						break;
		            default: 
						currentPage = Page.PLAY;
						break;
		        }
			}
		}
		
		//debug restart
		if(Input.GetKeyDown(KeyCode.R)) {
			SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		}
	}

	private RaycastHit hitInfo;
	private Ray ray;
	void touchManager (){
		if(Input.GetMouseButtonUp(0)) {
			ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			if (Physics.Raycast(ray, out hitInfo)) {
				string objectHitName = hitInfo.transform.gameObject.name;
				switch(objectHitName) {
				
					case "PauseBtn":
						
						//pause is not allowed when game is finished
						if(globalGameController.gameIsFinished)
							return;
							
						switch (currentPage) {
				            case Page.PLAY: PauseGame(); break;
				            case Page.PAUSE: UnPauseGame(); break;
					default: currentPage = Page.PLAY; break;
				        }
						break;
						
					case "Btn-Menu":
						//first save the score for endless & TimeTrial modes
						savePlayerScores();
						
						Time.timeScale = savedTimeScale;
	   					AudioListener.volume = 1.0f;
						SceneManager.LoadScene("Menu-c#");
						break;
					
					case "Btn-Map":
	   					AudioListener.volume = 1.0f;
						SceneManager.LoadScene("CareerMap-c#");
						break;
						
					case "Btn-Resume":
						switch (currentPage) {
				            case Page.PLAY: PauseGame(); break;
				            case Page.PAUSE: UnPauseGame(); break;
				            default: currentPage = Page.PLAY; break;
				        }
						break;
						
					case "Btn-Restart":
						//first save the score for endless & TimeTrial modes
						savePlayerScores();
						
						Time.timeScale = savedTimeScale;
	   					AudioListener.volume = 1.0f;
						SceneManager.LoadScene(SceneManager.GetActiveScene().name);
						break;
				}
			}
		}
	}
	void savePlayerScores (){

		//save highest money for Endless mode
		if(globalGameController.gameMode == "ENDLESS") {
			int lastBestMoney = PlayerPrefs.GetInt("highestMoney");
			if(globalGameController.userCurrentBalance > lastBestMoney)
				PlayerPrefs.SetInt("highestMoney", globalGameController.userCurrentBalance);
		}
		
		//save best time for time-trial mode, only if we beat the mission goal ballance
		if(	globalGameController.gameMode == "TIMETRIAL" && 
			globalGameController.userCurrentBalance >= globalGameController.staticEndlessGoalBallance) {
			
			int lastBestTime = PlayerPrefs.GetInt("bestTime");
			if(Time.timeSinceLevelLoad < lastBestTime)
				PlayerPrefs.SetInt("bestTime", (int)Time.timeSinceLevelLoad);
		}
	}

	void PauseGame (){
		print("Game is Paused...");

		//show an Interstitial Ad when the game is paused
		//if(AdManagerObject)
		//	AdManagerObject.GetComponent<AdManager>().showInterstitial();

		isPaused = true;
		savedTimeScale = Time.timeScale;
	    Time.timeScale = 0;
	    AudioListener.volume = 0;
	    if(pausePlane)
	    	pausePlane.SetActive(true);
	    currentPage = Page.PAUSE;
	}

	void UnPauseGame (){
		print("Unpause");
	    isPaused = false;
	    Time.timeScale = savedTimeScale;
	    AudioListener.volume = 1.0f;
		if(pausePlane)
	    	pausePlane.SetActive(false);   
	    currentPage = Page.PLAY;
	}

}