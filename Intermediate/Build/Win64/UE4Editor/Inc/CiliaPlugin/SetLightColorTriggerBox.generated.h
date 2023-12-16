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
#ifdef CILIAPLUGIN_SetLightColorTriggerBox_generated_h
#error "SetLightColorTriggerBox.generated.h already included, missing '#pragma once' in SetLightColorTriggerBox.h"
#endif
#define CILIAPLUGIN_SetLightColorTriggerBox_generated_h

#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_SPARSE_DATA
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLightColorEffect); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLightColorEffect); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASetLightColorTriggerBox(); \
	friend struct Z_Construct_UClass_ASetLightColorTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ASetLightColorTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASetLightColorTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASetLightColorTriggerBox(); \
	friend struct Z_Construct_UClass_ASetLightColorTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ASetLightColorTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASetLightColorTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASetLightColorTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASetLightColorTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASetLightColorTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASetLightColorTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASetLightColorTriggerBox(ASetLightColorTriggerBox&&); \
	NO_API ASetLightColorTriggerBox(const ASetLightColorTriggerBox&); \
public:


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASetLightColorTriggerBox(ASetLightColorTriggerBox&&); \
	NO_API ASetLightColorTriggerBox(const ASetLightColorTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASetLightColorTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASetLightColorTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASetLightColorTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_PRIVATE_PROPERTY_OFFSET
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_13_PROLOG
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_RPC_WRAPPERS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_INCLASS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_INCLASS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CILIAPLUGIN_API UClass* StaticClass<class ASetLightColorTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SetLightColorTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
