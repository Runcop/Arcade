// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacMan/CC_PacManGM.h"

#ifdef ARCADE_CC_PacManGM_generated_h
#error "CC_PacManGM.generated.h already included, missing '#pragma once' in CC_PacManGM.h"
#endif
#define ARCADE_CC_PacManGM_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACC_PacManGM *************************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PacManGM_NoRegister();

#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_PacManGM(); \
	friend struct Z_Construct_UClass_ACC_PacManGM_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_PacManGM_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_PacManGM, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_PacManGM_NoRegister) \
	DECLARE_SERIALIZER(ACC_PacManGM)


#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_PacManGM(ACC_PacManGM&&) = delete; \
	ACC_PacManGM(const ACC_PacManGM&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_PacManGM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_PacManGM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_PacManGM) \
	NO_API virtual ~ACC_PacManGM();


#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h_10_PROLOG
#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_PacManGM;

// ********** End Class ACC_PacManGM ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
