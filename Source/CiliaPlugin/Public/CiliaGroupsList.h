#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#pragma once
UENUM()
enum class CiliaGroupsList : uint8
{
	Group1,Group2,Group3,Group4,Group5,Group6,Group7,Group8,All
};
const TArray<FString> mGroupsStringList = { "Group1","Group2","Group3","Group4","Group5","Group6","Group7","Group8"};
