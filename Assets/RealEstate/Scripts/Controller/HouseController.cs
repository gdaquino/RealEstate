using UnityEngine;
using System.Collections;

public class HouseController : MonoBehaviour {

	//**********************************************************************************
	//**********************************************************************************
	// Main controller for all things related to a purchasable property, including
	// show and hide, price bar, arrows, error messages, notifications, etc...
	//**********************************************************************************
	//**********************************************************************************

	// Public Variables //
	//******************//
	//***Accessible for other classes. DO NOT TOUCH!!! ***//
	public bool isPurchased;						//flag for when the user has bought this house
	public bool isSold;								//flag for when user has sold the house
	public bool isGoneWithNoTouch;					//flag when house dissapear with no interest and touch from user
	public int currentPrice;						//Current price of property which will be updated every frame
	public int purchasePrice;						//price which user bought the house
	public int sellPrice;							//price which user has sold the house
	public int positionIndex;						//set by globalController when instantiating, to be used at
													//the end of auction to tell the globalGameController to set
													//it's positionInUseFlag off
													
	public float priceIncreaseDuration;				//Fixed duration of price going up
	public float priceDecreaseDuration;				//Fixed duration of price going down
	public int allowedCycles;						//how many full cycle can this property perform?

	public enum tiers {cheap, medium, expensive, skyscrapper}
	public tiers houseTier = tiers.cheap;
	//***End of untouchable vars ***//

	//******************//
	// Private Variables //
	//******************//
	private Vector3 shadowStartingScale;
	private Vector3 shadowTargetScale;
	private Vector3 shadowCurrentScale;
	private Vector3 houseStartingScale;
	private Vector3 houseTargetScale;

	private int priceStarting;				//The price which the property will have at the very first cycle
	private int priceMin;						//Minimum price in cycle
	private int priceMax;						//Maximum price of cycle

	private float priceSwingStartTime;		//Stores when each cycle starts to calculate the duration of each cycle

	private bool  priceIsGoingUp;			//flag to determine if price is increasing
	private bool  priceIsGoingDown;			//flag to determine if price is decreasing
	private bool  changeSideFlag;			//special flag to know when exactly the cycle of price up and down changes
	private bool  firstCycle;				//special flag for the very first cycle of the up and down

	private int cycleCount;					//How many full cycle of up and down did this property performed?

	private bool  houseAuctionFinished;		//act as a game-over flag for this property and finish it's process
	private bool  finalAnimationFlag;		//final act flag

	private bool  startAnimationIsFinished = false;

	private GameObject globalController;		//always has a reference to the main game controller object

	private float guiSizeDance;				//used to set the animate speed for gui text increase and decrease

	//touch vars
	private RaycastHit hitInfo;
	private Ray ray;
	//private bool tapEnabled;
	private GameObject objectTapped;
	private GameObject notifyText; 			//Object which will be created to show buy and sell purchase information over property

	//******************//
	// Exposed Variables //
	//******************//
	//gameObjects
	public GameObject mainChild;
	public GameObject shadowOval;
	public GameObject mainPriceBar;
	public Material[] priceBarMat;
	public GameObject priceTag;
	public GameObject priceArrow;

	//variables
	public float showUpSpeed = 1.0f;

	//Textures
	public Texture2D[] priceArrowTextures;
	public Texture2D[] notificationBarTextures;

	public Texture2D[] tierOneTextures;
	public Texture2D[] tierTwoTextures;
	public Texture2D[] tierThreeTextures;
	public Texture2D[] tierFourTextures;

	//Other Prefabs
	public GameObject notificationText;

	//Sfx
	public AudioClip sellWithLossFx;
	public AudioClip sellWithProfitFx;
	//******************//

