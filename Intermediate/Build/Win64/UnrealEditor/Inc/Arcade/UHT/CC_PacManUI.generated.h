// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacMan/CC_PacManUI.h"

#ifdef ARCADE_CC_PacManUI_generated_h
#error "CC_PacManUI.generated.h already included, missing '#pragma once' in CC_PacManUI.h"
#endif
#define ARCADE_CC_PacManUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCC_PacManUI *************************************************************
#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execMainMenu); \
	DECLARE_FUNCTION(execPauseGameUI); \
	DECLARE_FUNCTION(execRefreshScore);


ARCADE_API UClass* Z_Construct_UClass_UCC_PacManUI_NoRegister();

#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCC_PacManUI(); \
	friend struct Z_Construct_UClass_UCC_PacManUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_UCC_PacManUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UCC_PacManUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_UCC_PacManUI_NoRegister) \
	DECLARE_SERIALIZER(UCC_PacManUI)


#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCC_PacManUI(UCC_PacManUI&&) = delete; \
	UCC_PacManUI(const UCC_PacManUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCC_PacManUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCC_PacManUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCC_PacManUI) \
	NO_API virtual ~UCC_PacManUI();


#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h_14_PROLOG
#define FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCC_PacManUI;

// ********** End Class UCC_PacManUI ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
