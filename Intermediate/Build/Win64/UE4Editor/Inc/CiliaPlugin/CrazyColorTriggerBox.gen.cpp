// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CiliaPlugin/Public/CrazyColorTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrazyColorTriggerBox() {}
// Cross Module References
	CILIAPLUGIN_API UClass* Z_Construct_UClass_ACrazyColorTriggerBox_NoRegister();
	CILIAPLUGIN_API UClass* Z_Construct_UClass_ACrazyColorTriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_CiliaPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList();
// End Cross Module References
	DEFINE_FUNCTION(ACrazyColorTriggerBox::execCrazyColorEffect)
	{
		P_GET_ENUM(CiliaGroupsList,Z_Param_CiliaGroup);
		P_GET_OBJECT(AActor,Z_Param_aPlayerCharacter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedDividerMinOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedDividerMax);
		P_GET_PROPERTY(FByteProperty,Z_Param_Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Blue);
		P_GET_UBOOL(Z_Param_FlickerAllTogether);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrazyColorEffect(CiliaGroupsList(Z_Param_CiliaGroup),Z_Param_aPlayerCharacter,Z_Param_DeltaTime,Z_Param_SpeedDividerMinOffset,Z_Param_SpeedDividerMax,Z_Param_Red,Z_Param_Green,Z_Param_Blue,Z_Param_FlickerAllTogether);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACrazyColorTriggerBox::execOnOverlapEnd)
	{
		P_GET_OBJECT(AActor,Z_Param_aThisActor);
		P_GET_OBJECT(AActor,Z_Param_aOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_aThisActor,Z_Param_aOtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACrazyColorTriggerBox::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_aThisActor);
		P_GET_OBJECT(AActor,Z_Param_aOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_aThisActor,Z_Param_aOtherActor);
		P_NATIVE_END;
	}
	void ACrazyColorTriggerBox::StaticRegisterNativesACrazyColorTriggerBox()
	{
		UClass* Class = ACrazyColorTriggerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrazyColorEffect", &ACrazyColorTriggerBox::execCrazyColorEffect },
			{ "OnOverlapBegin", &ACrazyColorTriggerBox::execOnOverlapBegin },
			{ "OnOverlapEnd", &ACrazyColorTriggerBox::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics
	{
		struct CrazyColorTriggerBox_eventCrazyColorEffect_Parms
		{
			CiliaGroupsList CiliaGroup;
			AActor* aPlayerCharacter;
			float DeltaTime;
			float SpeedDividerMinOffset;
			float SpeedDividerMax;
			uint8 Red;
			uint8 Green;
			uint8 Blue;
			bool FlickerAllTogether;
		};
		static void NewProp_FlickerAllTogether_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FlickerAllTogether;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Red;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedDividerMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedDividerMinOffset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aPlayerCharacter;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CiliaGroup;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CiliaGroup_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_FlickerAllTogether_SetBit(void* Obj)
	{
		((CrazyColorTriggerBox_eventCrazyColorEffect_Parms*)Obj)->FlickerAllTogether = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_FlickerAllTogether = { "FlickerAllTogether", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CrazyColorTriggerBox_eventCrazyColorEffect_Parms), &Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_FlickerAllTogether_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventCrazyColorEffect_Parms, Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventCrazyColorEffect_Parms, Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventCrazyColorEffect_Parms, Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_SpeedDividerMax = { "SpeedDividerMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventCrazyColorEffect_Parms, SpeedDividerMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_SpeedDividerMinOffset = { "SpeedDividerMinOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventCrazyColorEffect_Parms, SpeedDividerMinOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventCrazyColorEffect_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_aPlayerCharacter = { "aPlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventCrazyColorEffect_Parms, aPlayerCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_CiliaGroup = { "CiliaGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventCrazyColorEffect_Parms, CiliaGroup), Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_CiliaGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_FlickerAllTogether,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_SpeedDividerMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_SpeedDividerMinOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_aPlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_CiliaGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::NewProp_CiliaGroup_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09\x09* Plays the Breath Effect.\n\x09\x09* sets mPlayerCharacter to aPlayerCharacter.\n\x09\x09* If mLatch is true then Plays Crazy Color Effect.\n\x09\x09* Multiplies the Red Green and Blue values by random float between 0 and 1 to determine colors.\n\x09\x09* @param CiliaGroup group of Cilias that the effect is applied to.\n\x09\x09* @param aPlayerCharacter that we want to trigger the effect upon overlap.\n\x09\x09* @param DeltaTime How much time has ellapsed since the last time the function was called.\n\x09\x09* @param SpeedDividerMinOffset added to a random value between 0 and SpeedDividerMax to determine the amount of tie to wait between playing frames of the effect\n\x09\x09* @param SpeedDividerMax used in determining a random number to be added to SpeedDividerMinOffset to determine the amount of time to wait between playing frames of the effect.\n\x09\x09* @param TransitionLength amount of frames it takes to transition from one color to the other.\n\x09\x09* @param Red value between 0 and 255 component of the first light color in the effect.\n\x09\x09* @param Green value between 0 and 255 component of the first light color in the effect.\n\x09\x09* @param Blue value between 0 and 255 component of the first light color in the effect.\n\x09\x09* @param FlickerAllTogether bool value to determine if all the lights will show the same color.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/CrazyColorTriggerBox.h" },
		{ "ToolTip", "Plays the Breath Effect.\nsets mPlayerCharacter to aPlayerCharacter.\nIf mLatch is true then Plays Crazy Color Effect.\nMultiplies the Red Green and Blue values by random float between 0 and 1 to determine colors.\n@param CiliaGroup group of Cilias that the effect is applied to.\n@param aPlayerCharacter that we want to trigger the effect upon overlap.\n@param DeltaTime How much time has ellapsed since the last time the function was called.\n@param SpeedDividerMinOffset added to a random value between 0 and SpeedDividerMax to determine the amount of tie to wait between playing frames of the effect\n@param SpeedDividerMax used in determining a random number to be added to SpeedDividerMinOffset to determine the amount of time to wait between playing frames of the effect.\n@param TransitionLength amount of frames it takes to transition from one color to the other.\n@param Red value between 0 and 255 component of the first light color in the effect.\n@param Green value between 0 and 255 component of the first light color in the effect.\n@param Blue value between 0 and 255 component of the first light color in the effect.\n@param FlickerAllTogether bool value to determine if all the lights will show the same color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrazyColorTriggerBox, nullptr, "CrazyColorEffect", nullptr, nullptr, sizeof(CrazyColorTriggerBox_eventCrazyColorEffect_Parms), Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics
	{
		struct CrazyColorTriggerBox_eventOnOverlapBegin_Parms
		{
			AActor* aThisActor;
			AActor* aOtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aOtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aThisActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::NewProp_aOtherActor = { "aOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventOnOverlapBegin_Parms, aOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::NewProp_aThisActor = { "aThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventOnOverlapBegin_Parms, aThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::NewProp_aOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::NewProp_aThisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09*Triggered when there is an overlap event.\n\x09\x09*If the other aOtherActor is mPlayerCharacter then set mLatch to true.\n\x09\x09*@param aThisActor pointer to this object.\n\x09\x09*@param aOtherActor pointer to the overlapping object.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/CrazyColorTriggerBox.h" },
		{ "ToolTip", "Triggered when there is an overlap event.\nIf the other aOtherActor is mPlayerCharacter then set mLatch to true.\n@param aThisActor pointer to this object.\n@param aOtherActor pointer to the overlapping object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrazyColorTriggerBox, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(CrazyColorTriggerBox_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics
	{
		struct CrazyColorTriggerBox_eventOnOverlapEnd_Parms
		{
			AActor* aThisActor;
			AActor* aOtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aOtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aThisActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::NewProp_aOtherActor = { "aOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventOnOverlapEnd_Parms, aOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::NewProp_aThisActor = { "aThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrazyColorTriggerBox_eventOnOverlapEnd_Parms, aThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::NewProp_aOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::NewProp_aThisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09* Triggered when an overlap event ends.\n\x09\x09* If the other aOtherActor is mPlayerCharacter then set mLatch to false.\n\x09\x09*@param aThisActor pointer to this object.\n\x09\x09*@param aOtherActor pointer to the no longer overlapping object.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/CrazyColorTriggerBox.h" },
		{ "ToolTip", "Triggered when an overlap event ends.\nIf the other aOtherActor is mPlayerCharacter then set mLatch to false.\n@param aThisActor pointer to this object.\n@param aOtherActor pointer to the no longer overlapping object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrazyColorTriggerBox, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(CrazyColorTriggerBox_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACrazyColorTriggerBox_NoRegister()
	{
		return ACrazyColorTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_ACrazyColorTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrazyColorTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_CiliaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrazyColorTriggerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrazyColorTriggerBox_CrazyColorEffect, "CrazyColorEffect" }, // 2940863507
		{ &Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapBegin, "OnOverlapBegin" }, // 389626489
		{ &Z_Construct_UFunction_ACrazyColorTriggerBox_OnOverlapEnd, "OnOverlapEnd" }, // 852121573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrazyColorTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CrazyColorTriggerBox.h" },
		{ "ModuleRelativePath", "Public/CrazyColorTriggerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrazyColorTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrazyColorTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrazyColorTriggerBox_Statics::ClassParams = {
		&ACrazyColorTriggerBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACrazyColorTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrazyColorTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrazyColorTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrazyColorTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrazyColorTriggerBox, 745172361);
	template<> CILIAPLUGIN_API UClass* StaticClass<ACrazyColorTriggerBox>()
	{
		return ACrazyColorTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrazyColorTriggerBox(Z_Construct_UClass_ACrazyColorTriggerBox, &ACrazyColorTriggerBox::StaticClass, TEXT("/Script/CiliaPlugin"), TEXT("ACrazyColorTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrazyColorTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
