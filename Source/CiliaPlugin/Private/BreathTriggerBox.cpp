// Fill out your copyright notice in the Description page of Project Settings.

#include "BreathTriggerBox.h"
#include "DrawDebugHelpers.h"

void ABreathTriggerBox::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &ABreathTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ABreathTriggerBox::OnOverlapEnd);
	mLatch = false;
	mBreathCounter = 0.0f;
	breathCounter2 = 0.0f;
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Cyan, true, -1, 0, 5);
}

ABreathTriggerBox::ABreathTriggerBox()
{
}

void ABreathTriggerBox::OnOverlapBegin(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = true;
	}
}

void ABreathTriggerBox::OnOverlapEnd(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = false;
	}
}

void ABreathTriggerBox::BreathEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, float DeltaTime, float SpeedDivider, float TransitionLength, uint8 Red, uint8 Green, uint8 Blue, uint8 Red2, uint8 Green2, uint8 Blue2)
{
	mPlayerCharacter = aPlayerCharacter;
	if (mLatch)
	{
		//UCiliaPlugin::SurroundLight(CiliaPosition, 1, 255, 255, 255);
		mBreathCounter += DeltaTime;
		if (mBreathCounter > SpeedDivider)
		{
			mBreathCounter = 0;
			int breathCounterDouble;
			if (breathCounter2 < TransitionLength)
				breathCounterDouble = breathCounter2++;
			else
				breathCounterDouble = TransitionLength - (breathCounter2++ - TransitionLength);
			float transitionFloat = (float)breathCounterDouble / (float)(TransitionLength);
			int redValue = int(Red * transitionFloat + Red2 * (1 - transitionFloat));
			int blueValue = int(Blue * transitionFloat + Blue2 * (1 - transitionFloat));
			int greenValue = int(Green * transitionFloat + Green2 * (1 - transitionFloat));
			for (int LightNumberi = 1; LightNumberi < 7; LightNumberi++)
			{
				UCiliaPluginBluePrint::SurroundLight(CiliaGroup, (LightNumber)LightNumberi, redValue, greenValue, blueValue);
			}
			if (breathCounter2 >(TransitionLength * 2))
				breathCounter2 = 0;
		}
	}
	return;
}