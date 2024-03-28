using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EasyMobile;

public class MainMenuAdmob : MonoBehaviour
{
    // Start is called before the first frame update
    public void getBannerDong()
    {
        // Show banner ad
        if (!RuntimeManager.IsInitialized()){
            RuntimeManager.Init();
            Debug.Log("Dong InitRuntime");
        }
            

        Debug.Log("Dong Show banner");
        Advertising.ShowBannerAd(BannerAdPosition.Bottom);
    }

    // Update is called once per frame

    public void getIttDong()
    {
        // Show banner ad
        if (!RuntimeManager.IsInitialized()){
            RuntimeManager.Init();
            Debug.Log("Dong InitRuntime");
        }
            // Check if interstitial ad is ready
            bool isReady = Advertising.IsInterstitialAdReady();
            Debug.Log("Check Itt Dong");
            // Show it if it's ready
            if (isReady)
            {
                Debug.Log("Read Itt Dong");
                Advertising.ShowInterstitialAd();
            }

    }

    public void removeBanner(){

        // Hide banner ad
        Advertising.HideBannerAd();
    }
    void Update()
    {
        
    }
}