	void Awake (){
		//Initialize
		mainPriceBar.SetActive(false);
		mainChild.SetActive(false);
		priceTag.SetActive(false);
		priceTag.GetComponent<TextMesh>().text = "? $";
		
		shadowTargetScale = shadowOval.transform.localScale;
		shadowCurrentScale = shadowOval.transform.localScale / 6;
		shadowOval.transform.localScale = shadowCurrentScale;
		shadowStartingScale = shadowOval.transform.localScale;
		
		houseTargetScale = mainChild.transform.localScale;
		mainChild.transform.localScale /= 6;
		houseStartingScale = mainChild.transform.localScale;
		
		priceSwingStartTime = 0;
		
		//You are free to set a fixed value for these variables
		priceIncreaseDuration = Random.Range(6, 15); //12
		priceDecreaseDuration = Random.Range(6, 10); //10
		
		priceIsGoingUp = true;
		priceIsGoingDown = false;
		changeSideFlag = false;
		firstCycle = true;
		
		cycleCount = 0;
		allowedCycles = 2;
		houseAuctionFinished = false;
		finalAnimationFlag = false;
		
		//tapEnabled = true;
		isPurchased = false;
		isGoneWithNoTouch = false;
		isSold = false;
		
		guiSizeDance = 5;
		
		priceArrow.GetComponent<Renderer>().material.mainTexture = priceArrowTextures[0];
		
		globalController = GameObject.FindGameObjectWithTag("globalGameController");
		
		//name this house !
		this.name = "HouseHolder__" + Random.Range(10000, 100000).ToString();
	}

	void Start (){
		//set houses size and texture based on it's tier
		setHouseTexture();
		
		//calculate prices min and max
		calculatePriceRanges();
		
		//show the house
		StartCoroutine(showUp(0));
		
		//used to resolve z fight when buildings are near or far from our prespective
		resolveDepths();
	}

	void Update (){
		if(startAnimationIsFinished && !houseAuctionFinished)
			StartCoroutine(managePriceUpAndDown());
		
		//detect finish time?
		if(houseAuctionFinished && !finalAnimationFlag)
			StartCoroutine(closeAndHide(0.5f));
		
		//update Purchase status
		updateStatus();
					
		debug();
	}

	//********************************************************
	//********************************************************
	//avoid z-fihgt and depth pverlap problems
	//********************************************************
	//********************************************************
	void resolveDepths (){
		//objects with smaller Z should have bigger Y to get in front of taller building behind them.
		transform.position -= new Vector3(0,
		                                 transform.position.z / 100,
		                                 0);
	}
	//********************************************************
	//********************************************************
	//change the color of this building if purchased
	//********************************************************
	//********************************************************
	void updateStatus (){
		if(isPurchased) {
			mainPriceBar.GetComponent<Renderer>().material = priceBarMat[1];
		} else	{
			mainPriceBar.GetComponent<Renderer>().material = priceBarMat[0];
		}
	}

	//********************************************************
	//********************************************************
	// This function sets suitable texture for the buildings of each tier
	//********************************************************
	//********************************************************
	void setHouseTexture (){
		int texturesInArray;
		int randomIndex;
		switch(houseTier)
			{
				case tiers.cheap:
					texturesInArray = tierOneTextures.Length;
					//print(texturesInArray + " texture available in tier ONE.");
					randomIndex = Random.Range(0, texturesInArray);
					mainChild.GetComponent<Renderer>().material.mainTexture = tierOneTextures[randomIndex];
					break;
				
				case tiers.medium:
					texturesInArray = tierTwoTextures.Length;
					//print(texturesInArray + " texture available in tier TWO.");
					randomIndex = Random.Range(0, texturesInArray);
					mainChild.GetComponent<Renderer>().material.mainTexture = tierTwoTextures[randomIndex];
					break;
				
				case tiers.expensive:
					texturesInArray = tierThreeTextures.Length;
					//print(texturesInArray + " texture available in tier THREE.");
					randomIndex = Random.Range(0, texturesInArray);
					mainChild.GetComponent<Renderer>().material.mainTexture = tierThreeTextures[randomIndex];
					break;
				
				case tiers.skyscrapper:
					texturesInArray = tierFourTextures.Length;
					//print(texturesInArray + " texture available in tier FOUR.");
					randomIndex = Random.Range(0, texturesInArray);
					mainChild.GetComponent<Renderer>().material.mainTexture = tierFourTextures[randomIndex];
					break;
			}
	}

