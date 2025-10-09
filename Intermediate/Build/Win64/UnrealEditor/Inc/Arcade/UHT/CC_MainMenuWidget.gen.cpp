// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_MainMenuWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_MainMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_MainMenuController_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_UCC_MainMenuWidget();
ARCADE_API UClass* Z_Construct_UClass_UCC_MainMenuWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCC_MainMenuWidget Function NextSelectedGame *****************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics
{
	struct CC_MainMenuWidget_eventNextSelectedGame_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuWidget_eventNextSelectedGame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "NextSelectedGame", Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::CC_MainMenuWidget_eventNextSelectedGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::CC_MainMenuWidget_eventNextSelectedGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execNextSelectedGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->NextSelectedGame();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function NextSelectedGame *******************************

// ********** Begin Class UCC_MainMenuWidget Function PreviousSelectedGame *************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics
{
	struct CC_MainMenuWidget_eventPreviousSelectedGame_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuWidget_eventPreviousSelectedGame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "PreviousSelectedGame", Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::CC_MainMenuWidget_eventPreviousSelectedGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::CC_MainMenuWidget_eventPreviousSelectedGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execPreviousSelectedGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PreviousSelectedGame();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function PreviousSelectedGame ***************************

// ********** Begin Class UCC_MainMenuWidget Function SetMainMenuController ************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics
{
	struct CC_MainMenuWidget_eventSetMainMenuController_Parms
	{
		ACC_MainMenuController* Controller;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optionally, you can set the reference from C++ or Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optionally, you can set the reference from C++ or Blueprint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuWidget_eventSetMainMenuController_Parms, Controller), Z_Construct_UClass_ACC_MainMenuController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "SetMainMenuController", Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::CC_MainMenuWidget_eventSetMainMenuController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::CC_MainMenuWidget_eventSetMainMenuController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execSetMainMenuController)
{
	P_GET_OBJECT(ACC_MainMenuController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMainMenuController(Z_Param_Controller);
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function SetMainMenuController **************************

// ********** Begin Class UCC_MainMenuWidget Function SetNavigationEnabled *************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics
{
	struct CC_MainMenuWidget_eventSetNavigationEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to enable/disable navigation\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to enable/disable navigation" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((CC_MainMenuWidget_eventSetNavigationEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CC_MainMenuWidget_eventSetNavigationEnabled_Parms), &Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "SetNavigationEnabled", Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::CC_MainMenuWidget_eventSetNavigationEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::CC_MainMenuWidget_eventSetNavigationEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execSetNavigationEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNavigationEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function SetNavigationEnabled ***************************

// ********** Begin Class UCC_MainMenuWidget *******************************************************
void UCC_MainMenuWidget::StaticRegisterNativesUCC_MainMenuWidget()
{
	UClass* Class = UCC_MainMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NextSelectedGame", &UCC_MainMenuWidget::execNextSelectedGame },
		{ "PreviousSelectedGame", &UCC_MainMenuWidget::execPreviousSelectedGame },
		{ "SetMainMenuController", &UCC_MainMenuWidget::execSetMainMenuController },
		{ "SetNavigationEnabled", &UCC_MainMenuWidget::execSetNavigationEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCC_MainMenuWidget;
UClass* UCC_MainMenuWidget::GetPrivateStaticClass()
{
	using TClass = UCC_MainMenuWidget;
	if (!Z_Registration_Info_UClass_UCC_MainMenuWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_MainMenuWidget"),
			Z_Registration_Info_UClass_UCC_MainMenuWidget.InnerSingleton,
			StaticRegisterNativesUCC_MainMenuWidget,
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
	return Z_Registration_Info_UClass_UCC_MainMenuWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCC_MainMenuWidget_NoRegister()
{
	return UCC_MainMenuWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCC_MainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CC_MainMenuWidget.h" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuController_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the main menu controller\n" },
#endif
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the main menu controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedGame_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Back_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Quit_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuController;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Back;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Quit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame, "NextSelectedGame" }, // 191623077
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame, "PreviousSelectedGame" }, // 2094643577
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController, "SetMainMenuController" }, // 3267189370
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled, "SetNavigationEnabled" }, // 820917705
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCC_MainMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_MainMenuController = { "MainMenuController", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, MainMenuController), Z_Construct_UClass_ACC_MainMenuController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuController_MetaData), NewProp_MainMenuController_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, MainMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_MainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_SelectedGame = { "SelectedGame", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, SelectedGame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedGame_MetaData), NewProp_SelectedGame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Back = { "BTN_Back", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, BTN_Back), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Back_MetaData), NewProp_BTN_Back_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Quit = { "BTN_Quit", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, BTN_Quit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Quit_MetaData), NewProp_BTN_Quit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCC_MainMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_MainMenuController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_MainMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_SelectedGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Back,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Quit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_MainMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCC_MainMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_MainMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::ClassParams = {
	&UCC_MainMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCC_MainMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCC_MainMenuWidget_Statics::PropPointers),
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_MainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCC_MainMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCC_MainMenuWidget()
{
	if (!Z_Registration_Info_UClass_UCC_MainMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCC_MainMenuWidget.OuterSingleton, Z_Construct_UClass_UCC_MainMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCC_MainMenuWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCC_MainMenuWidget);
UCC_MainMenuWidget::~UCC_MainMenuWidget() {}
// ********** End Class UCC_MainMenuWidget *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCC_MainMenuWidget, UCC_MainMenuWidget::StaticClass, TEXT("UCC_MainMenuWidget"), &Z_Registration_Info_UClass_UCC_MainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCC_MainMenuWidget), 1824767094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h__Script_Arcade_1863650275(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
