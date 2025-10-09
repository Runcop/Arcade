// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_MainMenuController.h"

#ifdef ARCADE_CC_MainMenuController_generated_h
#error "CC_MainMenuController.generated.h already included, missing '#pragma once' in CC_MainMenuController.h"
#endif
#define ARCADE_CC_MainMenuController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCC_MainMenuWidget;
enum class EArcadeMachine : uint8;
enum class EArcadeMachine : uint8; 

// ********** Begin Class ACC_MainMenuController ***************************************************
#define FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGameSelected); \
	DECLARE_FUNCTION(execIsCameraMoving); \
	DECLARE_FUNCTION(execOnCameraTimelineFinished); \
	DECLARE_FUNCTION(execCameraTimelineProgress); \
	DECLARE_FUNCTION(execMoveCameraToInitialLocation); \
	DECLARE_FUNCTION(execRemoveCurrentWidget); \
	DECLARE_FUNCTION(execGetAllArcades); \
	DECLARE_FUNCTION(execMoveCameraToArcade); \
	DECLARE_FUNCTION(execShowWidget);


ARCADE_API UClass* Z_Construct_UClass_ACC_MainMenuController_NoRegister();

#define FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_MainMenuController(); \
	friend struct Z_Construct_UClass_ACC_MainMenuController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_MainMenuController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_MainMenuController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_MainMenuController_NoRegister) \
	DECLARE_SERIALIZER(ACC_MainMenuController)


#define FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_MainMenuController(ACC_MainMenuController&&) = delete; \
	ACC_MainMenuController(const ACC_MainMenuController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_MainMenuController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_MainMenuController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_MainMenuController) \
	NO_API virtual ~ACC_MainMenuController();


#define FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h_32_PROLOG
#define FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h_35_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_MainMenuController;

// ********** End Class ACC_MainMenuController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h

// ********** Begin Enum EArcadeMachine ************************************************************
#define FOREACH_ENUM_EARCADEMACHINE(op) \
	op(EArcadeMachine::PingPong) \
	op(EArcadeMachine::PacMan) \
	op(EArcadeMachine::SpaceInvaders) 

enum class EArcadeMachine : uint8;
template<> struct TIsUEnumClass<EArcadeMachine> { enum { Value = true }; };
template<> ARCADE_API UEnum* StaticEnum<EArcadeMachine>();
// ********** End Enum EArcadeMachine **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
