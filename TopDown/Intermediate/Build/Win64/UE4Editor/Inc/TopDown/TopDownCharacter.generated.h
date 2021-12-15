// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWN_TopDownCharacter_generated_h
#error "TopDownCharacter.generated.h already included, missing '#pragma once' in TopDownCharacter.h"
#endif
#define TOPDOWN_TopDownCharacter_generated_h

#define TopDown_Source_TopDown_TopDownCharacter_h_12_SPARSE_DATA
#define TopDown_Source_TopDown_TopDownCharacter_h_12_RPC_WRAPPERS
#define TopDown_Source_TopDown_TopDownCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TopDown_Source_TopDown_TopDownCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownCharacter(); \
	friend struct Z_Construct_UClass_ATopDownCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDown"), NO_API) \
	DECLARE_SERIALIZER(ATopDownCharacter)


#define TopDown_Source_TopDown_TopDownCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATopDownCharacter(); \
	friend struct Z_Construct_UClass_ATopDownCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDown"), NO_API) \
	DECLARE_SERIALIZER(ATopDownCharacter)


#define TopDown_Source_TopDown_TopDownCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopDownCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDownCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownCharacter(ATopDownCharacter&&); \
	NO_API ATopDownCharacter(const ATopDownCharacter&); \
public:


#define TopDown_Source_TopDown_TopDownCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownCharacter(ATopDownCharacter&&); \
	NO_API ATopDownCharacter(const ATopDownCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownCharacter)


#define TopDown_Source_TopDown_TopDownCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATopDownCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATopDownCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATopDownCharacter, CursorToWorld); }


#define TopDown_Source_TopDown_TopDownCharacter_h_9_PROLOG
#define TopDown_Source_TopDown_TopDownCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDown_Source_TopDown_TopDownCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TopDown_Source_TopDown_TopDownCharacter_h_12_SPARSE_DATA \
	TopDown_Source_TopDown_TopDownCharacter_h_12_RPC_WRAPPERS \
	TopDown_Source_TopDown_TopDownCharacter_h_12_INCLASS \
	TopDown_Source_TopDown_TopDownCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDown_Source_TopDown_TopDownCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDown_Source_TopDown_TopDownCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TopDown_Source_TopDown_TopDownCharacter_h_12_SPARSE_DATA \
	TopDown_Source_TopDown_TopDownCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDown_Source_TopDown_TopDownCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TopDown_Source_TopDown_TopDownCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWN_API UClass* StaticClass<class ATopDownCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDown_Source_TopDown_TopDownCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
