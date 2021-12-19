// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPLAYER_MyHUD_generated_h
#error "MyHUD.generated.h already included, missing '#pragma once' in MyHUD.h"
#endif
#define FIRSTPLAYER_MyHUD_generated_h

#define FirstPlayer_Source_FirstPlayer_MyHUD_h_15_SPARSE_DATA
#define FirstPlayer_Source_FirstPlayer_MyHUD_h_15_RPC_WRAPPERS
#define FirstPlayer_Source_FirstPlayer_MyHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstPlayer_Source_FirstPlayer_MyHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyHUD(); \
	friend struct Z_Construct_UClass_UMyHUD_Statics; \
public: \
	DECLARE_CLASS(UMyHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstPlayer"), NO_API) \
	DECLARE_SERIALIZER(UMyHUD)


#define FirstPlayer_Source_FirstPlayer_MyHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyHUD(); \
	friend struct Z_Construct_UClass_UMyHUD_Statics; \
public: \
	DECLARE_CLASS(UMyHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstPlayer"), NO_API) \
	DECLARE_SERIALIZER(UMyHUD)


#define FirstPlayer_Source_FirstPlayer_MyHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyHUD(UMyHUD&&); \
	NO_API UMyHUD(const UMyHUD&); \
public:


#define FirstPlayer_Source_FirstPlayer_MyHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyHUD(UMyHUD&&); \
	NO_API UMyHUD(const UMyHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyHUD)


#define FirstPlayer_Source_FirstPlayer_MyHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define FirstPlayer_Source_FirstPlayer_MyHUD_h_12_PROLOG
#define FirstPlayer_Source_FirstPlayer_MyHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPlayer_Source_FirstPlayer_MyHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstPlayer_Source_FirstPlayer_MyHUD_h_15_SPARSE_DATA \
	FirstPlayer_Source_FirstPlayer_MyHUD_h_15_RPC_WRAPPERS \
	FirstPlayer_Source_FirstPlayer_MyHUD_h_15_INCLASS \
	FirstPlayer_Source_FirstPlayer_MyHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstPlayer_Source_FirstPlayer_MyHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPlayer_Source_FirstPlayer_MyHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstPlayer_Source_FirstPlayer_MyHUD_h_15_SPARSE_DATA \
	FirstPlayer_Source_FirstPlayer_MyHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstPlayer_Source_FirstPlayer_MyHUD_h_15_INCLASS_NO_PURE_DECLS \
	FirstPlayer_Source_FirstPlayer_MyHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPLAYER_API UClass* StaticClass<class UMyHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstPlayer_Source_FirstPlayer_MyHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
