// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CiliaPluginBluePrint.h"
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "VariableBrightnessTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class CILIAPLUGIN_API AVariableBrightnessTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
private:
	AActor* mPlayerCharacter;
	bool mLatch;
	float oldDistance = 0;
	float mLightRadius = 0.0f;
	CiliaGroupsList mCiliaPosition;
	void LVBEComputeLightValuesandSend(CiliaGroupsList CiliaPosition, int aLight, uint8 aLightRed, uint8 aLightGreen, uint8 aLightBlue, float aDistance);
protected:
	/**
	* Called on begin play.
	* Overrides BeginPlay method.
	* Plays parents BeginPlay method.
	* Connects Overlap methods to parents overlap methods.
	* Sets variable default values.
	* Draws the debug box.
	*/
	virtual void BeginPlay() override;
public:
	UFUNCTION()
		/**
		*Triggered when there is an overlap event.
		*If the other aOtherActor is mPlayerCharacter then set mLatch to true.
		*@param aThisActor pointer to this object.
		*@param aOtherActor pointer to the overlapping object.
		*/
		void OnOverlapBegin(class AActor* aThisActor, class AActor* aOtherActor);
	UFUNCTION()
		/**
		* Triggered when an overlap event ends.
		* If the other aOtherActor is mPlayerCharacter then set mLatch to false.
		* Turns Lights on Cilias in CiliaGroup to off.
		*@param aThisActor pointer to this object.
		*@param aOtherActor pointer to the no longer overlapping object.
		*/
		void OnOverlapEnd(class AActor* aThisActor, class AActor* aOtherActor);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
		/**
		* Plays the LightVariableBrightness Effect.
		* sets mPlayerCharacter to aPlayerCharacter.
		* If mLatch is true then Plays LightVariableBrightness Effect.
		* If size is dynamic recompute the mFanRadius.
		* Then if the old distance does not equal the new distance.
		* Sets lights on the Cilias in a group to specified color multiplied by an intensity computed by how far the player is from the center of the bounding box.
		* Essentially the closer the player gets to the center of the box the brighter the lights are.
		* @param CiliaGroup group of Cilias that the effect is applied to.
		* @param aPlayerCharacter that we want to trigger the effect upon overlap.
		* @param SizeIsDynamic if the bounding box size might change.
		* @param Light1Red value between 0 and 255 to set light 1's red brightness to.
		* @param Light1Green value between 0 and 255 to set light 1's green brightness to.
		* @param Light1Blue value between 0 and 255 to set light 1's blue brightness to.
		* @param Light2Red value between 0 and 255 to set light 2's red brightness to.
		* @param Light2Green value between 0 and 255 to set light 2's green brightness to.
		* @param Light2Blue value between 0 and 255 to set light 2's blue brightness to.
		* @param Light3Red value between 0 and 255 to set light 3's red brightness to.
		* @param Light3Green value between 0 and 255 to set light 3's green brightness to.
		* @param Light3Blue value between 0 and 255 to set light 3's blue brightness to.
		* @param Light4Red value between 0 and 255 to set light 4's red brightness to.
		* @param Light4Green value between 0 and 255 to set light 4's green brightness to.
		* @param Light4Blue value between 0 and 255 to set light 4's blue brightness to.
		* @param Light5Red value between 0 and 255 to set light 5's red brightness to.
		* @param Light5Green value between 0 and 255 to set light 5's green brightness to.
		* @param Light5Blue value between 0 and 255 to set light 5's blue brightness to.
		* @param Light6Red value between 0 and 255 to set light 6's red brightness to.
		* @param Light6Green value between 0 and 255 to set light 6's green brightness to.
		* @param Light6Blue value between 0 and 255 to set alight 6's blue brightness to.
		*/
		void LightVariableBrightnessEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, bool SizeIsDynamic, uint8 Light1Red, uint8 Light1Green, uint8 Light1Blue, uint8 Light2Red, uint8 Light2Green, uint8 Light2Blue, uint8 Light3Red, uint8 Light3Green, uint8 Light3Blue, uint8 Light4Red, uint8 Light4Green, uint8 Light4Blue, uint8 Light5Red, uint8 Light5Green, uint8 Light5Blue, uint8 Light6Red, uint8 Light6Green, uint8 Light6Blue);
	/**
	*Default Constructor.
	*/
	AVariableBrightnessTriggerBox();
};
