// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan/CC_PacManGM.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PacManGM() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PacManGM();
ARCADE_API UClass* Z_Construct_UClass_ACC_PacManGM_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_PacManGM *************************************************************
void ACC_PacManGM::StaticRegisterNativesACC_PacManGM()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PacManGM;
UClass* ACC_PacManGM::GetPrivateStaticClass()
{
	using TClass = ACC_PacManGM;
	if (!Z_Registration_Info_UClass_ACC_PacManGM.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PacManGM"),
			Z_Registration_Info_UClass_ACC_PacManGM.InnerSingleton,
			StaticRegisterNativesACC_PacManGM,
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
	return Z_Registration_Info_UClass_ACC_PacManGM.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PacManGM_NoRegister()
{
	return ACC_PacManGM::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PacManGM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PacMan/CC_PacManGM.h" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManGM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PacManGM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACC_PacManGM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PacManGM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PacManGM_Statics::ClassParams = {
	&ACC_PacManGM::StaticClass,
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PacManGM_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PacManGM_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PacManGM()
{
	if (!Z_Registration_Info_UClass_ACC_PacManGM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PacManGM.OuterSingleton, Z_Construct_UClass_ACC_PacManGM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PacManGM.OuterSingleton;
}
ACC_PacManGM::ACC_PacManGM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PacManGM);
ACC_PacManGM::~ACC_PacManGM() {}
// ********** End Class ACC_PacManGM ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PacManGM, ACC_PacManGM::StaticClass, TEXT("ACC_PacManGM"), &Z_Registration_Info_UClass_ACC_PacManGM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PacManGM), 2416626924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h__Script_Arcade_1874885716(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
