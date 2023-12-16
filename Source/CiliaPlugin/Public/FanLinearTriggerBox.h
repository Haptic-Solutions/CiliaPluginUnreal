// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CiliaPluginBluePrint.h"
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "FanLinearTriggerBox.generated.h"

/**
 * This Class produces an effect where the closer the player is to the center of the collision box the more intense the smell is.
 */
UCLASS()
class CILIAPLUGIN_API AFanLinearTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
private:
	AActor* mPlayerCharacter;
	bool mLatch;
	float oldDistance = 0;
	float mFanRadius = 0.0f;
	CiliaGroupsList mCiliaGroup;
	SmellList mSmell;
	std::string mFanSpeedString;
protected:
	/**
	* Called on begin play.
	* Overrides BeginPlay method.
	* Plays parents BeginPlay method.
	* Connects Overlap methods to parents overlap methods.
	* Computes and stores radius of smell area.
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
		* Also, turns off mSmells on Cilias in mGroup
		*@param aThisActor pointer to this object.
		*@param aOtherActor pointer to the no longer overlapping object.
		*/
		void OnOverlapEnd(class AActor* aThisActor, class AActor* aOtherActor);
	UFUNCTION(BlueprintCallable, Category = "CiliaFunctions")
		/**
		* Plays the Fan Linear Effect.
		* sets mPlayerCharacter to aPlayerCharacter.
		* If mLatch is true then.
		* If size is dynamic recompute the mFanRadius.
		* Then if the old distance does not equal the new distance.
		* Send a message to the SDK telling it to turn on a certain smell for a certain group of Cilias at a computed intensity.
		* Essentially the closer the player is to the middle of the bounding box the faster the fan will spin.
		* @param CiliaGroup group of Cilias that the effect is applied to.
		* @param aPlayerCharacter that we want to trigger the effect upon overlap.
		* @param Smell a smell we want to play when the effect is triggered.
		* @param SizeIsDynamic if the bounding box size might change.
		* @param FanMaxSpeed the fastest speed the fan will spin for this effect.
		*/
		void FanLinearEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, SmellList Smell, bool SizeIsDynamic, uint8 FanMaxSpeed);
	/**
	* Default Constructor.
	*/
	AFanLinearTriggerBox();
	
};
