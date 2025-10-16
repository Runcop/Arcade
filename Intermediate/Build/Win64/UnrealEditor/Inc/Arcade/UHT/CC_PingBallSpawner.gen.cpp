// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_PingBallSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PingBallSpawner() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PingBallSpawner();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingBallSpawner_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongBall_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_PingBallSpawner Function SpawnBall ***********************************
struct Z_Construct_UFunction_ACC_PingBallSpawner_SpawnBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_PingBallSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingBallSpawner_SpawnBall_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingBallSpawner, nullptr, "SpawnBall", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingBallSpawner_SpawnBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingBallSpawner_SpawnBall_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PingBallSpawner_SpawnBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingBallSpawner_SpawnBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingBallSpawner::execSpawnBall)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBall();
	P_NATIVE_END;
}
// ********** End Class ACC_PingBallSpawner Function SpawnBall *************************************

// ********** Begin Class ACC_PingBallSpawner ******************************************************
void ACC_PingBallSpawner::StaticRegisterNativesACC_PingBallSpawner()
{
	UClass* Class = ACC_PingBallSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnBall", &ACC_PingBallSpawner::execSpawnBall },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PingBallSpawner;
UClass* ACC_PingBallSpawner::GetPrivateStaticClass()
{
	using TClass = ACC_PingBallSpawner;
	if (!Z_Registration_Info_UClass_ACC_PingBallSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PingBallSpawner"),
			Z_Registration_Info_UClass_ACC_PingBallSpawner.InnerSingleton,
			StaticRegisterNativesACC_PingBallSpawner,
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
	return Z_Registration_Info_UClass_ACC_PingBallSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PingBallSpawner_NoRegister()
{
	return ACC_PingBallSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PingBallSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CC_PingBallSpawner.h" },
		{ "ModuleRelativePath", "Public/CC_PingBallSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[] = {
		{ "Category", "BallToSpawn" },
		{ "ModuleRelativePath", "Public/CC_PingBallSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ball;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_PingBallSpawner_SpawnBall, "SpawnBall" }, // 3100189368
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PingBallSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PingBallSpawner_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingBallSpawner, Ball), Z_Construct_UClass_UClass, Z_Construct_UClass_ACC_PingPongBall_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ball_MetaData), NewProp_Ball_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_PingBallSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingBallSpawner_Statics::NewProp_Ball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingBallSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_PingBallSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingBallSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PingBallSpawner_Statics::ClassParams = {
	&ACC_PingBallSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_PingBallSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingBallSpawner_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingBallSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PingBallSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PingBallSpawner()
{
	if (!Z_Registration_Info_UClass_ACC_PingBallSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PingBallSpawner.OuterSingleton, Z_Construct_UClass_ACC_PingBallSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PingBallSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PingBallSpawner);
ACC_PingBallSpawner::~ACC_PingBallSpawner() {}
// ********** End Class ACC_PingBallSpawner ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PingBallSpawner, ACC_PingBallSpawner::StaticClass, TEXT("ACC_PingBallSpawner"), &Z_Registration_Info_UClass_ACC_PingBallSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PingBallSpawner), 4082257196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h__Script_Arcade_4183494499(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingBallSpawner_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
