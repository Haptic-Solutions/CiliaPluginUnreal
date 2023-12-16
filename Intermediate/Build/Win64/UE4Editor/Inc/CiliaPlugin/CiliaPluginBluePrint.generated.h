// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class CiliaGroupsList : uint8;
enum class LightNumber : uint8;
enum class SmellList : uint8;
enum class FanNumber : uint8;
#ifdef CILIAPLUGIN_CiliaPluginBluePrint_generated_h
#error "CiliaPluginBluePrint.generated.h already included, missing '#pragma once' in CiliaPluginBluePrint.h"
#endif
#define CILIAPLUGIN_CiliaPluginBluePrint_generated_h

#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_SPARSE_DATA
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPathOfCiliaPlugin); \
	DECLARE_FUNCTION(execGetCiliaGroups); \
	DECLARE_FUNCTION(execGetSmells); \
	DECLARE_FUNCTION(execRegenerateSmellAndGroupLists); \
	DECLARE_FUNCTION(execCreateGameProfile); \
	DECLARE_FUNCTION(execDisconnectCilia); \
	DECLARE_FUNCTION(execConnectCilia); \
	DECLARE_FUNCTION(execSurroundLights); \
	DECLARE_FUNCTION(execSurroundLight); \
	DECLARE_FUNCTION(execClearSmell); \
	DECLARE_FUNCTION(execFanSmell); \
	DECLARE_FUNCTION(execFan); \
	DECLARE_FUNCTION(execLight);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPathOfCiliaPlugin); \
	DECLARE_FUNCTION(execGetCiliaGroups); \
	DECLARE_FUNCTION(execGetSmells); \
	DECLARE_FUNCTION(execRegenerateSmellAndGroupLists); \
	DECLARE_FUNCTION(execCreateGameProfile); \
	DECLARE_FUNCTION(execDisconnectCilia); \
	DECLARE_FUNCTION(execConnectCilia); \
	DECLARE_FUNCTION(execSurroundLights); \
	DECLARE_FUNCTION(execSurroundLight); \
	DECLARE_FUNCTION(execClearSmell); \
	DECLARE_FUNCTION(execFanSmell); \
	DECLARE_FUNCTION(execFan); \
	DECLARE_FUNCTION(execLight);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCiliaPluginBluePrint(); \
	friend struct Z_Construct_UClass_UCiliaPluginBluePrint_Statics; \
public: \
	DECLARE_CLASS(UCiliaPluginBluePrint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCiliaPluginBluePrint)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUCiliaPluginBluePrint(); \
	friend struct Z_Construct_UClass_UCiliaPluginBluePrint_Statics; \
public: \
	DECLARE_CLASS(UCiliaPluginBluePrint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCiliaPluginBluePrint)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCiliaPluginBluePrint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCiliaPluginBluePrint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCiliaPluginBluePrint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCiliaPluginBluePrint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCiliaPluginBluePrint(UCiliaPluginBluePrint&&); \
	NO_API UCiliaPluginBluePrint(const UCiliaPluginBluePrint&); \
public:


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCiliaPluginBluePrint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCiliaPluginBluePrint(UCiliaPluginBluePrint&&); \
	NO_API UCiliaPluginBluePrint(const UCiliaPluginBluePrint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCiliaPluginBluePrint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCiliaPluginBluePrint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCiliaPluginBluePrint)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_PRIVATE_PROPERTY_OFFSET
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_30_PROLOG
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_RPC_WRAPPERS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_INCLASS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_INCLASS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CILIAPLUGIN_API UClass* StaticClass<class UCiliaPluginBluePrint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_CiliaPluginBluePrint_h


#define FOREACH_ENUM_LIGHTNUMBER(op) \
	op(LightNumber::Light1) \
	op(LightNumber::Light2) \
	op(LightNumber::Light3) \
	op(LightNumber::Light4) \
	op(LightNumber::Light5) \
	op(LightNumber::Light6) 

enum class LightNumber : uint8;
template<> CILIAPLUGIN_API UEnum* StaticEnum<LightNumber>();

#define FOREACH_ENUM_FANNUMBER(op) \
	op(FanNumber::Fan1) \
	op(FanNumber::Fan2) \
	op(FanNumber::Fan3) \
	op(FanNumber::Fan4) \
	op(FanNumber::Fan5) \
	op(FanNumber::Fan6) 

enum class FanNumber : uint8;
template<> CILIAPLUGIN_API UEnum* StaticEnum<FanNumber>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
