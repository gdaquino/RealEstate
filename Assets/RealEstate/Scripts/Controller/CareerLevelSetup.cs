using UnityEngine;
using System.Collections;

public class CareerLevelSetup : MonoBehaviour {
		
	///*************************************************************************///
	/// Use this class to set different missions for each level.
	/// when you click/tap on any level button, these values automatically get saved 
	/// inside playerPrefs and then get read when the game starts.
	///*************************************************************************///

	public int levelID;	// unique level identifier. Starts from 1.

	public int careerGoalBallance = 5000;
	public int careerAvailableTime = 300;
	public int careerStartingBallance = 150;

	public bool[] availableTiers; 	 //We have 4 building tiers (from very cheap to very expensive). 
									 //So we can indicate which tiers can be available in this level
									 //to adjust the hardness of the game
}