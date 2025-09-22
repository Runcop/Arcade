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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_MainMenuController ***************************************************
void ACC_MainMenuController::StaticRegisterNativesACC_MainMenuController()
{
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make sure GENERATED_BODY() is inside the class definition, not outside or before UCLASS().\n// Your placement is correct, but ensure there are no stray semicolons or misplaced macros above it.\n// Also, check for any missing includes or syntax errors above this class in the file or in included headers.\n" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CC_MainMenuController.h" },
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make sure GENERATED_BODY() is inside the class definition, not outside or before UCLASS().\nYour placement is correct, but ensure there are no stray semicolons or misplaced macros above it.\nAlso, check for any missing includes or syntax errors above this class in the file or in included headers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_MainMenuController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuController, MainMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_MainMenuController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuController_Statics::NewProp_MainMenuWidgetClass,
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
	nullptr,
	Z_Construct_UClass_ACC_MainMenuController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_MainMenuController, ACC_MainMenuController::StaticClass, TEXT("ACC_MainMenuController"), &Z_Registration_Info_UClass_ACC_MainMenuController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_MainMenuController), 2749096846U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h__Script_Arcade_4270965599(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuController_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
