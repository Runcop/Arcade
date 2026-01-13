// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan/CC_WidgetPacMan.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_WidgetPacMan() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_UCC_WidgetPacMan();
ARCADE_API UClass* Z_Construct_UClass_UCC_WidgetPacMan_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCC_WidgetPacMan *********************************************************
void UCC_WidgetPacMan::StaticRegisterNativesUCC_WidgetPacMan()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCC_WidgetPacMan;
UClass* UCC_WidgetPacMan::GetPrivateStaticClass()
{
	using TClass = UCC_WidgetPacMan;
	if (!Z_Registration_Info_UClass_UCC_WidgetPacMan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_WidgetPacMan"),
			Z_Registration_Info_UClass_UCC_WidgetPacMan.InnerSingleton,
			StaticRegisterNativesUCC_WidgetPacMan,
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
	return Z_Registration_Info_UClass_UCC_WidgetPacMan.InnerSingleton;
}
UClass* Z_Construct_UClass_UCC_WidgetPacMan_NoRegister()
{
	return UCC_WidgetPacMan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCC_WidgetPacMan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PacMan/CC_WidgetPacMan.h" },
		{ "ModuleRelativePath", "Public/PacMan/CC_WidgetPacMan.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCC_WidgetPacMan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCC_WidgetPacMan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_WidgetPacMan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCC_WidgetPacMan_Statics::ClassParams = {
	&UCC_WidgetPacMan::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_WidgetPacMan_Statics::Class_MetaDataParams), Z_Construct_UClass_UCC_WidgetPacMan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCC_WidgetPacMan()
{
	if (!Z_Registration_Info_UClass_UCC_WidgetPacMan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCC_WidgetPacMan.OuterSingleton, Z_Construct_UClass_UCC_WidgetPacMan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCC_WidgetPacMan.OuterSingleton;
}
UCC_WidgetPacMan::UCC_WidgetPacMan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCC_WidgetPacMan);
UCC_WidgetPacMan::~UCC_WidgetPacMan() {}
// ********** End Class UCC_WidgetPacMan ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_WidgetPacMan_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCC_WidgetPacMan, UCC_WidgetPacMan::StaticClass, TEXT("UCC_WidgetPacMan"), &Z_Registration_Info_UClass_UCC_WidgetPacMan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCC_WidgetPacMan), 4033064619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_WidgetPacMan_h__Script_Arcade_71237685(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_WidgetPacMan_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_WidgetPacMan_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
