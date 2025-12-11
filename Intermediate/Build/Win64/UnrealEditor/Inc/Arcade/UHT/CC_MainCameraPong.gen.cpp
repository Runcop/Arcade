// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_MainCameraPong.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_MainCameraPong() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_MainCameraPong();
ARCADE_API UClass* Z_Construct_UClass_ACC_MainCameraPong_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_MainCameraPong *******************************************************
void ACC_MainCameraPong::StaticRegisterNativesACC_MainCameraPong()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_MainCameraPong;
UClass* ACC_MainCameraPong::GetPrivateStaticClass()
{
	using TClass = ACC_MainCameraPong;
	if (!Z_Registration_Info_UClass_ACC_MainCameraPong.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_MainCameraPong"),
			Z_Registration_Info_UClass_ACC_MainCameraPong.InnerSingleton,
			StaticRegisterNativesACC_MainCameraPong,
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
	return Z_Registration_Info_UClass_ACC_MainCameraPong.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_MainCameraPong_NoRegister()
{
	return ACC_MainCameraPong::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_MainCameraPong_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "CC_MainCameraPong.h" },
		{ "ModuleRelativePath", "Public/CC_MainCameraPong.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_MainCameraPong>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACC_MainCameraPong_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACameraActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_MainCameraPong_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_MainCameraPong_Statics::ClassParams = {
	&ACC_MainCameraPong::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_MainCameraPong_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_MainCameraPong_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_MainCameraPong()
{
	if (!Z_Registration_Info_UClass_ACC_MainCameraPong.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_MainCameraPong.OuterSingleton, Z_Construct_UClass_ACC_MainCameraPong_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_MainCameraPong.OuterSingleton;
}
ACC_MainCameraPong::ACC_MainCameraPong(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_MainCameraPong);
ACC_MainCameraPong::~ACC_MainCameraPong() {}
// ********** End Class ACC_MainCameraPong *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainCameraPong_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_MainCameraPong, ACC_MainCameraPong::StaticClass, TEXT("ACC_MainCameraPong"), &Z_Registration_Info_UClass_ACC_MainCameraPong, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_MainCameraPong), 3810745472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainCameraPong_h__Script_Arcade_2824324601(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainCameraPong_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainCameraPong_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
