// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_MainMenuWidget.h"

#ifdef ARCADE_CC_MainMenuWidget_generated_h
#error "CC_MainMenuWidget.generated.h already included, missing '#pragma once' in CC_MainMenuWidget.h"
#endif
#define ARCADE_CC_MainMenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACC_MainMenuController;
enum class EArcadeMachine : uint8;

// ********** Begin Class UCC_MainMenuWidget *******************************************************
#define FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateSelectedGameText); \
	DECLARE_FUNCTION(execOnPlayClicked); \
	DECLARE_FUNCTION(execOnBackToMainMenuClicked); \
	DECLARE_FUNCTION(execOnBackClicked); \
	DECLARE_FUNCTION(execOnNextClicked); \
	DECLARE_FUNCTION(execOnSettingsClicked); \
	DECLARE_FUNCTION(execOnStartClicked); \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execSetNavigationEnabled); \
	DECLARE_FUNCTION(execPreviousSelectedGame); \
	DECLARE_FUNCTION(execNextSelectedGame); \
	DECLARE_FUNCTION(execSelectedArcadeMachine); \
	DECLARE_FUNCTION(execSetMainMenuController);


ARCADE_API UClass* Z_Construct_UClass_UCC_MainMenuWidget_NoRegister();

#define FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCC_MainMenuWidget(); \
	friend struct Z_Construct_UClass_UCC_MainMenuWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_UCC_MainMenuWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCC_MainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_UCC_MainMenuWidget_NoRegister) \
	DECLARE_SERIALIZER(UCC_MainMenuWidget)


#define FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCC_MainMenuWidget(UCC_MainMenuWidget&&) = delete; \
	UCC_MainMenuWidget(const UCC_MainMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCC_MainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCC_MainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCC_MainMenuWidget) \
	NO_API virtual ~UCC_MainMenuWidget();


#define FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h_12_PROLOG
#define FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCC_MainMenuWidget;

// ********** End Class UCC_MainMenuWidget *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
