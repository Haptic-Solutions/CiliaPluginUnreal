// Fill out your copyright notice in the Description page of Project Settings.

#include "RippleTriggerBox.h"
#include "DrawDebugHelpers.h"

void ARippleTriggerBox::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &ARippleTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ARippleTriggerBox::OnOverlapEnd);
	mLatch = false;
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Cyan, true, -1, 0, 5);
}

ARippleTriggerBox::ARippleTriggerBox()
{
}

void ARippleTriggerBox::OnOverlapBegin(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = true;
	}
}

void ARippleTriggerBox::OnOverlapEnd(class AActor* aThisActor, class AActor* aOtherActor)
{
	if (aOtherActor == mPlayerCharacter)
	{
		mLatch = false;
	}
}

bool ARippleTriggerBox::CheckValue(int aValue)
{
	if ((aValue < NUMBEROFPIXELS) && (aValue > -1))
		return true;
	else
		return false;
}
void ARippleTriggerBox::GenerateRipple()
{
	
	for (int cleari = 0; cleari < RippleFrames; cleari++)
		for (int clearj = 0; clearj < NUMBEROFPIXELS; clearj++)
			mRippleFrames[cleari][clearj] = 0.0f;
	mRippleSeed = rand() % 6;  // get seed 0-5
	mRippleFrames[0][mRippleSeed] = 1.0f; //set first frame to just have that one pixel darker

	for (int j = 2; j > -1; j--)
	{
		if (CheckValue(mRippleSeed + j))
			mRippleFrames[0][mRippleSeed + j] = (float)(3 - j) * 0.33f;
		if (CheckValue(mRippleSeed - j))
			mRippleFrames[0][mRippleSeed - j] = (float)(3 - j) * 0.33f;
	}

	for (int i = 1; i < RippleFrames; i++)
	{
		mRightItterator += mRightDirection;
		mLeftItterator += mLeftDirection;
		if (((mRippleSeed + mRightItterator) > 4) || ((mRippleSeed + mRightItterator) == (mRippleSeed - mLeftItterator)))
		{
			mRightDirection *= -1;
		}
		if (((mRippleSeed - mLeftItterator) < 1) || ((mRippleSeed - mLeftItterator) == (mRippleSeed + mRightItterator)))
		{
			mLeftDirection *= -1;
		}

		for (int j = 2; j > -1; j--)
		{
			float fallOff = ((float)RippleFrames - i) / (float)RippleFrames; //color fades depending on number of frames
			if (CheckValue(mRippleSeed + mRightItterator + j))
				mRippleFrames[i][mRippleSeed + mRightItterator + j] = (float)(3 - j) * 0.33f * fallOff;
			if (CheckValue(mRippleSeed + mRightItterator - j))
				mRippleFrames[i][mRippleSeed + mRightItterator - j] = (float)(3 - j) * 0.33f * fallOff;
			if (CheckValue(mRippleSeed - mLeftItterator + j))
				mRippleFrames[i][mRippleSeed - mLeftItterator + j] = (float)(3 - j) * 0.33f * fallOff;
			if (CheckValue(mRippleSeed - mLeftItterator - j))
				mRippleFrames[i][mRippleSeed - mLeftItterator - j] = (float)(3 - j) * 0.33f * fallOff;
		}
	}
	mRippleInProgress = true;
}

void ARippleTriggerBox::Ripple(CiliaGroupsList CiliaGroup, uint8 Red, uint8 Green, uint8 Blue, uint8 RedRipple, uint8 GreenRipple, uint8 BlueRipple)
{
	if (mRippleProgression >= RippleFrames)
	{
		mRippleProgression = 0;
		mRippleInProgress = false;
		return;
	}
	int LightNumberi = 1;
	for (int i = 0; i < 6; i++)
	{
		int redCombined = (int)(((float)RedRipple * mRippleFrames[mRippleProgression][i]) + ((float)Red * (1.0f - mRippleFrames[mRippleProgression][i])));
		int greenCombined = (int)(((float)GreenRipple * mRippleFrames[mRippleProgression][i]) + ((float)Green * (1.0f - mRippleFrames[mRippleProgression][i])));
		int blueCombined = (int)(((float)BlueRipple * mRippleFrames[mRippleProgression][i]) + ((float)Blue * (1.0f - mRippleFrames[mRippleProgression][i])));
		UCiliaPluginBluePrint::SurroundLight(CiliaGroup, (LightNumber)LightNumberi++, redCombined, greenCombined, blueCombined);
	}
	mRippleProgression++;
}

void ARippleTriggerBox::RippleEffect(CiliaGroupsList CiliaGroup, class AActor* aPlayerCharacter, float DeltaTime, float SpeedDivider, int Rippleframes, uint8 Red, uint8 Green, uint8 Blue, uint8 RedRipple, uint8 GreenRipple, uint8 BlueRipple)
{
	mPlayerCharacter = aPlayerCharacter;
	if (!mResized)
	{
		mRippleFrames.resize(RippleFrames, std::vector<float>(NUMBEROFPIXELS));
		mResized = true;
	}
	if (mLatch)
	{
		mTimer += DeltaTime;
		if (mTimer > SpeedDivider)
		{
			mTimer = 0.0f;
			if (mRippleInProgress == false)
			{
				for (int LightNumberi = 1; LightNumberi < 7; LightNumberi++)
					UCiliaPluginBluePrint::SurroundLight(CiliaGroup, (LightNumber)LightNumberi, Red, Green, Blue);
				GenerateRipple();
			}
			else
			{
				Ripple(CiliaGroup, Red, Green, Blue, RedRipple, GreenRipple, BlueRipple);
			}
		}
	}
	return;
}


