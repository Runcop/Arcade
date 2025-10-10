// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_PingPongController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PingPongController() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongController();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_PingPongController ***************************************************
void ACC_PingPongController::StaticRegisterNativesACC_PingPongController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PingPongController;
UClass* ACC_PingPongController::GetPrivateStaticClass()
{
	using TClass = ACC_PingPongController;
	if (!Z_Registration_Info_UClass_ACC_PingPongController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PingPongController"),
			Z_Registration_Info_UClass_ACC_PingPongController.InnerSingleton,
			StaticRegisterNativesACC_PingPongController,
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
	return Z_Registration_Info_UClass_ACC_PingPongController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PingPongController_NoRegister()
{
	return ACC_PingPongController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PingPongController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CC_PingPongController.h" },
		{ "ModuleRelativePath", "Public/CC_PingPongController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PingPongController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACC_PingPongController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PingPongController_Statics::ClassParams = {
	&ACC_PingPongController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PingPongController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PingPongController()
{
	if (!Z_Registration_Info_UClass_ACC_PingPongController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PingPongController.OuterSingleton, Z_Construct_UClass_ACC_PingPongController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PingPongController.OuterSingleton;
}
ACC_PingPongController::ACC_PingPongController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PingPongController);
ACC_PingPongController::~ACC_PingPongController() {}
// ********** End Class ACC_PingPongController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongController_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PingPongController, ACC_PingPongController::StaticClass, TEXT("ACC_PingPongController"), &Z_Registration_Info_UClass_ACC_PingPongController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PingPongController), 925965814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongController_h__Script_Arcade_3802301223(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongController_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongController_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