	//********************************************************
	//********************************************************
	// This function does the MATH behind every purchase
	//********************************************************
	//********************************************************
	public void performSellRoutine (){
		int benefit;
		benefit = sellPrice - purchasePrice;
		print("Profit: " + benefit);
		
		notifyText = Instantiate(	notificationText, 
									mainPriceBar.transform.position, 
									Quaternion.Euler(0, 180, 0)) as GameObject;
									
		//if we have benefit, show the bar in green, else show some red!
		if(benefit >= 0) {
			notifyText.GetComponent<Renderer>().material.mainTexture = notificationBarTextures[0];
			notifyText.GetComponent<textFx>().publicText = "Profit:  $";
			playSfx(sellWithProfitFx);
		} else {
			notifyText.GetComponent<Renderer>().material.mainTexture = notificationBarTextures[1];
			notifyText.GetComponent<textFx>().publicText = "Loss:  $";
			playSfx(sellWithLossFx);
		}
								
		notifyText.GetComponent<textFx>().publicPrice = benefit.ToString();
		
		//send a message to the globalGameController, letting it know if we are at loss or benefit
		StartCoroutine(globalController.GetComponent<globalGameController>().doTheSizeIncreaseDance(guiSizeDance));
		//globalController.GetComponent<globalGameController>().userCurrentBalance += purchasePrice;	
		//globalController.GetComponent<globalGameController>().userCurrentBalance += benefit;
		globalGameController.userCurrentBalance += purchasePrice;
		globalGameController.userCurrentBalance += benefit;
		
		houseAuctionFinished = true;
	}
	//********************************************************
	//********************************************************
	// This function cycles the price to max and min
	//********************************************************
	//********************************************************
	IEnumerator managePriceUpAndDown (){
		//if price is going up, go from current to MAX
		if(priceIsGoingUp) {
			if(firstCycle)
				currentPrice = (int)Mathf.SmoothStep(priceStarting, priceMax, (Time.time - priceSwingStartTime) / priceIncreaseDuration);
			else
				currentPrice = (int)Mathf.SmoothStep(priceMin, priceMax, (Time.time - priceSwingStartTime) / priceIncreaseDuration);
				
			//set the texture of priceArrow
			priceArrow.GetComponent<Renderer>().material.mainTexture = priceArrowTextures[0];
		}
		
		if(currentPrice == priceMax && !changeSideFlag) {
			priceIsGoingUp = false;
			changeSideFlag = true;
			firstCycle = false;
			
			yield return new WaitForSeconds(0.5f);
				
			priceSwingStartTime = Time.time;			
			priceIsGoingDown = true;
			print("Price Decrease Started! - NewRefTime: " + priceSwingStartTime);
			
			//Very important. if delay set to a small number like < 0.5f, it can cause that before starting the next cycle,
			//system think that all cycles has been passed and performs the finish animation. always use delays bigger than 1.5f seconds.
			yield return new WaitForSeconds(2); 
			changeSideFlag = false;
		}
		
		if(priceIsGoingDown) {
			currentPrice = (int)Mathf.SmoothStep(priceMax, priceMin, (Time.time - priceSwingStartTime) / priceDecreaseDuration);
			//set the texture of priceArrow
			priceArrow.GetComponent<Renderer>().material.mainTexture = priceArrowTextures[1];
		}
		
		if(currentPrice == priceMin && !changeSideFlag) {
			cycleCount++; //increase the full cycle copunter
			print("cycleCount: " + cycleCount);
			
			//calculate the finish of auction after every full cycle
			if(cycleCount == allowedCycles) {
				houseAuctionFinished = true;
				yield break;
			}
			
			priceIsGoingDown = false;
			changeSideFlag = true;
			
			yield return new WaitForSeconds(0.5f);
				
			priceSwingStartTime = Time.time;			
			priceIsGoingUp = true;
			print("Price Increase Started! - NewRefTime: " + priceSwingStartTime);				
			
			yield return new WaitForSeconds(2);
			changeSideFlag = false;
		}
		
		priceTag.GetComponent<TextMesh>().text = "$" + currentPrice.ToString();			
	}

