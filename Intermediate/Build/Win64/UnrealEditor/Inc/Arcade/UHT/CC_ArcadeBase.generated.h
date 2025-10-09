// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_ArcadeBase.h"

#ifdef ARCADE_CC_ArcadeBase_generated_h
#error "CC_ArcadeBase.generated.h already included, missing '#pragma once' in CC_ArcadeBase.h"
#endif
#define ARCADE_CC_ArcadeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EArcadeMachine : uint8;

// ********** Begin Class ACC_ArcadeBase ***********************************************************
#define FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetArcadeMachineType);


ARCADE_API UClass* Z_Construct_UClass_ACC_ArcadeBase_NoRegister();

#define FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_ArcadeBase(); \
	friend struct Z_Construct_UClass_ACC_ArcadeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_ArcadeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_ArcadeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_ArcadeBase_NoRegister) \
	DECLARE_SERIALIZER(ACC_ArcadeBase)


#define FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_ArcadeBase(ACC_ArcadeBase&&) = delete; \
	ACC_ArcadeBase(const ACC_ArcadeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_ArcadeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_ArcadeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_ArcadeBase) \
	NO_API virtual ~ACC_ArcadeBase();


#define FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h_12_PROLOG
#define FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_ArcadeBase;

// ********** End Class ACC_ArcadeBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
