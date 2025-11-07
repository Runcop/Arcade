// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_PongAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PongAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
ARCADE_API UClass* Z_Construct_UClass_ACC_PongAIController();
ARCADE_API UClass* Z_Construct_UClass_ACC_PongAIController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_PongAIController Function OnBallDestroyed ****************************
struct Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics
{
	struct CC_PongAIController_eventOnBallDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed at which the AI paddle moves\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_PongAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed at which the AI paddle moves" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PongAIController_eventOnBallDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PongAIController, nullptr, "OnBallDestroyed", Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::CC_PongAIController_eventOnBallDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::CC_PongAIController_eventOnBallDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PongAIController::execOnBallDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBallDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// ********** End Class ACC_PongAIController Function OnBallDestroyed ******************************

// ********** Begin Class ACC_PongAIController *****************************************************
void ACC_PongAIController::StaticRegisterNativesACC_PongAIController()
{
	UClass* Class = ACC_PongAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBallDestroyed", &ACC_PongAIController::execOnBallDestroyed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PongAIController;
UClass* ACC_PongAIController::GetPrivateStaticClass()
{
	using TClass = ACC_PongAIController;
	if (!Z_Registration_Info_UClass_ACC_PongAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PongAIController"),
			Z_Registration_Info_UClass_ACC_PongAIController.InnerSingleton,
			StaticRegisterNativesACC_PongAIController,
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
	return Z_Registration_Info_UClass_ACC_PongAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PongAIController_NoRegister()
{
	return ACC_PongAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PongAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CC_PongAIController.h" },
		{ "ModuleRelativePath", "Public/CC_PongAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactionTime_MetaData[] = {
		{ "Category", "AI Reaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direct assignment from spawner\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_PongAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direct assignment from spawner" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactionTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_PongAIController_OnBallDestroyed, "OnBallDestroyed" }, // 3148065419
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PongAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACC_PongAIController_Statics::NewProp_ReactionTime = { "ReactionTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PongAIController, ReactionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactionTime_MetaData), NewProp_ReactionTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_PongAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PongAIController_Statics::NewProp_ReactionTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PongAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_PongAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PongAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PongAIController_Statics::ClassParams = {
	&ACC_PongAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_PongAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PongAIController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PongAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PongAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PongAIController()
{
	if (!Z_Registration_Info_UClass_ACC_PongAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PongAIController.OuterSingleton, Z_Construct_UClass_ACC_PongAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PongAIController.OuterSingleton;
}
ACC_PongAIController::ACC_PongAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PongAIController);
ACC_PongAIController::~ACC_PongAIController() {}
// ********** End Class ACC_PongAIController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PongAIController_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PongAIController, ACC_PongAIController::StaticClass, TEXT("ACC_PongAIController"), &Z_Registration_Info_UClass_ACC_PongAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PongAIController), 1567389911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PongAIController_h__Script_Arcade_884360678(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PongAIController_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PongAIController_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
