// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/CC_PickupSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PickupSpawner() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PickupPong_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_ACC_PickupSpawner();
ARCADE_API UClass* Z_Construct_UClass_ACC_PickupSpawner_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_PickupSpawner Function SpawningPickup ********************************
struct Z_Construct_UFunction_ACC_PickupSpawner_SpawningPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PickupSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PickupSpawner_SpawningPickup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PickupSpawner, nullptr, "SpawningPickup", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PickupSpawner_SpawningPickup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PickupSpawner_SpawningPickup_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PickupSpawner_SpawningPickup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PickupSpawner_SpawningPickup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PickupSpawner::execSpawningPickup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawningPickup();
	P_NATIVE_END;
}
// ********** End Class ACC_PickupSpawner Function SpawningPickup **********************************

// ********** Begin Class ACC_PickupSpawner Function StartRespawnTimer *****************************
struct Z_Construct_UFunction_ACC_PickupSpawner_StartRespawnTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PickupSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PickupSpawner_StartRespawnTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PickupSpawner, nullptr, "StartRespawnTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PickupSpawner_StartRespawnTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PickupSpawner_StartRespawnTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PickupSpawner_StartRespawnTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PickupSpawner_StartRespawnTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PickupSpawner::execStartRespawnTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRespawnTimer();
	P_NATIVE_END;
}
// ********** End Class ACC_PickupSpawner Function StartRespawnTimer *******************************

// ********** Begin Class ACC_PickupSpawner ********************************************************
void ACC_PickupSpawner::StaticRegisterNativesACC_PickupSpawner()
{
	UClass* Class = ACC_PickupSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawningPickup", &ACC_PickupSpawner::execSpawningPickup },
		{ "StartRespawnTimer", &ACC_PickupSpawner::execStartRespawnTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PickupSpawner;
UClass* ACC_PickupSpawner::GetPrivateStaticClass()
{
	using TClass = ACC_PickupSpawner;
	if (!Z_Registration_Info_UClass_ACC_PickupSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PickupSpawner"),
			Z_Registration_Info_UClass_ACC_PickupSpawner.InnerSingleton,
			StaticRegisterNativesACC_PickupSpawner,
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
	return Z_Registration_Info_UClass_ACC_PickupSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PickupSpawner_NoRegister()
{
	return ACC_PickupSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PickupSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pong/CC_PickupSpawner.h" },
		{ "ModuleRelativePath", "Public/Pong/CC_PickupSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pong/CC_PickupSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/Pong/CC_PickupSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pickup_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Pong/CC_PickupSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RespawnTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Pickup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_PickupSpawner_SpawningPickup, "SpawningPickup" }, // 2339316058
		{ &Z_Construct_UFunction_ACC_PickupSpawner_StartRespawnTimer, "StartRespawnTimer" }, // 741699319
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PickupSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PickupSpawner_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PickupSpawner, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACC_PickupSpawner_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PickupSpawner, RespawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnTime_MetaData), NewProp_RespawnTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PickupSpawner_Statics::NewProp_Pickup = { "Pickup", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PickupSpawner, Pickup), Z_Construct_UClass_UClass, Z_Construct_UClass_ACC_PickupPong_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pickup_MetaData), NewProp_Pickup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_PickupSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PickupSpawner_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PickupSpawner_Statics::NewProp_RespawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PickupSpawner_Statics::NewProp_Pickup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PickupSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_PickupSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PickupSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PickupSpawner_Statics::ClassParams = {
	&ACC_PickupSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_PickupSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PickupSpawner_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PickupSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PickupSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PickupSpawner()
{
	if (!Z_Registration_Info_UClass_ACC_PickupSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PickupSpawner.OuterSingleton, Z_Construct_UClass_ACC_PickupSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PickupSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PickupSpawner);
ACC_PickupSpawner::~ACC_PickupSpawner() {}
// ********** End Class ACC_PickupSpawner **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PickupSpawner_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PickupSpawner, ACC_PickupSpawner::StaticClass, TEXT("ACC_PickupSpawner"), &Z_Registration_Info_UClass_ACC_PickupSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PickupSpawner), 2666842715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PickupSpawner_h__Script_Arcade_2404221667(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PickupSpawner_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PickupSpawner_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
