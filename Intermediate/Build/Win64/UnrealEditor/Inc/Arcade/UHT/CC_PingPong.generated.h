// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_PingPong.h"

#ifdef ARCADE_CC_PingPong_generated_h
#error "CC_PingPong.generated.h already included, missing '#pragma once' in CC_PingPong.h"
#endif
#define ARCADE_CC_PingPong_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACC_PingBallSpawner;

// ********** Begin Class ACC_PingPong *************************************************************
#define FID_Arcade_Source_Arcade_Public_CC_PingPong_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawner); \
	DECLARE_FUNCTION(execTeamTwoScored); \
	DECLARE_FUNCTION(execTeamOneScored);


ARCADE_API UClass* Z_Construct_UClass_ACC_PingPong_NoRegister();

#define FID_Arcade_Source_Arcade_Public_CC_PingPong_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_PingPong(); \
	friend struct Z_Construct_UClass_ACC_PingPong_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_PingPong_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_PingPong, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_PingPong_NoRegister) \
	DECLARE_SERIALIZER(ACC_PingPong)


#define FID_Arcade_Source_Arcade_Public_CC_PingPong_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACC_PingPong(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_PingPong(ACC_PingPong&&) = delete; \
	ACC_PingPong(const ACC_PingPong&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_PingPong); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_PingPong); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACC_PingPong) \
	NO_API virtual ~ACC_PingPong();


#define FID_Arcade_Source_Arcade_Public_CC_PingPong_h_12_PROLOG
#define FID_Arcade_Source_Arcade_Public_CC_PingPong_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_CC_PingPong_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_PingPong_h_15_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_PingPong_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_PingPong;

// ********** End Class ACC_PingPong ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_CC_PingPong_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
