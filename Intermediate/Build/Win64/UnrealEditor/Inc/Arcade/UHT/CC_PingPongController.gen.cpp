// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/CC_PingPongController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_PingPongController() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongController();
ARCADE_API UClass* Z_Construct_UClass_ACC_PingPongController_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_UCC_PingPongWidget_NoRegister();
ARCADE_API UEnum* Z_Construct_UEnum_Arcade_EPlayer();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
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
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
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

// ********** Begin Class ACC_PingPongController Function ChangePlay *******************************
struct Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics
{
	struct CC_PingPongController_eventChangePlay_Parms
	{
		bool Playing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Playing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Playing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::NewProp_Playing_SetBit(void* Obj)
{
	((CC_PingPongController_eventChangePlay_Parms*)Obj)->Playing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::NewProp_Playing = { "Playing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CC_PingPongController_eventChangePlay_Parms), &Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::NewProp_Playing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::NewProp_Playing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingPongController, nullptr, "ChangePlay", Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::CC_PingPongController_eventChangePlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::CC_PingPongController_eventChangePlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PingPongController_ChangePlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingPongController_ChangePlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingPongController::execChangePlay)
{
	P_GET_UBOOL(Z_Param_Playing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangePlay(Z_Param_Playing);
	P_NATIVE_END;
}
// ********** End Class ACC_PingPongController Function ChangePlay *********************************

// ********** Begin Class ACC_PingPongController Function ClearMusic *******************************
struct Z_Construct_UFunction_ACC_PingPongController_ClearMusic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingPongController_ClearMusic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingPongController, nullptr, "ClearMusic", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_ClearMusic_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingPongController_ClearMusic_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PingPongController_ClearMusic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingPongController_ClearMusic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingPongController::execClearMusic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMusic();
	P_NATIVE_END;
}
// ********** End Class ACC_PingPongController Function ClearMusic *********************************

// ********** Begin Class ACC_PingPongController Function GameStarting *****************************
struct Z_Construct_UFunction_ACC_PingPongController_GameStarting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingPongController_GameStarting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingPongController, nullptr, "GameStarting", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_GameStarting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingPongController_GameStarting_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACC_PingPongController_GameStarting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingPongController_GameStarting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingPongController::execGameStarting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameStarting();
	P_NATIVE_END;
}
// ********** End Class ACC_PingPongController Function GameStarting *******************************

// ********** Begin Class ACC_PingPongController Function MusicToPlay ******************************
struct Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics
{
	struct CC_PingPongController_eventMusicToPlay_Parms
	{
		USoundBase* LocalMusic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalMusic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::NewProp_LocalMusic = { "LocalMusic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PingPongController_eventMusicToPlay_Parms, LocalMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::NewProp_LocalMusic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingPongController, nullptr, "MusicToPlay", Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::CC_PingPongController_eventMusicToPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::CC_PingPongController_eventMusicToPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PingPongController_MusicToPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingPongController_MusicToPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingPongController::execMusicToPlay)
{
	P_GET_OBJECT(USoundBase,Z_Param_LocalMusic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MusicToPlay(Z_Param_LocalMusic);
	P_NATIVE_END;
}
// ********** End Class ACC_PingPongController Function MusicToPlay ********************************

// ********** Begin Class ACC_PingPongController Function SoundToPlay ******************************
struct Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics
{
	struct CC_PingPongController_eventSoundToPlay_Parms
	{
		USoundBase* Sound;
		bool LocalSound;
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static void NewProp_LocalSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LocalSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PingPongController_eventSoundToPlay_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::NewProp_LocalSound_SetBit(void* Obj)
{
	((CC_PingPongController_eventSoundToPlay_Parms*)Obj)->LocalSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::NewProp_LocalSound = { "LocalSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CC_PingPongController_eventSoundToPlay_Parms), &Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::NewProp_LocalSound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_PingPongController_eventSoundToPlay_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::NewProp_LocalSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACC_PingPongController, nullptr, "SoundToPlay", Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::CC_PingPongController_eventSoundToPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::CC_PingPongController_eventSoundToPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACC_PingPongController_SoundToPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACC_PingPongController_SoundToPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACC_PingPongController::execSoundToPlay)
{
	P_GET_OBJECT(USoundBase,Z_Param_Sound);
	P_GET_UBOOL(Z_Param_LocalSound);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SoundToPlay(Z_Param_Sound,Z_Param_LocalSound,Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class ACC_PingPongController Function SoundToPlay ********************************

// ********** Begin Class ACC_PingPongController Function WidgetToDisplay **************************
struct Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay_Statics
{
	struct CC_PingPongController_eventWidgetToDisplay_Parms
	{
		TSubclassOf<UCC_PingPongWidget> Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
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
		{ "ChangePlay", &ACC_PingPongController::execChangePlay },
		{ "ClearMusic", &ACC_PingPongController::execClearMusic },
		{ "GameStarting", &ACC_PingPongController::execGameStarting },
		{ "MusicToPlay", &ACC_PingPongController::execMusicToPlay },
		{ "SoundToPlay", &ACC_PingPongController::execSoundToPlay },
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
		{ "IncludePath", "Pong/CC_PingPongController.h" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_PingPongGame_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_Pause_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_Resume_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_Controls_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Music_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMusicInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/Pong/CC_PingPongController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WB_PingPongGame;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WB_Pause;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WB_Resume;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WB_Controls;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BallActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Music;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMusicInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACC_PingPongController_ChangePlay, "ChangePlay" }, // 2794968426
		{ &Z_Construct_UFunction_ACC_PingPongController_ClearMusic, "ClearMusic" }, // 3703573424
		{ &Z_Construct_UFunction_ACC_PingPongController_GameStarting, "GameStarting" }, // 1461575094
		{ &Z_Construct_UFunction_ACC_PingPongController_MusicToPlay, "MusicToPlay" }, // 728177037
		{ &Z_Construct_UFunction_ACC_PingPongController_SoundToPlay, "SoundToPlay" }, // 378204644
		{ &Z_Construct_UFunction_ACC_PingPongController_WidgetToDisplay, "WidgetToDisplay" }, // 2399285868
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACC_PingPongController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_CurrentInstance = { "CurrentInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, CurrentInstance), Z_Construct_UClass_UCC_PingPongWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInstance_MetaData), NewProp_CurrentInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_WB_PingPongGame = { "WB_PingPongGame", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, WB_PingPongGame), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_PingPongWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_PingPongGame_MetaData), NewProp_WB_PingPongGame_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_WB_Pause = { "WB_Pause", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, WB_Pause), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_PingPongWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_Pause_MetaData), NewProp_WB_Pause_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_WB_Resume = { "WB_Resume", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, WB_Resume), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_PingPongWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_Resume_MetaData), NewProp_WB_Resume_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_WB_Controls = { "WB_Controls", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, WB_Controls), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_PingPongWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_Controls_MetaData), NewProp_WB_Controls_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_BallActor = { "BallActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, BallActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallActor_MetaData), NewProp_BallActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, Spawner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawner_MetaData), NewProp_Spawner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_Music = { "Music", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, Music), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Music_MetaData), NewProp_Music_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_CurrentMusicInstance = { "CurrentMusicInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, CurrentMusicInstance), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMusicInstance_MetaData), NewProp_CurrentMusicInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACC_PingPongController, MusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolume_MetaData), NewProp_MusicVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACC_PingPongController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_CurrentInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_WB_PingPongGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_WB_Pause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_WB_Resume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_WB_Controls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_BallActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_Spawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_Music,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_CurrentMusicInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACC_PingPongController_Statics::NewProp_MusicVolume,
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
struct Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongController_h__Script_Arcade_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayer_StaticEnum, TEXT("EPlayer"), &Z_Registration_Info_UEnum_EPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 797093708U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACC_PingPongController, ACC_PingPongController::StaticClass, TEXT("ACC_PingPongController"), &Z_Registration_Info_UClass_ACC_PingPongController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACC_PingPongController), 2777399881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongController_h__Script_Arcade_1055059707(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongController_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongController_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongController_h__Script_Arcade_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jamie_Documents_Unreal_Projects_Arcade_Source_Arcade_Public_Pong_CC_PingPongController_h__Script_Arcade_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
