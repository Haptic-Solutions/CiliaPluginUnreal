// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CiliaPlugin/Public/VariableBrightnessTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariableBrightnessTriggerBox() {}
// Cross Module References
	CILIAPLUGIN_API UClass* Z_Construct_UClass_AVariableBrightnessTriggerBox_NoRegister();
	CILIAPLUGIN_API UClass* Z_Construct_UClass_AVariableBrightnessTriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_CiliaPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList();
// End Cross Module References
	DEFINE_FUNCTION(AVariableBrightnessTriggerBox::execLightVariableBrightnessEffect)
	{
		P_GET_ENUM(CiliaGroupsList,Z_Param_CiliaGroup);
		P_GET_OBJECT(AActor,Z_Param_aPlayerCharacter);
		P_GET_UBOOL(Z_Param_SizeIsDynamic);
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
		P_THIS->LightVariableBrightnessEffect(CiliaGroupsList(Z_Param_CiliaGroup),Z_Param_aPlayerCharacter,Z_Param_SizeIsDynamic,Z_Param_Light1Red,Z_Param_Light1Green,Z_Param_Light1Blue,Z_Param_Light2Red,Z_Param_Light2Green,Z_Param_Light2Blue,Z_Param_Light3Red,Z_Param_Light3Green,Z_Param_Light3Blue,Z_Param_Light4Red,Z_Param_Light4Green,Z_Param_Light4Blue,Z_Param_Light5Red,Z_Param_Light5Green,Z_Param_Light5Blue,Z_Param_Light6Red,Z_Param_Light6Green,Z_Param_Light6Blue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVariableBrightnessTriggerBox::execOnOverlapEnd)
	{
		P_GET_OBJECT(AActor,Z_Param_aThisActor);
		P_GET_OBJECT(AActor,Z_Param_aOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_aThisActor,Z_Param_aOtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVariableBrightnessTriggerBox::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_aThisActor);
		P_GET_OBJECT(AActor,Z_Param_aOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_aThisActor,Z_Param_aOtherActor);
		P_NATIVE_END;
	}
	void AVariableBrightnessTriggerBox::StaticRegisterNativesAVariableBrightnessTriggerBox()
	{
		UClass* Class = AVariableBrightnessTriggerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LightVariableBrightnessEffect", &AVariableBrightnessTriggerBox::execLightVariableBrightnessEffect },
			{ "OnOverlapBegin", &AVariableBrightnessTriggerBox::execOnOverlapBegin },
			{ "OnOverlapEnd", &AVariableBrightnessTriggerBox::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics
	{
		struct VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms
		{
			CiliaGroupsList CiliaGroup;
			AActor* aPlayerCharacter;
			bool SizeIsDynamic;
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
		static void NewProp_SizeIsDynamic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SizeIsDynamic;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aPlayerCharacter;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CiliaGroup;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CiliaGroup_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light6Blue = { "Light6Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light6Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light6Green = { "Light6Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light6Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light6Red = { "Light6Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light6Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light5Blue = { "Light5Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light5Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light5Green = { "Light5Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light5Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light5Red = { "Light5Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light5Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light4Blue = { "Light4Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light4Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light4Green = { "Light4Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light4Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light4Red = { "Light4Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light4Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light3Blue = { "Light3Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light3Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light3Green = { "Light3Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light3Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light3Red = { "Light3Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light3Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light2Blue = { "Light2Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light2Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light2Green = { "Light2Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light2Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light2Red = { "Light2Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light2Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light1Blue = { "Light1Blue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light1Blue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light1Green = { "Light1Green", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light1Green), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light1Red = { "Light1Red", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, Light1Red), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_SizeIsDynamic_SetBit(void* Obj)
	{
		((VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms*)Obj)->SizeIsDynamic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_SizeIsDynamic = { "SizeIsDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms), &Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_SizeIsDynamic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_aPlayerCharacter = { "aPlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, aPlayerCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_CiliaGroup = { "CiliaGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms, CiliaGroup), Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_CiliaGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light6Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light6Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light6Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light5Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light5Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light5Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light4Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light4Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light4Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light3Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light3Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light3Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light2Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light2Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light2Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light1Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light1Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_Light1Red,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_SizeIsDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_aPlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_CiliaGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::NewProp_CiliaGroup_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09\x09* Plays the LightVariableBrightness Effect.\n\x09\x09* sets mPlayerCharacter to aPlayerCharacter.\n\x09\x09* If mLatch is true then Plays LightVariableBrightness Effect.\n\x09\x09* If size is dynamic recompute the mFanRadius.\n\x09\x09* Then if the old distance does not equal the new distance.\n\x09\x09* Sets lights on the Cilias in a group to specified color multiplied by an intensity computed by how far the player is from the center of the bounding box.\n\x09\x09* Essentially the closer the player gets to the center of the box the brighter the lights are.\n\x09\x09* @param CiliaGroup group of Cilias that the effect is applied to.\n\x09\x09* @param aPlayerCharacter that we want to trigger the effect upon overlap.\n\x09\x09* @param SizeIsDynamic if the bounding box size might change.\n\x09\x09* @param Light1Red value between 0 and 255 to set light 1's red brightness to.\n\x09\x09* @param Light1Green value between 0 and 255 to set light 1's green brightness to.\n\x09\x09* @param Light1Blue value between 0 and 255 to set light 1's blue brightness to.\n\x09\x09* @param Light2Red value between 0 and 255 to set light 2's red brightness to.\n\x09\x09* @param Light2Green value between 0 and 255 to set light 2's green brightness to.\n\x09\x09* @param Light2Blue value between 0 and 255 to set light 2's blue brightness to.\n\x09\x09* @param Light3Red value between 0 and 255 to set light 3's red brightness to.\n\x09\x09* @param Light3Green value between 0 and 255 to set light 3's green brightness to.\n\x09\x09* @param Light3Blue value between 0 and 255 to set light 3's blue brightness to.\n\x09\x09* @param Light4Red value between 0 and 255 to set light 4's red brightness to.\n\x09\x09* @param Light4Green value between 0 and 255 to set light 4's green brightness to.\n\x09\x09* @param Light4Blue value between 0 and 255 to set light 4's blue brightness to.\n\x09\x09* @param Light5Red value between 0 and 255 to set light 5's red brightness to.\n\x09\x09* @param Light5Green value between 0 and 255 to set light 5's green brightness to.\n\x09\x09* @param Light5Blue value between 0 and 255 to set light 5's blue brightness to.\n\x09\x09* @param Light6Red value between 0 and 255 to set light 6's red brightness to.\n\x09\x09* @param Light6Green value between 0 and 255 to set light 6's green brightness to.\n\x09\x09* @param Light6Blue value between 0 and 255 to set alight 6's blue brightness to.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/VariableBrightnessTriggerBox.h" },
		{ "ToolTip", "Plays the LightVariableBrightness Effect.\nsets mPlayerCharacter to aPlayerCharacter.\nIf mLatch is true then Plays LightVariableBrightness Effect.\nIf size is dynamic recompute the mFanRadius.\nThen if the old distance does not equal the new distance.\nSets lights on the Cilias in a group to specified color multiplied by an intensity computed by how far the player is from the center of the bounding box.\nEssentially the closer the player gets to the center of the box the brighter the lights are.\n@param CiliaGroup group of Cilias that the effect is applied to.\n@param aPlayerCharacter that we want to trigger the effect upon overlap.\n@param SizeIsDynamic if the bounding box size might change.\n@param Light1Red value between 0 and 255 to set light 1's red brightness to.\n@param Light1Green value between 0 and 255 to set light 1's green brightness to.\n@param Light1Blue value between 0 and 255 to set light 1's blue brightness to.\n@param Light2Red value between 0 and 255 to set light 2's red brightness to.\n@param Light2Green value between 0 and 255 to set light 2's green brightness to.\n@param Light2Blue value between 0 and 255 to set light 2's blue brightness to.\n@param Light3Red value between 0 and 255 to set light 3's red brightness to.\n@param Light3Green value between 0 and 255 to set light 3's green brightness to.\n@param Light3Blue value between 0 and 255 to set light 3's blue brightness to.\n@param Light4Red value between 0 and 255 to set light 4's red brightness to.\n@param Light4Green value between 0 and 255 to set light 4's green brightness to.\n@param Light4Blue value between 0 and 255 to set light 4's blue brightness to.\n@param Light5Red value between 0 and 255 to set light 5's red brightness to.\n@param Light5Green value between 0 and 255 to set light 5's green brightness to.\n@param Light5Blue value between 0 and 255 to set light 5's blue brightness to.\n@param Light6Red value between 0 and 255 to set light 6's red brightness to.\n@param Light6Green value between 0 and 255 to set light 6's green brightness to.\n@param Light6Blue value between 0 and 255 to set alight 6's blue brightness to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVariableBrightnessTriggerBox, nullptr, "LightVariableBrightnessEffect", nullptr, nullptr, sizeof(VariableBrightnessTriggerBox_eventLightVariableBrightnessEffect_Parms), Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics
	{
		struct VariableBrightnessTriggerBox_eventOnOverlapBegin_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::NewProp_aOtherActor = { "aOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventOnOverlapBegin_Parms, aOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::NewProp_aThisActor = { "aThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventOnOverlapBegin_Parms, aThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::NewProp_aOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::NewProp_aThisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09*Triggered when there is an overlap event.\n\x09\x09*If the other aOtherActor is mPlayerCharacter then set mLatch to true.\n\x09\x09*@param aThisActor pointer to this object.\n\x09\x09*@param aOtherActor pointer to the overlapping object.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/VariableBrightnessTriggerBox.h" },
		{ "ToolTip", "Triggered when there is an overlap event.\nIf the other aOtherActor is mPlayerCharacter then set mLatch to true.\n@param aThisActor pointer to this object.\n@param aOtherActor pointer to the overlapping object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVariableBrightnessTriggerBox, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(VariableBrightnessTriggerBox_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics
	{
		struct VariableBrightnessTriggerBox_eventOnOverlapEnd_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::NewProp_aOtherActor = { "aOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventOnOverlapEnd_Parms, aOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::NewProp_aThisActor = { "aThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariableBrightnessTriggerBox_eventOnOverlapEnd_Parms, aThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::NewProp_aOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::NewProp_aThisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09* Triggered when an overlap event ends.\n\x09\x09* If the other aOtherActor is mPlayerCharacter then set mLatch to false.\n\x09\x09* Turns Lights on Cilias in CiliaGroup to off.\n\x09\x09*@param aThisActor pointer to this object.\n\x09\x09*@param aOtherActor pointer to the no longer overlapping object.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/VariableBrightnessTriggerBox.h" },
		{ "ToolTip", "Triggered when an overlap event ends.\nIf the other aOtherActor is mPlayerCharacter then set mLatch to false.\nTurns Lights on Cilias in CiliaGroup to off.\n@param aThisActor pointer to this object.\n@param aOtherActor pointer to the no longer overlapping object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVariableBrightnessTriggerBox, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(VariableBrightnessTriggerBox_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVariableBrightnessTriggerBox_NoRegister()
	{
		return AVariableBrightnessTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_AVariableBrightnessTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVariableBrightnessTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_CiliaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVariableBrightnessTriggerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVariableBrightnessTriggerBox_LightVariableBrightnessEffect, "LightVariableBrightnessEffect" }, // 1762650351
		{ &Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapBegin, "OnOverlapBegin" }, // 2515124230
		{ &Z_Construct_UFunction_AVariableBrightnessTriggerBox_OnOverlapEnd, "OnOverlapEnd" }, // 698494888
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariableBrightnessTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VariableBrightnessTriggerBox.h" },
		{ "ModuleRelativePath", "Public/VariableBrightnessTriggerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVariableBrightnessTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVariableBrightnessTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVariableBrightnessTriggerBox_Statics::ClassParams = {
		&AVariableBrightnessTriggerBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVariableBrightnessTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVariableBrightnessTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVariableBrightnessTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVariableBrightnessTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVariableBrightnessTriggerBox, 1113183556);
	template<> CILIAPLUGIN_API UClass* StaticClass<AVariableBrightnessTriggerBox>()
	{
		return AVariableBrightnessTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVariableBrightnessTriggerBox(Z_Construct_UClass_AVariableBrightnessTriggerBox, &AVariableBrightnessTriggerBox::StaticClass, TEXT("/Script/CiliaPlugin"), TEXT("AVariableBrightnessTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVariableBrightnessTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
