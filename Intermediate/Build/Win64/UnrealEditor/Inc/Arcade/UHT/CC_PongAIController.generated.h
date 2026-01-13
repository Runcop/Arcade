// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pong/CC_PongAIController.h"

#ifdef ARCADE_CC_PongAIController_generated_h
#error "CC_PongAIController.generated.h already included, missing '#pragma once' in CC_PongAIController.h"
#endif
#define ARCADE_CC_PongAIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ACC_PongAIController *****************************************************
#define FID_Arcade_Source_Arcade_Public_Pong_CC_PongAIController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBallDestroyed);


ARCADE_API UClass* Z_Construct_UClass_ACC_PongAIController_NoRegister();

#define FID_Arcade_Source_Arcade_Public_Pong_CC_PongAIController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_PongAIController(); \
	friend struct Z_Construct_UClass_ACC_PongAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_PongAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_PongAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_PongAIController_NoRegister) \
	DECLARE_SERIALIZER(ACC_PongAIController)


#define FID_Arcade_Source_Arcade_Public_Pong_CC_PongAIController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACC_PongAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_PongAIController(ACC_PongAIController&&) = delete; \
	ACC_PongAIController(const ACC_PongAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_PongAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_PongAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACC_PongAIController) \
	NO_API virtual ~ACC_PongAIController();


#define FID_Arcade_Source_Arcade_Public_Pong_CC_PongAIController_h_11_PROLOG
#define FID_Arcade_Source_Arcade_Public_Pong_CC_PongAIController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_Pong_CC_PongAIController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_Pong_CC_PongAIController_h_14_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_Pong_CC_PongAIController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_PongAIController;

// ********** End Class ACC_PongAIController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_Pong_CC_PongAIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
