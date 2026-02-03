// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacMan/CC_PawnPacMan.h"

#ifdef ARCADE_CC_PawnPacMan_generated_h
#error "CC_PawnPacMan.generated.h already included, missing '#pragma once' in CC_PawnPacMan.h"
#endif
#define ARCADE_CC_PawnPacMan_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EPacDirection : uint8;
struct FInputActionValue;

// ********** Begin Class ACC_PawnPacMan ***********************************************************
#define FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRoatatingDirection); \
	DECLARE_FUNCTION(execOpenDirection); \
	DECLARE_FUNCTION(execPaused); \
	DECLARE_FUNCTION(execResetMovement); \
	DECLARE_FUNCTION(execAlwaysMovingForward); \
	DECLARE_FUNCTION(execOnCameraTimelineFinished); \
	DECLARE_FUNCTION(execCameraTimelineProgress);


ARCADE_API UClass* Z_Construct_UClass_ACC_PawnPacMan_NoRegister();

#define FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_PawnPacMan(); \
	friend struct Z_Construct_UClass_ACC_PawnPacMan_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_PawnPacMan_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_PawnPacMan, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_PawnPacMan_NoRegister) \
	DECLARE_SERIALIZER(ACC_PawnPacMan)


#define FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_PawnPacMan(ACC_PawnPacMan&&) = delete; \
	ACC_PawnPacMan(const ACC_PawnPacMan&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_PawnPacMan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_PawnPacMan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_PawnPacMan) \
	NO_API virtual ~ACC_PawnPacMan();


#define FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h_32_PROLOG
#define FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h_35_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_PawnPacMan;

// ********** End Class ACC_PawnPacMan *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h

// ********** Begin Enum EPacDirection *************************************************************
#define FOREACH_ENUM_EPACDIRECTION(op) \
	op(EPacDirection::UP) \
	op(EPacDirection::Down) \
	op(EPacDirection::Left) \
	op(EPacDirection::Right) 

enum class EPacDirection : uint8;
template<> struct TIsUEnumClass<EPacDirection> { enum { Value = true }; };
template<> ARCADE_API UEnum* StaticEnum<EPacDirection>();
// ********** End Enum EPacDirection ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
