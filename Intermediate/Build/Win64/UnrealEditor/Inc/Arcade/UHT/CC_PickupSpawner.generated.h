// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_PickupSpawner.h"

#ifdef ARCADE_CC_PickupSpawner_generated_h
#error "CC_PickupSpawner.generated.h already included, missing '#pragma once' in CC_PickupSpawner.h"
#endif
#define ARCADE_CC_PickupSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACC_PickupSpawner ********************************************************
#define FID_Arcade_Source_Arcade_Public_CC_PickupSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawningPickup);


ARCADE_API UClass* Z_Construct_UClass_ACC_PickupSpawner_NoRegister();

#define FID_Arcade_Source_Arcade_Public_CC_PickupSpawner_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_PickupSpawner(); \
	friend struct Z_Construct_UClass_ACC_PickupSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_PickupSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_PickupSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_PickupSpawner_NoRegister) \
	DECLARE_SERIALIZER(ACC_PickupSpawner)


#define FID_Arcade_Source_Arcade_Public_CC_PickupSpawner_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_PickupSpawner(ACC_PickupSpawner&&) = delete; \
	ACC_PickupSpawner(const ACC_PickupSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_PickupSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_PickupSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_PickupSpawner) \
	NO_API virtual ~ACC_PickupSpawner();


#define FID_Arcade_Source_Arcade_Public_CC_PickupSpawner_h_10_PROLOG
#define FID_Arcade_Source_Arcade_Public_CC_PickupSpawner_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_CC_PickupSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_PickupSpawner_h_13_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_PickupSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_PickupSpawner;

// ********** End Class ACC_PickupSpawner **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_CC_PickupSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
