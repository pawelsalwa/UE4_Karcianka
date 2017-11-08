// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRO1_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define PRO1_MyPlayer_generated_h

#define pro1_Source_pro1_Public_MyPlayer_h_15_RPC_WRAPPERS
#define pro1_Source_pro1_Public_MyPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define pro1_Source_pro1_Public_MyPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyPlayer(); \
	friend PRO1_API class UClass* Z_Construct_UClass_UMyPlayer(); \
public: \
	DECLARE_CLASS(UMyPlayer, UPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/pro1"), NO_API) \
	DECLARE_SERIALIZER(UMyPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define pro1_Source_pro1_Public_MyPlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyPlayer(); \
	friend PRO1_API class UClass* Z_Construct_UClass_UMyPlayer(); \
public: \
	DECLARE_CLASS(UMyPlayer, UPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/pro1"), NO_API) \
	DECLARE_SERIALIZER(UMyPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define pro1_Source_pro1_Public_MyPlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPlayer(UMyPlayer&&); \
	NO_API UMyPlayer(const UMyPlayer&); \
public:


#define pro1_Source_pro1_Public_MyPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPlayer(UMyPlayer&&); \
	NO_API UMyPlayer(const UMyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyPlayer)


#define pro1_Source_pro1_Public_MyPlayer_h_15_PRIVATE_PROPERTY_OFFSET
#define pro1_Source_pro1_Public_MyPlayer_h_12_PROLOG
#define pro1_Source_pro1_Public_MyPlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pro1_Source_pro1_Public_MyPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	pro1_Source_pro1_Public_MyPlayer_h_15_RPC_WRAPPERS \
	pro1_Source_pro1_Public_MyPlayer_h_15_INCLASS \
	pro1_Source_pro1_Public_MyPlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define pro1_Source_pro1_Public_MyPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	pro1_Source_pro1_Public_MyPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	pro1_Source_pro1_Public_MyPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	pro1_Source_pro1_Public_MyPlayer_h_15_INCLASS_NO_PURE_DECLS \
	pro1_Source_pro1_Public_MyPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID pro1_Source_pro1_Public_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
