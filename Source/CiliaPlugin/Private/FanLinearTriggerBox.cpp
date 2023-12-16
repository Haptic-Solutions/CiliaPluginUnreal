// Fill out your copyright notice in the Description page of Project Settings.

#include "FanLinearTriggerBox.h"
#include "DrawDebugHelpers.h"

void AFanLinearTriggerBox::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AFanLinearTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AFanLinearTriggerBox::OnOverlapEnd);
	mLatch = false;
	FVector center = { 0.0f,0.0f,0.0f };
	FBox bounds = GetComponentsBoundingBox();
	mFanRadius = ((bounds.GetSize() / 2) - center).Size();
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Cyan, true, -1, 0, 5);
}

AFanLinearTriggerBox::AFanLinearTriggerBox()
{
}

void AFanLinearTriggerBox::OnOverlapBegin(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = true;
	}
}

void AFanLinearTriggerBox::OnOverlapEnd(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = false;
		UCiliaPluginBluePrint::FanSmell(mSmell, mCiliaGroup, 0);
	}
}

void AFanLinearTriggerBox::FanLinearEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, SmellList Smell, bool SizeIsDynamic, uint8 FanMaxSpeed)
{
	mPlayerCharacter = aPlayerCharacter;
	if (mLatch)
	{
		if (SizeIsDynamic)
		{
			FVector center = { 0.0f,0.0f,0.0f };
			FBox bounds = GetComponentsBoundingBox();
			mFanRadius = ((bounds.GetSize() / 2) - center).Size();
		}
		mSmell = Smell;
		mCiliaGroup = CiliaGroup;
		//RootComponent->GetComponentLocation();
		float Distance = (aPlayerCharacter->GetActorLocation() - GetActorLocation()).Size();
		if (Distance != oldDistance)
		{
			oldDistance = Distance;

			int SmellIntensity = (int)((float)FanMaxSpeed * (mFanRadius - Distance) / mFanRadius);
			UCiliaPluginBluePrint::FanSmell(Smell, CiliaGroup, SmellIntensity);
		}
	}
}
