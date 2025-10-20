// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_PingPongController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PingPongController() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongController();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongController_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_UCC_PingPongWidget_NoRegister();
ARCADE_API UEnum* Z_Construct_UEnum_Arcade_EPlayer();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPlayer *******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayer;
static UEnum* EPlayer_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayer.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayer.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arcade_EPlayer, (UObject*)Z_Construct_UPackage__Script_Arcade(), TEXT("EPlayer"));
	}
	return Z_Registration_Info_UEnum_EPlayer.OuterSingleton;
}
template<> ARCADE_API UEnum* StaticEnum<EPlayer>()
{
	return EPlayer_StaticEnum();
}
struct Z_Construct_UEnum_Arcade_EPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CC_PingPongController.h" },
		{ "PlayerOne.DisplayName", "PlayerOne" },
		{ "PlayerOne.Name", "EPlayer::PlayerOne" },
		{ "PlayerTwo.DisplayName", "PlayerTwo" },
		{ "PlayerTwo.Name", "EPlayer::PlayerTwo" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayer::PlayerOne", (int64)EPlayer::PlayerOne },
		{ "EPlayer::PlayerTwo", (int64)EPlayer::PlayerTwo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arcade_EPlayer_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Arcade,
	nullptr,
	"EPlayer",
	"EPlayer",
	Z_Construct_UEnum_Arcade_EPlayer_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Arcade_EPlayer_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arcade_EPlayer_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arcade_EPlayer_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Arcade_EPlayer()
{
	if (!Z_Registration_Info_UEnum_EPlayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayer.InnerSingleton, Z_Construct_UEnum_Arcade_EPlayer_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayer.InnerSingleton;
}
// ********** End Enum EPlayer *********************************************************************

// ********** Begin Class ACC_PingPongController Function WidgetToDisplay **************************
struct Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics
{
	struct CC_PingPongController_eventWidgetToDisplay_Parms
	{
		TSubclassOf<UCC_PingPongWidget> Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_PingPongController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PingPongController_eventWidgetToDisplay_Parms, Widget), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_PingPongWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingPongController, nullptr, "WidgetToDisplay", Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::CC_PingPongController_eventWidgetToDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::CC_PingPongController_eventWidgetToDisplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingPongController::execWidgetToDisplay)
{
	P_GET_OBJECT(UClass,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WidgetToDisplay(Z_Param_Widget);
	P_NATIVE_END;
}
// ********** End Class ACC_PingPongController Function WidgetToDisplay ****************************

// ********** Begin Class ACC_PingPongController ***************************************************
void ACC_PingPongController::StaticRegisterNativesACC_PingPongController()
{
	UClass* Class = ACC_PingPongController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WidgetToDisplay", &ACC_PingPongController::execWidgetToDisplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACC_PingPongController;
UClass* ACC_PingPongController::GetPrivateStaticClass()
{
	using TClass = ACC_PingPongController;
	if (!Z_Registration_Info_UClass_ACC_PingPongController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_PingPongController"),
			Z_Registration_Info_UClass_ACC_PingPongController.InnerSingleton,
			StaticRegisterNativesACC_PingPongController,
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
	return Z_Registration_Info_UClass_ACC_PingPongController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACC_PingPongController_NoRegister()
{
	return ACC_PingPongController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACC_PingPongController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CC_PingPongController.h" },
		{ "ModuleRelativePath", "Public/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_PingPongGame_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_PingPongController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WB_PingPongGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay, "WidgetToDisplay" }, // 3547729752
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PingPongController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_CurrentInstance = { "CurrentInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, CurrentInstance), Z_Construct_UClass_UCC_PingPongWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInstance_MetaData), NewProp_CurrentInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_WB_PingPongGame = { "WB_PingPongGame", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, WB_PingPongGame), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_PingPongWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_PingPongGame_MetaData), NewProp_WB_PingPongGame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_PingPongController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_CurrentInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_WB_PingPongGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACC_PingPongController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACC_PingPongController_Statics::ClassParams = {
	&ACC_PingPongController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACC_PingPongController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACC_PingPongController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACC_PingPongController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACC_PingPongController()
{
	if (!Z_Registration_Info_UClass_ACC_PingPongController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACC_PingPongController.OuterSingleton, Z_Construct_UClass_ACC_PingPongController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACC_PingPongController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACC_PingPongController);
ACC_PingPongController::~ACC_PingPongController() {}
// ********** End Class ACC_PingPongController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongController_h__Script_Arcade_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayer_StaticEnum, TEXT("EPlayer"), &Z_Registration_Info_UEnum_EPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 609858780U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PingPongController, ACC_PingPongController::StaticClass, TEXT("ACC_PingPongController"), &Z_Registration_Info_UClass_ACC_PingPongController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PingPongController), 1597251348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongController_h__Script_Arcade_2507179082(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongController_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongController_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongController_h__Script_Arcade_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_PingPongController_h__Script_Arcade_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
