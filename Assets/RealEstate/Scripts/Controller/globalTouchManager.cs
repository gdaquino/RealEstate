using UnityEngine;
using System.Collections;

public class globalTouchManager : MonoBehaviour {

	///*************************************************************************///
	/// This class handles all touch/tap/click events on elements.
	///*************************************************************************///

	public GameObject notificationText;		//reference to game object which shows the information when buying or selling
	private GameObject notifyText;			//reference to the child 3dText object

	private bool tapEnabled;
	private GameObject objectHit;
	private GameObject parentObject;

	//AudioClips
	public AudioClip buySfx;
	public AudioClip sellSfx;
	public AudioClip cashLow;
	public AudioClip carHorn;

	void Awake (){
		tapEnabled = true;
		objectHit = null;
	}

	void Update (){
		if(tapEnabled)
			touchManager();
	}

	///***********************************************************************
	/// Process user inputs
	///***********************************************************************
	private RaycastHit hitInfo;
	private Ray ray;
	void touchManager (){
		//Mouse of touch?
		if(	Input.touches.Length > 0 && Input.touches[0].phase == TouchPhase.Ended)  
			ray = Camera.main.ScreenPointToRay(Input.touches[0].position);
		else if(Input.GetMouseButtonUp(0))
			ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		else
			return;
			
		if (Physics.Raycast(ray, out hitInfo)) {
			objectHit = hitInfo.transform.gameObject;
			print(objectHit.name + " - " + objectHit.tag);	
			
			if(objectHit.tag == "buyableButton") {
				//SO IT MUST HAS A PARENT
				parentObject = hitInfo.transform.parent.gameObject;	//get the parent
				
				//sell the building, if it was purchased before.
				if(	parentObject.GetComponent<HouseController>().isPurchased && 
					!parentObject.GetComponent<HouseController>().isSold ) {
						
						print("Property: " + parentObject.name + " Sold :(");
						//playSfx(sellSfx);  //Sell fx controller has been moved to HouseController.cs
						parentObject.GetComponent<HouseController>().isSold = true;
						tapEnabled = false;
						parentObject.GetComponent<HouseController>().sellPrice = parentObject.GetComponent<HouseController>().currentPrice;
						parentObject.GetComponent<HouseController>().performSellRoutine();
						StartCoroutine(reactiveTap());
						
				} else if(!parentObject.GetComponent<HouseController>().isPurchased) { //buy the house if it was not purchased before.
				
					//but first check if we have enough money to buy this building
					if(globalGameController.userCurrentBalance < parentObject.GetComponent<HouseController>().currentPrice) {
						playSfx(cashLow);
						return;
					}
					
					//bdebug text
					print("Property: " + objectHit.transform.parent.name + " Purchased!!");
					
					playSfx(buySfx);
					//let the controller know that we purchased this building
					parentObject.GetComponent<HouseController>().isPurchased = true;
					//show notification text object over this house
					notifyText = Instantiate(	notificationText, 
												objectHit.transform.position + new Vector3(0, 0, 1), 
												Quaternion.Euler(0, 180, 0)) as GameObject;
					
					//set the purchase price for later use							
					parentObject.GetComponent<HouseController>().purchasePrice = parentObject.GetComponent<HouseController>().currentPrice;	
					//deduct the building's price from our availabe money										
					globalGameController.userCurrentBalance -= parentObject.GetComponent<HouseController>().purchasePrice;
					
					notifyText.GetComponent<textFx>().publicText = "Purchased at:  $";
					notifyText.GetComponent<textFx>().publicPrice = parentObject.GetComponent<HouseController>().purchasePrice.ToString();
					
					tapEnabled = false;
					StartCoroutine(reactiveTap());
				}
			}
			
			if(objectHit.tag == "cityCar") {
				playSfx(carHorn);
			}
		}
	}
												

	//in order to avoid unwanted buy and sell with one click, we fake a short delay between each clicks on the buildings
	IEnumerator reactiveTap (){
		yield return new WaitForSeconds(0.1f);
		tapEnabled = true;
	}

	void playSfx ( AudioClip _sfx  ){
		GetComponent<AudioSource>().clip = _sfx;
		GetComponent<AudioSource>().PlayOneShot(_sfx, 1.0f);
	}

}