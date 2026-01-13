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
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_PacManController *****************************************************
void ACC_PacManController::StaticRegisterNativesACC_PacManController()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PacManController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PacManController, ACC_PacManController::StaticClass, TEXT("ACC_PacManController"), &Z_Registration_Info_UClass_ACC_PacManController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PacManController), 306006970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h__Script_Arcade_3278506637(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManController_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
