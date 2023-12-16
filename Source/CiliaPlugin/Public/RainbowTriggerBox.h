// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CiliaPluginBluePrint.h"
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "RainbowTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class CILIAPLUGIN_API ARainbowTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
private:
	AActor* mPlayerCharacter;
	bool mLatch;
	float timer;
	int colorI = 0;
	int colorDurI = 0;
	int L1[3];
	int L2[3];
	int L3[3];
	int L4[3];
	int L5[3];
	int L6[3];
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
		* Plays the Rainbow Effect.
		* sets mPlayerCharacter to aPlayerCharacter.
		* If mLatch is true then Plays Rainbow Effect.
		* Cycles through rainbow colors.
		* @param CiliaGroup group of Cilias that the effect is applied to.
		* @param aPlayerCharacter that we want to trigger the effect upon overlap.
		* @param DeltaTime How much time has ellapsed since the last time the function was called.
		* @param SpeedDivider how much time has to elapse before a frame of the breath effect is played.
		* @param colorDuration How many lights will show a color before transitioning to the next color.
		*/
		void RainbowEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, float DeltaTime, float SpeedDivider, int colorDuration);
	/**
	*Default Constructor.
	*/
	ARainbowTriggerBox();
};
