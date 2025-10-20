// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_PingPongWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PingPongWidget() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_UCC_PingPongWidget();
ARCADE_API UClass* Z_Construct_UClass_UCC_PingPongWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCC_PingPongWidget Function UpdatePlayerOne ******************************
struct Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics
{
	struct CC_PingPongWidget_eventUpdatePlayerOne_Parms
	{
		int32 NewNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_PingPongWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::NewProp_NewNumber = { "NewNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PingPongWidget_eventUpdatePlayerOne_Parms, NewNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::NewProp_NewNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_PingPongWidget, nullptr, "UpdatePlayerOne", Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::CC_PingPongWidget_eventUpdatePlayerOne_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::CC_PingPongWidget_eventUpdatePlayerOne_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_PingPongWidget::execUpdatePlayerOne)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePlayerOne(Z_Param_NewNumber);
	P_NATIVE_END;
}
// ********** End Class UCC_PingPongWidget Function UpdatePlayerOne ********************************

// ********** Begin Class UCC_PingPongWidget Function UpdatePlayerTwo ******************************
struct Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics
{
	struct CC_PingPongWidget_eventUpdatePlayerTwo_Parms
	{
		int32 NewNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_PingPongWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::NewProp_NewNumber = { "NewNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PingPongWidget_eventUpdatePlayerTwo_Parms, NewNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::NewProp_NewNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_PingPongWidget, nullptr, "UpdatePlayerTwo", Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::CC_PingPongWidget_eventUpdatePlayerTwo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::CC_PingPongWidget_eventUpdatePlayerTwo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_PingPongWidget::execUpdatePlayerTwo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePlayerTwo(Z_Param_NewNumber);
	P_NATIVE_END;
}
// ********** End Class UCC_PingPongWidget Function UpdatePlayerTwo ********************************

// ********** Begin Class UCC_PingPongWidget *******************************************************
void UCC_PingPongWidget::StaticRegisterNativesUCC_PingPongWidget()
{
	UClass* Class = UCC_PingPongWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdatePlayerOne", &UCC_PingPongWidget::execUpdatePlayerOne },
		{ "UpdatePlayerTwo", &UCC_PingPongWidget::execUpdatePlayerTwo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCC_PingPongWidget;
UClass* UCC_PingPongWidget::GetPrivateStaticClass()
{
	using TClass = UCC_PingPongWidget;
	if (!Z_Registration_Info_UClass_UCC_PingPongWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PingPongWidget"),
			Z_Registration_Info_UClass_UCC_PingPongWidget.InnerSingleton,
			StaticRegisterNativesUCC_PingPongWidget,
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
	return Z_Registration_Info_UClass_UCC_PingPongWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCC_PingPongWidget_NoRegister()
{
	return UCC_PingPongWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCC_PingPongWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CC_PingPongWidget.h" },
		{ "ModuleRelativePath", "Public/CC_PingPongWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TXT_TeamOne_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_PingPongWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_PingPongWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TXT_TeamTwo_MetaData[] = {
		{ "BingWidgetOptional", "" },
		{ "Category", "CC_PingPongWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_PingPongWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TXT_TeamOne;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TXT_TeamTwo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerOne, "UpdatePlayerOne" }, // 3212026349
		{ &Z_Construct_UFunction_UCC_PingPongWidget_UpdatePlayerTwo, "UpdatePlayerTwo" }, // 4226744526
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCC_PingPongWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_PingPongWidget_Statics::NewProp_TXT_TeamOne = { "TXT_TeamOne", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_PingPongWidget, TXT_TeamOne), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TXT_TeamOne_MetaData), NewProp_TXT_TeamOne_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_PingPongWidget_Statics::NewProp_TXT_TeamTwo = { "TXT_TeamTwo", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_PingPongWidget, TXT_TeamTwo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TXT_TeamTwo_MetaData), NewProp_TXT_TeamTwo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCC_PingPongWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_PingPongWidget_Statics::NewProp_TXT_TeamOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_PingPongWidget_Statics::NewProp_TXT_TeamTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_PingPongWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCC_PingPongWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_PingPongWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCC_PingPongWidget_Statics::ClassParams = {
	&UCC_PingPongWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCC_PingPongWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCC_PingPongWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_PingPongWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCC_PingPongWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCC_PingPongWidget()
{
	if (!Z_Registration_Info_UClass_UCC_PingPongWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCC_PingPongWidget.OuterSingleton, Z_Construct_UClass_UCC_PingPongWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCC_PingPongWidget.OuterSingleton;
}
UCC_PingPongWidget::UCC_PingPongWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCC_PingPongWidget);
UCC_PingPongWidget::~UCC_PingPongWidget() {}
// ********** End Class UCC_PingPongWidget *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCC_PingPongWidget, UCC_PingPongWidget::StaticClass, TEXT("UCC_PingPongWidget"), &Z_Registration_Info_UClass_UCC_PingPongWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCC_PingPongWidget), 4067034634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h__Script_Arcade_2897774311(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongWidget_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
