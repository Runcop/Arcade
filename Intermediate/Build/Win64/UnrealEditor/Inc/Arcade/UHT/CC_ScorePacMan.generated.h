// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacMan/CC_ScorePacMan.h"

#ifdef ARCADE_CC_ScorePacMan_generated_h
#error "CC_ScorePacMan.generated.h already included, missing '#pragma once' in CC_ScorePacMan.h"
#endif
#define ARCADE_CC_ScorePacMan_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACC_ScorePacMan **********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_ScorePacMan_NoRegister();

#define FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_ScorePacMan_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_ScorePacMan(); \
	friend struct Z_Construct_UClass_ACC_ScorePacMan_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_ScorePacMan_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_ScorePacMan, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_ScorePacMan_NoRegister) \
	DECLARE_SERIALIZER(ACC_ScorePacMan)


#define FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_ScorePacMan_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_ScorePacMan(ACC_ScorePacMan&&) = delete; \
	ACC_ScorePacMan(const ACC_ScorePacMan&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_ScorePacMan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_ScorePacMan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_ScorePacMan) \
	NO_API virtual ~ACC_ScorePacMan();


#define FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_ScorePacMan_h_15_PROLOG
#define FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_ScorePacMan_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_ScorePacMan_h_18_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_ScorePacMan_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_ScorePacMan;

// ********** End Class ACC_ScorePacMan ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_ScorePacMan_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
