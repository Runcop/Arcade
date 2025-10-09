// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_ArcadeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_ArcadeBase() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_ArcadeBase();
ARCADE_API UClass* Z_Construct_UClass_ACC_ArcadeBase_NoRegister();
ARCADE_API UEnum* Z_Construct_UEnum_Arcade_EArcadeMachine();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACC_ArcadeBase Function GetArcadeMachineType *****************************
struct Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics
{
	struct CC_ArcadeBase_eventGetArcadeMachineType_Parms
	{
		EArcadeMachine ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Arcade" },
		{ "ModuleRelativePath", "Public/CC_ArcadeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_ArcadeBase_eventGetArcadeMachineType_Parms, ReturnValue), Z_Construct_UEnum_Arcade_EArcadeMachine, METADATA_PARAMS(0, nullptr) }; // 563493015
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_ArcadeBase, nullptr, "GetArcadeMachineType", Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::CC_ArcadeBase_eventGetArcadeMachineType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::CC_ArcadeBase_eventGetArcadeMachineType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_ArcadeBase::execGetArcadeMachineType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EArcadeMachine*)Z_Param__Result=P_THIS->GetArcadeMachineType();
	P_NATIVE_END;
}
// ********** End Class ACC_ArcadeBase Function GetArcadeMachineType *******************************

// ********** Begin Class ACC_ArcadeBase ***********************************************************
void ACC_ArcadeBase::StaticRegisterNativesACC_ArcadeBase()
{
	UClass* Class = ACC_ArcadeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetArcadeMachineType", &ACC_ArcadeBase::execGetArcadeMachineType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_ArcadeBase;
UClass* ACC_ArcadeBase::GetPrivateStaticClass()
{
	using TClass = ACC_ArcadeBase;
	if (!Z_Registration_Info_UClass_ACC_ArcadeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_ArcadeBase"),
			Z_Registration_Info_UClass_ACC_ArcadeBase.InnerSingleton,
			StaticRegisterNativesACC_ArcadeBase,
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
	return Z_Registration_Info_UClass_ACC_ArcadeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_ArcadeBase_NoRegister()
{
	return ACC_ArcadeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_ArcadeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CC_ArcadeBase.h" },
		{ "ModuleRelativePath", "Public/CC_ArcadeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "CC_ArcadeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_ArcadeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePoint_MetaData[] = {
		{ "Category", "CC_ArcadeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_ArcadeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionArrow_MetaData[] = {
		{ "Category", "CC_ArcadeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_ArcadeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcadeGame_MetaData[] = {
		{ "Category", "Arcade" },
		{ "ModuleRelativePath", "Public/CC_ArcadeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferencePoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectionArrow;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArcadeGame_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArcadeGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_ArcadeBase_GetArcadeMachineType, "GetArcadeMachineType" }, // 3633021805
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_ArcadeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_ArcadeBase_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_ArcadeBase, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_ArcadeBase_Statics::NewProp_ReferencePoint = { "ReferencePoint", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_ArcadeBase, ReferencePoint), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencePoint_MetaData), NewProp_ReferencePoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_ArcadeBase_Statics::NewProp_DirectionArrow = { "DirectionArrow", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_ArcadeBase, DirectionArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionArrow_MetaData), NewProp_DirectionArrow_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACC_ArcadeBase_Statics::NewProp_ArcadeGame_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACC_ArcadeBase_Statics::NewProp_ArcadeGame = { "ArcadeGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_ArcadeBase, ArcadeGame), Z_Construct_UEnum_Arcade_EArcadeMachine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcadeGame_MetaData), NewProp_ArcadeGame_MetaData) }; // 563493015
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_ArcadeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_ArcadeBase_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_ArcadeBase_Statics::NewProp_ReferencePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_ArcadeBase_Statics::NewProp_DirectionArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_ArcadeBase_Statics::NewProp_ArcadeGame_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_ArcadeBase_Statics::NewProp_ArcadeGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_ArcadeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_ArcadeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_ArcadeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_ArcadeBase_Statics::ClassParams = {
	&ACC_ArcadeBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_ArcadeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_ArcadeBase_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_ArcadeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_ArcadeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_ArcadeBase()
{
	if (!Z_Registration_Info_UClass_ACC_ArcadeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_ArcadeBase.OuterSingleton, Z_Construct_UClass_ACC_ArcadeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_ArcadeBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_ArcadeBase);
ACC_ArcadeBase::~ACC_ArcadeBase() {}
// ********** End Class ACC_ArcadeBase *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_ArcadeBase, ACC_ArcadeBase::StaticClass, TEXT("ACC_ArcadeBase"), &Z_Registration_Info_UClass_ACC_ArcadeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_ArcadeBase), 793495854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h__Script_Arcade_3283003472(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_ArcadeBase_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
