// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan/CC_PawnPacMan.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PawnPacMan() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PawnPacMan();
ARCADE_API UClass* Z_Construct_UClass_ACC_PawnPacMan_NoRegister();
ARCADE_API UEnum* Z_Construct_UEnum_Arcade_EPacDirection();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPacDirection *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPacDirection;
static UEnum* EPacDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPacDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPacDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arcade_EPacDirection, (UObject*)Z_Construct_UPackage__Script_Arcade(), TEXT("EPacDirection"));
	}
	return Z_Registration_Info_UEnum_EPacDirection.OuterSingleton;
}
template<> ARCADE_API UEnum* StaticEnum<EPacDirection>()
{
	return EPacDirection_StaticEnum();
}
struct Z_Construct_UEnum_Arcade_EPacDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "EPacDirection::Down" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EPacDirection::Left" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EPacDirection::Right" },
		{ "UP.DisplayName", "UP" },
		{ "UP.Name", "EPacDirection::UP" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPacDirection::UP", (int64)EPacDirection::UP },
		{ "EPacDirection::Down", (int64)EPacDirection::Down },
		{ "EPacDirection::Left", (int64)EPacDirection::Left },
		{ "EPacDirection::Right", (int64)EPacDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arcade_EPacDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Arcade,
	nullptr,
	"EPacDirection",
	"EPacDirection",
	Z_Construct_UEnum_Arcade_EPacDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Arcade_EPacDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arcade_EPacDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arcade_EPacDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Arcade_EPacDirection()
{
	if (!Z_Registration_Info_UEnum_EPacDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPacDirection.InnerSingleton, Z_Construct_UEnum_Arcade_EPacDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPacDirection.InnerSingleton;
}
// ********** End Enum EPacDirection ***************************************************************

// ********** Begin Class ACC_PawnPacMan Function AlwaysMovingForward ******************************
struct Z_Construct_UFunction_ACC_PawnPacMan_AlwaysMovingForward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PawnPacMan_AlwaysMovingForward_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PawnPacMan, nullptr, "AlwaysMovingForward", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_AlwaysMovingForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PawnPacMan_AlwaysMovingForward_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PawnPacMan_AlwaysMovingForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PawnPacMan_AlwaysMovingForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PawnPacMan::execAlwaysMovingForward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AlwaysMovingForward();
	P_NATIVE_END;
}
// ********** End Class ACC_PawnPacMan Function AlwaysMovingForward ********************************

// ********** Begin Class ACC_PawnPacMan Function CameraTimelineProgress ***************************
struct Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics
{
	struct CC_PawnPacMan_eventCameraTimelineProgress_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PawnPacMan_eventCameraTimelineProgress_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PawnPacMan, nullptr, "CameraTimelineProgress", Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::CC_PawnPacMan_eventCameraTimelineProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::CC_PawnPacMan_eventCameraTimelineProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PawnPacMan::execCameraTimelineProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CameraTimelineProgress(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ACC_PawnPacMan Function CameraTimelineProgress *****************************

// ********** Begin Class ACC_PawnPacMan Function OnCameraTimelineFinished *************************
struct Z_Construct_UFunction_ACC_PawnPacMan_OnCameraTimelineFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PawnPacMan_OnCameraTimelineFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PawnPacMan, nullptr, "OnCameraTimelineFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_OnCameraTimelineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PawnPacMan_OnCameraTimelineFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PawnPacMan_OnCameraTimelineFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PawnPacMan_OnCameraTimelineFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PawnPacMan::execOnCameraTimelineFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCameraTimelineFinished();
	P_NATIVE_END;
}
// ********** End Class ACC_PawnPacMan Function OnCameraTimelineFinished ***************************

// ********** Begin Class ACC_PawnPacMan Function OpenDirection ************************************
struct Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics
{
	struct CC_PawnPacMan_eventOpenDirection_Parms
	{
		EPacDirection Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PawnPacMan_eventOpenDirection_Parms, Direction), Z_Construct_UEnum_Arcade_EPacDirection, METADATA_PARAMS(0, nullptr) }; // 1743543633
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PawnPacMan, nullptr, "OpenDirection", Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::CC_PawnPacMan_eventOpenDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::CC_PawnPacMan_eventOpenDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PawnPacMan::execOpenDirection)
{
	P_GET_ENUM(EPacDirection,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenDirection(EPacDirection(Z_Param_Direction));
	P_NATIVE_END;
}
// ********** End Class ACC_PawnPacMan Function OpenDirection **************************************

// ********** Begin Class ACC_PawnPacMan Function Paused *******************************************
struct Z_Construct_UFunction_ACC_PawnPacMan_Paused_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PawnPacMan_Paused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PawnPacMan, nullptr, "Paused", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_Paused_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PawnPacMan_Paused_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PawnPacMan_Paused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PawnPacMan_Paused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PawnPacMan::execPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Paused();
	P_NATIVE_END;
}
// ********** End Class ACC_PawnPacMan Function Paused *********************************************

// ********** Begin Class ACC_PawnPacMan Function ResetMovement ************************************
struct Z_Construct_UFunction_ACC_PawnPacMan_ResetMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PawnPacMan_ResetMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PawnPacMan, nullptr, "ResetMovement", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_ResetMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PawnPacMan_ResetMovement_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PawnPacMan_ResetMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PawnPacMan_ResetMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PawnPacMan::execResetMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetMovement();
	P_NATIVE_END;
}
// ********** End Class ACC_PawnPacMan Function ResetMovement **************************************

// ********** Begin Class ACC_PawnPacMan Function RoatatingDirection *******************************
struct Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics
{
	struct CC_PawnPacMan_eventRoatatingDirection_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PawnPacMan_eventRoatatingDirection_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PawnPacMan, nullptr, "RoatatingDirection", Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::CC_PawnPacMan_eventRoatatingDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::CC_PawnPacMan_eventRoatatingDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PawnPacMan::execRoatatingDirection)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RoatatingDirection(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ACC_PawnPacMan Function RoatatingDirection *********************************

// ********** Begin Class ACC_PawnPacMan ***********************************************************
void ACC_PawnPacMan::StaticRegisterNativesACC_PawnPacMan()
{
	UClass* Class = ACC_PawnPacMan::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AlwaysMovingForward", &ACC_PawnPacMan::execAlwaysMovingForward },
		{ "CameraTimelineProgress", &ACC_PawnPacMan::execCameraTimelineProgress },
		{ "OnCameraTimelineFinished", &ACC_PawnPacMan::execOnCameraTimelineFinished },
		{ "OpenDirection", &ACC_PawnPacMan::execOpenDirection },
		{ "Paused", &ACC_PawnPacMan::execPaused },
		{ "ResetMovement", &ACC_PawnPacMan::execResetMovement },
		{ "RoatatingDirection", &ACC_PawnPacMan::execRoatatingDirection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PawnPacMan;
UClass* ACC_PawnPacMan::GetPrivateStaticClass()
{
	using TClass = ACC_PawnPacMan;
	if (!Z_Registration_Info_UClass_ACC_PawnPacMan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PawnPacMan"),
			Z_Registration_Info_UClass_ACC_PawnPacMan.InnerSingleton,
			StaticRegisterNativesACC_PawnPacMan,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACC_PawnPacMan.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PawnPacMan_NoRegister()
{
	return ACC_PawnPacMan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PawnPacMan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PacMan/CC_PawnPacMan.h" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConflictingMappingContext_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Movement_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Pause_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraCurve_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatingTimeline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Moving_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "CC_PawnPacMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanGoUp_MetaData[] = {
		{ "Category", "Direction" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "CC_PawnPacMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "CC_PawnPacMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "CC_PawnPacMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
		{ "Category", "CC_PawnPacMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PawnPacMan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DownRotation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ConflictingMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Movement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Pause;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotatingTimeline;
	static void NewProp_Moving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Moving;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static void NewProp_CanGoUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanGoUp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_PawnPacMan_AlwaysMovingForward, "AlwaysMovingForward" }, // 1437934320
		{ &Z_Construct_UFunction_ACC_PawnPacMan_CameraTimelineProgress, "CameraTimelineProgress" }, // 958933557
		{ &Z_Construct_UFunction_ACC_PawnPacMan_OnCameraTimelineFinished, "OnCameraTimelineFinished" }, // 3535307961
		{ &Z_Construct_UFunction_ACC_PawnPacMan_OpenDirection, "OpenDirection" }, // 1358664104
		{ &Z_Construct_UFunction_ACC_PawnPacMan_Paused, "Paused" }, // 3099295796
		{ &Z_Construct_UFunction_ACC_PawnPacMan_ResetMovement, "ResetMovement" }, // 3282715949
		{ &Z_Construct_UFunction_ACC_PawnPacMan_RoatatingDirection, "RoatatingDirection" }, // 1803810301
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PawnPacMan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_RightRotation = { "RightRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, RightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightRotation_MetaData), NewProp_RightRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_LeftRotation = { "LeftRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, LeftRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftRotation_MetaData), NewProp_LeftRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_UpRotation = { "UpRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, UpRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpRotation_MetaData), NewProp_UpRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_DownRotation = { "DownRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, DownRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownRotation_MetaData), NewProp_DownRotation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_ConflictingMappingContext = { "ConflictingMappingContext", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, ConflictingMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConflictingMappingContext_MetaData), NewProp_ConflictingMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_IA_Movement = { "IA_Movement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, IA_Movement), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Movement_MetaData), NewProp_IA_Movement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_IA_Pause = { "IA_Pause", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, IA_Pause), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Pause_MetaData), NewProp_IA_Pause_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_CameraCurve = { "CameraCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, CameraCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraCurve_MetaData), NewProp_CameraCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_RotatingTimeline = { "RotatingTimeline", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, RotatingTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatingTimeline_MetaData), NewProp_RotatingTimeline_MetaData) };
void Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_Moving_SetBit(void* Obj)
{
	((ACC_PawnPacMan*)Obj)->Moving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_Moving = { "Moving", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACC_PawnPacMan), &Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_Moving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Moving_MetaData), NewProp_Moving_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_UpdatedRotation = { "UpdatedRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, UpdatedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedRotation_MetaData), NewProp_UpdatedRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_InitialRotation = { "InitialRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, InitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRotation_MetaData), NewProp_InitialRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
void Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_CanGoUp_SetBit(void* Obj)
{
	((ACC_PawnPacMan*)Obj)->CanGoUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_CanGoUp = { "CanGoUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACC_PawnPacMan), &Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_CanGoUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanGoUp_MetaData), NewProp_CanGoUp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, Movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movement_MetaData), NewProp_Movement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PawnPacMan, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_PawnPacMan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_RightRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_LeftRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_UpRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_DownRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_ConflictingMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_IA_Movement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_IA_Pause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_CameraCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_RotatingTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_Moving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_UpdatedRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_InitialRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_CanGoUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_Movement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PawnPacMan_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PawnPacMan_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_PawnPacMan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PawnPacMan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PawnPacMan_Statics::ClassParams = {
	&ACC_PawnPacMan::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_PawnPacMan_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PawnPacMan_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PawnPacMan_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PawnPacMan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PawnPacMan()
{
	if (!Z_Registration_Info_UClass_ACC_PawnPacMan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PawnPacMan.OuterSingleton, Z_Construct_UClass_ACC_PawnPacMan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PawnPacMan.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PawnPacMan);
ACC_PawnPacMan::~ACC_PawnPacMan() {}
// ********** End Class ACC_PawnPacMan *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h__Script_Arcade_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPacDirection_StaticEnum, TEXT("EPacDirection"), &Z_Registration_Info_UEnum_EPacDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1743543633U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PawnPacMan, ACC_PawnPacMan::StaticClass, TEXT("ACC_PawnPacMan"), &Z_Registration_Info_UClass_ACC_PawnPacMan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PawnPacMan), 2289123006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h__Script_Arcade_362638336(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h__Script_Arcade_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PawnPacMan_h__Script_Arcade_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
