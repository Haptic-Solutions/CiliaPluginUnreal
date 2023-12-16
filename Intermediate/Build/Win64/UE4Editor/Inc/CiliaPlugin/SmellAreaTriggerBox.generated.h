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
#ifdef CILIAPLUGIN_SmellAreaTriggerBox_generated_h
#error "SmellAreaTriggerBox.generated.h already included, missing '#pragma once' in SmellAreaTriggerBox.h"
#endif
#define CILIAPLUGIN_SmellAreaTriggerBox_generated_h

#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_SPARSE_DATA
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSmellAreaEffect); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSmellAreaEffect); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASmellAreaTriggerBox(); \
	friend struct Z_Construct_UClass_ASmellAreaTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ASmellAreaTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASmellAreaTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASmellAreaTriggerBox(); \
	friend struct Z_Construct_UClass_ASmellAreaTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ASmellAreaTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CiliaPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASmellAreaTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASmellAreaTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASmellAreaTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmellAreaTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmellAreaTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmellAreaTriggerBox(ASmellAreaTriggerBox&&); \
	NO_API ASmellAreaTriggerBox(const ASmellAreaTriggerBox&); \
public:


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmellAreaTriggerBox(ASmellAreaTriggerBox&&); \
	NO_API ASmellAreaTriggerBox(const ASmellAreaTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmellAreaTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmellAreaTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASmellAreaTriggerBox)


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_PRIVATE_PROPERTY_OFFSET
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_13_PROLOG
#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_RPC_WRAPPERS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_INCLASS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_PRIVATE_PROPERTY_OFFSET \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_SPARSE_DATA \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_INCLASS_NO_PURE_DECLS \
	pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CILIAPLUGIN_API UClass* StaticClass<class ASmellAreaTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID pluginshell_Plugins_CiliaPlugin_Source_CiliaPlugin_Public_SmellAreaTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
