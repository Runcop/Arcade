// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_MainMenuController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_MainMenuController() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_MainMenuController();
ARCADE_API UClass* Z_Construct_UClass_ACC_MainMenuController_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_UCC_MainMenuWidget_NoRegister();
ARCADE_API UEnum* Z_Construct_UEnum_Arcade_EArcadeMachine();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EArcadeMachine ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArcadeMachine;
static UEnum* EArcadeMachine_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArcadeMachine.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArcadeMachine.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arcade_EArcadeMachine, (UObject*)Z_Construct_UPackage__Script_Arcade(), TEXT("EArcadeMachine"));
	}
	return Z_Registration_Info_UEnum_EArcadeMachine.OuterSingleton;
}
template<> ARCADE_API UEnum* StaticEnum<EArcadeMachine>()
{
	return EArcadeMachine_StaticEnum();
}
struct Z_Construct_UEnum_Arcade_EArcadeMachine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// forward-declare the type (do not declare a variable here)\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
		{ "PacMan.DisplayName", "PacMan" },
		{ "PacMan.Name", "EArcadeMachine::PacMan" },
		{ "PingPong.DisplayName", "PingPong" },
		{ "PingPong.Name", "EArcadeMachine::PingPong" },
		{ "SpaceInvaders.DisplayName", "SpaceInvaders" },
		{ "SpaceInvaders.Name", "EArcadeMachine::SpaceInvaders" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "forward-declare the type (do not declare a variable here)" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArcadeMachine::PingPong", (int64)EArcadeMachine::PingPong },
		{ "EArcadeMachine::PacMan", (int64)EArcadeMachine::PacMan },
		{ "EArcadeMachine::SpaceInvaders", (int64)EArcadeMachine::SpaceInvaders },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arcade_EArcadeMachine_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Arcade,
	nullptr,
	"EArcadeMachine",
	"EArcadeMachine",
	Z_Construct_UEnum_Arcade_EArcadeMachine_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Arcade_EArcadeMachine_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arcade_EArcadeMachine_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arcade_EArcadeMachine_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Arcade_EArcadeMachine()
{
	if (!Z_Registration_Info_UEnum_EArcadeMachine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArcadeMachine.InnerSingleton, Z_Construct_UEnum_Arcade_EArcadeMachine_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArcadeMachine.InnerSingleton;
}
// ********** End Enum EArcadeMachine **************************************************************

// ********** Begin Class ACC_MainMenuController Function CameraTimelineProgress *******************
struct Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics
{
	struct CC_MainMenuController_eventCameraTimelineProgress_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Timeline callback function\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timeline callback function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuController_eventCameraTimelineProgress_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_MainMenuController, nullptr, "CameraTimelineProgress", Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::CC_MainMenuController_eventCameraTimelineProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::CC_MainMenuController_eventCameraTimelineProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_MainMenuController::execCameraTimelineProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CameraTimelineProgress(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ACC_MainMenuController Function CameraTimelineProgress *********************

// ********** Begin Class ACC_MainMenuController Function GameSelected *****************************
struct Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics
{
	struct CC_MainMenuController_eventGameSelected_Parms
	{
		EArcadeMachine SelectedMachine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call when player confirms the selected machine\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call when player confirms the selected machine" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectedMachine_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedMachine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::NewProp_SelectedMachine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::NewProp_SelectedMachine = { "SelectedMachine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuController_eventGameSelected_Parms, SelectedMachine), Z_Construct_UEnum_Arcade_EArcadeMachine, METADATA_PARAMS(0, nullptr) }; // 563493015
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::NewProp_SelectedMachine_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::NewProp_SelectedMachine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_MainMenuController, nullptr, "GameSelected", Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::CC_MainMenuController_eventGameSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::CC_MainMenuController_eventGameSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_MainMenuController_GameSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_MainMenuController_GameSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_MainMenuController::execGameSelected)
{
	P_GET_ENUM(EArcadeMachine,Z_Param_SelectedMachine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameSelected(EArcadeMachine(Z_Param_SelectedMachine));
	P_NATIVE_END;
}
// ********** End Class ACC_MainMenuController Function GameSelected *******************************

// ********** Begin Class ACC_MainMenuController Function GetAllArcades ****************************
struct Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics
{
	struct CC_MainMenuController_eventGetAllArcades_Parms
	{
		TMap<EArcadeMachine,FTransform> ArcadeMachines;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mark non-const ref with UPARAM(ref) for Blueprint compatibility\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mark non-const ref with UPARAM(ref) for Blueprint compatibility" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArcadeMachines_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArcadeMachines_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArcadeMachines_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ArcadeMachines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::NewProp_ArcadeMachines_ValueProp = { "ArcadeMachines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::NewProp_ArcadeMachines_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::NewProp_ArcadeMachines_Key_KeyProp = { "ArcadeMachines_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Arcade_EArcadeMachine, METADATA_PARAMS(0, nullptr) }; // 563493015
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::NewProp_ArcadeMachines = { "ArcadeMachines", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuController_eventGetAllArcades_Parms, ArcadeMachines), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 563493015
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::NewProp_ArcadeMachines_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::NewProp_ArcadeMachines_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::NewProp_ArcadeMachines_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::NewProp_ArcadeMachines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_MainMenuController, nullptr, "GetAllArcades", Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::CC_MainMenuController_eventGetAllArcades_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::CC_MainMenuController_eventGetAllArcades_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_MainMenuController::execGetAllArcades)
{
	P_GET_TMAP_REF(EArcadeMachine,FTransform,Z_Param_Out_ArcadeMachines);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllArcades(Z_Param_Out_ArcadeMachines);
	P_NATIVE_END;
}
// ********** End Class ACC_MainMenuController Function GetAllArcades ******************************

// ********** Begin Class ACC_MainMenuController Function IsCameraMoving ***************************
struct Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics
{
	struct CC_MainMenuController_eventIsCameraMoving_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to check if camera is moving\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to check if camera is moving" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CC_MainMenuController_eventIsCameraMoving_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CC_MainMenuController_eventIsCameraMoving_Parms), &Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_MainMenuController, nullptr, "IsCameraMoving", Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::CC_MainMenuController_eventIsCameraMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::CC_MainMenuController_eventIsCameraMoving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_MainMenuController::execIsCameraMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCameraMoving();
	P_NATIVE_END;
}
// ********** End Class ACC_MainMenuController Function IsCameraMoving *****************************

// ********** Begin Class ACC_MainMenuController Function MoveCameraToArcade ***********************
struct Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics
{
	struct CC_MainMenuController_eventMoveCameraToArcade_Parms
	{
		EArcadeMachine MachineType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of arcade machine types to camera locations\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of arcade machine types to camera locations" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MachineType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MachineType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::NewProp_MachineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::NewProp_MachineType = { "MachineType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuController_eventMoveCameraToArcade_Parms, MachineType), Z_Construct_UEnum_Arcade_EArcadeMachine, METADATA_PARAMS(0, nullptr) }; // 563493015
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::NewProp_MachineType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::NewProp_MachineType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_MainMenuController, nullptr, "MoveCameraToArcade", Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::CC_MainMenuController_eventMoveCameraToArcade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::CC_MainMenuController_eventMoveCameraToArcade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_MainMenuController::execMoveCameraToArcade)
{
	P_GET_ENUM(EArcadeMachine,Z_Param_MachineType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveCameraToArcade(EArcadeMachine(Z_Param_MachineType));
	P_NATIVE_END;
}
// ********** End Class ACC_MainMenuController Function MoveCameraToArcade *************************

// ********** Begin Class ACC_MainMenuController Function MoveCameraToInitialLocation **************
struct Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToInitialLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Location" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to move camera back to initial location\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to move camera back to initial location" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToInitialLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_MainMenuController, nullptr, "MoveCameraToInitialLocation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToInitialLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToInitialLocation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToInitialLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToInitialLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_MainMenuController::execMoveCameraToInitialLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveCameraToInitialLocation();
	P_NATIVE_END;
}
// ********** End Class ACC_MainMenuController Function MoveCameraToInitialLocation ****************

// ********** Begin Class ACC_MainMenuController Function OnCameraTimelineFinished *****************
struct Z_Construct_UFunction_ACC_MainMenuController_OnCameraTimelineFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_MainMenuController_OnCameraTimelineFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_MainMenuController, nullptr, "OnCameraTimelineFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_OnCameraTimelineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_MainMenuController_OnCameraTimelineFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_MainMenuController_OnCameraTimelineFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_MainMenuController_OnCameraTimelineFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_MainMenuController::execOnCameraTimelineFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCameraTimelineFinished();
	P_NATIVE_END;
}
// ********** End Class ACC_MainMenuController Function OnCameraTimelineFinished *******************

// ********** Begin Class ACC_MainMenuController Function RemoveCurrentWidget **********************
struct Z_Construct_UFunction_ACC_MainMenuController_RemoveCurrentWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to remove the current widget from the viewport\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to remove the current widget from the viewport" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_MainMenuController_RemoveCurrentWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_MainMenuController, nullptr, "RemoveCurrentWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_RemoveCurrentWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_MainMenuController_RemoveCurrentWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_MainMenuController_RemoveCurrentWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_MainMenuController_RemoveCurrentWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_MainMenuController::execRemoveCurrentWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCurrentWidget();
	P_NATIVE_END;
}
// ********** End Class ACC_MainMenuController Function RemoveCurrentWidget ************************

// ********** Begin Class ACC_MainMenuController Function ShowWidget *******************************
struct Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics
{
	struct CC_MainMenuController_eventShowWidget_Parms
	{
		TSubclassOf<UCC_MainMenuWidget> NewWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Keep track of the current widget instance\n" },
#endif
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep track of the current widget instance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuController_eventShowWidget_Parms, NewWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_MainMenuWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::NewProp_NewWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_MainMenuController, nullptr, "ShowWidget", Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::CC_MainMenuController_eventShowWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::CC_MainMenuController_eventShowWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_MainMenuController_ShowWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_MainMenuController_ShowWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_MainMenuController::execShowWidget)
{
	P_GET_OBJECT(UClass,Z_Param_NewWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowWidget(Z_Param_NewWidget);
	P_NATIVE_END;
}
// ********** End Class ACC_MainMenuController Function ShowWidget *********************************

// ********** Begin Class ACC_MainMenuController ***************************************************
void ACC_MainMenuController::StaticRegisterNativesACC_MainMenuController()
{
	UClass* Class = ACC_MainMenuController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CameraTimelineProgress", &ACC_MainMenuController::execCameraTimelineProgress },
		{ "GameSelected", &ACC_MainMenuController::execGameSelected },
		{ "GetAllArcades", &ACC_MainMenuController::execGetAllArcades },
		{ "IsCameraMoving", &ACC_MainMenuController::execIsCameraMoving },
		{ "MoveCameraToArcade", &ACC_MainMenuController::execMoveCameraToArcade },
		{ "MoveCameraToInitialLocation", &ACC_MainMenuController::execMoveCameraToInitialLocation },
		{ "OnCameraTimelineFinished", &ACC_MainMenuController::execOnCameraTimelineFinished },
		{ "RemoveCurrentWidget", &ACC_MainMenuController::execRemoveCurrentWidget },
		{ "ShowWidget", &ACC_MainMenuController::execShowWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_MainMenuController;
UClass* ACC_MainMenuController::GetPrivateStaticClass()
{
	using TClass = ACC_MainMenuController;
	if (!Z_Registration_Info_UClass_ACC_MainMenuController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_MainMenuController"),
			Z_Registration_Info_UClass_ACC_MainMenuController.InnerSingleton,
			StaticRegisterNativesACC_MainMenuController,
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
	return Z_Registration_Info_UClass_ACC_MainMenuController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_MainMenuController_NoRegister()
{
	return ACC_MainMenuController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_MainMenuController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CC_MainMenuController.h" },
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidgetInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The widget class to instantiate at start\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The widget class to instantiate at start" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCameraLocation_MetaData[] = {
		{ "Category", "Location" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to show the widget\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to show the widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcadeCameraLocations_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraCurve_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTimeline_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Keep a UPROPERTY pointer so GC tracks it; declare as a member, not at file scope\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep a UPROPERTY pointer so GC tracks it; declare as a member, not at file scope" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraStartTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTargetTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcadeMachine_MetaData[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayArcadeTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartingWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidgetInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialCameraLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArcadeCameraLocations_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArcadeCameraLocations_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArcadeCameraLocations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ArcadeCameraLocations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraTimeline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraStartTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTargetTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArcadeMachine_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArcadeMachine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayArcadeTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_MainMenuController_CameraTimelineProgress, "CameraTimelineProgress" }, // 1422674879
		{ &Z_Construct_UFunction_ACC_MainMenuController_GameSelected, "GameSelected" }, // 2359959301
		{ &Z_Construct_UFunction_ACC_MainMenuController_GetAllArcades, "GetAllArcades" }, // 3652298645
		{ &Z_Construct_UFunction_ACC_MainMenuController_IsCameraMoving, "IsCameraMoving" }, // 978563168
		{ &Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToArcade, "MoveCameraToArcade" }, // 269811966
		{ &Z_Construct_UFunction_ACC_MainMenuController_MoveCameraToInitialLocation, "MoveCameraToInitialLocation" }, // 1018154162
		{ &Z_Construct_UFunction_ACC_MainMenuController_OnCameraTimelineFinished, "OnCameraTimelineFinished" }, // 4109926130
		{ &Z_Construct_UFunction_ACC_MainMenuController_RemoveCurrentWidget, "RemoveCurrentWidget" }, // 2462180618
		{ &Z_Construct_UFunction_ACC_MainMenuController_ShowWidget, "ShowWidget" }, // 2453504884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_MainMenuController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_StartingWidget = { "StartingWidget", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuController, StartingWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_MainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingWidget_MetaData), NewProp_StartingWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_CurrentWidgetInstance = { "CurrentWidgetInstance", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuController, CurrentWidgetInstance), Z_Construct_UClass_UCC_MainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidgetInstance_MetaData), NewProp_CurrentWidgetInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_InitialCameraLocation = { "InitialCameraLocation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuController, InitialCameraLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCameraLocation_MetaData), NewProp_InitialCameraLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeCameraLocations_ValueProp = { "ArcadeCameraLocations", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeCameraLocations_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeCameraLocations_Key_KeyProp = { "ArcadeCameraLocations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Arcade_EArcadeMachine, METADATA_PARAMS(0, nullptr) }; // 563493015
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeCameraLocations = { "ArcadeCameraLocations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuController, ArcadeCameraLocations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcadeCameraLocations_MetaData), NewProp_ArcadeCameraLocations_MetaData) }; // 563493015
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_CameraCurve = { "CameraCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuController, CameraCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraCurve_MetaData), NewProp_CameraCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_CameraTimeline = { "CameraTimeline", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuController, CameraTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTimeline_MetaData), NewProp_CameraTimeline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_CameraStartTransform = { "CameraStartTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuController, CameraStartTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraStartTransform_MetaData), NewProp_CameraStartTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_CameraTargetTransform = { "CameraTargetTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuController, CameraTargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTargetTransform_MetaData), NewProp_CameraTargetTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeMachine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeMachine = { "ArcadeMachine", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuController, ArcadeMachine), Z_Construct_UEnum_Arcade_EArcadeMachine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcadeMachine_MetaData), NewProp_ArcadeMachine_MetaData) }; // 563493015
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_PlayArcadeTransform = { "PlayArcadeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuController, PlayArcadeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayArcadeTransform_MetaData), NewProp_PlayArcadeTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_MainMenuController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_StartingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_CurrentWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_InitialCameraLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeCameraLocations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeCameraLocations_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeCameraLocations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeCameraLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_CameraCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_CameraTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_CameraStartTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_CameraTargetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeMachine_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_ArcadeMachine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_PlayArcadeTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_MainMenuController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_MainMenuController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_MainMenuController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_MainMenuController_Statics::ClassParams = {
	&ACC_MainMenuController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_MainMenuController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_MainMenuController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_MainMenuController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_MainMenuController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_MainMenuController()
{
	if (!Z_Registration_Info_UClass_ACC_MainMenuController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_MainMenuController.OuterSingleton, Z_Construct_UClass_ACC_MainMenuController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_MainMenuController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_MainMenuController);
ACC_MainMenuController::~ACC_MainMenuController() {}
// ********** End Class ACC_MainMenuController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h__Script_Arcade_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArcadeMachine_StaticEnum, TEXT("EArcadeMachine"), &Z_Registration_Info_UEnum_EArcadeMachine, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 563493015U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_MainMenuController, ACC_MainMenuController::StaticClass, TEXT("ACC_MainMenuController"), &Z_Registration_Info_UClass_ACC_MainMenuController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_MainMenuController), 4022708361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h__Script_Arcade_4137106197(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h__Script_Arcade_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h__Script_Arcade_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
