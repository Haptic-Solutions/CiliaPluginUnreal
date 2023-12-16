#include <unordered_map>
#include "CoreMinimal.h"
 #include "UObject/ObjectMacros.h"
#pragma once
UENUM()
enum class SmellList : uint8
{
	Pine,Birch,Spruce,Oak,Cyprus,Elm,Pecan,Maple,Lemon,Lime,Cherry
};
const TArray<FString> mSmellsStringList = { "Pine","Birch","Spruce","Oak","Cyprus","Elm","Pecan","Maple","Lemon","Lime","Cherry"};
const std::unordered_map<SmellList,FString> SmellsToStrings =
{
	{
		SmellList::Pine,
		"Pine"
	},
	{
		SmellList::Birch,
		"Birch"
	},
	{
		SmellList::Spruce,
		"Spruce"
	},
	{
		SmellList::Oak,
		"Oak"
	},
	{
		SmellList::Cyprus,
		"Cyprus"
	},
	{
		SmellList::Elm,
		"Elm"
	},
	{
		SmellList::Pecan,
		"Pecan"
	},
	{
		SmellList::Maple,
		"Maple"
	},
	{
		SmellList::Lemon,
		"Lemon"
	},
	{
		SmellList::Lime,
		"Lime"
	},
	{
		SmellList::Cherry,
		"Cherry"
	}
};