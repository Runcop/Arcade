// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacMan/CC_PacManController.h"

#ifdef ARCADE_CC_PacManController_generated_h
#error "CC_PacManController.generated.h already included, missing '#pragma once' in CC_PacManController.h"
#endif
#define ARCADE_CC_PacManController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACC_PacManController *****************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PacManController_NoRegister();

#define FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_PacManController(); \
	friend struct Z_Construct_UClass_ACC_PacManController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_PacManController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_PacManController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_PacManController_NoRegister) \
	DECLARE_SERIALIZER(ACC_PacManController)


#define FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACC_PacManController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_PacManController(ACC_PacManController&&) = delete; \
	ACC_PacManController(const ACC_PacManController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_PacManController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_PacManController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACC_PacManController) \
	NO_API virtual ~ACC_PacManController();


#define FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h_12_PROLOG
#define FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_PacManController;

// ********** End Class ACC_PacManController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
