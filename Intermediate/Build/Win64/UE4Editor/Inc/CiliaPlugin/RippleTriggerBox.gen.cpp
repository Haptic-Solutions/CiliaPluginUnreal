// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CiliaPlugin/Public/RippleTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRippleTriggerBox() {}
// Cross Module References
	CILIAPLUGIN_API UClass* Z_Construct_UClass_ARippleTriggerBox_NoRegister();
	CILIAPLUGIN_API UClass* Z_Construct_UClass_ARippleTriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_CiliaPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList();
// End Cross Module References
	DEFINE_FUNCTION(ARippleTriggerBox::execRippleEffect)
	{
		P_GET_ENUM(CiliaGroupsList,Z_Param_CiliaGroup);
		P_GET_OBJECT(AActor,Z_Param_aPlayerCharacter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedDivider);
		P_GET_PROPERTY(FIntProperty,Z_Param_Rippleframes);
		P_GET_PROPERTY(FByteProperty,Z_Param_Red);
		P_GET_PROPERTY(FByteProperty,Z_Param_Green);
		P_GET_PROPERTY(FByteProperty,Z_Param_Blue);
		P_GET_PROPERTY(FByteProperty,Z_Param_RedRipple);
		P_GET_PROPERTY(FByteProperty,Z_Param_GreenRipple);
		P_GET_PROPERTY(FByteProperty,Z_Param_BlueRipple);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RippleEffect(CiliaGroupsList(Z_Param_CiliaGroup),Z_Param_aPlayerCharacter,Z_Param_DeltaTime,Z_Param_SpeedDivider,Z_Param_Rippleframes,Z_Param_Red,Z_Param_Green,Z_Param_Blue,Z_Param_RedRipple,Z_Param_GreenRipple,Z_Param_BlueRipple);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARippleTriggerBox::execOnOverlapEnd)
	{
		P_GET_OBJECT(AActor,Z_Param_aThisActor);
		P_GET_OBJECT(AActor,Z_Param_aOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_aThisActor,Z_Param_aOtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARippleTriggerBox::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_aThisActor);
		P_GET_OBJECT(AActor,Z_Param_aOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_aThisActor,Z_Param_aOtherActor);
		P_NATIVE_END;
	}
	void ARippleTriggerBox::StaticRegisterNativesARippleTriggerBox()
	{
		UClass* Class = ARippleTriggerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ARippleTriggerBox::execOnOverlapBegin },
			{ "OnOverlapEnd", &ARippleTriggerBox::execOnOverlapEnd },
			{ "RippleEffect", &ARippleTriggerBox::execRippleEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics
	{
		struct RippleTriggerBox_eventOnOverlapBegin_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::NewProp_aOtherActor = { "aOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventOnOverlapBegin_Parms, aOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::NewProp_aThisActor = { "aThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventOnOverlapBegin_Parms, aThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::NewProp_aOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::NewProp_aThisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09*Triggered when there is an overlap event.\n\x09\x09*If the other aOtherActor is mPlayerCharacter then set mLatch to true.\n\x09\x09*@param aThisActor pointer to this object.\n\x09\x09*@param aOtherActor pointer to the overlapping object.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/RippleTriggerBox.h" },
		{ "ToolTip", "Triggered when there is an overlap event.\nIf the other aOtherActor is mPlayerCharacter then set mLatch to true.\n@param aThisActor pointer to this object.\n@param aOtherActor pointer to the overlapping object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARippleTriggerBox, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(RippleTriggerBox_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics
	{
		struct RippleTriggerBox_eventOnOverlapEnd_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::NewProp_aOtherActor = { "aOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventOnOverlapEnd_Parms, aOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::NewProp_aThisActor = { "aThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventOnOverlapEnd_Parms, aThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::NewProp_aOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::NewProp_aThisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09* Triggered when an overlap event ends.\n\x09\x09* If the other aOtherActor is mPlayerCharacter then set mLatch to false.\n\x09\x09*@param aThisActor pointer to this object.\n\x09\x09*@param aOtherActor pointer to the no longer overlapping object.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/RippleTriggerBox.h" },
		{ "ToolTip", "Triggered when an overlap event ends.\nIf the other aOtherActor is mPlayerCharacter then set mLatch to false.\n@param aThisActor pointer to this object.\n@param aOtherActor pointer to the no longer overlapping object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARippleTriggerBox, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(RippleTriggerBox_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics
	{
		struct RippleTriggerBox_eventRippleEffect_Parms
		{
			CiliaGroupsList CiliaGroup;
			AActor* aPlayerCharacter;
			float DeltaTime;
			float SpeedDivider;
			int32 Rippleframes;
			uint8 Red;
			uint8 Green;
			uint8 Blue;
			uint8 RedRipple;
			uint8 GreenRipple;
			uint8 BlueRipple;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlueRipple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GreenRipple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RedRipple;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Blue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Green;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Red;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Rippleframes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedDivider;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_BlueRipple = { "BlueRipple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventRippleEffect_Parms, BlueRipple), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_GreenRipple = { "GreenRipple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventRippleEffect_Parms, GreenRipple), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_RedRipple = { "RedRipple", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventRippleEffect_Parms, RedRipple), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventRippleEffect_Parms, Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventRippleEffect_Parms, Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventRippleEffect_Parms, Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_Rippleframes = { "Rippleframes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventRippleEffect_Parms, Rippleframes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_SpeedDivider = { "SpeedDivider", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventRippleEffect_Parms, SpeedDivider), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventRippleEffect_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_aPlayerCharacter = { "aPlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventRippleEffect_Parms, aPlayerCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_CiliaGroup = { "CiliaGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RippleTriggerBox_eventRippleEffect_Parms, CiliaGroup), Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_CiliaGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_BlueRipple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_GreenRipple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_RedRipple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_Rippleframes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_SpeedDivider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_aPlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_CiliaGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::NewProp_CiliaGroup_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09\x09* Plays the Ripple Effect.\n\x09\x09* sets mPlayerCharacter to aPlayerCharacter.\n\x09\x09* If mLatch is true then Plays Ripple Effect.\n\x09\x09* Shows a primary color then chooses a seed for a secondary color to start at. That ripple spreads out from there and bounces off edges and itself and slowly fades out over course of the effect.\n\x09\x09* @param CiliaGroup group of Cilias that the effect is applied to.\n\x09\x09* @param aPlayerCharacter that we want to trigger the effect upon overlap.\n\x09\x09* @param DeltaTime How much time has ellapsed since the last time the function was called.\n\x09\x09* @param SpeedDivider how much time has to elapse before a frame of the breath effect is played.\n\x09\x09* @param Rippleframes The number of frames the effect lasts for. Also, used in determining fade out of effect.\n\x09\x09* @param Red value between 0 and 255 component of the first light color in the effect.\n\x09\x09* @param Green value between 0 and 255 component of the first light color in the effect.\n\x09\x09* @param Blue value between 0 and 255 component of the first light color in the effect.\n\x09\x09* @param RedRipple value between 0 and 255 component of the second light color in the effect.\n\x09\x09* @param GreenRipple value between 0 and 255 component of the second light color in the effect.\n\x09\x09* @param BlueRipple value between 0 and 255 component of the second light color in the effect.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/RippleTriggerBox.h" },
		{ "ToolTip", "Plays the Ripple Effect.\nsets mPlayerCharacter to aPlayerCharacter.\nIf mLatch is true then Plays Ripple Effect.\nShows a primary color then chooses a seed for a secondary color to start at. That ripple spreads out from there and bounces off edges and itself and slowly fades out over course of the effect.\n@param CiliaGroup group of Cilias that the effect is applied to.\n@param aPlayerCharacter that we want to trigger the effect upon overlap.\n@param DeltaTime How much time has ellapsed since the last time the function was called.\n@param SpeedDivider how much time has to elapse before a frame of the breath effect is played.\n@param Rippleframes The number of frames the effect lasts for. Also, used in determining fade out of effect.\n@param Red value between 0 and 255 component of the first light color in the effect.\n@param Green value between 0 and 255 component of the first light color in the effect.\n@param Blue value between 0 and 255 component of the first light color in the effect.\n@param RedRipple value between 0 and 255 component of the second light color in the effect.\n@param GreenRipple value between 0 and 255 component of the second light color in the effect.\n@param BlueRipple value between 0 and 255 component of the second light color in the effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARippleTriggerBox, nullptr, "RippleEffect", nullptr, nullptr, sizeof(RippleTriggerBox_eventRippleEffect_Parms), Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARippleTriggerBox_RippleEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARippleTriggerBox_RippleEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARippleTriggerBox_NoRegister()
	{
		return ARippleTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_ARippleTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARippleTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_CiliaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARippleTriggerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARippleTriggerBox_OnOverlapBegin, "OnOverlapBegin" }, // 4047888687
		{ &Z_Construct_UFunction_ARippleTriggerBox_OnOverlapEnd, "OnOverlapEnd" }, // 967130021
		{ &Z_Construct_UFunction_ARippleTriggerBox_RippleEffect, "RippleEffect" }, // 2919541643
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARippleTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RippleTriggerBox.h" },
		{ "ModuleRelativePath", "Public/RippleTriggerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARippleTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARippleTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARippleTriggerBox_Statics::ClassParams = {
		&ARippleTriggerBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARippleTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARippleTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARippleTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARippleTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARippleTriggerBox, 3693603134);
	template<> CILIAPLUGIN_API UClass* StaticClass<ARippleTriggerBox>()
	{
		return ARippleTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARippleTriggerBox(Z_Construct_UClass_ARippleTriggerBox, &ARippleTriggerBox::StaticClass, TEXT("/Script/CiliaPlugin"), TEXT("ARippleTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARippleTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
