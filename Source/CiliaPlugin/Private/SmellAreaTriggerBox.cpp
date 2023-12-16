// Fill out your copyright notice in the Description page of Project Settings.
#include "SmellAreaTriggerBox.h"
#include "DrawDebugHelpers.h"

void ASmellAreaTriggerBox::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &ASmellAreaTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ASmellAreaTriggerBox::OnOverlapEnd);
	mLatch = false;
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Cyan, true, -1, 0, 5);
}

ASmellAreaTriggerBox::ASmellAreaTriggerBox()
{
}

void ASmellAreaTriggerBox::OnOverlapBegin(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = true;
	}
}

void ASmellAreaTriggerBox::OnOverlapEnd(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = false;
		UCiliaPluginBluePrint::FanSmell(mSmell, mCiliaGroup, 0);
	}
}

void ASmellAreaTriggerBox::SmellAreaEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, SmellList Smell, uint8 FanSpeed)
{
	mPlayerCharacter = aPlayerCharacter;
	if (mLatch)
	{
		mLatch = false; //since speed does not vary go ahead and set to false
		mSmell = Smell;
		mCiliaGroup = CiliaGroup;
		UCiliaPluginBluePrint::FanSmell(Smell, CiliaGroup, FanSpeed);
	}
}
