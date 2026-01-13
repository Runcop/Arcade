// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacMan/CC_GridSystem.h"

#ifdef ARCADE_CC_GridSystem_generated_h
#error "CC_GridSystem.generated.h already included, missing '#pragma once' in CC_GridSystem.h"
#endif
#define ARCADE_CC_GridSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACC_GridSystem ***********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_GridSystem_NoRegister();

#define FID_Arcade_Source_Arcade_Public_PacMan_CC_GridSystem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_GridSystem(); \
	friend struct Z_Construct_UClass_ACC_GridSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_GridSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_GridSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_GridSystem_NoRegister) \
	DECLARE_SERIALIZER(ACC_GridSystem)


#define FID_Arcade_Source_Arcade_Public_PacMan_CC_GridSystem_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_GridSystem(ACC_GridSystem&&) = delete; \
	ACC_GridSystem(const ACC_GridSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_GridSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_GridSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_GridSystem) \
	NO_API virtual ~ACC_GridSystem();


#define FID_Arcade_Source_Arcade_Public_PacMan_CC_GridSystem_h_9_PROLOG
#define FID_Arcade_Source_Arcade_Public_PacMan_CC_GridSystem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_PacMan_CC_GridSystem_h_12_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_PacMan_CC_GridSystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_GridSystem;

// ********** End Class ACC_GridSystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_PacMan_CC_GridSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
