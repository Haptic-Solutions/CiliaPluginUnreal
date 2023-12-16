// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CiliaPluginBluePrint.h"
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "CrazyColorTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class CILIAPLUGIN_API ACrazyColorTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
private:
	AActor* mPlayerCharacter;
	bool mLatch;
	float mTimer;
	float mRandomTime;
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
		*@param aThisActor pointer to this object.
		*@param aOtherActor pointer to the no longer overlapping object.
		*/
		void OnOverlapEnd(class AActor* aThisActor, class AActor* aOtherActor);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
		/**
		* Plays the Breath Effect.
		* sets mPlayerCharacter to aPlayerCharacter.
		* If mLatch is true then Plays Crazy Color Effect.
		* Multiplies the Red Green and Blue values by random float between 0 and 1 to determine colors.
		* @param CiliaGroup group of Cilias that the effect is applied to.
		* @param aPlayerCharacter that we want to trigger the effect upon overlap.
		* @param DeltaTime How much time has ellapsed since the last time the function was called.
		* @param SpeedDividerMinOffset added to a random value between 0 and SpeedDividerMax to determine the amount of tie to wait between playing frames of the effect
		* @param SpeedDividerMax used in determining a random number to be added to SpeedDividerMinOffset to determine the amount of time to wait between playing frames of the effect.
		* @param TransitionLength amount of frames it takes to transition from one color to the other.
		* @param Red value between 0 and 255 component of the first light color in the effect.
		* @param Green value between 0 and 255 component of the first light color in the effect.
		* @param Blue value between 0 and 255 component of the first light color in the effect.
		* @param FlickerAllTogether bool value to determine if all the lights will show the same color.
		*/
		void CrazyColorEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, float DeltaTime, float SpeedDividerMinOffset, float SpeedDividerMax, uint8 Red, uint8 Green, uint8 Blue, bool FlickerAllTogether);
	/**
	* Default Constructor
	*/
	ACrazyColorTriggerBox();
};
