// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CiliaPluginBluePrint.h"
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "BreathTriggerBox.generated.h"
/**
 * 
 */
UCLASS()
class CILIAPLUGIN_API ABreathTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
private:
	AActor* mPlayerCharacter;
	bool mLatch;
	float mBreathCounter;
	float breathCounter2;	
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
		* If mLatch is true then Play Breath Effect. Essentially transitions between two specified colors over a transition length at a speed of SpeedDivider.
		* @param CiliaGroup group of Cilias that the effect is applied to.
		* @param aPlayerCharacter that we want to trigger the effect upon overlap.
		* @param DeltaTime How much time has ellapsed since the last time the function was called.
		* @param SpeedDivider how much time has to elapse before a frame of the breath effect is played.
		* @param TransitionLength amount of frames it takes to transition from one color to the other.
		* @param Red value between 0 and 255 component of the first light color in the effect.
		* @param Green value between 0 and 255 component of the first light color in the effect.
		* @param Blue value between 0 and 255 component of the first light color in the effect.
		* @param Red2 value between 0 and 255 component of the second light color in the effect.
		* @param Green2 value between 0 and 255 component of the second light color in the effect.
		* @param Blue2 value between 0 and 255 component of the second light color in the effect.
		*/
		void BreathEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, float DeltaTime, float SpeedDivider, float TransitionLength, uint8 Red, uint8 Green, uint8 Blue, uint8 Red2, uint8 Green2, uint8 Blue2);
	/**
	* Default Constructor.
	*/
	ABreathTriggerBox();
};
