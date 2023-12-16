// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CiliaPluginBluePrint.h"
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "SmellAreaTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class CILIAPLUGIN_API ASmellAreaTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
private:
	AActor* mPlayerCharacter;
	bool mLatch;
	CiliaGroupsList mCiliaGroup;
	SmellList mSmell;
protected:
	/**
	* Called on begin play.
	* Overrides BeginPlay method.
	* Plays parents BeginPlay method.
	* Connects Overlap methods to parents overlap methods.
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
		* Plays the Smell Area Effect.
		* sets mPlayerCharacter to aPlayerCharacter.
		* If mLatch is true then.
		* Set mLatch to false because this won't trigger again till the player leaves and comes back.
		* Send a message to the SDK telling it to turn on a certain smell for a certain group of Cilias at a specified intensity.
		* @param CiliaGroup group of Cilias that the effect is applied to.
		* @param aPlayerCharacter that we want to trigger the effect upon overlap.
		* @param Smell a smell we want to play when the effect is triggered.
		* @param FanSpeed the fastest speed the fan will spin for this effect.
		*/
		void SmellAreaEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, SmellList Smell, uint8 FanSpeed);
	/**
	* Default Constructor.
	*/
	ASmellAreaTriggerBox();
};
