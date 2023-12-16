// Fill out your copyright notice in the Description page of Project Settings.

#include "VariableBrightnessTriggerBox.h"
#include "DrawDebugHelpers.h"

void AVariableBrightnessTriggerBox::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AVariableBrightnessTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AVariableBrightnessTriggerBox::OnOverlapEnd);
	mLatch = false;
	FVector center = { 0.0f,0.0f,0.0f };
	FBox bounds = GetComponentsBoundingBox();
	mLightRadius = ((bounds.GetSize() / 2) - center).Size();
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Cyan, true, -1, 0, 5);
}

AVariableBrightnessTriggerBox::AVariableBrightnessTriggerBox()
{
}

void AVariableBrightnessTriggerBox::OnOverlapBegin(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = true;
	}
}

void AVariableBrightnessTriggerBox::OnOverlapEnd(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = false;
		for (int i = 1; i < 7; i++)
		{
			UCiliaPluginBluePrint::SurroundLight(mCiliaPosition, (LightNumber)i, 0, 0, 0);
		}
	}
}

void AVariableBrightnessTriggerBox::LightVariableBrightnessEffect(CiliaGroupsList CiliaPosition, class AActor* aPlayerCharacter, bool SizeIsDynamic, uint8 Light1Red, uint8 Light1Green, uint8 Light1Blue, uint8 Light2Red, uint8 Light2Green, uint8 Light2Blue, uint8 Light3Red, uint8 Light3Green, uint8 Light3Blue, uint8 Light4Red, uint8 Light4Green, uint8 Light4Blue, uint8 Light5Red, uint8 Light5Green, uint8 Light5Blue, uint8 Light6Red, uint8 Light6Green, uint8 Light6Blue)
{
	mPlayerCharacter = aPlayerCharacter;
	if (mLatch)
	{
		if (SizeIsDynamic)
		{
			FVector center = { 0.0f,0.0f,0.0f };
			FBox bounds = GetComponentsBoundingBox();
			mLightRadius = ((bounds.GetSize() / 2) - center).Size();
		}
		mCiliaPosition = CiliaPosition;
		//RootComponent->GetComponentLocation();
		float Distance = (aPlayerCharacter->GetActorLocation() - GetActorLocation()).Size();
		if (Distance != oldDistance)
		{
			oldDistance = Distance;
			LVBEComputeLightValuesandSend(CiliaPosition, 1, Light1Red, Light1Green, Light1Blue, Distance);
			LVBEComputeLightValuesandSend(CiliaPosition, 2, Light2Red, Light2Green, Light2Blue, Distance);
			LVBEComputeLightValuesandSend(CiliaPosition, 3, Light3Red, Light3Green, Light3Blue, Distance);
			LVBEComputeLightValuesandSend(CiliaPosition, 4, Light4Red, Light4Green, Light4Blue, Distance);
			LVBEComputeLightValuesandSend(CiliaPosition, 5, Light5Red, Light5Green, Light5Blue, Distance);
			LVBEComputeLightValuesandSend(CiliaPosition, 6, Light6Red, Light6Green, Light6Blue, Distance);
		}
	}
}

void AVariableBrightnessTriggerBox::LVBEComputeLightValuesandSend(CiliaGroupsList CiliaPosition,int aLight, uint8 aLightRed, uint8 aLightGreen, uint8 aLightBlue, float aDistance)
{
	int LightRedValue = (int)((float)aLightRed * (mLightRadius - aDistance) / mLightRadius);
	int LightGreenValue = (int)((float)aLightGreen * (mLightRadius - aDistance) / mLightRadius);
	int LightBlueValue = (int)((float)aLightBlue * (mLightRadius - aDistance) / mLightRadius);
	UCiliaPluginBluePrint::SurroundLight(CiliaPosition, (LightNumber)aLight, LightRedValue, LightGreenValue, LightBlueValue);
}