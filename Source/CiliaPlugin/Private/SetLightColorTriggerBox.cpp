// Fill out your copyright notice in the Description page of Project Settings.

#include "SetLightColorTriggerBox.h"
#include "DrawDebugHelpers.h"

void ASetLightColorTriggerBox::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &ASetLightColorTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ASetLightColorTriggerBox::OnOverlapEnd);
	mLatch = false;
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Cyan, true, -1, 0, 5);
}

ASetLightColorTriggerBox::ASetLightColorTriggerBox()
{
}

void ASetLightColorTriggerBox::OnOverlapBegin(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = true;
	}
}

void ASetLightColorTriggerBox::OnOverlapEnd(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = false;
	}
}

void ASetLightColorTriggerBox::SetLightColorEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, uint8 Light1Red, uint8 Light1Green, uint8 Light1Blue, uint8 Light2Red, uint8 Light2Green, uint8 Light2Blue, uint8 Light3Red, uint8 Light3Green, uint8 Light3Blue, uint8 Light4Red, uint8 Light4Green, uint8 Light4Blue, uint8 Light5Red, uint8 Light5Green, uint8 Light5Blue, uint8 Light6Red, uint8 Light6Green, uint8 Light6Blue)
{
	mPlayerCharacter = aPlayerCharacter;
	if (mLatch)
	{
		mLatch = false;//only needs to fire once per collision
		UCiliaPluginBluePrint::SurroundLight(CiliaGroup, LightNumber::Light1, Light1Red, Light1Green, Light1Blue);
		UCiliaPluginBluePrint::SurroundLight(CiliaGroup, LightNumber::Light2, Light2Red, Light2Green, Light2Blue);
		UCiliaPluginBluePrint::SurroundLight(CiliaGroup, LightNumber::Light3, Light3Red, Light3Green, Light3Blue);
		UCiliaPluginBluePrint::SurroundLight(CiliaGroup, LightNumber::Light4, Light4Red, Light4Green, Light4Blue);
		UCiliaPluginBluePrint::SurroundLight(CiliaGroup, LightNumber::Light5, Light5Red, Light5Green, Light5Blue);
		UCiliaPluginBluePrint::SurroundLight(CiliaGroup, LightNumber::Light6, Light6Red, Light6Green, Light6Blue);
	}
}