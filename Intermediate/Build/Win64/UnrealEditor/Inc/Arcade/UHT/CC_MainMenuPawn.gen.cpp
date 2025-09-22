// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_MainMenuPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_MainMenuPawn() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_MainMenuPawn();
ARCADE_API UClass* Z_Construct_UClass_ACC_MainMenuPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_MainMenuPawn *********************************************************
void ACC_MainMenuPawn::StaticRegisterNativesACC_MainMenuPawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_MainMenuPawn;
UClass* ACC_MainMenuPawn::GetPrivateStaticClass()
{
	using TClass = ACC_MainMenuPawn;
	if (!Z_Registration_Info_UClass_ACC_MainMenuPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_MainMenuPawn"),
			Z_Registration_Info_UClass_ACC_MainMenuPawn.InnerSingleton,
			StaticRegisterNativesACC_MainMenuPawn,
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
	return Z_Registration_Info_UClass_ACC_MainMenuPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_MainMenuPawn_NoRegister()
{
	return ACC_MainMenuPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_MainMenuPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CC_MainMenuPawn.h" },
		{ "ModuleRelativePath", "Public/CC_MainMenuPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_MainMenuPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_MainMenuPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_MainMenuPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_MainMenuPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_MainMenuPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuPawn_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_MainMenuPawn_Statics::NewProp_SpringArm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_MainMenuPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_MainMenuPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_MainMenuPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_MainMenuPawn_Statics::ClassParams = {
	&ACC_MainMenuPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACC_MainMenuPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_MainMenuPawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_MainMenuPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_MainMenuPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_MainMenuPawn()
{
	if (!Z_Registration_Info_UClass_ACC_MainMenuPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_MainMenuPawn.OuterSingleton, Z_Construct_UClass_ACC_MainMenuPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_MainMenuPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_MainMenuPawn);
ACC_MainMenuPawn::~ACC_MainMenuPawn() {}
// ********** End Class ACC_MainMenuPawn ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuPawn_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_MainMenuPawn, ACC_MainMenuPawn::StaticClass, TEXT("ACC_MainMenuPawn"), &Z_Registration_Info_UClass_ACC_MainMenuPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_MainMenuPawn), 3235820909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuPawn_h__Script_Arcade_2005415536(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuPawn_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuPawn_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
