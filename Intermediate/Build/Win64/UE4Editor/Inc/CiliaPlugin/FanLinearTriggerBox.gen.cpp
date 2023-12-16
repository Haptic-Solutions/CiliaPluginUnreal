// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CiliaPlugin/Public/FanLinearTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFanLinearTriggerBox() {}
// Cross Module References
	CILIAPLUGIN_API UClass* Z_Construct_UClass_AFanLinearTriggerBox_NoRegister();
	CILIAPLUGIN_API UClass* Z_Construct_UClass_AFanLinearTriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_CiliaPlugin();
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_SmellList();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList();
// End Cross Module References
	DEFINE_FUNCTION(AFanLinearTriggerBox::execFanLinearEffect)
	{
		P_GET_ENUM(CiliaGroupsList,Z_Param_CiliaGroup);
		P_GET_OBJECT(AActor,Z_Param_aPlayerCharacter);
		P_GET_ENUM(SmellList,Z_Param_Smell);
		P_GET_UBOOL(Z_Param_SizeIsDynamic);
		P_GET_PROPERTY(FByteProperty,Z_Param_FanMaxSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FanLinearEffect(CiliaGroupsList(Z_Param_CiliaGroup),Z_Param_aPlayerCharacter,SmellList(Z_Param_Smell),Z_Param_SizeIsDynamic,Z_Param_FanMaxSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFanLinearTriggerBox::execOnOverlapEnd)
	{
		P_GET_OBJECT(AActor,Z_Param_aThisActor);
		P_GET_OBJECT(AActor,Z_Param_aOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_aThisActor,Z_Param_aOtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFanLinearTriggerBox::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_aThisActor);
		P_GET_OBJECT(AActor,Z_Param_aOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_aThisActor,Z_Param_aOtherActor);
		P_NATIVE_END;
	}
	void AFanLinearTriggerBox::StaticRegisterNativesAFanLinearTriggerBox()
	{
		UClass* Class = AFanLinearTriggerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FanLinearEffect", &AFanLinearTriggerBox::execFanLinearEffect },
			{ "OnOverlapBegin", &AFanLinearTriggerBox::execOnOverlapBegin },
			{ "OnOverlapEnd", &AFanLinearTriggerBox::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics
	{
		struct FanLinearTriggerBox_eventFanLinearEffect_Parms
		{
			CiliaGroupsList CiliaGroup;
			AActor* aPlayerCharacter;
			SmellList Smell;
			bool SizeIsDynamic;
			uint8 FanMaxSpeed;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FanMaxSpeed;
		static void NewProp_SizeIsDynamic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SizeIsDynamic;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Smell;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Smell_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aPlayerCharacter;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CiliaGroup;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CiliaGroup_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_FanMaxSpeed = { "FanMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FanLinearTriggerBox_eventFanLinearEffect_Parms, FanMaxSpeed), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_SizeIsDynamic_SetBit(void* Obj)
	{
		((FanLinearTriggerBox_eventFanLinearEffect_Parms*)Obj)->SizeIsDynamic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_SizeIsDynamic = { "SizeIsDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FanLinearTriggerBox_eventFanLinearEffect_Parms), &Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_SizeIsDynamic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_Smell = { "Smell", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FanLinearTriggerBox_eventFanLinearEffect_Parms, Smell), Z_Construct_UEnum_CiliaPlugin_SmellList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_Smell_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_aPlayerCharacter = { "aPlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FanLinearTriggerBox_eventFanLinearEffect_Parms, aPlayerCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_CiliaGroup = { "CiliaGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FanLinearTriggerBox_eventFanLinearEffect_Parms, CiliaGroup), Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_CiliaGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_FanMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_SizeIsDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_Smell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_Smell_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_aPlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_CiliaGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::NewProp_CiliaGroup_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09\x09* Plays the Fan Linear Effect.\n\x09\x09* sets mPlayerCharacter to aPlayerCharacter.\n\x09\x09* If mLatch is true then.\n\x09\x09* If size is dynamic recompute the mFanRadius.\n\x09\x09* Then if the old distance does not equal the new distance.\n\x09\x09* Send a message to the SDK telling it to turn on a certain smell for a certain group of Cilias at a computed intensity.\n\x09\x09* Essentially the closer the player is to the middle of the bounding box the faster the fan will spin.\n\x09\x09* @param CiliaGroup group of Cilias that the effect is applied to.\n\x09\x09* @param aPlayerCharacter that we want to trigger the effect upon overlap.\n\x09\x09* @param Smell a smell we want to play when the effect is triggered.\n\x09\x09* @param SizeIsDynamic if the bounding box size might change.\n\x09\x09* @param FanMaxSpeed the fastest speed the fan will spin for this effect.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/FanLinearTriggerBox.h" },
		{ "ToolTip", "Plays the Fan Linear Effect.\nsets mPlayerCharacter to aPlayerCharacter.\nIf mLatch is true then.\nIf size is dynamic recompute the mFanRadius.\nThen if the old distance does not equal the new distance.\nSend a message to the SDK telling it to turn on a certain smell for a certain group of Cilias at a computed intensity.\nEssentially the closer the player is to the middle of the bounding box the faster the fan will spin.\n@param CiliaGroup group of Cilias that the effect is applied to.\n@param aPlayerCharacter that we want to trigger the effect upon overlap.\n@param Smell a smell we want to play when the effect is triggered.\n@param SizeIsDynamic if the bounding box size might change.\n@param FanMaxSpeed the fastest speed the fan will spin for this effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFanLinearTriggerBox, nullptr, "FanLinearEffect", nullptr, nullptr, sizeof(FanLinearTriggerBox_eventFanLinearEffect_Parms), Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics
	{
		struct FanLinearTriggerBox_eventOnOverlapBegin_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::NewProp_aOtherActor = { "aOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FanLinearTriggerBox_eventOnOverlapBegin_Parms, aOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::NewProp_aThisActor = { "aThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FanLinearTriggerBox_eventOnOverlapBegin_Parms, aThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::NewProp_aOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::NewProp_aThisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09*Triggered when there is an overlap event.\n\x09\x09*If the other aOtherActor is mPlayerCharacter then set mLatch to true.\n\x09\x09*@param aThisActor pointer to this object.\n\x09\x09*@param aOtherActor pointer to the overlapping object.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/FanLinearTriggerBox.h" },
		{ "ToolTip", "Triggered when there is an overlap event.\nIf the other aOtherActor is mPlayerCharacter then set mLatch to true.\n@param aThisActor pointer to this object.\n@param aOtherActor pointer to the overlapping object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFanLinearTriggerBox, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(FanLinearTriggerBox_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics
	{
		struct FanLinearTriggerBox_eventOnOverlapEnd_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::NewProp_aOtherActor = { "aOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FanLinearTriggerBox_eventOnOverlapEnd_Parms, aOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::NewProp_aThisActor = { "aThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FanLinearTriggerBox_eventOnOverlapEnd_Parms, aThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::NewProp_aOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::NewProp_aThisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09* Triggered when an overlap event ends.\n\x09\x09* If the other aOtherActor is mPlayerCharacter then set mLatch to false.\n\x09\x09* Also, turns off mSmells on Cilias in mGroup\n\x09\x09*@param aThisActor pointer to this object.\n\x09\x09*@param aOtherActor pointer to the no longer overlapping object.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/FanLinearTriggerBox.h" },
		{ "ToolTip", "Triggered when an overlap event ends.\nIf the other aOtherActor is mPlayerCharacter then set mLatch to false.\nAlso, turns off mSmells on Cilias in mGroup\n@param aThisActor pointer to this object.\n@param aOtherActor pointer to the no longer overlapping object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFanLinearTriggerBox, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(FanLinearTriggerBox_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFanLinearTriggerBox_NoRegister()
	{
		return AFanLinearTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_AFanLinearTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFanLinearTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_CiliaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFanLinearTriggerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFanLinearTriggerBox_FanLinearEffect, "FanLinearEffect" }, // 1241072889
		{ &Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapBegin, "OnOverlapBegin" }, // 917382666
		{ &Z_Construct_UFunction_AFanLinearTriggerBox_OnOverlapEnd, "OnOverlapEnd" }, // 2582734367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFanLinearTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This Class produces an effect where the closer the player is to the center of the collision box the more intense the smell is.\n */" },
		{ "IncludePath", "FanLinearTriggerBox.h" },
		{ "ModuleRelativePath", "Public/FanLinearTriggerBox.h" },
		{ "ToolTip", "This Class produces an effect where the closer the player is to the center of the collision box the more intense the smell is." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFanLinearTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFanLinearTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFanLinearTriggerBox_Statics::ClassParams = {
		&AFanLinearTriggerBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFanLinearTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFanLinearTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFanLinearTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFanLinearTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFanLinearTriggerBox, 2313302238);
	template<> CILIAPLUGIN_API UClass* StaticClass<AFanLinearTriggerBox>()
	{
		return AFanLinearTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFanLinearTriggerBox(Z_Construct_UClass_AFanLinearTriggerBox, &AFanLinearTriggerBox::StaticClass, TEXT("/Script/CiliaPlugin"), TEXT("AFanLinearTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFanLinearTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
