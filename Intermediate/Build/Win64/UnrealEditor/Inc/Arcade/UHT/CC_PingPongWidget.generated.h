// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_PingPongWidget.h"

#ifdef ARCADE_CC_PingPongWidget_generated_h
#error "CC_PingPongWidget.generated.h already included, missing '#pragma once' in CC_PingPongWidget.h"
#endif
#define ARCADE_CC_PingPongWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCC_PingPongWidget *******************************************************
#define FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdatePlayerTwo); \
	DECLARE_FUNCTION(execUpdatePlayerOne);


ARCADE_API UClass* Z_Construct_UClass_UCC_PingPongWidget_NoRegister();

#define FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCC_PingPongWidget(); \
	friend struct Z_Construct_UClass_UCC_PingPongWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_UCC_PingPongWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCC_PingPongWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_UCC_PingPongWidget_NoRegister) \
	DECLARE_SERIALIZER(UCC_PingPongWidget)


#define FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCC_PingPongWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCC_PingPongWidget(UCC_PingPongWidget&&) = delete; \
	UCC_PingPongWidget(const UCC_PingPongWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCC_PingPongWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCC_PingPongWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCC_PingPongWidget) \
	NO_API virtual ~UCC_PingPongWidget();


#define FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h_12_PROLOG
#define FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCC_PingPongWidget;

// ********** End Class UCC_PingPongWidget *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
