// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobby_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Lobby;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Lobby()
	{
		if (!Z_Registration_Info_UPackage__Script_Lobby.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Lobby",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x30572963,
				0x498950A0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Lobby.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Lobby.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Lobby(Z_Construct_UPackage__Script_Lobby, TEXT("/Script/Lobby"), Z_Registration_Info_UPackage__Script_Lobby, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x30572963, 0x498950A0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
