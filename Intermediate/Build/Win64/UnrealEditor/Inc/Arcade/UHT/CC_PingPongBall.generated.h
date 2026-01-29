// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pong/CC_PingPongBall.h"

#ifdef ARCADE_CC_PingPongBall_generated_h
#error "CC_PingPongBall.generated.h already included, missing '#pragma once' in CC_PingPongBall.h"
#endif
#define ARCADE_CC_PingPongBall_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ACC_PingPongBall *********************************************************
#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongBall_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLastPaddleHit); \
	DECLARE_FUNCTION(execOnHit);


ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongBall_NoRegister();

#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongBall_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_PingPongBall(); \
	friend struct Z_Construct_UClass_ACC_PingPongBall_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongBall_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_PingPongBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_PingPongBall_NoRegister) \
	DECLARE_SERIALIZER(ACC_PingPongBall)


#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongBall_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_PingPongBall(ACC_PingPongBall&&) = delete; \
	ACC_PingPongBall(const ACC_PingPongBall&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_PingPongBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_PingPongBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_PingPongBall) \
	NO_API virtual ~ACC_PingPongBall();


#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongBall_h_14_PROLOG
#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongBall_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongBall_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongBall_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongBall_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_PingPongBall;

// ********** End Class ACC_PingPongBall ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongBall_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
