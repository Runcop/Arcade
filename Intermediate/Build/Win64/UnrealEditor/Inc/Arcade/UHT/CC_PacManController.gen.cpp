// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan/CC_PacManController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PacManController() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PacManController();
ARCADE_API UClass* Z_Construct_UClass_ACC_PacManController_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_UCC_PacManUI_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_PacManController Function PauseGame **********************************
struct Z_Construct_UFunction_ACC_PacManController_PauseGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PacManController_PauseGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PacManController, nullptr, "PauseGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PacManController_PauseGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PacManController_PauseGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PacManController_PauseGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PacManController_PauseGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PacManController::execPauseGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseGame();
	P_NATIVE_END;
}
// ********** End Class ACC_PacManController Function PauseGame ************************************

// ********** Begin Class ACC_PacManController Function StartGame **********************************
struct Z_Construct_UFunction_ACC_PacManController_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PacManController_StartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PacManController, nullptr, "StartGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PacManController_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PacManController_StartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PacManController_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PacManController_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PacManController::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// ********** End Class ACC_PacManController Function StartGame ************************************

// ********** Begin Class ACC_PacManController Function UpdateUIScores *****************************
struct Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics
{
	struct CC_PacManController_eventUpdateUIScores_Parms
	{
		int32 Score;
		int32 HighScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HighScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PacManController_eventUpdateUIScores_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PacManController_eventUpdateUIScores_Parms, HighScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::NewProp_HighScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PacManController, nullptr, "UpdateUIScores", Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::CC_PacManController_eventUpdateUIScores_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::CC_PacManController_eventUpdateUIScores_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PacManController_UpdateUIScores()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PacManController_UpdateUIScores_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PacManController::execUpdateUIScores)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_GET_PROPERTY(FIntProperty,Z_Param_HighScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateUIScores(Z_Param_Score,Z_Param_HighScore);
	P_NATIVE_END;
}
// ********** End Class ACC_PacManController Function UpdateUIScores *******************************

// ********** Begin Class ACC_PacManController Function WidgetToDisplay ****************************
struct Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics
{
	struct CC_PacManController_eventWidgetToDisplay_Parms
	{
		TSubclassOf<UCC_PacManUI> Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Public Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Public Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PacManController_eventWidgetToDisplay_Parms, Widget), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_PacManUI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PacManController, nullptr, "WidgetToDisplay", Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::CC_PacManController_eventWidgetToDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::CC_PacManController_eventWidgetToDisplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PacManController::execWidgetToDisplay)
{
	P_GET_OBJECT(UClass,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WidgetToDisplay(Z_Param_Widget);
	P_NATIVE_END;
}
// ********** End Class ACC_PacManController Function WidgetToDisplay ******************************

// ********** Begin Class ACC_PacManController *****************************************************
void ACC_PacManController::StaticRegisterNativesACC_PacManController()
{
	UClass* Class = ACC_PacManController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PauseGame", &ACC_PacManController::execPauseGame },
		{ "StartGame", &ACC_PacManController::execStartGame },
		{ "UpdateUIScores", &ACC_PacManController::execUpdateUIScores },
		{ "WidgetToDisplay", &ACC_PacManController::execWidgetToDisplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PacManController;
UClass* ACC_PacManController::GetPrivateStaticClass()
{
	using TClass = ACC_PacManController;
	if (!Z_Registration_Info_UClass_ACC_PacManController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PacManController"),
			Z_Registration_Info_UClass_ACC_PacManController.InnerSingleton,
			StaticRegisterNativesACC_PacManController,
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
	return Z_Registration_Info_UClass_ACC_PacManController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PacManController_NoRegister()
{
	return ACC_PacManController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PacManController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PacMan/CC_PacManController.h" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_MainUI_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UI Subclasses\n" },
#endif
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI Subclasses" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_PauseUI_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_Controls_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WB_MainUI;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WB_PauseUI;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WB_Controls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_PacManController_PauseGame, "PauseGame" }, // 2346713995
		{ &Z_Construct_UFunction_ACC_PacManController_StartGame, "StartGame" }, // 3392680063
		{ &Z_Construct_UFunction_ACC_PacManController_UpdateUIScores, "UpdateUIScores" }, // 3451126645
		{ &Z_Construct_UFunction_ACC_PacManController_WidgetToDisplay, "WidgetToDisplay" }, // 1045656501
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PacManController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PacManController_Statics::NewProp_CurrentInstance = { "CurrentInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PacManController, CurrentInstance), Z_Construct_UClass_UCC_PacManUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInstance_MetaData), NewProp_CurrentInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PacManController_Statics::NewProp_WB_MainUI = { "WB_MainUI", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PacManController, WB_MainUI), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_PacManUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_MainUI_MetaData), NewProp_WB_MainUI_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PacManController_Statics::NewProp_WB_PauseUI = { "WB_PauseUI", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PacManController, WB_PauseUI), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_PacManUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_PauseUI_MetaData), NewProp_WB_PauseUI_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PacManController_Statics::NewProp_WB_Controls = { "WB_Controls", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PacManController, WB_Controls), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_PacManUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_Controls_MetaData), NewProp_WB_Controls_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_PacManController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PacManController_Statics::NewProp_CurrentInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PacManController_Statics::NewProp_WB_MainUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PacManController_Statics::NewProp_WB_PauseUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PacManController_Statics::NewProp_WB_Controls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PacManController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_PacManController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PacManController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PacManController_Statics::ClassParams = {
	&ACC_PacManController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_PacManController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PacManController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PacManController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PacManController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PacManController()
{
	if (!Z_Registration_Info_UClass_ACC_PacManController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PacManController.OuterSingleton, Z_Construct_UClass_ACC_PacManController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PacManController.OuterSingleton;
}
ACC_PacManController::ACC_PacManController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PacManController);
ACC_PacManController::~ACC_PacManController() {}
// ********** End Class ACC_PacManController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PacManController, ACC_PacManController::StaticClass, TEXT("ACC_PacManController"), &Z_Registration_Info_UClass_ACC_PacManController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PacManController), 2175192440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h__Script_Arcade_954627313(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
