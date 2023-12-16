// Fill out your copyright notice in the Description page of Project Settings.

#include "CrazyColorTriggerBox.h"
#include "DrawDebugHelpers.h"

void ACrazyColorTriggerBox::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &ACrazyColorTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ACrazyColorTriggerBox::OnOverlapEnd);
	mLatch = false;
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Cyan, true, -1, 0, 5);
}

ACrazyColorTriggerBox::ACrazyColorTriggerBox()
{
}

void ACrazyColorTriggerBox::OnOverlapBegin(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = true;
	}
}

void ACrazyColorTriggerBox::OnOverlapEnd(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = false;
	}
}

void ACrazyColorTriggerBox::CrazyColorEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, float DeltaTime, float SpeedDividerMinOffset, float SpeedDividerMax, uint8 Red, uint8 Green, uint8 Blue, bool FlickerAllTogether)
{
	mPlayerCharacter = aPlayerCharacter;
	if (mLatch)
	{
		//UCiliaPlugin::SurroundLight(CiliaPosition, 1, 255, 255, 255);
		mTimer += DeltaTime;
		if (mTimer > mRandomTime)
		{
			mRandomTime = (SpeedDividerMax * ((float)rand()) / (float)RAND_MAX + SpeedDividerMinOffset);
			mTimer = 0.0f;
			float randomFloat = ((float)rand()) / (float)RAND_MAX;
			float randomFloat2 = ((float)rand()) / (float)RAND_MAX;
			float randomFloat3 = ((float)rand()) / (float)RAND_MAX;
			for (int LightNumberi = 1; LightNumberi < 7; LightNumberi++)
			{
				int redSubtract = (int)((float)Red * randomFloat);
				int redValue = (int)((int)Red - (int)redSubtract);
				int greenSubtract = (int)((float)Green * randomFloat2);
				int greenValue = (int)((int)Green - (int)greenSubtract);
				int blueSubtract = (int)((float)Blue * randomFloat3);
				int blueValue = (int)((int)Blue - (int)blueSubtract);
				UCiliaPluginBluePrint::SurroundLight(CiliaGroup, (LightNumber)LightNumberi, redValue, greenValue, blueValue);
				if (FlickerAllTogether == false)
				{
					randomFloat = ((float)rand()) / (float)RAND_MAX;
					randomFloat2 = ((float)rand()) / (float)RAND_MAX;
					randomFloat3 = ((float)rand()) / (float)RAND_MAX;
				}
			}
		}
	}
	return;
}