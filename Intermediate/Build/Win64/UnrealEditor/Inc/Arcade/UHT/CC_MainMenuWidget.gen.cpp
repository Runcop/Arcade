// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CC_MainMenuWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCC_MainMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
ARCADE_API UClass* Z_Construct_UClass_ACC_MainMenuController_NoRegister();
ARCADE_API UClass* Z_Construct_UClass_UCC_MainMenuWidget();
ARCADE_API UClass* Z_Construct_UClass_UCC_MainMenuWidget_NoRegister();
ARCADE_API UEnum* Z_Construct_UEnum_Arcade_EArcadeMachine();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Arcade();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCC_MainMenuWidget Function NextSelectedGame *****************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics
{
	struct CC_MainMenuWidget_eventNextSelectedGame_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions to change selected game\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions to change selected game" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuWidget_eventNextSelectedGame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "NextSelectedGame", Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::CC_MainMenuWidget_eventNextSelectedGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::CC_MainMenuWidget_eventNextSelectedGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execNextSelectedGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->NextSelectedGame();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function NextSelectedGame *******************************

// ********** Begin Class UCC_MainMenuWidget Function OnBackClicked ********************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_OnBackClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_OnBackClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "OnBackClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_OnBackClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_OnBackClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_OnBackClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_OnBackClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execOnBackClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackClicked();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function OnBackClicked **********************************

// ********** Begin Class UCC_MainMenuWidget Function OnBackToMainMenuClicked **********************
struct Z_Construct_UFunction_UCC_MainMenuWidget_OnBackToMainMenuClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_OnBackToMainMenuClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "OnBackToMainMenuClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_OnBackToMainMenuClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_OnBackToMainMenuClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_OnBackToMainMenuClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_OnBackToMainMenuClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execOnBackToMainMenuClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackToMainMenuClicked();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function OnBackToMainMenuClicked ************************

// ********** Begin Class UCC_MainMenuWidget Function OnNextClicked ********************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_OnNextClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_OnNextClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "OnNextClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_OnNextClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_OnNextClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_OnNextClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_OnNextClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execOnNextClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNextClicked();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function OnNextClicked **********************************

// ********** Begin Class UCC_MainMenuWidget Function OnPlayClicked ********************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_OnPlayClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_OnPlayClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "OnPlayClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_OnPlayClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_OnPlayClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_OnPlayClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_OnPlayClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execOnPlayClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayClicked();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function OnPlayClicked **********************************

// ********** Begin Class UCC_MainMenuWidget Function OnQuitClicked ********************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_OnQuitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_OnQuitClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "OnQuitClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_OnQuitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_OnQuitClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_OnQuitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_OnQuitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execOnQuitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnQuitClicked();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function OnQuitClicked **********************************

// ********** Begin Class UCC_MainMenuWidget Function OnSettingsClicked ****************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_OnSettingsClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_OnSettingsClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "OnSettingsClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_OnSettingsClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_OnSettingsClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_OnSettingsClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_OnSettingsClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execOnSettingsClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSettingsClicked();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function OnSettingsClicked ******************************

// ********** Begin Class UCC_MainMenuWidget Function OnStartClicked *******************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_OnStartClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_OnStartClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "OnStartClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_OnStartClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_OnStartClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_OnStartClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_OnStartClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execOnStartClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartClicked();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function OnStartClicked *********************************

// ********** Begin Class UCC_MainMenuWidget Function PreviousSelectedGame *************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics
{
	struct CC_MainMenuWidget_eventPreviousSelectedGame_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuWidget_eventPreviousSelectedGame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "PreviousSelectedGame", Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::CC_MainMenuWidget_eventPreviousSelectedGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::CC_MainMenuWidget_eventPreviousSelectedGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execPreviousSelectedGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PreviousSelectedGame();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function PreviousSelectedGame ***************************

// ********** Begin Class UCC_MainMenuWidget Function SelectedArcadeMachine ************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics
{
	struct CC_MainMenuWidget_eventSelectedArcadeMachine_Parms
	{
		int32 Index;
		EArcadeMachine ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuWidget_eventSelectedArcadeMachine_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuWidget_eventSelectedArcadeMachine_Parms, ReturnValue), Z_Construct_UEnum_Arcade_EArcadeMachine, METADATA_PARAMS(0, nullptr) }; // 563493015
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "SelectedArcadeMachine", Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::CC_MainMenuWidget_eventSelectedArcadeMachine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::CC_MainMenuWidget_eventSelectedArcadeMachine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execSelectedArcadeMachine)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EArcadeMachine*)Z_Param__Result=P_THIS->SelectedArcadeMachine(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function SelectedArcadeMachine **************************

// ********** Begin Class UCC_MainMenuWidget Function SetMainMenuController ************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics
{
	struct CC_MainMenuWidget_eventSetMainMenuController_Parms
	{
		ACC_MainMenuController* Controller;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Controller" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CC_MainMenuWidget_eventSetMainMenuController_Parms, Controller), Z_Construct_UClass_ACC_MainMenuController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "SetMainMenuController", Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::CC_MainMenuWidget_eventSetMainMenuController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::CC_MainMenuWidget_eventSetMainMenuController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execSetMainMenuController)
{
	P_GET_OBJECT(ACC_MainMenuController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMainMenuController(Z_Param_Controller);
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function SetMainMenuController **************************

// ********** Begin Class UCC_MainMenuWidget Function SetNavigationEnabled *************************
struct Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics
{
	struct CC_MainMenuWidget_eventSetNavigationEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((CC_MainMenuWidget_eventSetNavigationEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CC_MainMenuWidget_eventSetNavigationEnabled_Parms), &Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "SetNavigationEnabled", Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::CC_MainMenuWidget_eventSetNavigationEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::CC_MainMenuWidget_eventSetNavigationEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execSetNavigationEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNavigationEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function SetNavigationEnabled ***************************

// ********** Begin Class UCC_MainMenuWidget Function UpdateSelectedGameText ***********************
struct Z_Construct_UFunction_UCC_MainMenuWidget_UpdateSelectedGameText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update the onscreen game name\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the onscreen game name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCC_MainMenuWidget_UpdateSelectedGameText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCC_MainMenuWidget, nullptr, "UpdateSelectedGameText", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCC_MainMenuWidget_UpdateSelectedGameText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCC_MainMenuWidget_UpdateSelectedGameText_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCC_MainMenuWidget_UpdateSelectedGameText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCC_MainMenuWidget_UpdateSelectedGameText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCC_MainMenuWidget::execUpdateSelectedGameText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSelectedGameText();
	P_NATIVE_END;
}
// ********** End Class UCC_MainMenuWidget Function UpdateSelectedGameText *************************

// ********** Begin Class UCC_MainMenuWidget *******************************************************
void UCC_MainMenuWidget::StaticRegisterNativesUCC_MainMenuWidget()
{
	UClass* Class = UCC_MainMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NextSelectedGame", &UCC_MainMenuWidget::execNextSelectedGame },
		{ "OnBackClicked", &UCC_MainMenuWidget::execOnBackClicked },
		{ "OnBackToMainMenuClicked", &UCC_MainMenuWidget::execOnBackToMainMenuClicked },
		{ "OnNextClicked", &UCC_MainMenuWidget::execOnNextClicked },
		{ "OnPlayClicked", &UCC_MainMenuWidget::execOnPlayClicked },
		{ "OnQuitClicked", &UCC_MainMenuWidget::execOnQuitClicked },
		{ "OnSettingsClicked", &UCC_MainMenuWidget::execOnSettingsClicked },
		{ "OnStartClicked", &UCC_MainMenuWidget::execOnStartClicked },
		{ "PreviousSelectedGame", &UCC_MainMenuWidget::execPreviousSelectedGame },
		{ "SelectedArcadeMachine", &UCC_MainMenuWidget::execSelectedArcadeMachine },
		{ "SetMainMenuController", &UCC_MainMenuWidget::execSetMainMenuController },
		{ "SetNavigationEnabled", &UCC_MainMenuWidget::execSetNavigationEnabled },
		{ "UpdateSelectedGameText", &UCC_MainMenuWidget::execUpdateSelectedGameText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCC_MainMenuWidget;
UClass* UCC_MainMenuWidget::GetPrivateStaticClass()
{
	using TClass = UCC_MainMenuWidget;
	if (!Z_Registration_Info_UClass_UCC_MainMenuWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CC_MainMenuWidget"),
			Z_Registration_Info_UClass_UCC_MainMenuWidget.InnerSingleton,
			StaticRegisterNativesUCC_MainMenuWidget,
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
	return Z_Registration_Info_UClass_UCC_MainMenuWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCC_MainMenuWidget_NoRegister()
{
	return UCC_MainMenuWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCC_MainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CC_MainMenuWidget.h" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuController_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcadeMachines_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedGame_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Currently selected game index\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently selected game index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Back_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_MainMenuWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Buttons (match names in your Widget Blueprint)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Buttons (match names in your Widget Blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Quit_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Start_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Settings_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_NextArrow_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_BackArrow_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Play_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_MainMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TXT_GameSelected_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "CC_MainMenuWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text to update on next/back\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text to update on next/back" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartButtonWidget_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional widget classes used by your buttons\n" },
#endif
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional widget classes used by your buttons" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_SelectGame_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_Settings_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CC_MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuController;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArcadeMachines_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArcadeMachines_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArcadeMachines_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ArcadeMachines;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Back;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Quit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Start;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_NextArrow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_BackArrow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Play;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TXT_GameSelected;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartButtonWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WB_SelectGame;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WB_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_NextSelectedGame, "NextSelectedGame" }, // 2250146621
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_OnBackClicked, "OnBackClicked" }, // 74646048
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_OnBackToMainMenuClicked, "OnBackToMainMenuClicked" }, // 2628173438
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_OnNextClicked, "OnNextClicked" }, // 1733443797
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_OnPlayClicked, "OnPlayClicked" }, // 3107974564
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_OnQuitClicked, "OnQuitClicked" }, // 2220857065
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_OnSettingsClicked, "OnSettingsClicked" }, // 3146675508
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_OnStartClicked, "OnStartClicked" }, // 2368149671
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_PreviousSelectedGame, "PreviousSelectedGame" }, // 2094643577
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_SelectedArcadeMachine, "SelectedArcadeMachine" }, // 2113172243
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_SetMainMenuController, "SetMainMenuController" }, // 1090807239
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_SetNavigationEnabled, "SetNavigationEnabled" }, // 3120703673
		{ &Z_Construct_UFunction_UCC_MainMenuWidget_UpdateSelectedGameText, "UpdateSelectedGameText" }, // 1343726564
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCC_MainMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_MainMenuController = { "MainMenuController", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, MainMenuController), Z_Construct_UClass_ACC_MainMenuController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuController_MetaData), NewProp_MainMenuController_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, MainMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_MainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_ArcadeMachines_ValueProp = { "ArcadeMachines", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_ArcadeMachines_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_ArcadeMachines_Key_KeyProp = { "ArcadeMachines_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Arcade_EArcadeMachine, METADATA_PARAMS(0, nullptr) }; // 563493015
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_ArcadeMachines = { "ArcadeMachines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, ArcadeMachines), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcadeMachines_MetaData), NewProp_ArcadeMachines_MetaData) }; // 563493015
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_SelectedGame = { "SelectedGame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, SelectedGame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedGame_MetaData), NewProp_SelectedGame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Back = { "BTN_Back", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, BTN_Back), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Back_MetaData), NewProp_BTN_Back_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Quit = { "BTN_Quit", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, BTN_Quit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Quit_MetaData), NewProp_BTN_Quit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Start = { "BTN_Start", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, BTN_Start), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Start_MetaData), NewProp_BTN_Start_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Settings = { "BTN_Settings", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, BTN_Settings), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Settings_MetaData), NewProp_BTN_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_NextArrow = { "BTN_NextArrow", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, BTN_NextArrow), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_NextArrow_MetaData), NewProp_BTN_NextArrow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_BackArrow = { "BTN_BackArrow", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, BTN_BackArrow), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_BackArrow_MetaData), NewProp_BTN_BackArrow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Play = { "BTN_Play", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, BTN_Play), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Play_MetaData), NewProp_BTN_Play_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_TXT_GameSelected = { "TXT_GameSelected", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, TXT_GameSelected), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TXT_GameSelected_MetaData), NewProp_TXT_GameSelected_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_StartButtonWidget = { "StartButtonWidget", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, StartButtonWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_MainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartButtonWidget_MetaData), NewProp_StartButtonWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_WB_SelectGame = { "WB_SelectGame", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, WB_SelectGame), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_MainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_SelectGame_MetaData), NewProp_WB_SelectGame_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_WB_Settings = { "WB_Settings", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCC_MainMenuWidget, WB_Settings), Z_Construct_UClass_UClass, Z_Construct_UClass_UCC_MainMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_Settings_MetaData), NewProp_WB_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCC_MainMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_MainMenuController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_MainMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_ArcadeMachines_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_ArcadeMachines_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_ArcadeMachines_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_ArcadeMachines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_SelectedGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Back,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Quit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_NextArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_BackArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_BTN_Play,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_TXT_GameSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_StartButtonWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_WB_SelectGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCC_MainMenuWidget_Statics::NewProp_WB_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_MainMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCC_MainMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_MainMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCC_MainMenuWidget_Statics::ClassParams = {
	&UCC_MainMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCC_MainMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCC_MainMenuWidget_Statics::PropPointers),
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCC_MainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCC_MainMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCC_MainMenuWidget()
{
	if (!Z_Registration_Info_UClass_UCC_MainMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCC_MainMenuWidget.OuterSingleton, Z_Construct_UClass_UCC_MainMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCC_MainMenuWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCC_MainMenuWidget);
UCC_MainMenuWidget::~UCC_MainMenuWidget() {}
// ********** End Class UCC_MainMenuWidget *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h__Script_Arcade_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCC_MainMenuWidget, UCC_MainMenuWidget::StaticClass, TEXT("UCC_MainMenuWidget"), &Z_Registration_Info_UClass_UCC_MainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCC_MainMenuWidget), 1532086609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h__Script_Arcade_1074798380(TEXT("/Script/Arcade"),
	Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h__Script_Arcade_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_Public_CC_MainMenuWidget_h__Script_Arcade_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
