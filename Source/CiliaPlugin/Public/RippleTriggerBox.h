// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <vector>

#include "CiliaPluginBluePrint.h"
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "RippleTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class CILIAPLUGIN_API ARippleTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
private:
	AActor* mPlayerCharacter;
	bool mLatch;

	float mTimer = 0.0f;
	int mRippleProgression = 0;

	int mLeftItterator = 1;
	int mRightItterator = 1;

	int mLeftDirection = 1;
	int mRightDirection = 1;

	int RippleFrames = 50;

	float mFallOff = 0.00f;

	std::vector<std::vector<float>>mRippleFrames;

	bool mRippleInProgress = false;

	int mRippleSeed = 0;
	/**
	* Generates frames of ripple effect and stores them in mRippleFrames.
	*/
	void GenerateRipple();
	/**
	* Plays a frame of the ripple effect.
	* @param CiliaGroup group of Cilia the effect will be played on.
	* @param Red value between 0 and 255 component of the first light color in the effect.
	* @param Green value between 0 and 255 component of the first light color in the effect.
	* @param Blue value between 0 and 255 component of the first light color in the effect.
	* @param RedRipple value between 0 and 255 component of the second light color in the effect.
	* @param GreenRipple value between 0 and 255 component of the second light color in the effect.
	* @param BlueRipple value between 0 and 255 component of the second light color in the effect.
	*/
	void Ripple(CiliaGroupsList CiliaGroup, uint8 Red, uint8 Green, uint8 Blue, uint8 RedRipple, uint8 GreenRipple, uint8 BlueRipple);
	bool CheckValue(int aValue);

	bool mResized = false;
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
		* Plays the Ripple Effect.
		* sets mPlayerCharacter to aPlayerCharacter.
		* If mLatch is true then Plays Ripple Effect.
		* Shows a primary color then chooses a seed for a secondary color to start at. That ripple spreads out from there and bounces off edges and itself and slowly fades out over course of the effect.
		* @param CiliaGroup group of Cilias that the effect is applied to.
		* @param aPlayerCharacter that we want to trigger the effect upon overlap.
		* @param DeltaTime How much time has ellapsed since the last time the function was called.
		* @param SpeedDivider how much time has to elapse before a frame of the breath effect is played.
		* @param Rippleframes The number of frames the effect lasts for. Also, used in determining fade out of effect.
		* @param Red value between 0 and 255 component of the first light color in the effect.
		* @param Green value between 0 and 255 component of the first light color in the effect.
		* @param Blue value between 0 and 255 component of the first light color in the effect.
		* @param RedRipple value between 0 and 255 component of the second light color in the effect.
		* @param GreenRipple value between 0 and 255 component of the second light color in the effect.
		* @param BlueRipple value between 0 and 255 component of the second light color in the effect.
		*/
		void RippleEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, float DeltaTime, float SpeedDivider, int Rippleframes, uint8 Red, uint8 Green, uint8 Blue, uint8 RedRipple, uint8 GreenRipple, uint8 BlueRipple);
	/**
	*Default Constructor.
	*/
	ARippleTriggerBox();
};
