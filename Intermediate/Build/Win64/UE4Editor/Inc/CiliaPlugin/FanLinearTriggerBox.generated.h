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
enum class SmellList : uint8;
#ifdef CILIAPLUGIN_FanLinearTriggerBox_generated_h
#error "FanLinearTriggerBox.generated.h already included, missing '#pragma once' in FanLinearTriggerBox.h"
#endif
#define CILIAPLUGIN_FanLinearTriggerBox_generated_h

#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_SPARSE_DATA
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFanLinearEffect); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFanLinearEffect); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFanLinearTriggerBox(); \
	friend struct Z_Construct_UClass_AFanLinearTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AFanLinearTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(AFanLinearTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFanLinearTriggerBox(); \
	friend struct Z_Construct_UClass_AFanLinearTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AFanLinearTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(AFanLinearTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFanLinearTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFanLinearTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFanLinearTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFanLinearTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFanLinearTriggerBox(AFanLinearTriggerBox&&); \
	NO_API AFanLinearTriggerBox(const AFanLinearTriggerBox&); \
public:


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFanLinearTriggerBox(AFanLinearTriggerBox&&); \
	NO_API AFanLinearTriggerBox(const AFanLinearTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFanLinearTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFanLinearTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFanLinearTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_PRIVATE_PROPERTY_OFFSET
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_13_PROLOG
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_RPC_WRAPPERS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_INCLASS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_INCLASS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CILIAPLUGIN_API UClass* StaticClass<class AFanLinearTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_FanLinearTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
