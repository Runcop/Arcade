// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan/CC_GridSystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_GridSystem() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_GridSystem();
ARCADE_API UClass* Z_Construct_UClass_ACC_GridSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_GridSystem ***********************************************************
void ACC_GridSystem::StaticRegisterNativesACC_GridSystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_GridSystem;
UClass* ACC_GridSystem::GetPrivateStaticClass()
{
	using TClass = ACC_GridSystem;
	if (!Z_Registration_Info_UClass_ACC_GridSystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_GridSystem"),
			Z_Registration_Info_UClass_ACC_GridSystem.InnerSingleton,
			StaticRegisterNativesACC_GridSystem,
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
	return Z_Registration_Info_UClass_ACC_GridSystem.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_GridSystem_NoRegister()
{
	return ACC_GridSystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_GridSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PacMan/CC_GridSystem.h" },
		{ "ModuleRelativePath", "Public/PacMan/CC_GridSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_GridSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACC_GridSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_GridSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_GridSystem_Statics::ClassParams = {
	&ACC_GridSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_GridSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_GridSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_GridSystem()
{
	if (!Z_Registration_Info_UClass_ACC_GridSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_GridSystem.OuterSingleton, Z_Construct_UClass_ACC_GridSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_GridSystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_GridSystem);
ACC_GridSystem::~ACC_GridSystem() {}
// ********** End Class ACC_GridSystem *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_GridSystem_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_GridSystem, ACC_GridSystem::StaticClass, TEXT("ACC_GridSystem"), &Z_Registration_Info_UClass_ACC_GridSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_GridSystem), 562988755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_GridSystem_h__Script_Arcade_4038367095(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_GridSystem_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_GridSystem_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
