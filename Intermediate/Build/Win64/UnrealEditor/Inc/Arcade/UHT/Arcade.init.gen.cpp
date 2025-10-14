// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcade_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Arcade;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Arcade()
	{
		if (!Z_Registration_Info_UPackage__Script_Arcade.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Arcade",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8D57F8B6,
				0x737E1F23,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Arcade.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Arcade.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Arcade(Z_Construct_UPackage__Script_Arcade, TEXT("/Script/Arcade"), Z_Registration_Info_UPackage__Script_Arcade, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8D57F8B6, 0x737E1F23));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
