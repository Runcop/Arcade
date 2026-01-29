// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan/CC_ScorePacMan.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_ScorePacMan() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_ScorePacMan();
ARCADE_API UClass* Z_Construct_UClass_ACC_ScorePacMan_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_ScorePacMan **********************************************************
void ACC_ScorePacMan::StaticRegisterNativesACC_ScorePacMan()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_ScorePacMan;
UClass* ACC_ScorePacMan::GetPrivateStaticClass()
{
	using TClass = ACC_ScorePacMan;
	if (!Z_Registration_Info_UClass_ACC_ScorePacMan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_ScorePacMan"),
			Z_Registration_Info_UClass_ACC_ScorePacMan.InnerSingleton,
			StaticRegisterNativesACC_ScorePacMan,
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
	return Z_Registration_Info_UClass_ACC_ScorePacMan.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_ScorePacMan_NoRegister()
{
	return ACC_ScorePacMan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_ScorePacMan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PacMan/CC_ScorePacMan.h" },
		{ "ModuleRelativePath", "Public/PacMan/CC_ScorePacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "CC_ScorePacMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_ScorePacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "CC_ScorePacMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_ScorePacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[] = {
		{ "Category", "CC_ScorePacMan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacMan/CC_ScorePacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/PacMan/CC_ScorePacMan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Billboard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_ScorePacMan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_ScorePacMan_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_ScorePacMan, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_ScorePacMan_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_ScorePacMan, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_ScorePacMan_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_ScorePacMan, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Billboard_MetaData), NewProp_Billboard_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACC_ScorePacMan_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_ScorePacMan, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_ScorePacMan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_ScorePacMan_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_ScorePacMan_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_ScorePacMan_Statics::NewProp_Billboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_ScorePacMan_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_ScorePacMan_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_ScorePacMan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_ScorePacMan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_ScorePacMan_Statics::ClassParams = {
	&ACC_ScorePacMan::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACC_ScorePacMan_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_ScorePacMan_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_ScorePacMan_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_ScorePacMan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_ScorePacMan()
{
	if (!Z_Registration_Info_UClass_ACC_ScorePacMan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_ScorePacMan.OuterSingleton, Z_Construct_UClass_ACC_ScorePacMan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_ScorePacMan.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_ScorePacMan);
ACC_ScorePacMan::~ACC_ScorePacMan() {}
// ********** End Class ACC_ScorePacMan ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_ScorePacMan_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_ScorePacMan, ACC_ScorePacMan::StaticClass, TEXT("ACC_ScorePacMan"), &Z_Registration_Info_UClass_ACC_ScorePacMan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_ScorePacMan), 2990027315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_ScorePacMan_h__Script_Arcade_1105870446(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_ScorePacMan_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_ScorePacMan_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
