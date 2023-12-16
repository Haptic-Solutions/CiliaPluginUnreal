// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CiliaPlugin/Public/CiliaPluginBluePrint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCiliaPluginBluePrint() {}
// Cross Module References
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_LightNumber();
	UPackage* Z_Construct_UPackage__Script_CiliaPlugin();
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_FanNumber();
	CILIAPLUGIN_API UClass* Z_Construct_UClass_UCiliaPluginBluePrint_NoRegister();
	CILIAPLUGIN_API UClass* Z_Construct_UClass_UCiliaPluginBluePrint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList();
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_SmellList();
// End Cross Module References
	static UEnum* LightNumber_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CiliaPlugin_LightNumber, Z_Construct_UPackage__Script_CiliaPlugin(), TEXT("LightNumber"));
		}
		return Singleton;
	}
	template<> CILIAPLUGIN_API UEnum* StaticEnum<LightNumber>()
	{
		return LightNumber_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_LightNumber(LightNumber_StaticEnum, TEXT("/Script/CiliaPlugin"), TEXT("LightNumber"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CiliaPlugin_LightNumber_Hash() { return 2339093572U; }
	UEnum* Z_Construct_UEnum_CiliaPlugin_LightNumber()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CiliaPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("LightNumber"), 0, Get_Z_Construct_UEnum_CiliaPlugin_LightNumber_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LightNumber::Light1", (int64)LightNumber::Light1 },
				{ "LightNumber::Light2", (int64)LightNumber::Light2 },
				{ "LightNumber::Light3", (int64)LightNumber::Light3 },
				{ "LightNumber::Light4", (int64)LightNumber::Light4 },
				{ "LightNumber::Light5", (int64)LightNumber::Light5 },
				{ "LightNumber::Light6", (int64)LightNumber::Light6 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Light1.Name", "LightNumber::Light1" },
				{ "Light2.Name", "LightNumber::Light2" },
				{ "Light3.Name", "LightNumber::Light3" },
				{ "Light4.Name", "LightNumber::Light4" },
				{ "Light5.Name", "LightNumber::Light5" },
				{ "Light6.Name", "LightNumber::Light6" },
				{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CiliaPlugin,
				nullptr,
				"LightNumber",
				"LightNumber",
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
	static UEnum* FanNumber_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CiliaPlugin_FanNumber, Z_Construct_UPackage__Script_CiliaPlugin(), TEXT("FanNumber"));
		}
		return Singleton;
	}
	template<> CILIAPLUGIN_API UEnum* StaticEnum<FanNumber>()
	{
		return FanNumber_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FanNumber(FanNumber_StaticEnum, TEXT("/Script/CiliaPlugin"), TEXT("FanNumber"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CiliaPlugin_FanNumber_Hash() { return 2363324193U; }
	UEnum* Z_Construct_UEnum_CiliaPlugin_FanNumber()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CiliaPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FanNumber"), 0, Get_Z_Construct_UEnum_CiliaPlugin_FanNumber_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FanNumber::Fan1", (int64)FanNumber::Fan1 },
				{ "FanNumber::Fan2", (int64)FanNumber::Fan2 },
				{ "FanNumber::Fan3", (int64)FanNumber::Fan3 },
				{ "FanNumber::Fan4", (int64)FanNumber::Fan4 },
				{ "FanNumber::Fan5", (int64)FanNumber::Fan5 },
				{ "FanNumber::Fan6", (int64)FanNumber::Fan6 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Fan1.Name", "FanNumber::Fan1" },
				{ "Fan2.Name", "FanNumber::Fan2" },
				{ "Fan3.Name", "FanNumber::Fan3" },
				{ "Fan4.Name", "FanNumber::Fan4" },
				{ "Fan5.Name", "FanNumber::Fan5" },
				{ "Fan6.Name", "FanNumber::Fan6" },
				{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CiliaPlugin,
				nullptr,
				"FanNumber",
				"FanNumber",
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
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execGetPathOfCiliaPlugin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCiliaPluginBluePrint::GetPathOfCiliaPlugin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execGetCiliaGroups)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCiliaPluginBluePrint::GetCiliaGroups();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execGetSmells)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCiliaPluginBluePrint::GetSmells();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execRegenerateSmellAndGroupLists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathOfCiliaPlugin);
		P_GET_TARRAY(FString,Z_Param_Smells);
		P_GET_TARRAY(FString,Z_Param_Groups);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCiliaPluginBluePrint::RegenerateSmellAndGroupLists(Z_Param_PathOfCiliaPlugin,Z_Param_Smells,Z_Param_Groups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execCreateGameProfile)
	{
		P_GET_UBOOL(Z_Param_ForceGameProfileUpdate);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameName);
		P_GET_ENUM(CiliaGroupsList,Z_Param_DefaultCiliaGroup);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light1Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light1Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light1Blue);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light2Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light2Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light2Blue);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light3Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light3Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light3Blue);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light4Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light4Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light4Blue);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light5Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light5Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light5Blue);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light6Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light6Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light6Blue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCiliaPluginBluePrint::CreateGameProfile(Z_Param_ForceGameProfileUpdate,Z_Param_GameName,CiliaGroupsList(Z_Param_DefaultCiliaGroup),Z_Param_Light1Red,Z_Param_Light1Green,Z_Param_Light1Blue,Z_Param_Light2Red,Z_Param_Light2Green,Z_Param_Light2Blue,Z_Param_Light3Red,Z_Param_Light3Green,Z_Param_Light3Blue,Z_Param_Light4Red,Z_Param_Light4Green,Z_Param_Light4Blue,Z_Param_Light5Red,Z_Param_Light5Green,Z_Param_Light5Blue,Z_Param_Light6Red,Z_Param_Light6Green,Z_Param_Light6Blue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execDisconnectCilia)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UCiliaPluginBluePrint::DisconnectCilia();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execConnectCilia)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_aIPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCiliaPluginBluePrint::ConnectCilia(Z_Param_aIPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execSurroundLights)
	{
		P_GET_ENUM(CiliaGroupsList,Z_Param_CiliaGroup);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light1Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light1Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light1Blue);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light2Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light2Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light2Blue);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light3Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light3Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light3Blue);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light4Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light4Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light4Blue);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light5Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light5Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light5Blue);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light6Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light6Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Light6Blue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCiliaPluginBluePrint::SurroundLights(CiliaGroupsList(Z_Param_CiliaGroup),Z_Param_Light1Red,Z_Param_Light1Green,Z_Param_Light1Blue,Z_Param_Light2Red,Z_Param_Light2Green,Z_Param_Light2Blue,Z_Param_Light3Red,Z_Param_Light3Green,Z_Param_Light3Blue,Z_Param_Light4Red,Z_Param_Light4Green,Z_Param_Light4Blue,Z_Param_Light5Red,Z_Param_Light5Green,Z_Param_Light5Blue,Z_Param_Light6Red,Z_Param_Light6Green,Z_Param_Light6Blue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execSurroundLight)
	{
		P_GET_ENUM(CiliaGroupsList,Z_Param_CiliaGroup);
		P_GET_ENUM(LightNumber,Z_Param_LightNumber);
		P_GET_PROPERTY(FByteProperty,Z_Param_Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Blue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCiliaPluginBluePrint::SurroundLight(CiliaGroupsList(Z_Param_CiliaGroup),LightNumber(Z_Param_LightNumber),Z_Param_Red,Z_Param_Green,Z_Param_Blue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execClearSmell)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TimeInSeconds);
		P_GET_PROPERTY(FByteProperty,Z_Param_FanSpeed);
		P_GET_UBOOL(Z_Param_Fan1);
		P_GET_UBOOL(Z_Param_Fan2);
		P_GET_UBOOL(Z_Param_Fan3);
		P_GET_UBOOL(Z_Param_Fan4);
		P_GET_UBOOL(Z_Param_Fan5);
		P_GET_UBOOL(Z_Param_Fan6);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCiliaPluginBluePrint::ClearSmell(Z_Param_TimeInSeconds,Z_Param_FanSpeed,Z_Param_Fan1,Z_Param_Fan2,Z_Param_Fan3,Z_Param_Fan4,Z_Param_Fan5,Z_Param_Fan6);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execFanSmell)
	{
		P_GET_ENUM(SmellList,Z_Param_Smell);
		P_GET_ENUM(CiliaGroupsList,Z_Param_CiliaGroup);
		P_GET_PROPERTY(FByteProperty,Z_Param_FanSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCiliaPluginBluePrint::FanSmell(SmellList(Z_Param_Smell),CiliaGroupsList(Z_Param_CiliaGroup),Z_Param_FanSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execFan)
	{
		P_GET_ENUM(FanNumber,Z_Param_FanNumber);
		P_GET_PROPERTY(FByteProperty,Z_Param_FanSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCiliaPluginBluePrint::Fan(FanNumber(Z_Param_FanNumber),Z_Param_FanSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCiliaPluginBluePrint::execLight)
	{
		P_GET_ENUM(LightNumber,Z_Param_LightNumber);
		P_GET_PROPERTY(FByteProperty,Z_Param_Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Blue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCiliaPluginBluePrint::Light(LightNumber(Z_Param_LightNumber),Z_Param_Red,Z_Param_Green,Z_Param_Blue);
		P_NATIVE_END;
	}
	void UCiliaPluginBluePrint::StaticRegisterNativesUCiliaPluginBluePrint()
	{
		UClass* Class = UCiliaPluginBluePrint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSmell", &UCiliaPluginBluePrint::execClearSmell },
			{ "ConnectCilia", &UCiliaPluginBluePrint::execConnectCilia },
			{ "CreateGameProfile", &UCiliaPluginBluePrint::execCreateGameProfile },
			{ "DisconnectCilia", &UCiliaPluginBluePrint::execDisconnectCilia },
			{ "Fan", &UCiliaPluginBluePrint::execFan },
			{ "FanSmell", &UCiliaPluginBluePrint::execFanSmell },
			{ "GetCiliaGroups", &UCiliaPluginBluePrint::execGetCiliaGroups },
			{ "GetPathOfCiliaPlugin", &UCiliaPluginBluePrint::execGetPathOfCiliaPlugin },
			{ "GetSmells", &UCiliaPluginBluePrint::execGetSmells },
			{ "Light", &UCiliaPluginBluePrint::execLight },
			{ "RegenerateSmellAndGroupLists", &UCiliaPluginBluePrint::execRegenerateSmellAndGroupLists },
			{ "SurroundLight", &UCiliaPluginBluePrint::execSurroundLight },
			{ "SurroundLights", &UCiliaPluginBluePrint::execSurroundLights },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics
	{
		struct CiliaPluginBluePrint_eventClearSmell_Parms
		{
			uint8 TimeInSeconds;
			uint8 FanSpeed;
			bool Fan1;
			bool Fan2;
			bool Fan3;
			bool Fan4;
			bool Fan5;
			bool Fan6;
		};
		static void NewProp_Fan6_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Fan6;
		static void NewProp_Fan5_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Fan5;
		static void NewProp_Fan4_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Fan4;
		static void NewProp_Fan3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Fan3;
		static void NewProp_Fan2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Fan2;
		static void NewProp_Fan1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Fan1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FanSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TimeInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan6_SetBit(void* Obj)
	{
		((CiliaPluginBluePrint_eventClearSmell_Parms*)Obj)->Fan6 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan6 = { "Fan6", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CiliaPluginBluePrint_eventClearSmell_Parms), &Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan6_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan5_SetBit(void* Obj)
	{
		((CiliaPluginBluePrint_eventClearSmell_Parms*)Obj)->Fan5 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan5 = { "Fan5", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CiliaPluginBluePrint_eventClearSmell_Parms), &Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan5_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan4_SetBit(void* Obj)
	{
		((CiliaPluginBluePrint_eventClearSmell_Parms*)Obj)->Fan4 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan4 = { "Fan4", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CiliaPluginBluePrint_eventClearSmell_Parms), &Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan4_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan3_SetBit(void* Obj)
	{
		((CiliaPluginBluePrint_eventClearSmell_Parms*)Obj)->Fan3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan3 = { "Fan3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CiliaPluginBluePrint_eventClearSmell_Parms), &Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan3_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan2_SetBit(void* Obj)
	{
		((CiliaPluginBluePrint_eventClearSmell_Parms*)Obj)->Fan2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan2 = { "Fan2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CiliaPluginBluePrint_eventClearSmell_Parms), &Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan2_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan1_SetBit(void* Obj)
	{
		((CiliaPluginBluePrint_eventClearSmell_Parms*)Obj)->Fan1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan1 = { "Fan1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CiliaPluginBluePrint_eventClearSmell_Parms), &Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan1_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_FanSpeed = { "FanSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventClearSmell_Parms, FanSpeed), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventClearSmell_Parms, TimeInSeconds), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_Fan1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_FanSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::NewProp_TimeInSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09\x09* Used to clear smell away quickly if needed using fans with no smell.\n\x09\x09* Sends a message to the Cilia SDK to turn on specified fans. Then waits a specified amount of time in seconds before sending another message to turn those fans off.\n\x09\x09* @param TimeInSeconds to wait before turning off fans.\n\x09\x09* @param FanSpeed between 0 and 255 to spin fans to clear smell.\n\x09\x09* @param Fan1 true or false value of if fan 1 is used to clear smell.\n\x09\x09* @param Fan2 true or false value of if fan 1 is used to clear smell.\n\x09\x09* @param Fan3 true or false value of if fan 1 is used to clear smell.\n\x09\x09* @param Fan4 true or false value of if fan 1 is used to clear smell.\n\x09\x09* @param Fan5 true or false value of if fan 1 is used to clear smell.\n\x09\x09* @param Fan6 true or false value of if fan 1 is used to clear smell.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
		{ "ToolTip", "Used to clear smell away quickly if needed using fans with no smell.\nSends a message to the Cilia SDK to turn on specified fans. Then waits a specified amount of time in seconds before sending another message to turn those fans off.\n@param TimeInSeconds to wait before turning off fans.\n@param FanSpeed between 0 and 255 to spin fans to clear smell.\n@param Fan1 true or false value of if fan 1 is used to clear smell.\n@param Fan2 true or false value of if fan 1 is used to clear smell.\n@param Fan3 true or false value of if fan 1 is used to clear smell.\n@param Fan4 true or false value of if fan 1 is used to clear smell.\n@param Fan5 true or false value of if fan 1 is used to clear smell.\n@param Fan6 true or false value of if fan 1 is used to clear smell." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "ClearSmell", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventClearSmell_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics
	{
		struct CiliaPluginBluePrint_eventConnectCilia_Parms
		{
			FString aIPAddress;
			int32 Port;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_aIPAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventConnectCilia_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::NewProp_aIPAddress = { "aIPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventConnectCilia_Parms, aIPAddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::NewProp_aIPAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09* Connects the Cilia to the Cilia SDK by TCP/IP at a specified IPAddress and a specified port.\n\x09* Defaults to IP Address 127.0.0.1 (localhost) if invalid IPAddress is used.\n\x09* @param aIPAddress string value of the ipv4 address the Cilia SDK is hosted on.\n\x09* @param Port that the Cilia SDK is hosted on.\n\x09*/" },
		{ "CPP_Default_aIPAddress", "127.0.0.1" },
		{ "CPP_Default_Port", "1995" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
		{ "ToolTip", "Connects the Cilia to the Cilia SDK by TCP/IP at a specified IPAddress and a specified port.\nDefaults to IP Address 127.0.0.1 (localhost) if invalid IPAddress is used.\n@param aIPAddress string value of the ipv4 address the Cilia SDK is hosted on.\n@param Port that the Cilia SDK is hosted on." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "ConnectCilia", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventConnectCilia_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics
	{
		struct CiliaPluginBluePrint_eventCreateGameProfile_Parms
		{
			bool ForceGameProfileUpdate;
			FString GameName;
			CiliaGroupsList DefaultCiliaGroup;
			uint8 Light1Red;
			uint8 Light1Green;
			uint8 Light1Blue;
			uint8 Light2Red;
			uint8 Light2Green;
			uint8 Light2Blue;
			uint8 Light3Red;
			uint8 Light3Green;
			uint8 Light3Blue;
			uint8 Light4Red;
			uint8 Light4Green;
			uint8 Light4Blue;
			uint8 Light5Red;
			uint8 Light5Green;
			uint8 Light5Blue;
			uint8 Light6Red;
			uint8 Light6Green;
			uint8 Light6Blue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light6Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light6Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light6Red;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light5Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light5Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light5Red;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light4Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light4Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light4Red;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light3Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light3Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light3Red;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light2Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light2Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light2Red;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light1Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light1Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light1Red;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultCiliaGroup;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultCiliaGroup_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameName;
		static void NewProp_ForceGameProfileUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceGameProfileUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light6Blue = { "Light6Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light6Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light6Green = { "Light6Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light6Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light6Red = { "Light6Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light6Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light5Blue = { "Light5Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light5Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light5Green = { "Light5Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light5Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light5Red = { "Light5Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light5Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light4Blue = { "Light4Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light4Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light4Green = { "Light4Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light4Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light4Red = { "Light4Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light4Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light3Blue = { "Light3Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light3Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light3Green = { "Light3Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light3Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light3Red = { "Light3Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light3Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light2Blue = { "Light2Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light2Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light2Green = { "Light2Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light2Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light2Red = { "Light2Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light2Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light1Blue = { "Light1Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light1Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light1Green = { "Light1Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light1Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light1Red = { "Light1Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, Light1Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_DefaultCiliaGroup = { "DefaultCiliaGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, DefaultCiliaGroup), Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_DefaultCiliaGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_GameName = { "GameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventCreateGameProfile_Parms, GameName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_ForceGameProfileUpdate_SetBit(void* Obj)
	{
		((CiliaPluginBluePrint_eventCreateGameProfile_Parms*)Obj)->ForceGameProfileUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_ForceGameProfileUpdate = { "ForceGameProfileUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CiliaPluginBluePrint_eventCreateGameProfile_Parms), &Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_ForceGameProfileUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light6Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light6Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light6Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light5Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light5Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light5Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light4Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light4Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light4Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light3Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light3Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light3Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light2Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light2Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light2Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light1Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light1Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_Light1Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_DefaultCiliaGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_DefaultCiliaGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_GameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::NewProp_ForceGameProfileUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09* Sends messages to the Cilia SDK creating of loading a game profile.\n\x09* Also, can localy regenerate the smell and group lists if the path to the plugin is set and the checkbox is set.\n\x09* @param ForceGameProfileUpdate forces the SDK to refresh the Cilia smells to the default smells.\n\x09* @param GameName alphanumeric sting value of the name of the game with no spaces.\n\x09* @param DefaultCiliaGroup the default group that Cilias will be a part of.\n\x09* @param PathOfCiliaPlugin  the path to the Ciia Plugin(only used if regenerating the drop down value for development)\n\x09* @param Smells array of Upper and Lowercase AlphaNonNumeric FStrings naming the smells that the game uses.\n\x09* @param Group array of Upper and Lowercase AlphaNonNumeric FString naming the groups that the Game uses for defining groupings of Cilias.\n\x09* @param RegenerateSmellAndGroupListsDoNotLeaveChecked if checked the plugin regenerates the drop down values for smells and groups based on input arrays.\n\x09* @param Light1Red default value between 0 and 255 to set light 1's red brightness to.\n\x09* @param Light1Green default value between 0 and 255 to set light 1's green brightness to.\n\x09* @param Light1Blue default value between 0 and 255 to set light 1's blue brightness to.\n\x09* @param Light2Red default value between 0 and 255 to set light 2's red brightness to.\n\x09* @param Light2Green default value between 0 and 255 to set light 2's green brightness to.\n\x09* @param Light2Blue default value between 0 and 255 to set light 2's blue brightness to.\n\x09* @param Light3Red default value between 0 and 255 to set light 3's red brightness to.\n\x09* @param Light3Green default value between 0 and 255 to set light 3's green brightness to.\n\x09* @param Light3Blue default value between 0 and 255 to set light 3's blue brightness to.\n\x09* @param Light4Red default value between 0 and 255 to set light 4's red brightness to.\n\x09* @param Light4Green default value between 0 and 255 to set light 4's green brightness to.\n\x09* @param Light4Blue default value between 0 and 255 to set light 4's blue brightness to.\n\x09* @param Light5Red default value between 0 and 255 to set light 5's red brightness to.\n\x09* @param Light5Green default value between 0 and 255 to set light 5's green brightness to.\n\x09* @param Light5Blue default value between 0 and 255 to set light 5's blue brightness to.\n\x09* @param Light6Red default value between 0 and 255 to set light 6's red brightness to.\n\x09* @param Light6Green default value between 0 and 255 to set light 6's green brightness to.\n\x09* @param Light6Blue default value between 0 and 255 to set light 6's blue brightness to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
		{ "ToolTip", "Sends messages to the Cilia SDK creating of loading a game profile.\nAlso, can localy regenerate the smell and group lists if the path to the plugin is set and the checkbox is set.\n@param ForceGameProfileUpdate forces the SDK to refresh the Cilia smells to the default smells.\n@param GameName alphanumeric sting value of the name of the game with no spaces.\n@param DefaultCiliaGroup the default group that Cilias will be a part of.\n@param PathOfCiliaPlugin  the path to the Ciia Plugin(only used if regenerating the drop down value for development)\n@param Smells array of Upper and Lowercase AlphaNonNumeric FStrings naming the smells that the game uses.\n@param Group array of Upper and Lowercase AlphaNonNumeric FString naming the groups that the Game uses for defining groupings of Cilias.\n@param RegenerateSmellAndGroupListsDoNotLeaveChecked if checked the plugin regenerates the drop down values for smells and groups based on input arrays.\n@param Light1Red default value between 0 and 255 to set light 1's red brightness to.\n@param Light1Green default value between 0 and 255 to set light 1's green brightness to.\n@param Light1Blue default value between 0 and 255 to set light 1's blue brightness to.\n@param Light2Red default value between 0 and 255 to set light 2's red brightness to.\n@param Light2Green default value between 0 and 255 to set light 2's green brightness to.\n@param Light2Blue default value between 0 and 255 to set light 2's blue brightness to.\n@param Light3Red default value between 0 and 255 to set light 3's red brightness to.\n@param Light3Green default value between 0 and 255 to set light 3's green brightness to.\n@param Light3Blue default value between 0 and 255 to set light 3's blue brightness to.\n@param Light4Red default value between 0 and 255 to set light 4's red brightness to.\n@param Light4Green default value between 0 and 255 to set light 4's green brightness to.\n@param Light4Blue default value between 0 and 255 to set light 4's blue brightness to.\n@param Light5Red default value between 0 and 255 to set light 5's red brightness to.\n@param Light5Green default value between 0 and 255 to set light 5's green brightness to.\n@param Light5Blue default value between 0 and 255 to set light 5's blue brightness to.\n@param Light6Red default value between 0 and 255 to set light 6's red brightness to.\n@param Light6Green default value between 0 and 255 to set light 6's green brightness to.\n@param Light6Blue default value between 0 and 255 to set light 6's blue brightness to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "CreateGameProfile", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventCreateGameProfile_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_DisconnectCilia_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_DisconnectCilia_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09* Disconnects the Cilia from the Cilia SDK.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
		{ "ToolTip", "Disconnects the Cilia from the Cilia SDK." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_DisconnectCilia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "DisconnectCilia", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_DisconnectCilia_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_DisconnectCilia_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_DisconnectCilia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_DisconnectCilia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics
	{
		struct CiliaPluginBluePrint_eventFan_Parms
		{
			FanNumber FanNumber;
			uint8 FanSpeed;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FanSpeed;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FanNumber;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FanNumber_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::NewProp_FanSpeed = { "FanSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventFan_Parms, FanSpeed), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::NewProp_FanNumber = { "FanNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventFan_Parms, FanNumber), Z_Construct_UEnum_CiliaPlugin_FanNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::NewProp_FanNumber_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::NewProp_FanSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::NewProp_FanNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::NewProp_FanNumber_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09\x09* Sends a message to the Cilia SDK setting the fan speed of a specified fan on all Cilias to a specified speed.\n\x09\x09* @param FanNumber between 1 and 6 that the speed will be set for.\n\x09\x09* @param FanSpeed between 0 and 255 that the fan on each of the Cilias will be set to.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
		{ "ToolTip", "Sends a message to the Cilia SDK setting the fan speed of a specified fan on all Cilias to a specified speed.\n@param FanNumber between 1 and 6 that the speed will be set for.\n@param FanSpeed between 0 and 255 that the fan on each of the Cilias will be set to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "Fan", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventFan_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_Fan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_Fan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics
	{
		struct CiliaPluginBluePrint_eventFanSmell_Parms
		{
			SmellList Smell;
			CiliaGroupsList CiliaGroup;
			uint8 FanSpeed;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FanSpeed;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CiliaGroup;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CiliaGroup_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Smell;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Smell_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::NewProp_FanSpeed = { "FanSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventFanSmell_Parms, FanSpeed), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::NewProp_CiliaGroup = { "CiliaGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventFanSmell_Parms, CiliaGroup), Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::NewProp_CiliaGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::NewProp_Smell = { "Smell", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventFanSmell_Parms, Smell), Z_Construct_UEnum_CiliaPlugin_SmellList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::NewProp_Smell_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::NewProp_FanSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::NewProp_CiliaGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::NewProp_CiliaGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::NewProp_Smell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::NewProp_Smell_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09\x09* Sends a message to the Cilia SDK setting the fan speed of any fan with a specified smell in a specified group of Cilias.\n\x09\x09* @param Smell that we are using to specify which fans we are setting the speed of.\n\x09\x09* @param CiliaGroup that we are setting the fan speeds on.\n\x09\x09* @param FanSpeed between 0 and 255 that the fans will be set to.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
		{ "ToolTip", "Sends a message to the Cilia SDK setting the fan speed of any fan with a specified smell in a specified group of Cilias.\n@param Smell that we are using to specify which fans we are setting the speed of.\n@param CiliaGroup that we are setting the fan speeds on.\n@param FanSpeed between 0 and 255 that the fans will be set to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "FanSmell", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventFanSmell_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups_Statics
	{
		struct CiliaPluginBluePrint_eventGetCiliaGroups_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventGetCiliaGroups_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "GetCiliaGroups", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventGetCiliaGroups_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin_Statics
	{
		struct CiliaPluginBluePrint_eventGetPathOfCiliaPlugin_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventGetPathOfCiliaPlugin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "GetPathOfCiliaPlugin", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventGetPathOfCiliaPlugin_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells_Statics
	{
		struct CiliaPluginBluePrint_eventGetSmells_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventGetSmells_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "GetSmells", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventGetSmells_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics
	{
		struct CiliaPluginBluePrint_eventLight_Parms
		{
			LightNumber LightNumber;
			uint8 Red;
			uint8 Green;
			uint8 Blue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Red;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightNumber;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightNumber_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventLight_Parms, Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventLight_Parms, Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventLight_Parms, Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::NewProp_LightNumber = { "LightNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventLight_Parms, LightNumber), Z_Construct_UEnum_CiliaPlugin_LightNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::NewProp_LightNumber_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::NewProp_Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::NewProp_Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::NewProp_Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::NewProp_LightNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::NewProp_LightNumber_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09\x09* Sends a message to the Cilia SDK setting the value of a specified light to a specified red green blue color.\n\x09\x09* @param LightNumber between 1 and 6 from left to right that the color value will be set on.\n\x09\x09* @param Red value between 0 and 255 to set a lights red brightness to.\n\x09\x09* @param Green value between 0 and 255 to set a lights green brightness to.\n\x09\x09* @param Blue value between 0 and 255 to set a lights blue brightness to.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
		{ "ToolTip", "Sends a message to the Cilia SDK setting the value of a specified light to a specified red green blue color.\n@param LightNumber between 1 and 6 from left to right that the color value will be set on.\n@param Red value between 0 and 255 to set a lights red brightness to.\n@param Green value between 0 and 255 to set a lights green brightness to.\n@param Blue value between 0 and 255 to set a lights blue brightness to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "Light", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventLight_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_Light()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_Light_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics
	{
		struct CiliaPluginBluePrint_eventRegenerateSmellAndGroupLists_Parms
		{
			FString PathOfCiliaPlugin;
			TArray<FString> Smells;
			TArray<FString> Groups;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Groups_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Smells;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Smells_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathOfCiliaPlugin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventRegenerateSmellAndGroupLists_Parms, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::NewProp_Smells = { "Smells", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventRegenerateSmellAndGroupLists_Parms, Smells), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::NewProp_Smells_Inner = { "Smells", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::NewProp_PathOfCiliaPlugin = { "PathOfCiliaPlugin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventRegenerateSmellAndGroupLists_Parms, PathOfCiliaPlugin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::NewProp_Groups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::NewProp_Groups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::NewProp_Smells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::NewProp_Smells_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::NewProp_PathOfCiliaPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09* Regenerates the enumerated types also known as the lists of smells and groups of Cilias based on input FStringArrays.\n\x09* FOR DEVELOPMENT ONLY TURN OFF CHECKBOX IN CREATE GAME PROFILE AFTER GENERATING.\n\x09* @param FString path to CiliaPlugin.\n\x09* @param Smells Fstring array of smells to regenerate the dropdowns (SmellList enum) with.\n\x09* @param Groups Fstring array of smells to regenerate the dropdowns (CiliaGroupsList enum) with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
		{ "ToolTip", "Regenerates the enumerated types also known as the lists of smells and groups of Cilias based on input FStringArrays.\nFOR DEVELOPMENT ONLY TURN OFF CHECKBOX IN CREATE GAME PROFILE AFTER GENERATING.\n@param FString path to CiliaPlugin.\n@param Smells Fstring array of smells to regenerate the dropdowns (SmellList enum) with.\n@param Groups Fstring array of smells to regenerate the dropdowns (CiliaGroupsList enum) with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "RegenerateSmellAndGroupLists", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventRegenerateSmellAndGroupLists_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics
	{
		struct CiliaPluginBluePrint_eventSurroundLight_Parms
		{
			CiliaGroupsList CiliaGroup;
			LightNumber LightNumber;
			uint8 Red;
			uint8 Green;
			uint8 Blue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Red;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightNumber;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightNumber_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CiliaGroup;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CiliaGroup_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLight_Parms, Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLight_Parms, Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLight_Parms, Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_LightNumber = { "LightNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLight_Parms, LightNumber), Z_Construct_UEnum_CiliaPlugin_LightNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_LightNumber_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_CiliaGroup = { "CiliaGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLight_Parms, CiliaGroup), Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_CiliaGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_LightNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_LightNumber_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_CiliaGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::NewProp_CiliaGroup_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09* Sends a message to the Cilia SDK to turn on a specified light in a specified Cilia group to a specified red green blue value.\n\x09* @param LightNumber between 1 and 6 from left to right that the color value will be set on.\n\x09* @param Red value between 0 and 255 to set a lights red brightness to.\n\x09* @param Green value between 0 and 255 to set a lights green brightness to.\n\x09* @param Blue value between 0 and 255 to set a lights blue brightness to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
		{ "ToolTip", "Sends a message to the Cilia SDK to turn on a specified light in a specified Cilia group to a specified red green blue value.\n@param LightNumber between 1 and 6 from left to right that the color value will be set on.\n@param Red value between 0 and 255 to set a lights red brightness to.\n@param Green value between 0 and 255 to set a lights green brightness to.\n@param Blue value between 0 and 255 to set a lights blue brightness to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "SurroundLight", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventSurroundLight_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics
	{
		struct CiliaPluginBluePrint_eventSurroundLights_Parms
		{
			CiliaGroupsList CiliaGroup;
			uint8 Light1Red;
			uint8 Light1Green;
			uint8 Light1Blue;
			uint8 Light2Red;
			uint8 Light2Green;
			uint8 Light2Blue;
			uint8 Light3Red;
			uint8 Light3Green;
			uint8 Light3Blue;
			uint8 Light4Red;
			uint8 Light4Green;
			uint8 Light4Blue;
			uint8 Light5Red;
			uint8 Light5Green;
			uint8 Light5Blue;
			uint8 Light6Red;
			uint8 Light6Green;
			uint8 Light6Blue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light6Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light6Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light6Red;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light5Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light5Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light5Red;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light4Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light4Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light4Red;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light3Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light3Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light3Red;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light2Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light2Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light2Red;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light1Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light1Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Light1Red;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CiliaGroup;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CiliaGroup_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light6Blue = { "Light6Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light6Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light6Green = { "Light6Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light6Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light6Red = { "Light6Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light6Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light5Blue = { "Light5Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light5Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light5Green = { "Light5Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light5Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light5Red = { "Light5Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light5Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light4Blue = { "Light4Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light4Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light4Green = { "Light4Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light4Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light4Red = { "Light4Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light4Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light3Blue = { "Light3Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light3Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light3Green = { "Light3Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light3Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light3Red = { "Light3Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light3Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light2Blue = { "Light2Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light2Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light2Green = { "Light2Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light2Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light2Red = { "Light2Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light2Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light1Blue = { "Light1Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light1Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light1Green = { "Light1Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light1Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light1Red = { "Light1Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, Light1Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_CiliaGroup = { "CiliaGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CiliaPluginBluePrint_eventSurroundLights_Parms, CiliaGroup), Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_CiliaGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light6Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light6Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light6Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light5Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light5Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light5Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light4Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light4Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light4Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light3Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light3Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light3Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light2Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light2Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light2Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light1Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light1Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_Light1Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_CiliaGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::NewProp_CiliaGroup_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09* Sends a message to the Cilia SDK to turn on all lights in a specified Cilia group to specified red green blue values.\n\x09* @param Light1Red value between 0 and 255 to set light 1's red brightness to.\n\x09* @param Light1Green value between 0 and 255 to set light 1's green brightness to.\n\x09* @param Light1Blue value between 0 and 255 to set light 1's blue brightness to.\n\x09* @param Light2Red value between 0 and 255 to set light 2's red brightness to.\n\x09* @param Light2Green value between 0 and 255 to set light 2's green brightness to.\n\x09* @param Light2Blue value between 0 and 255 to set light 2's blue brightness to.\n\x09* @param Light3Red value between 0 and 255 to set light 3's red brightness to.\n\x09* @param Light3Green value between 0 and 255 to set light 3's green brightness to.\n\x09* @param Light3Blue value between 0 and 255 to set light 3's blue brightness to.\n\x09* @param Light4Red value between 0 and 255 to set light 4's red brightness to.\n\x09* @param Light4Green value between 0 and 255 to set light 4's green brightness to.\n\x09* @param Light4Blue value between 0 and 255 to set light 4's blue brightness to.\n\x09* @param Light5Red value between 0 and 255 to set light 5's red brightness to.\n\x09* @param Light5Green value between 0 and 255 to set light 5's green brightness to.\n\x09* @param Light5Blue value between 0 and 255 to set light 5's blue brightness to.\n\x09* @param Light6Red value between 0 and 255 to set light 6's red brightness to.\n\x09* @param Light6Green value between 0 and 255 to set light 6's green brightness to.\n\x09* @param Light6Blue value between 0 and 255 to set alight 6's blue brightness to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
		{ "ToolTip", "Sends a message to the Cilia SDK to turn on all lights in a specified Cilia group to specified red green blue values.\n@param Light1Red value between 0 and 255 to set light 1's red brightness to.\n@param Light1Green value between 0 and 255 to set light 1's green brightness to.\n@param Light1Blue value between 0 and 255 to set light 1's blue brightness to.\n@param Light2Red value between 0 and 255 to set light 2's red brightness to.\n@param Light2Green value between 0 and 255 to set light 2's green brightness to.\n@param Light2Blue value between 0 and 255 to set light 2's blue brightness to.\n@param Light3Red value between 0 and 255 to set light 3's red brightness to.\n@param Light3Green value between 0 and 255 to set light 3's green brightness to.\n@param Light3Blue value between 0 and 255 to set light 3's blue brightness to.\n@param Light4Red value between 0 and 255 to set light 4's red brightness to.\n@param Light4Green value between 0 and 255 to set light 4's green brightness to.\n@param Light4Blue value between 0 and 255 to set light 4's blue brightness to.\n@param Light5Red value between 0 and 255 to set light 5's red brightness to.\n@param Light5Green value between 0 and 255 to set light 5's green brightness to.\n@param Light5Blue value between 0 and 255 to set light 5's blue brightness to.\n@param Light6Red value between 0 and 255 to set light 6's red brightness to.\n@param Light6Green value between 0 and 255 to set light 6's green brightness to.\n@param Light6Blue value between 0 and 255 to set alight 6's blue brightness to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCiliaPluginBluePrint, nullptr, "SurroundLights", nullptr, nullptr, sizeof(CiliaPluginBluePrint_eventSurroundLights_Parms), Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCiliaPluginBluePrint_NoRegister()
	{
		return UCiliaPluginBluePrint::StaticClass();
	}
	struct Z_Construct_UClass_UCiliaPluginBluePrint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCiliaPluginBluePrint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CiliaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCiliaPluginBluePrint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_ClearSmell, "ClearSmell" }, // 3895689217
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_ConnectCilia, "ConnectCilia" }, // 2522488961
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_CreateGameProfile, "CreateGameProfile" }, // 1523882073
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_DisconnectCilia, "DisconnectCilia" }, // 2897001874
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_Fan, "Fan" }, // 3676228135
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_FanSmell, "FanSmell" }, // 56522273
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_GetCiliaGroups, "GetCiliaGroups" }, // 769825926
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_GetPathOfCiliaPlugin, "GetPathOfCiliaPlugin" }, // 3156940821
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_GetSmells, "GetSmells" }, // 2461311706
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_Light, "Light" }, // 810783231
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_RegenerateSmellAndGroupLists, "RegenerateSmellAndGroupLists" }, // 3773200696
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLight, "SurroundLight" }, // 1248140823
		{ &Z_Construct_UFunction_UCiliaPluginBluePrint_SurroundLights, "SurroundLights" }, // 159762069
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCiliaPluginBluePrint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CiliaPluginBluePrint.h" },
		{ "ModuleRelativePath", "Public/CiliaPluginBluePrint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCiliaPluginBluePrint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCiliaPluginBluePrint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCiliaPluginBluePrint_Statics::ClassParams = {
		&UCiliaPluginBluePrint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCiliaPluginBluePrint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCiliaPluginBluePrint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCiliaPluginBluePrint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCiliaPluginBluePrint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCiliaPluginBluePrint, 4106799381);
	template<> CILIAPLUGIN_API UClass* StaticClass<UCiliaPluginBluePrint>()
	{
		return UCiliaPluginBluePrint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCiliaPluginBluePrint(Z_Construct_UClass_UCiliaPluginBluePrint, &UCiliaPluginBluePrint::StaticClass, TEXT("/Script/CiliaPlugin"), TEXT("UCiliaPluginBluePrint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCiliaPluginBluePrint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
