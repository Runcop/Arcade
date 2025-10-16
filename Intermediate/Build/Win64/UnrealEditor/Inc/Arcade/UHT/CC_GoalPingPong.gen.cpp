// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_GoalPingPong.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_GoalPingPong() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_GoalPingPong();
ARCADE_API UClass* Z_Construct_UClass_ACC_GoalPingPong_NoRegister();
ARCADE_API UEnum* Z_Construct_UEnum_Arcade_ETeams();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETeams ********************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeams;
static UEnum* ETeams_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETeams.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETeams.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arcade_ETeams, (UObject*)Z_Construct_UPackage__Script_Arcade(), TEXT("ETeams"));
	}
	return Z_Registration_Info_UEnum_ETeams.OuterSingleton;
}
template<> ARCADE_API UEnum* StaticEnum<ETeams>()
{
	return ETeams_StaticEnum();
}
struct Z_Construct_UEnum_Arcade_ETeams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CC_GoalPingPong.h" },
		{ "TeamOne.DisplayName", "TeamOne" },
		{ "TeamOne.Name", "ETeams::TeamOne" },
		{ "TeamTwo.DisplayName", "TeamTwo" },
		{ "TeamTwo.Name", "ETeams::TeamTwo" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETeams::TeamOne", (int64)ETeams::TeamOne },
		{ "ETeams::TeamTwo", (int64)ETeams::TeamTwo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arcade_ETeams_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Arcade,
	nullptr,
	"ETeams",
	"ETeams",
	Z_Construct_UEnum_Arcade_ETeams_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Arcade_ETeams_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arcade_ETeams_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arcade_ETeams_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Arcade_ETeams()
{
	if (!Z_Registration_Info_UEnum_ETeams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeams.InnerSingleton, Z_Construct_UEnum_Arcade_ETeams_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETeams.InnerSingleton;
}
// ********** End Enum ETeams **********************************************************************

// ********** Begin Class ACC_GoalPingPong Function GoalScored *************************************
struct Z_Construct_UFunction_ACC_GoalPingPong_GoalScored_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_GoalPingPong.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_GoalPingPong_GoalScored_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_GoalPingPong, nullptr, "GoalScored", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_GoalPingPong_GoalScored_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_GoalPingPong_GoalScored_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_GoalPingPong_GoalScored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_GoalPingPong_GoalScored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_GoalPingPong::execGoalScored)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GoalScored();
	P_NATIVE_END;
}
// ********** End Class ACC_GoalPingPong Function GoalScored ***************************************

// ********** Begin Class ACC_GoalPingPong *********************************************************
void ACC_GoalPingPong::StaticRegisterNativesACC_GoalPingPong()
{
	UClass* Class = ACC_GoalPingPong::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GoalScored", &ACC_GoalPingPong::execGoalScored },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_GoalPingPong;
UClass* ACC_GoalPingPong::GetPrivateStaticClass()
{
	using TClass = ACC_GoalPingPong;
	if (!Z_Registration_Info_UClass_ACC_GoalPingPong.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_GoalPingPong"),
			Z_Registration_Info_UClass_ACC_GoalPingPong.InnerSingleton,
			StaticRegisterNativesACC_GoalPingPong,
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
	return Z_Registration_Info_UClass_ACC_GoalPingPong.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_GoalPingPong_NoRegister()
{
	return ACC_GoalPingPong::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_GoalPingPong_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CC_GoalPingPong.h" },
		{ "ModuleRelativePath", "Public/CC_GoalPingPong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_GoalPingPong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Public/CC_GoalPingPong.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Team;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_GoalPingPong_GoalScored, "GoalScored" }, // 659525794
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_GoalPingPong>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_GoalPingPong_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_GoalPingPong, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACC_GoalPingPong_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACC_GoalPingPong_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_GoalPingPong, Team), Z_Construct_UEnum_Arcade_ETeams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) }; // 982420193
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_GoalPingPong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_GoalPingPong_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_GoalPingPong_Statics::NewProp_Team_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_GoalPingPong_Statics::NewProp_Team,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_GoalPingPong_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_GoalPingPong_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_GoalPingPong_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_GoalPingPong_Statics::ClassParams = {
	&ACC_GoalPingPong::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_GoalPingPong_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_GoalPingPong_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_GoalPingPong_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_GoalPingPong_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_GoalPingPong()
{
	if (!Z_Registration_Info_UClass_ACC_GoalPingPong.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_GoalPingPong.OuterSingleton, Z_Construct_UClass_ACC_GoalPingPong_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_GoalPingPong.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_GoalPingPong);
ACC_GoalPingPong::~ACC_GoalPingPong() {}
// ********** End Class ACC_GoalPingPong ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h__Script_Arcade_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETeams_StaticEnum, TEXT("ETeams"), &Z_Registration_Info_UEnum_ETeams, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 982420193U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_GoalPingPong, ACC_GoalPingPong::StaticClass, TEXT("ACC_GoalPingPong"), &Z_Registration_Info_UClass_ACC_GoalPingPong, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_GoalPingPong), 1678323857U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h__Script_Arcade_4085291806(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h__Script_Arcade_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_GoalPingPong_h__Script_Arcade_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
