// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CILIAPLUGIN_SmellsList_generated_h
#error "SmellsList.generated.h already included, missing '#pragma once' in SmellsList.h"
#endif
#define CILIAPLUGIN_SmellsList_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellsList_h


#define FOREACH_ENUM_SMELLLIST(op) \
	op(SmellList::Pine) \
	op(SmellList::Birch) \
	op(SmellList::Spruce) \
	op(SmellList::Oak) \
	op(SmellList::Cyprus) \
	op(SmellList::Elm) \
	op(SmellList::Pecan) \
	op(SmellList::Maple) \
	op(SmellList::Lemon) \
	op(SmellList::Lime) \
	op(SmellList::Cherry) 

enum class SmellList : uint8;
template<> CILIAPLUGIN_API UEnum* StaticEnum<SmellList>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
