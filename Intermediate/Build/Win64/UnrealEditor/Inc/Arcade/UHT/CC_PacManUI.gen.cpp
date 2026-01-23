// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan/CC_PacManUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PacManUI() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_UCC_PacManUI();
ARCADE_API UClass* Z_Construct_UClass_UCC_PacManUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCC_PacManUI Function RefreshScore ***************************************
struct Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics
{
	struct CC_PacManUI_eventRefreshScore_Parms
	{
		int32 SetScore;
		int32 SetHighScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SetScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SetHighScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::NewProp_SetScore = { "SetScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PacManUI_eventRefreshScore_Parms, SetScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::NewProp_SetHighScore = { "SetHighScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PacManUI_eventRefreshScore_Parms, SetHighScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::NewProp_SetScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::NewProp_SetHighScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_PacManUI, nullptr, "RefreshScore", Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::CC_PacManUI_eventRefreshScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::CC_PacManUI_eventRefreshScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_PacManUI_RefreshScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_PacManUI_RefreshScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_PacManUI::execRefreshScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SetScore);
	P_GET_PROPERTY(FIntProperty,Z_Param_SetHighScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshScore(Z_Param_SetScore,Z_Param_SetHighScore);
	P_NATIVE_END;
}
// ********** End Class UCC_PacManUI Function RefreshScore *****************************************

// ********** Begin Class UCC_PacManUI *************************************************************
void UCC_PacManUI::StaticRegisterNativesUCC_PacManUI()
{
	UClass* Class = UCC_PacManUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RefreshScore", &UCC_PacManUI::execRefreshScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCC_PacManUI;
UClass* UCC_PacManUI::GetPrivateStaticClass()
{
	using TClass = UCC_PacManUI;
	if (!Z_Registration_Info_UClass_UCC_PacManUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PacManUI"),
			Z_Registration_Info_UClass_UCC_PacManUI.InnerSingleton,
			StaticRegisterNativesUCC_PacManUI,
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
	return Z_Registration_Info_UClass_UCC_PacManUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UCC_PacManUI_NoRegister()
{
	return UCC_PacManUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCC_PacManUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PacMan/CC_PacManUI.h" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManUI.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TXT_Score_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_PacManUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TXT_HighScore_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_PacManUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TXT_Score;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TXT_HighScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCC_PacManUI_RefreshScore, "RefreshScore" }, // 2879113134
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCC_PacManUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_PacManUI_Statics::NewProp_TXT_Score = { "TXT_Score", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_PacManUI, TXT_Score), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TXT_Score_MetaData), NewProp_TXT_Score_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_PacManUI_Statics::NewProp_TXT_HighScore = { "TXT_HighScore", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_PacManUI, TXT_HighScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TXT_HighScore_MetaData), NewProp_TXT_HighScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCC_PacManUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_PacManUI_Statics::NewProp_TXT_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_PacManUI_Statics::NewProp_TXT_HighScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_PacManUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCC_PacManUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_PacManUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCC_PacManUI_Statics::ClassParams = {
	&UCC_PacManUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCC_PacManUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCC_PacManUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_PacManUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UCC_PacManUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCC_PacManUI()
{
	if (!Z_Registration_Info_UClass_UCC_PacManUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCC_PacManUI.OuterSingleton, Z_Construct_UClass_UCC_PacManUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCC_PacManUI.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCC_PacManUI);
UCC_PacManUI::~UCC_PacManUI() {}
// ********** End Class UCC_PacManUI ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCC_PacManUI, UCC_PacManUI::StaticClass, TEXT("UCC_PacManUI"), &Z_Registration_Info_UClass_UCC_PacManUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCC_PacManUI), 4044526021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h__Script_Arcade_3795664984(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManUI_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
