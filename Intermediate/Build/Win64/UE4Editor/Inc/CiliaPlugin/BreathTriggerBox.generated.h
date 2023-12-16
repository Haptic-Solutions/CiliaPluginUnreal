// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class CiliaGroupsList : uint8;
class AActor;
#ifdef CILIAPLUGIN_BreathTriggerBox_generated_h
#error "BreathTriggerBox.generated.h already included, missing '#pragma once' in BreathTriggerBox.h"
#endif
#define CILIAPLUGIN_BreathTriggerBox_generated_h

#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_SPARSE_DATA
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBreathEffect); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBreathEffect); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABreathTriggerBox(); \
	friend struct Z_Construct_UClass_ABreathTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ABreathTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(ABreathTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABreathTriggerBox(); \
	friend struct Z_Construct_UClass_ABreathTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ABreathTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(ABreathTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABreathTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABreathTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreathTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreathTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreathTriggerBox(ABreathTriggerBox&&); \
	NO_API ABreathTriggerBox(const ABreathTriggerBox&); \
public:


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreathTriggerBox(ABreathTriggerBox&&); \
	NO_API ABreathTriggerBox(const ABreathTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreathTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreathTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABreathTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_PRIVATE_PROPERTY_OFFSET
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_11_PROLOG
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_RPC_WRAPPERS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_INCLASS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_INCLASS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CILIAPLUGIN_API UClass* StaticClass<class ABreathTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_BreathTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