	//********************************************************
	//********************************************************
	// This function calculates the Min, Max, and Normal 
	// values for each house.
	//********************************************************
	//********************************************************
	void calculatePriceRanges (){
		switch(houseTier) {
			case tiers.cheap:
				priceStarting = Random.Range(20, 40);
				priceMin = priceStarting - Random.Range(20, 40);
				priceMax = priceStarting + Random.Range(20, 40);
				break;
			
			case tiers.medium:
				priceStarting = Random.Range(150, 220);
				priceMin = priceStarting - Random.Range(50, 100);
				priceMax = priceStarting + Random.Range(40, 80);
				break;
			
			case tiers.expensive:
				priceStarting = Random.Range(450, 600);
				priceMin = priceStarting - Random.Range(50, 150);
				priceMax = priceStarting + Random.Range(50, 200);
				break;
			
			case tiers.skyscrapper:
				priceStarting = Random.Range(1500, 2500);
				priceMin = priceStarting - Random.Range(500, 750);
				priceMax = priceStarting + Random.Range(250, 750);
				break;
		}
		
		//avoid posible bug
		if(priceMin <= 0)
			priceMin = Random.Range(5, 10);
		
		currentPrice = priceStarting;
		priceTag.GetComponent<TextMesh>().text = "$" + currentPrice.ToString();
		
		//debug
		print(this.name + "__PriceMin: " + priceMin + " - PriceMax: " + priceMax + " - PriceStart: " + priceStarting);
	}

	//********************************************************
	//********************************************************
	// This function shows a new house and does the required
	// animations.
	//********************************************************
	//********************************************************
	IEnumerator showUp ( float _delay  ){		
		yield return new WaitForSeconds(_delay);
		
		//increase shadowOval size
		float t1 = 0;
		while(t1 <= 1) {
			t1 += Time.deltaTime * showUpSpeed * 1.5f;
			shadowOval.transform.localScale = new Vector3(Mathf.SmoothStep(shadowStartingScale.x, shadowTargetScale.x, t1),
			                                              shadowOval.transform.localScale.y,
			                                              Mathf.SmoothStep(shadowStartingScale.z, shadowTargetScale.z, t1));
			yield return 0;
		}
		
		//bring in house itself
		float t2 = 0;
		if(t1 >= 1) {
			mainChild.SetActive(true);	
			t2 = 0;
			while(t2 <= 1) {
				t2 += Time.deltaTime * showUpSpeed * 3.0f;
				mainChild.transform.localPosition = new Vector3(mainChild.transform.localPosition.x,
				                                                mainChild.transform.localPosition.y,
				                                                Mathf.SmoothStep(-0.5f, 1.5f, t2));
				mainChild.transform.localScale = new Vector3(Mathf.SmoothStep(houseStartingScale.x, houseTargetScale.x, t2),
				                                             mainChild.transform.localScale.y,
				                                             Mathf.SmoothStep(houseStartingScale.z, houseTargetScale.z, t2));

				yield return 0;
			}
		}
		
		//fix the house
		float t3 = 0;
		if(t2 >= 1) {
			t3 = 0;
			while(t3 <= 1) {
				t3 += Time.deltaTime * showUpSpeed * 3;
				mainChild.transform.localPosition = new Vector3(mainChild.transform.localPosition.x,
				                                                mainChild.transform.localPosition.y,
				                                                Mathf.SmoothStep(1.5f, 0, t3));
				shadowOval.transform.localScale = new Vector3(Mathf.SmoothStep(shadowTargetScale.x, shadowStartingScale.x, t3),
				                                              shadowOval.transform.localScale.y,
				                                              Mathf.SmoothStep(shadowTargetScale.z, shadowStartingScale.z, t3));
				yield return 0;
			}
		}
			
		//Hide the shadowOval
		shadowOval.SetActive(false);
		
		//final placement dance!
		float t4 = 0.0f; 
		while (t4 <= 1.0f) {
			t4 += Time.deltaTime * 10;
			mainChild.transform.localPosition = new Vector3(mainChild.transform.localPosition.x,
			                                                mainChild.transform.localPosition.y,
			                                                Mathf.SmoothStep(0, 0.2f, t4));
			yield return 0;
		}
		
		float t5 = 0.0f; 
		if(t4 >= 1) {
			while (t5 <= 1.0f) {
				t5 += Time.deltaTime * 10;
				mainChild.transform.localPosition = new Vector3(mainChild.transform.localPosition.x,
				                                                mainChild.transform.localPosition.y,
				                                                Mathf.SmoothStep(0.2f, 0, t5));
				yield return 0;
			}
		}
		
		//final variable settings
		mainPriceBar.SetActive(true);
		priceTag.SetActive(true);
		startAnimationIsFinished = true;
		
		//if price up and down is started, then set the exact time of it's start for reference
		priceSwingStartTime = Time.time;
	}

