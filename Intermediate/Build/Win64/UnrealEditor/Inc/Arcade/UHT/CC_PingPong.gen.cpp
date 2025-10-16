// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_PingPong.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PingPong() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PingBallSpawner_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPong();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPong_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongBall_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_PingPong Function Spawner ********************************************
struct Z_Construct_UFunction_ACC_PingPong_Spawner_Statics
{
	struct CC_PingPong_eventSpawner_Parms
	{
		ACC_PingBallSpawner* Spawner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_PingPong.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PingPong_eventSpawner_Parms, Spawner), Z_Construct_UClass_ACC_PingBallSpawner_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::NewProp_Spawner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingPong, nullptr, "Spawner", Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::CC_PingPong_eventSpawner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::CC_PingPong_eventSpawner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PingPong_Spawner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingPong_Spawner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingPong::execSpawner)
{
	P_GET_OBJECT(ACC_PingBallSpawner,Z_Param_Spawner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Spawner(Z_Param_Spawner);
	P_NATIVE_END;
}
// ********** End Class ACC_PingPong Function Spawner **********************************************

// ********** Begin Class ACC_PingPong Function TeamOneScored **************************************
struct Z_Construct_UFunction_ACC_PingPong_TeamOneScored_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_PingPong.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingPong_TeamOneScored_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingPong, nullptr, "TeamOneScored", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPong_TeamOneScored_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingPong_TeamOneScored_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PingPong_TeamOneScored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingPong_TeamOneScored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingPong::execTeamOneScored)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TeamOneScored();
	P_NATIVE_END;
}
// ********** End Class ACC_PingPong Function TeamOneScored ****************************************

// ********** Begin Class ACC_PingPong Function TeamTwoScored **************************************
struct Z_Construct_UFunction_ACC_PingPong_TeamTwoScored_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_PingPong.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingPong_TeamTwoScored_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingPong, nullptr, "TeamTwoScored", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPong_TeamTwoScored_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingPong_TeamTwoScored_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PingPong_TeamTwoScored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingPong_TeamTwoScored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingPong::execTeamTwoScored)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TeamTwoScored();
	P_NATIVE_END;
}
// ********** End Class ACC_PingPong Function TeamTwoScored ****************************************

// ********** Begin Class ACC_PingPong *************************************************************
void ACC_PingPong::StaticRegisterNativesACC_PingPong()
{
	UClass* Class = ACC_PingPong::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Spawner", &ACC_PingPong::execSpawner },
		{ "TeamOneScored", &ACC_PingPong::execTeamOneScored },
		{ "TeamTwoScored", &ACC_PingPong::execTeamTwoScored },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PingPong;
UClass* ACC_PingPong::GetPrivateStaticClass()
{
	using TClass = ACC_PingPong;
	if (!Z_Registration_Info_UClass_ACC_PingPong.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PingPong"),
			Z_Registration_Info_UClass_ACC_PingPong.InnerSingleton,
			StaticRegisterNativesACC_PingPong,
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
	return Z_Registration_Info_UClass_ACC_PingPong.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PingPong_NoRegister()
{
	return ACC_PingPong::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PingPong_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CC_PingPong.h" },
		{ "ModuleRelativePath", "Public/CC_PingPong.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamOneScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/CC_PingPong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamTwoScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/CC_PingPong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/CC_PingPong.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamOneScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamTwoScore;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ball;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_PingPong_Spawner, "Spawner" }, // 3567466747
		{ &Z_Construct_UFunction_ACC_PingPong_TeamOneScored, "TeamOneScored" }, // 2271548137
		{ &Z_Construct_UFunction_ACC_PingPong_TeamTwoScored, "TeamTwoScored" }, // 1931514889
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PingPong>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACC_PingPong_Statics::NewProp_TeamOneScore = { "TeamOneScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPong, TeamOneScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamOneScore_MetaData), NewProp_TeamOneScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACC_PingPong_Statics::NewProp_TeamTwoScore = { "TeamTwoScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPong, TeamTwoScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamTwoScore_MetaData), NewProp_TeamTwoScore_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PingPong_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPong, Ball), Z_Construct_UClass_UClass, Z_Construct_UClass_ACC_PingPongBall_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ball_MetaData), NewProp_Ball_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_PingPong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPong_Statics::NewProp_TeamOneScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPong_Statics::NewProp_TeamTwoScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPong_Statics::NewProp_Ball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPong_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_PingPong_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPong_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PingPong_Statics::ClassParams = {
	&ACC_PingPong::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_PingPong_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPong_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPong_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PingPong_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PingPong()
{
	if (!Z_Registration_Info_UClass_ACC_PingPong.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PingPong.OuterSingleton, Z_Construct_UClass_ACC_PingPong_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PingPong.OuterSingleton;
}
ACC_PingPong::ACC_PingPong(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PingPong);
ACC_PingPong::~ACC_PingPong() {}
// ********** End Class ACC_PingPong ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPong_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PingPong, ACC_PingPong::StaticClass, TEXT("ACC_PingPong"), &Z_Registration_Info_UClass_ACC_PingPong, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PingPong), 2850531779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPong_h__Script_Arcade_269821188(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPong_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPong_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
