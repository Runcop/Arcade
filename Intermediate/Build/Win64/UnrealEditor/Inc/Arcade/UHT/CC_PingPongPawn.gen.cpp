// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/CC_PingPongPawn.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PingPongPawn() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongBall_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongPawn();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongPawn_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_PingPongPawn Function BoostInput *************************************
struct Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics
{
	struct CC_PingPongPawn_eventBoostInput_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PingPongPawn_eventBoostInput_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingPongPawn, nullptr, "BoostInput", Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::CC_PingPongPawn_eventBoostInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::CC_PingPongPawn_eventBoostInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PingPongPawn_BoostInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingPongPawn_BoostInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingPongPawn::execBoostInput)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BoostInput(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ACC_PingPongPawn Function BoostInput ***************************************

// ********** Begin Class ACC_PingPongPawn Function PauseEvent *************************************
struct Z_Construct_UFunction_ACC_PingPongPawn_PauseEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingPongPawn_PauseEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingPongPawn, nullptr, "PauseEvent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongPawn_PauseEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingPongPawn_PauseEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PingPongPawn_PauseEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingPongPawn_PauseEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingPongPawn::execPauseEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseEvent();
	P_NATIVE_END;
}
// ********** End Class ACC_PingPongPawn Function PauseEvent ***************************************

// ********** Begin Class ACC_PingPongPawn *********************************************************
void ACC_PingPongPawn::StaticRegisterNativesACC_PingPongPawn()
{
	UClass* Class = ACC_PingPongPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BoostInput", &ACC_PingPongPawn::execBoostInput },
		{ "PauseEvent", &ACC_PingPongPawn::execPauseEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PingPongPawn;
UClass* ACC_PingPongPawn::GetPrivateStaticClass()
{
	using TClass = ACC_PingPongPawn;
	if (!Z_Registration_Info_UClass_ACC_PingPongPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PingPongPawn"),
			Z_Registration_Info_UClass_ACC_PingPongPawn.InnerSingleton,
			StaticRegisterNativesACC_PingPongPawn,
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
	return Z_Registration_Info_UClass_ACC_PingPongPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PingPongPawn_NoRegister()
{
	return ACC_PingPongPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PingPongPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pong/CC_PingPongPawn.h" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PingPongMappingContext_MetaData[] = {
		{ "Category", "Enhanced Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced Input\n" },
#endif
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchCamera_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pause_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "CC_PingPongPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
		{ "Category", "CC_PingPongPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "CC_PingPongPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "CC_PingPongPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "CC_PingPongPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallToSpawn_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCamera_MetaData[] = {
		{ "Category", "MainCamera" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PingPongMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pause;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BallToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_PingPongPawn_BoostInput, "BoostInput" }, // 3209214506
		{ &Z_Construct_UFunction_ACC_PingPongPawn_PauseEvent, "PauseEvent" }, // 4192594437
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PingPongPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_PingPongMappingContext = { "PingPongMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, PingPongMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PingPongMappingContext_MetaData), NewProp_PingPongMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_SwitchCamera = { "SwitchCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, SwitchCamera), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchCamera_MetaData), NewProp_SwitchCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_Pause = { "Pause", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, Pause), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pause_MetaData), NewProp_Pause_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, Movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movement_MetaData), NewProp_Movement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_BallToSpawn = { "BallToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, BallToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ACC_PingPongBall_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallToSpawn_MetaData), NewProp_BallToSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_MainCamera = { "MainCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, MainCamera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCamera_MetaData), NewProp_MainCamera_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_StartingLocation = { "StartingLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongPawn, StartingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingLocation_MetaData), NewProp_StartingLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_PingPongPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_PingPongMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_SwitchCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_Pause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_Movement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_BallToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_MainCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongPawn_Statics::NewProp_StartingLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_PingPongPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PingPongPawn_Statics::ClassParams = {
	&ACC_PingPongPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_PingPongPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongPawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PingPongPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PingPongPawn()
{
	if (!Z_Registration_Info_UClass_ACC_PingPongPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PingPongPawn.OuterSingleton, Z_Construct_UClass_ACC_PingPongPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PingPongPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PingPongPawn);
ACC_PingPongPawn::~ACC_PingPongPawn() {}
// ********** End Class ACC_PingPongPawn ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PingPongPawn, ACC_PingPongPawn::StaticClass, TEXT("ACC_PingPongPawn"), &Z_Registration_Info_UClass_ACC_PingPongPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PingPongPawn), 3452570252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h__Script_Arcade_1161856271(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_Pong_CC_PingPongPawn_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