	//********************************************************
	//********************************************************
	// This function performs the final dissapearance of the
	// property and sett all the required values
	// like closing the price, closing the deal made, etc...
	//********************************************************
	//********************************************************
	IEnumerator closeAndHide ( float _delay  ){
		print("Closing Auction :(  .................");
		finalAnimationFlag = true;
		
		yield return new WaitForSeconds(_delay);
		shadowCurrentScale = shadowTargetScale;
		
		//hide price tag
		mainPriceBar.SetActive(false);
		
		//bring up house for exit
		float t1 = 0;
		while(t1 <= 1) {
			t1 += Time.deltaTime * showUpSpeed * 2.0f;
			mainChild.transform.localPosition = new Vector3(mainChild.transform.localPosition.x,
			                                                mainChild.transform.localPosition.y,
			                                                Mathf.SmoothStep(0, 1.5f, t1));
			yield return 0;
		}
			
		//unhide shadow
		shadowOval.SetActive(true);
		
		//increase shadowOval size
		float t2 = 0;
		float t3 = 0;
		float t4 = 0;
		if(t1 >= 1) {				
			t2 = 0;
			t3 = 0;
			t4 = 0;
			while(t4 <= 1) {
				t2 += Time.deltaTime * showUpSpeed * 3;
				shadowOval.transform.localScale = new Vector3(Mathf.SmoothStep(shadowStartingScale.x, shadowTargetScale.x, t2),
				                                              shadowOval.transform.localScale.y,
				                                              Mathf.SmoothStep(shadowStartingScale.z, shadowTargetScale.z, t2));				
				t3 += Time.deltaTime * showUpSpeed * 1.5f;
				mainChild.transform.localPosition = new Vector3(mainChild.transform.localPosition.x,
				                                                mainChild.transform.localPosition.y,
				                                                Mathf.SmoothStep(1.5f, -0.5f, t3));
				mainChild.transform.localScale = new Vector3(Mathf.SmoothStep(houseTargetScale.x, houseStartingScale.x * 2, t3),
				                                             mainChild.transform.localScale.y,
				                                             Mathf.SmoothStep(houseTargetScale.z, houseStartingScale.z * 2, t3));
				
				if(t2 >= 1) {
					t4 += Time.deltaTime * showUpSpeed * 2.0f;
					if(t4 > 0.35f)
						mainChild.SetActive(false);

					shadowOval.transform.localScale = new Vector3(Mathf.SmoothStep(shadowTargetScale.x, shadowStartingScale.x, t4),
					                                              shadowOval.transform.localScale.y,
					                                              Mathf.SmoothStep(shadowTargetScale.z, shadowStartingScale.z, t4));
				}							
				yield return 0;
			}
		}
		
		if(t4 >= 1) {
			shadowOval.SetActive(false);
			gameObject.SetActive(false);
			switch(houseTier) {
				case tiers.cheap:
					globalController.GetComponent<globalGameController>().dummyPositionInUseTier_1[positionIndex] = false;
					break;
				
				case tiers.medium:
					globalController.GetComponent<globalGameController>().dummyPositionInUseTier_2[positionIndex] = false;
					break;
				
				case tiers.expensive:
					globalController.GetComponent<globalGameController>().dummyPositionInUseTier_3[positionIndex] = false;
					break;
				
				case tiers.skyscrapper:
					globalController.GetComponent<globalGameController>().dummyPositionInUseTier_4[positionIndex] = false;
					break;
			}
			Destroy(gameObject, 1.0f);
		}
		
	}

	IEnumerator reactiveTap (){
		yield return new WaitForSeconds(0.1f);
		//tapEnabled = true;
	}

	//********************************************************
	//********************************************************
	// This function Debugs everything
	//********************************************************
	//********************************************************
	void debug (){
		//print(this.name + "__cycleCount: " + cycleCount);
	}

	void playSfx ( AudioClip _sfx  ){
		GetComponent<AudioSource>().clip = _sfx;
		GetComponent<AudioSource>().PlayOneShot(_sfx, 1.0f);
	}
}