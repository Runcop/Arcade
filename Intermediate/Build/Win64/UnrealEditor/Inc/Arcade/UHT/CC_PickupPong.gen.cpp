// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_PickupPong.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PickupPong() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PickupPong();
ARCADE_API UClass* Z_Construct_UClass_ACC_PickupPong_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_ACC_PickupSpawner_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongBall_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_PickupPong Function GivenBoon ****************************************
struct Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics
{
	struct CC_PickupPong_eventGivenBoon_Parms
	{
		ACC_PingPongBall* Ball;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_PickupPong.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ball;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PickupPong_eventGivenBoon_Parms, Ball), Z_Construct_UClass_ACC_PingPongBall_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::NewProp_Ball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PickupPong, nullptr, "GivenBoon", Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::CC_PickupPong_eventGivenBoon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::CC_PickupPong_eventGivenBoon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PickupPong_GivenBoon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PickupPong_GivenBoon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PickupPong::execGivenBoon)
{
	P_GET_OBJECT(ACC_PingPongBall,Z_Param_Ball);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GivenBoon(Z_Param_Ball);
	P_NATIVE_END;
}
// ********** End Class ACC_PickupPong Function GivenBoon ******************************************

// ********** Begin Class ACC_PickupPong ***********************************************************
void ACC_PickupPong::StaticRegisterNativesACC_PickupPong()
{
	UClass* Class = ACC_PickupPong::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GivenBoon", &ACC_PickupPong::execGivenBoon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PickupPong;
UClass* ACC_PickupPong::GetPrivateStaticClass()
{
	using TClass = ACC_PickupPong;
	if (!Z_Registration_Info_UClass_ACC_PickupPong.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PickupPong"),
			Z_Registration_Info_UClass_ACC_PickupPong.InnerSingleton,
			StaticRegisterNativesACC_PickupPong,
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
	return Z_Registration_Info_UClass_ACC_PickupPong.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PickupPong_NoRegister()
{
	return ACC_PickupPong::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PickupPong_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CC_PickupPong.h" },
		{ "ModuleRelativePath", "Public/CC_PickupPong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpSpawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/CC_PickupPong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_PickupPong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_PickupPong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotate_MetaData[] = {
		{ "Category", "Rotating" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_PickupPong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boost_MetaData[] = {
		{ "Category", "Boost" },
		{ "ModuleRelativePath", "Public/CC_PickupPong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpanPickup_MetaData[] = {
		{ "Category", "LifeSpan" },
		{ "ModuleRelativePath", "Public/CC_PickupPong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/CC_PickupPong.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpSpawner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rotate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Boost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpanPickup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_PickupPong_GivenBoon, "GivenBoon" }, // 2082044222
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PickupPong>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_PickUpSpawner = { "PickUpSpawner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PickupPong, PickUpSpawner), Z_Construct_UClass_ACC_PickupSpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpSpawner_MetaData), NewProp_PickUpSpawner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PickupPong, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PickupPong, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PickupPong, Rotate), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotate_MetaData), NewProp_Rotate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_Boost = { "Boost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PickupPong, Boost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boost_MetaData), NewProp_Boost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_LifeSpanPickup = { "LifeSpanPickup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PickupPong, LifeSpanPickup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeSpanPickup_MetaData), NewProp_LifeSpanPickup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_PickUpSound = { "PickUpSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PickupPong, PickUpSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpSound_MetaData), NewProp_PickUpSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_PickupPong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_PickUpSpawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_Rotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_Boost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_LifeSpanPickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PickupPong_Statics::NewProp_PickUpSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PickupPong_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_PickupPong_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PickupPong_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PickupPong_Statics::ClassParams = {
	&ACC_PickupPong::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_PickupPong_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PickupPong_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PickupPong_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PickupPong_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PickupPong()
{
	if (!Z_Registration_Info_UClass_ACC_PickupPong.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PickupPong.OuterSingleton, Z_Construct_UClass_ACC_PickupPong_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PickupPong.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PickupPong);
ACC_PickupPong::~ACC_PickupPong() {}
// ********** End Class ACC_PickupPong *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PickupPong_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PickupPong, ACC_PickupPong::StaticClass, TEXT("ACC_PickupPong"), &Z_Registration_Info_UClass_ACC_PickupPong, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PickupPong), 288195592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PickupPong_h__Script_Arcade_332258985(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PickupPong_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PickupPong_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
