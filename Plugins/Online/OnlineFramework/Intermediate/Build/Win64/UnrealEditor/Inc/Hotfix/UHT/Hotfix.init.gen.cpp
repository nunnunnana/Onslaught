// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHotfix_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Hotfix;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Hotfix()
	{
		if (!Z_Registration_Info_UPackage__Script_Hotfix.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Hotfix",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1F060B62,
				0x26BA6238,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Hotfix.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Hotfix.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Hotfix(Z_Construct_UPackage__Script_Hotfix, TEXT("/Script/Hotfix"), Z_Registration_Info_UPackage__Script_Hotfix, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1F060B62, 0x26BA6238));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
