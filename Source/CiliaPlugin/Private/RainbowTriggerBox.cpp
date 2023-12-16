// Fill out your copyright notice in the Description page of Project Settings.

#include "RainbowTriggerBox.h"
#include "DrawDebugHelpers.h"

void ARainbowTriggerBox::BeginPlay()
{
	L1[0] = 255;
	L1[1] = 255;
	L1[2] = 0;
	L2[0] = 255;
	L2[1] = 255;
	L2[2] = 0;
	L3[0] = 128;
	L3[1] = 255;
	L3[2] = 0;
	L4[0] = 128;
	L4[1] = 255;
	L4[2] = 0;
	L5[0] = 128;
	L5[1] = 255;
	L5[2] = 0;
	L6[0] = 128;
	L6[1] = 255;
	L6[2] = 0;
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &ARainbowTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ARainbowTriggerBox::OnOverlapEnd);
	mLatch = false;
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Cyan, true, -1, 0, 5);
}

ARainbowTriggerBox::ARainbowTriggerBox()
{
}

void ARainbowTriggerBox::OnOverlapBegin(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = true;
	}
}

void ARainbowTriggerBox::OnOverlapEnd(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = false;
	}
}

void ARainbowTriggerBox::RainbowEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, float DeltaTime, float SpeedDivider, int colorDuration)
{
	mPlayerCharacter = aPlayerCharacter;
	if (mLatch)
	{
		//UCiliaPlugin::SurroundLight(CiliaPosition, 1, 255, 255, 255);
		timer += DeltaTime;
		if (timer > SpeedDivider)
		{
			timer = 0.0f;
			int LightNumberi = 1;
			UCiliaPluginBluePrint::SurroundLight(CiliaGroup, (LightNumber)LightNumberi++, L1[0], L1[1], L1[2]);
			UCiliaPluginBluePrint::SurroundLight(CiliaGroup, (LightNumber)LightNumberi++, L2[0], L2[1], L2[2]);
			UCiliaPluginBluePrint::SurroundLight(CiliaGroup, (LightNumber)LightNumberi++, L3[0], L3[1], L3[2]);
			UCiliaPluginBluePrint::SurroundLight(CiliaGroup, (LightNumber)LightNumberi++, L4[0], L4[1], L4[2]);
			UCiliaPluginBluePrint::SurroundLight(CiliaGroup, (LightNumber)LightNumberi++, L5[0], L5[1], L5[2]);
			UCiliaPluginBluePrint::SurroundLight(CiliaGroup, (LightNumber)LightNumberi++, L6[0], L6[1], L6[2]);
			L1[0] = L2[0];
			L1[1] = L2[1];
			L1[2] = L2[2];
			L2[0] = L3[0];
			L2[1] = L3[1];
			L2[2] = L3[2];
			L3[0] = L4[0];
			L3[1] = L4[1];
			L3[2] = L4[2];
			L4[0] = L5[0];
			L4[1] = L5[1];
			L4[2] = L5[2];
			L5[0] = L6[0];
			L5[1] = L6[1];
			L5[2] = L6[2];

			switch (colorI)
			{
			case 0:
				L6[0] = 0; L6[1] = 255; L6[2] = 0; break;
			case 1:
				L6[0] = 0; L6[1] = 255; L6[2] = 128; break;
			case 2:
				L6[0] = 0; L6[1] = 255; L6[2] = 255; break;
			case 3:
				L6[0] = 0; L6[1] = 128; L6[2] = 255; break;
			case 4:
				L6[0] = 0; L6[1] = 0; L6[2] = 255; break;
			case 5:
				L6[0] = 128; L6[1] = 0; L6[2] = 255; break;
			case 6:
				L6[0] = 255; L6[1] = 0; L6[2] = 255; break;
			case 7:
				L6[0] = 255; L6[1] = 0; L6[2] = 128; break;
			case 8:
				L6[0] = 255; L6[1] = 0; L6[2] = 0; break;
			case 9:
				L6[0] = 255; L6[1] = 128; L6[2] = 0; break;
			case 10:
				L6[0] = 255; L6[1] = 255; L6[2] = 0; break;
			case 11:
				L6[0] = 128; L6[1] = 255; L6[2] = 0; break;
			default:
				break;
			}

			if (colorDurI++ == colorDuration)
			{
				colorI++;
				if (colorI == 12)
					colorI = 0;
				colorDurI = 0;
			}
		}
	}
	return;
}