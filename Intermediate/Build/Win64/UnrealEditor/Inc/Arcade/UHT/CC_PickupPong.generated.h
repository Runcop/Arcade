// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_PickupPong.h"

#ifdef ARCADE_CC_PickupPong_generated_h
#error "CC_PickupPong.generated.h already included, missing '#pragma once' in CC_PickupPong.h"
#endif
#define ARCADE_CC_PickupPong_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACC_PingPongBall;

// ********** Begin Class ACC_PickupPong ***********************************************************
#define FID_Arcade_Source_Arcade_Public_CC_PickupPong_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGivenBoon);


ARCADE_API UClass* Z_Construct_UClass_ACC_PickupPong_NoRegister();

#define FID_Arcade_Source_Arcade_Public_CC_PickupPong_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_PickupPong(); \
	friend struct Z_Construct_UClass_ACC_PickupPong_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_PickupPong_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_PickupPong, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_PickupPong_NoRegister) \
	DECLARE_SERIALIZER(ACC_PickupPong)


#define FID_Arcade_Source_Arcade_Public_CC_PickupPong_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_PickupPong(ACC_PickupPong&&) = delete; \
	ACC_PickupPong(const ACC_PickupPong&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_PickupPong); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_PickupPong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_PickupPong) \
	NO_API virtual ~ACC_PickupPong();


#define FID_Arcade_Source_Arcade_Public_CC_PickupPong_h_9_PROLOG
#define FID_Arcade_Source_Arcade_Public_CC_PickupPong_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_CC_PickupPong_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_PickupPong_h_12_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_PickupPong_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_PickupPong;

// ********** End Class ACC_PickupPong *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_CC_PickupPong_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
