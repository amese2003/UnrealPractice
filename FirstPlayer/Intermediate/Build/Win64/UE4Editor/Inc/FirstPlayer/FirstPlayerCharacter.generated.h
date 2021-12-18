// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPLAYER_FirstPlayerCharacter_generated_h
#error "FirstPlayerCharacter.generated.h already included, missing '#pragma once' in FirstPlayerCharacter.h"
#endif
#define FIRSTPLAYER_FirstPlayerCharacter_generated_h

#define FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_SPARSE_DATA
#define FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_RPC_WRAPPERS
#define FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPlayerCharacter(); \
	friend struct Z_Construct_UClass_AFirstPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPlayer"), NO_API) \
	DECLARE_SERIALIZER(AFirstPlayerCharacter)


#define FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPlayerCharacter(); \
	friend struct Z_Construct_UClass_AFirstPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPlayer"), NO_API) \
	DECLARE_SERIALIZER(AFirstPlayerCharacter)


#define FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPlayerCharacter(AFirstPlayerCharacter&&); \
	NO_API AFirstPlayerCharacter(const AFirstPlayerCharacter&); \
public:


#define FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPlayerCharacter(AFirstPlayerCharacter&&); \
	NO_API AFirstPlayerCharacter(const AFirstPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPlayerCharacter)


#define FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFirstPlayerCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFirstPlayerCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFirstPlayerCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFirstPlayerCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFirstPlayerCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFirstPlayerCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFirstPlayerCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFirstPlayerCharacter, L_MotionController); }


#define FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_17_PROLOG
#define FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_SPARSE_DATA \
	FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_RPC_WRAPPERS \
	FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_INCLASS \
	FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_SPARSE_DATA \
	FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPLAYER_API UClass* StaticClass<class AFirstPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstPlayer_Source_FirstPlayer_FirstPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
