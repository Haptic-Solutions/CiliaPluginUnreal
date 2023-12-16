// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CiliaPlugin/Public/CiliaGroupsList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCiliaGroupsList() {}
// Cross Module References
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList();
	UPackage* Z_Construct_UPackage__Script_CiliaPlugin();
// End Cross Module References
	static UEnum* CiliaGroupsList_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList, Z_Construct_UPackage__Script_CiliaPlugin(), TEXT("CiliaGroupsList"));
		}
		return Singleton;
	}
	template<> CILIAPLUGIN_API UEnum* StaticEnum<CiliaGroupsList>()
	{
		return CiliaGroupsList_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CiliaGroupsList(CiliaGroupsList_StaticEnum, TEXT("/Script/CiliaPlugin"), TEXT("CiliaGroupsList"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList_Hash() { return 1482487160U; }
	UEnum* Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CiliaPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CiliaGroupsList"), 0, Get_Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CiliaGroupsList::Group1", (int64)CiliaGroupsList::Group1 },
				{ "CiliaGroupsList::Group2", (int64)CiliaGroupsList::Group2 },
				{ "CiliaGroupsList::Group3", (int64)CiliaGroupsList::Group3 },
				{ "CiliaGroupsList::Group4", (int64)CiliaGroupsList::Group4 },
				{ "CiliaGroupsList::Group5", (int64)CiliaGroupsList::Group5 },
				{ "CiliaGroupsList::Group6", (int64)CiliaGroupsList::Group6 },
				{ "CiliaGroupsList::Group7", (int64)CiliaGroupsList::Group7 },
				{ "CiliaGroupsList::Group8", (int64)CiliaGroupsList::Group8 },
				{ "CiliaGroupsList::All", (int64)CiliaGroupsList::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "CiliaGroupsList::All" },
				{ "Group1.Name", "CiliaGroupsList::Group1" },
				{ "Group2.Name", "CiliaGroupsList::Group2" },
				{ "Group3.Name", "CiliaGroupsList::Group3" },
				{ "Group4.Name", "CiliaGroupsList::Group4" },
				{ "Group5.Name", "CiliaGroupsList::Group5" },
				{ "Group6.Name", "CiliaGroupsList::Group6" },
				{ "Group7.Name", "CiliaGroupsList::Group7" },
				{ "Group8.Name", "CiliaGroupsList::Group8" },
				{ "ModuleRelativePath", "Public/CiliaGroupsList.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CiliaPlugin,
				nullptr,
				"CiliaGroupsList",
				"CiliaGroupsList",
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
