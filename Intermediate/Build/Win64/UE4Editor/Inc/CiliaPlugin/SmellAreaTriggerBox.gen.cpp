// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CiliaPlugin/Public/SmellAreaTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmellAreaTriggerBox() {}
// Cross Module References
	CILIAPLUGIN_API UClass* Z_Construct_UClass_ASmellAreaTriggerBox_NoRegister();
	CILIAPLUGIN_API UClass* Z_Construct_UClass_ASmellAreaTriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_CiliaPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_SmellList();
	CILIAPLUGIN_API UEnum* Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList();
// End Cross Module References
	DEFINE_FUNCTION(ASmellAreaTriggerBox::execSmellAreaEffect)
	{
		P_GET_ENUM(CiliaGroupsList,Z_Param_CiliaGroup);
		P_GET_OBJECT(AActor,Z_Param_aPlayerCharacter);
		P_GET_ENUM(SmellList,Z_Param_Smell);
		P_GET_PROPERTY(FByteProperty,Z_Param_FanSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SmellAreaEffect(CiliaGroupsList(Z_Param_CiliaGroup),Z_Param_aPlayerCharacter,SmellList(Z_Param_Smell),Z_Param_FanSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmellAreaTriggerBox::execOnOverlapEnd)
	{
		P_GET_OBJECT(AActor,Z_Param_aThisActor);
		P_GET_OBJECT(AActor,Z_Param_aOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_aThisActor,Z_Param_aOtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASmellAreaTriggerBox::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_aThisActor);
		P_GET_OBJECT(AActor,Z_Param_aOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_aThisActor,Z_Param_aOtherActor);
		P_NATIVE_END;
	}
	void ASmellAreaTriggerBox::StaticRegisterNativesASmellAreaTriggerBox()
	{
		UClass* Class = ASmellAreaTriggerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ASmellAreaTriggerBox::execOnOverlapBegin },
			{ "OnOverlapEnd", &ASmellAreaTriggerBox::execOnOverlapEnd },
			{ "SmellAreaEffect", &ASmellAreaTriggerBox::execSmellAreaEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics
	{
		struct SmellAreaTriggerBox_eventOnOverlapBegin_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::NewProp_aOtherActor = { "aOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmellAreaTriggerBox_eventOnOverlapBegin_Parms, aOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::NewProp_aThisActor = { "aThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmellAreaTriggerBox_eventOnOverlapBegin_Parms, aThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::NewProp_aOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::NewProp_aThisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09*Triggered when there is an overlap event.\n\x09\x09*If the other aOtherActor is mPlayerCharacter then set mLatch to true.\n\x09\x09*@param aThisActor pointer to this object.\n\x09\x09*@param aOtherActor pointer to the overlapping object.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/SmellAreaTriggerBox.h" },
		{ "ToolTip", "Triggered when there is an overlap event.\nIf the other aOtherActor is mPlayerCharacter then set mLatch to true.\n@param aThisActor pointer to this object.\n@param aOtherActor pointer to the overlapping object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmellAreaTriggerBox, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(SmellAreaTriggerBox_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics
	{
		struct SmellAreaTriggerBox_eventOnOverlapEnd_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::NewProp_aOtherActor = { "aOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmellAreaTriggerBox_eventOnOverlapEnd_Parms, aOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::NewProp_aThisActor = { "aThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmellAreaTriggerBox_eventOnOverlapEnd_Parms, aThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::NewProp_aOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::NewProp_aThisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09* Triggered when an overlap event ends.\n\x09\x09* If the other aOtherActor is mPlayerCharacter then set mLatch to false.\n\x09\x09* Also, turns off mSmells on Cilias in mGroup\n\x09\x09*@param aThisActor pointer to this object.\n\x09\x09*@param aOtherActor pointer to the no longer overlapping object.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/SmellAreaTriggerBox.h" },
		{ "ToolTip", "Triggered when an overlap event ends.\nIf the other aOtherActor is mPlayerCharacter then set mLatch to false.\nAlso, turns off mSmells on Cilias in mGroup\n@param aThisActor pointer to this object.\n@param aOtherActor pointer to the no longer overlapping object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmellAreaTriggerBox, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(SmellAreaTriggerBox_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics
	{
		struct SmellAreaTriggerBox_eventSmellAreaEffect_Parms
		{
			CiliaGroupsList CiliaGroup;
			AActor* aPlayerCharacter;
			SmellList Smell;
			uint8 FanSpeed;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FanSpeed;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_FanSpeed = { "FanSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmellAreaTriggerBox_eventSmellAreaEffect_Parms, FanSpeed), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_Smell = { "Smell", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmellAreaTriggerBox_eventSmellAreaEffect_Parms, Smell), Z_Construct_UEnum_CiliaPlugin_SmellList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_Smell_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_aPlayerCharacter = { "aPlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmellAreaTriggerBox_eventSmellAreaEffect_Parms, aPlayerCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_CiliaGroup = { "CiliaGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SmellAreaTriggerBox_eventSmellAreaEffect_Parms, CiliaGroup), Z_Construct_UEnum_CiliaPlugin_CiliaGroupsList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_CiliaGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_FanSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_Smell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_Smell_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_aPlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_CiliaGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::NewProp_CiliaGroup_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "CiliaFunctions" },
		{ "Comment", "/**\n\x09\x09* Plays the Smell Area Effect.\n\x09\x09* sets mPlayerCharacter to aPlayerCharacter.\n\x09\x09* If mLatch is true then.\n\x09\x09* Set mLatch to false because this won't trigger again till the player leaves and comes back.\n\x09\x09* Send a message to the SDK telling it to turn on a certain smell for a certain group of Cilias at a specified intensity.\n\x09\x09* @param CiliaGroup group of Cilias that the effect is applied to.\n\x09\x09* @param aPlayerCharacter that we want to trigger the effect upon overlap.\n\x09\x09* @param Smell a smell we want to play when the effect is triggered.\n\x09\x09* @param FanSpeed the fastest speed the fan will spin for this effect.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/SmellAreaTriggerBox.h" },
		{ "ToolTip", "Plays the Smell Area Effect.\nsets mPlayerCharacter to aPlayerCharacter.\nIf mLatch is true then.\nSet mLatch to false because this won't trigger again till the player leaves and comes back.\nSend a message to the SDK telling it to turn on a certain smell for a certain group of Cilias at a specified intensity.\n@param CiliaGroup group of Cilias that the effect is applied to.\n@param aPlayerCharacter that we want to trigger the effect upon overlap.\n@param Smell a smell we want to play when the effect is triggered.\n@param FanSpeed the fastest speed the fan will spin for this effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmellAreaTriggerBox, nullptr, "SmellAreaEffect", nullptr, nullptr, sizeof(SmellAreaTriggerBox_eventSmellAreaEffect_Parms), Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASmellAreaTriggerBox_NoRegister()
	{
		return ASmellAreaTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_ASmellAreaTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmellAreaTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_CiliaPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASmellAreaTriggerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapBegin, "OnOverlapBegin" }, // 3237064738
		{ &Z_Construct_UFunction_ASmellAreaTriggerBox_OnOverlapEnd, "OnOverlapEnd" }, // 764419502
		{ &Z_Construct_UFunction_ASmellAreaTriggerBox_SmellAreaEffect, "SmellAreaEffect" }, // 2763712592
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmellAreaTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SmellAreaTriggerBox.h" },
		{ "ModuleRelativePath", "Public/SmellAreaTriggerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmellAreaTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmellAreaTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASmellAreaTriggerBox_Statics::ClassParams = {
		&ASmellAreaTriggerBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASmellAreaTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASmellAreaTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmellAreaTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASmellAreaTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASmellAreaTriggerBox, 3496739924);
	template<> CILIAPLUGIN_API UClass* StaticClass<ASmellAreaTriggerBox>()
	{
		return ASmellAreaTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASmellAreaTriggerBox(Z_Construct_UClass_ASmellAreaTriggerBox, &ASmellAreaTriggerBox::StaticClass, TEXT("/Script/CiliaPlugin"), TEXT("ASmellAreaTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmellAreaTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
