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
#ifdef CILIAPLUGIN_RippleTriggerBox_generated_h
#error "RippleTriggerBox.generated.h already included, missing '#pragma once' in RippleTriggerBox.h"
#endif
#define CILIAPLUGIN_RippleTriggerBox_generated_h

#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_SPARSE_DATA
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRippleEffect); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRippleEffect); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARippleTriggerBox(); \
	friend struct Z_Construct_UClass_ARippleTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ARippleTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(ARippleTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_INCLASS \
private: \
	static void StaticRegisterNativesARippleTriggerBox(); \
	friend struct Z_Construct_UClass_ARippleTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ARippleTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(ARippleTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARippleTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARippleTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARippleTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARippleTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARippleTriggerBox(ARippleTriggerBox&&); \
	NO_API ARippleTriggerBox(const ARippleTriggerBox&); \
public:


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARippleTriggerBox(ARippleTriggerBox&&); \
	NO_API ARippleTriggerBox(const ARippleTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARippleTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARippleTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARippleTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_PRIVATE_PROPERTY_OFFSET
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_15_PROLOG
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_RPC_WRAPPERS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_INCLASS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_INCLASS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CILIAPLUGIN_API UClass* StaticClass<class ARippleTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_RippleTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
