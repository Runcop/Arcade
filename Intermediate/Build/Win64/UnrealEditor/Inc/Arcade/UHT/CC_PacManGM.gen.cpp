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
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PacMan/CC_PacManGM.h" },
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManGM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManGM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan/CC_PacManGM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HighScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PacManGM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACC_PacManGM_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PacManGM, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACC_PacManGM_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PacManGM, HighScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighScore_MetaData), NewProp_HighScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_PacManGM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PacManGM_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PacManGM_Statics::NewProp_HighScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PacManGM_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ACC_PacManGM_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PacManGM_Statics::PropPointers),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PacManGM);
ACC_PacManGM::~ACC_PacManGM() {}
// ********** End Class ACC_PacManGM ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PacManGM, ACC_PacManGM::StaticClass, TEXT("ACC_PacManGM"), &Z_Registration_Info_UClass_ACC_PacManGM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PacManGM), 603437719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h__Script_Arcade_217820178(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_PacMan_CC_PacManGM_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
