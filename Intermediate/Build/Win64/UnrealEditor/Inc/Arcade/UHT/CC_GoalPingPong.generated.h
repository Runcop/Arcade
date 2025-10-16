// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_GoalPingPong.h"

#ifdef ARCADE_CC_GoalPingPong_generated_h
#error "CC_GoalPingPong.generated.h already included, missing '#pragma once' in CC_GoalPingPong.h"
#endif
#define ARCADE_CC_GoalPingPong_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACC_GoalPingPong *********************************************************
#define FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGoalScored);


ARCADE_API UClass* Z_Construct_UClass_ACC_GoalPingPong_NoRegister();

#define FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_GoalPingPong(); \
	friend struct Z_Construct_UClass_ACC_GoalPingPong_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCADE_API UClass* Z_Construct_UClass_ACC_GoalPingPong_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_GoalPingPong, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcade"), Z_Construct_UClass_ACC_GoalPingPong_NoRegister) \
	DECLARE_SERIALIZER(ACC_GoalPingPong)


#define FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_GoalPingPong(ACC_GoalPingPong&&) = delete; \
	ACC_GoalPingPong(const ACC_GoalPingPong&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_GoalPingPong); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_GoalPingPong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_GoalPingPong) \
	NO_API virtual ~ACC_GoalPingPong();


#define FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h_19_PROLOG
#define FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h_22_INCLASS_NO_PURE_DECLS \
	FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_GoalPingPong;

// ********** End Class ACC_GoalPingPong ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h

// ********** Begin Enum ETeams ********************************************************************
#define FOREACH_ENUM_ETEAMS(op) \
	op(ETeams::TeamOne) \
	op(ETeams::TeamTwo) 

enum class ETeams : uint8;
template<> struct TIsUEnumClass<ETeams> { enum { Value = true }; };
template<> ARCADE_API UEnum* StaticEnum<ETeams>();
// ********** End Enum ETeams **********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
