// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lobby/Public/LobbyBeaconHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyBeaconHost() {}

// Begin Cross Module References
LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconHost();
LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconHost_NoRegister();
LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconState_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
UPackage* Z_Construct_UPackage__Script_Lobby();
// End Cross Module References

// Begin Class ALobbyBeaconHost
void ALobbyBeaconHost::StaticRegisterNativesALobbyBeaconHost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyBeaconHost);
UClass* Z_Construct_UClass_ALobbyBeaconHost_NoRegister()
{
	return ALobbyBeaconHost::StaticClass();
}
struct Z_Construct_UClass_ALobbyBeaconHost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Host object for maintaining a lobby before players actually join a server ready to receive them\n */" },
#endif
		{ "IncludePath", "LobbyBeaconHost.h" },
		{ "ModuleRelativePath", "Public/LobbyBeaconHost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Host object for maintaining a lobby before players actually join a server ready to receive them" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyStateClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class to use for the lobby beacon state */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconHost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to use for the lobby beacon state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor representing the state of the lobby (similar to AGameState) */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconHost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor representing the state of the lobby (similar to AGameState)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LobbyStateClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyBeaconHost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyStateClass = { "LobbyStateClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyBeaconHost, LobbyStateClass), Z_Construct_UClass_ALobbyBeaconState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyStateClass_MetaData), NewProp_LobbyStateClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyState = { "LobbyState", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyBeaconHost, LobbyState), Z_Construct_UClass_ALobbyBeaconState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyState_MetaData), NewProp_LobbyState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyBeaconHost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyStateClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconHost_Statics::NewProp_LobbyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconHost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALobbyBeaconHost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Lobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconHost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyBeaconHost_Statics::ClassParams = {
	&ALobbyBeaconHost::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALobbyBeaconHost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconHost_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconHost_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyBeaconHost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALobbyBeaconHost()
{
	if (!Z_Registration_Info_UClass_ALobbyBeaconHost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyBeaconHost.OuterSingleton, Z_Construct_UClass_ALobbyBeaconHost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyBeaconHost.OuterSingleton;
}
template<> LOBBY_API UClass* StaticClass<ALobbyBeaconHost>()
{
	return ALobbyBeaconHost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyBeaconHost);
ALobbyBeaconHost::~ALobbyBeaconHost() {}
// End Class ALobbyBeaconHost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyBeaconHost, ALobbyBeaconHost::StaticClass, TEXT("ALobbyBeaconHost"), &Z_Registration_Info_UClass_ALobbyBeaconHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyBeaconHost), 4153858823U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_3976946177(TEXT("/Script/Lobby"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
