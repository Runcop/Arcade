// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pong/CC_PingPongPawn.h"

#ifdef ARCADE_CC_PingPongPawn_generated_h
#error "CC_PingPongPawn.generated.h already included, missing '#pragma once' in CC_PingPongPawn.h"
#endif
#define ARCADE_CC_PingPongPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FInputActionValue;

// ********** Begin Class ACC_PingPongPawn *********************************************************
#define FID_UnrealProjects_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBoostInput); \
	DECLARE_FUNCTION(execPauseEvent); \
	DECLARE_FUNCTION(execSwitchingCamera); \
	DECLARE_FUNCTION(execEnhancedMove);


ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongPawn_NoRegister();

#define FID_UnrealProjects_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_PingPongPawn(); \
	friend struct Z_Construct_UClass_ACC_PingPongPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_PingPongPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_PingPongPawn_NoRegister) \
	DECLARE_SERIALIZER(ACC_PingPongPawn)


#define FID_UnrealProjects_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_PingPongPawn(ACC_PingPongPawn&&) = delete; \
	ACC_PingPongPawn(const ACC_PingPongPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_PingPongPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_PingPongPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_PingPongPawn) \
	NO_API virtual ~ACC_PingPongPawn();


#define FID_UnrealProjects_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h_16_PROLOG
#define FID_UnrealProjects_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h_19_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_PingPongPawn;

// ********** End Class ACC_PingPongPawn ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
