// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_Gamemode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_Gamemode() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_Gamemode();
ARCADE_API UClass* Z_Construct_UClass_ACC_Gamemode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_Gamemode *************************************************************
void ACC_Gamemode::StaticRegisterNativesACC_Gamemode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_Gamemode;
UClass* ACC_Gamemode::GetPrivateStaticClass()
{
	using TClass = ACC_Gamemode;
	if (!Z_Registration_Info_UClass_ACC_Gamemode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_Gamemode"),
			Z_Registration_Info_UClass_ACC_Gamemode.InnerSingleton,
			StaticRegisterNativesACC_Gamemode,
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
	return Z_Registration_Info_UClass_ACC_Gamemode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_Gamemode_NoRegister()
{
	return ACC_Gamemode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_Gamemode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CC_Gamemode.h" },
		{ "ModuleRelativePath", "Public/CC_Gamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_Gamemode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACC_Gamemode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_Gamemode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_Gamemode_Statics::ClassParams = {
	&ACC_Gamemode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_Gamemode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_Gamemode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_Gamemode()
{
	if (!Z_Registration_Info_UClass_ACC_Gamemode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_Gamemode.OuterSingleton, Z_Construct_UClass_ACC_Gamemode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_Gamemode.OuterSingleton;
}
ACC_Gamemode::ACC_Gamemode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_Gamemode);
ACC_Gamemode::~ACC_Gamemode() {}
// ********** End Class ACC_Gamemode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_Gamemode_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_Gamemode, ACC_Gamemode::StaticClass, TEXT("ACC_Gamemode"), &Z_Registration_Info_UClass_ACC_Gamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_Gamemode), 3447380159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_Gamemode_h__Script_Arcade_1717083452(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_Gamemode_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_Gamemode_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
