// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_PingBallSpawner.h"

#ifdef ARCADE_CC_PingBallSpawner_generated_h
#error "CC_PingBallSpawner.generated.h already included, missing '#pragma once' in CC_PingBallSpawner.h"
#endif
#define ARCADE_CC_PingBallSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACC_PingPongBall;

// ********** Begin Class ACC_PingBallSpawner ******************************************************
#define FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnBall);


ARCADE_API UClass* Z_Construct_UClass_ACC_PingBallSpawner_NoRegister();

#define FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_PingBallSpawner(); \
	friend struct Z_Construct_UClass_ACC_PingBallSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_PingBallSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_PingBallSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_PingBallSpawner_NoRegister) \
	DECLARE_SERIALIZER(ACC_PingBallSpawner)


#define FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_PingBallSpawner(ACC_PingBallSpawner&&) = delete; \
	ACC_PingBallSpawner(const ACC_PingBallSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_PingBallSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_PingBallSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_PingBallSpawner) \
	NO_API virtual ~ACC_PingBallSpawner();


#define FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h_9_PROLOG
#define FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h_12_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_PingBallSpawner;

// ********** End Class ACC_PingBallSpawner ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
