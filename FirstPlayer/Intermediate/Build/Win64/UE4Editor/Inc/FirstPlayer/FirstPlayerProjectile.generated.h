// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIRSTPLAYER_FirstPlayerProjectile_generated_h
#error "FirstPlayerProjectile.generated.h already included, missing '#pragma once' in FirstPlayerProjectile.h"
#endif
#define FIRSTPLAYER_FirstPlayerProjectile_generated_h

#define FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_SPARSE_DATA
#define FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPlayerProjectile(); \
	friend struct Z_Construct_UClass_AFirstPlayerProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstPlayerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPlayer"), NO_API) \
	DECLARE_SERIALIZER(AFirstPlayerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPlayerProjectile(); \
	friend struct Z_Construct_UClass_AFirstPlayerProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstPlayerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPlayer"), NO_API) \
	DECLARE_SERIALIZER(AFirstPlayerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPlayerProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPlayerProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPlayerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPlayerProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPlayerProjectile(AFirstPlayerProjectile&&); \
	NO_API AFirstPlayerProjectile(const AFirstPlayerProjectile&); \
public:


#define FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPlayerProjectile(AFirstPlayerProjectile&&); \
	NO_API AFirstPlayerProjectile(const AFirstPlayerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPlayerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPlayerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPlayerProjectile)


#define FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFirstPlayerProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFirstPlayerProjectile, ProjectileMovement); }


#define FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_12_PROLOG
#define FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_SPARSE_DATA \
	FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_RPC_WRAPPERS \
	FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_INCLASS \
	FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_SPARSE_DATA \
	FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPLAYER_API UClass* StaticClass<class AFirstPlayerProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstPlayer_Source_FirstPlayer_FirstPlayerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
