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
#ifdef SHARING_PATTERNS_Sharing_PatternsProjectile_generated_h
#error "Sharing_PatternsProjectile.generated.h already included, missing '#pragma once' in Sharing_PatternsProjectile.h"
#endif
#define SHARING_PATTERNS_Sharing_PatternsProjectile_generated_h

#define Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_SPARSE_DATA
#define Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASharing_PatternsProjectile(); \
	friend struct Z_Construct_UClass_ASharing_PatternsProjectile_Statics; \
public: \
	DECLARE_CLASS(ASharing_PatternsProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sharing_Patterns"), NO_API) \
	DECLARE_SERIALIZER(ASharing_PatternsProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASharing_PatternsProjectile(); \
	friend struct Z_Construct_UClass_ASharing_PatternsProjectile_Statics; \
public: \
	DECLARE_CLASS(ASharing_PatternsProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sharing_Patterns"), NO_API) \
	DECLARE_SERIALIZER(ASharing_PatternsProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASharing_PatternsProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASharing_PatternsProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASharing_PatternsProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASharing_PatternsProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASharing_PatternsProjectile(ASharing_PatternsProjectile&&); \
	NO_API ASharing_PatternsProjectile(const ASharing_PatternsProjectile&); \
public:


#define Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASharing_PatternsProjectile(ASharing_PatternsProjectile&&); \
	NO_API ASharing_PatternsProjectile(const ASharing_PatternsProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASharing_PatternsProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASharing_PatternsProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASharing_PatternsProjectile)


#define Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ASharing_PatternsProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ASharing_PatternsProjectile, ProjectileMovement); }


#define Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_12_PROLOG
#define Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_SPARSE_DATA \
	Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_RPC_WRAPPERS \
	Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_INCLASS \
	Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_SPARSE_DATA \
	Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHARING_PATTERNS_API UClass* StaticClass<class ASharing_PatternsProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sharing_Patterns_Source_Sharing_Patterns_Sharing_PatternsProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
