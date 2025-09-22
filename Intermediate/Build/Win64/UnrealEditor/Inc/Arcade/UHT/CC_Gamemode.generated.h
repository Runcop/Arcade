// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_Gamemode.h"

#ifdef ARCADE_CC_Gamemode_generated_h
#error "CC_Gamemode.generated.h already included, missing '#pragma once' in CC_Gamemode.h"
#endif
#define ARCADE_CC_Gamemode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACC_Gamemode *************************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_Gamemode_NoRegister();

#define FID_Arcade_Source_Arcade_Public_CC_Gamemode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_Gamemode(); \
	friend struct Z_Construct_UClass_ACC_Gamemode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_Gamemode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_Gamemode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_Gamemode_NoRegister) \
	DECLARE_SERIALIZER(ACC_Gamemode)


#define FID_Arcade_Source_Arcade_Public_CC_Gamemode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACC_Gamemode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_Gamemode(ACC_Gamemode&&) = delete; \
	ACC_Gamemode(const ACC_Gamemode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_Gamemode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_Gamemode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACC_Gamemode) \
	NO_API virtual ~ACC_Gamemode();


#define FID_Arcade_Source_Arcade_Public_CC_Gamemode_h_12_PROLOG
#define FID_Arcade_Source_Arcade_Public_CC_Gamemode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_CC_Gamemode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_Gamemode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_Gamemode;

// ********** End Class ACC_Gamemode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_CC_Gamemode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
