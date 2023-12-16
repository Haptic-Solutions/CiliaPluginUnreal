// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CiliaPlugin/Public/SmellsList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmellsList() {}
// Cross Module References
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_SmellList();
	UPackage* Z_Construct_UPackage__Script_CiliaPlugin();
// End Cross Module References
	static UEnum* SmellList_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CiliaPlugin_SmellList, Z_Construct_UPackage__Script_CiliaPlugin(), TEXT("SmellList"));
		}
		return Singleton;
	}
	template<> CILIAPLUGIN_API UEnum* StaticEnum<SmellList>()
	{
		return SmellList_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SmellList(SmellList_StaticEnum, TEXT("/Script/CiliaPlugin"), TEXT("SmellList"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CiliaPlugin_SmellList_Hash() { return 1350796758U; }
	UEnum* Z_Construct_UEnum_CiliaPlugin_SmellList()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CiliaPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SmellList"), 0, Get_Z_Construct_UEnum_CiliaPlugin_SmellList_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SmellList::Pine", (int64)SmellList::Pine },
				{ "SmellList::Birch", (int64)SmellList::Birch },
				{ "SmellList::Spruce", (int64)SmellList::Spruce },
				{ "SmellList::Oak", (int64)SmellList::Oak },
				{ "SmellList::Cyprus", (int64)SmellList::Cyprus },
				{ "SmellList::Elm", (int64)SmellList::Elm },
				{ "SmellList::Pecan", (int64)SmellList::Pecan },
				{ "SmellList::Maple", (int64)SmellList::Maple },
				{ "SmellList::Lemon", (int64)SmellList::Lemon },
				{ "SmellList::Lime", (int64)SmellList::Lime },
				{ "SmellList::Cherry", (int64)SmellList::Cherry },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Birch.Name", "SmellList::Birch" },
				{ "Cherry.Name", "SmellList::Cherry" },
				{ "Cyprus.Name", "SmellList::Cyprus" },
				{ "Elm.Name", "SmellList::Elm" },
				{ "Lemon.Name", "SmellList::Lemon" },
				{ "Lime.Name", "SmellList::Lime" },
				{ "Maple.Name", "SmellList::Maple" },
				{ "ModuleRelativePath", "Public/SmellsList.h" },
				{ "Oak.Name", "SmellList::Oak" },
				{ "Pecan.Name", "SmellList::Pecan" },
				{ "Pine.Name", "SmellList::Pine" },
				{ "Spruce.Name", "SmellList::Spruce" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CiliaPlugin,
				nullptr,
				"SmellList",
				"SmellList",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
