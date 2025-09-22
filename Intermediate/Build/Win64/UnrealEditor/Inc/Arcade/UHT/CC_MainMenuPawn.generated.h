// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_MainMenuPawn.h"

#ifdef ARCADE_CC_MainMenuPawn_generated_h
#error "CC_MainMenuPawn.generated.h already included, missing '#pragma once' in CC_MainMenuPawn.h"
#endif
#define ARCADE_CC_MainMenuPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACC_MainMenuPawn *********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_MainMenuPawn_NoRegister();

#define FID_Arcade_Source_Arcade_Public_CC_MainMenuPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_MainMenuPawn(); \
	friend struct Z_Construct_UClass_ACC_MainMenuPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_MainMenuPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_MainMenuPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_MainMenuPawn_NoRegister) \
	DECLARE_SERIALIZER(ACC_MainMenuPawn)


#define FID_Arcade_Source_Arcade_Public_CC_MainMenuPawn_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_MainMenuPawn(ACC_MainMenuPawn&&) = delete; \
	ACC_MainMenuPawn(const ACC_MainMenuPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_MainMenuPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_MainMenuPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_MainMenuPawn) \
	NO_API virtual ~ACC_MainMenuPawn();


#define FID_Arcade_Source_Arcade_Public_CC_MainMenuPawn_h_10_PROLOG
#define FID_Arcade_Source_Arcade_Public_CC_MainMenuPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_CC_MainMenuPawn_h_13_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_MainMenuPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_MainMenuPawn;

// ********** End Class ACC_MainMenuPawn ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_CC_MainMenuPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
