// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_PingPongPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PingPongPawn() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongPawn();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_PingPongPawn *********************************************************
void ACC_PingPongPawn::StaticRegisterNativesACC_PingPongPawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PingPongPawn;
UClass* ACC_PingPongPawn::GetPrivateStaticClass()
{
	using TClass = ACC_PingPongPawn;
	if (!Z_Registration_Info_UClass_ACC_PingPongPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PingPongPawn"),
			Z_Registration_Info_UClass_ACC_PingPongPawn.InnerSingleton,
			StaticRegisterNativesACC_PingPongPawn,
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
	return Z_Registration_Info_UClass_ACC_PingPongPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PingPongPawn_NoRegister()
{
	return ACC_PingPongPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PingPongPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CC_PingPongPawn.h" },
		{ "ModuleRelativePath", "Public/CC_PingPongPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PingPongPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACC_PingPongPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PingPongPawn_Statics::ClassParams = {
	&ACC_PingPongPawn::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PingPongPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PingPongPawn()
{
	if (!Z_Registration_Info_UClass_ACC_PingPongPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PingPongPawn.OuterSingleton, Z_Construct_UClass_ACC_PingPongPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PingPongPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PingPongPawn);
ACC_PingPongPawn::~ACC_PingPongPawn() {}
// ********** End Class ACC_PingPongPawn ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongPawn_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PingPongPawn, ACC_PingPongPawn::StaticClass, TEXT("ACC_PingPongPawn"), &Z_Registration_Info_UClass_ACC_PingPongPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PingPongPawn), 1472839257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongPawn_h__Script_Arcade_2654201213(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongPawn_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongPawn_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
