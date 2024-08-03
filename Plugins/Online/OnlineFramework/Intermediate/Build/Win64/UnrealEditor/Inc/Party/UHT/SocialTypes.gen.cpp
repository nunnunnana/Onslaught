// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/SocialTypes.h"
#include "Party/Public/SocialSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialTypes() {}

// Begin Cross Module References
PARTY_API UEnum* Z_Construct_UEnum_Party_ECrossplayPreference();
PARTY_API UEnum* Z_Construct_UEnum_Party_EPlatformIconDisplayRule();
PARTY_API UEnum* Z_Construct_UEnum_Party_ESocialRelationship();
PARTY_API UEnum* Z_Construct_UEnum_Party_ESocialSubsystem();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FSocialPlatformDescription();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FUserPlatform();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin Enum ESocialSubsystem
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocialSubsystem;
static UEnum* ESocialSubsystem_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESocialSubsystem.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESocialSubsystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_ESocialSubsystem, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("ESocialSubsystem"));
	}
	return Z_Registration_Info_UEnum_ESocialSubsystem.OuterSingleton;
}
template<> PARTY_API UEnum* StaticEnum<ESocialSubsystem>()
{
	return ESocialSubsystem_StaticEnum();
}
struct Z_Construct_UEnum_Party_ESocialSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All supported subsystems  */" },
#endif
		{ "MAX.Comment", "/*Facebook,\n\x09Google,\n\x09Twitch,*/" },
		{ "MAX.Name", "ESocialSubsystem::MAX" },
		{ "MAX.ToolTip", "Facebook,\n       Google,\n       Twitch," },
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
		{ "Platform.Comment", "// OSS specific to the platform on which we're running (PSN, XBL, GameCenter, etc.)\n" },
		{ "Platform.Name", "ESocialSubsystem::Platform" },
		{ "Platform.ToolTip", "OSS specific to the platform on which we're running (PSN, XBL, GameCenter, etc.)" },
		{ "Primary.Comment", "// Publisher-level cross-platform OSS\n" },
		{ "Primary.Name", "ESocialSubsystem::Primary" },
		{ "Primary.ToolTip", "Publisher-level cross-platform OSS" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All supported subsystems" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESocialSubsystem::Primary", (int64)ESocialSubsystem::Primary },
		{ "ESocialSubsystem::Platform", (int64)ESocialSubsystem::Platform },
		{ "ESocialSubsystem::MAX", (int64)ESocialSubsystem::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_ESocialSubsystem_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	"ESocialSubsystem",
	"ESocialSubsystem",
	Z_Construct_UEnum_Party_ESocialSubsystem_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialSubsystem_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialSubsystem_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Party_ESocialSubsystem_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Party_ESocialSubsystem()
{
	if (!Z_Registration_Info_UEnum_ESocialSubsystem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocialSubsystem.InnerSingleton, Z_Construct_UEnum_Party_ESocialSubsystem_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESocialSubsystem.InnerSingleton;
}
// End Enum ESocialSubsystem

// Begin Enum ESocialRelationship
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocialRelationship;
static UEnum* ESocialRelationship_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESocialRelationship.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESocialRelationship.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_ESocialRelationship, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("ESocialRelationship"));
	}
	return Z_Registration_Info_UEnum_ESocialRelationship.OuterSingleton;
}
template<> PARTY_API UEnum* StaticEnum<ESocialRelationship>()
{
	return ESocialRelationship_StaticEnum();
}
struct Z_Construct_UEnum_Party_ESocialRelationship_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.Name", "ESocialRelationship::Any" },
		{ "BlockedPlayer.Name", "ESocialRelationship::BlockedPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-OSS relationship types */" },
#endif
		{ "Friend.Name", "ESocialRelationship::Friend" },
		{ "FriendInviteReceived.Name", "ESocialRelationship::FriendInviteReceived" },
		{ "FriendInviteSent.Name", "ESocialRelationship::FriendInviteSent" },
		{ "JoinRequest.Name", "ESocialRelationship::JoinRequest" },
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
		{ "PartyInvite.Name", "ESocialRelationship::PartyInvite" },
		{ "RecentPlayer.Name", "ESocialRelationship::RecentPlayer" },
		{ "SuggestedFriend.Name", "ESocialRelationship::SuggestedFriend" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-OSS relationship types" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESocialRelationship::Any", (int64)ESocialRelationship::Any },
		{ "ESocialRelationship::FriendInviteReceived", (int64)ESocialRelationship::FriendInviteReceived },
		{ "ESocialRelationship::FriendInviteSent", (int64)ESocialRelationship::FriendInviteSent },
		{ "ESocialRelationship::PartyInvite", (int64)ESocialRelationship::PartyInvite },
		{ "ESocialRelationship::Friend", (int64)ESocialRelationship::Friend },
		{ "ESocialRelationship::BlockedPlayer", (int64)ESocialRelationship::BlockedPlayer },
		{ "ESocialRelationship::SuggestedFriend", (int64)ESocialRelationship::SuggestedFriend },
		{ "ESocialRelationship::RecentPlayer", (int64)ESocialRelationship::RecentPlayer },
		{ "ESocialRelationship::JoinRequest", (int64)ESocialRelationship::JoinRequest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_ESocialRelationship_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	"ESocialRelationship",
	"ESocialRelationship",
	Z_Construct_UEnum_Party_ESocialRelationship_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialRelationship_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialRelationship_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Party_ESocialRelationship_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Party_ESocialRelationship()
{
	if (!Z_Registration_Info_UEnum_ESocialRelationship.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocialRelationship.InnerSingleton, Z_Construct_UEnum_Party_ESocialRelationship_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESocialRelationship.InnerSingleton;
}
// End Enum ESocialRelationship

// Begin Enum ECrossplayPreference
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrossplayPreference;
static UEnum* ECrossplayPreference_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECrossplayPreference.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECrossplayPreference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_ECrossplayPreference, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("ECrossplayPreference"));
	}
	return Z_Registration_Info_UEnum_ECrossplayPreference.OuterSingleton;
}
template<> PARTY_API UEnum* StaticEnum<ECrossplayPreference>()
{
	return ECrossplayPreference_StaticEnum();
}
struct Z_Construct_UEnum_Party_ECrossplayPreference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
		{ "NoSelection.Name", "ECrossplayPreference::NoSelection" },
		{ "OptedIn.Name", "ECrossplayPreference::OptedIn" },
		{ "OptedOut.Name", "ECrossplayPreference::OptedOut" },
		{ "OptedOutRestricted.Name", "ECrossplayPreference::OptedOutRestricted" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrossplayPreference::NoSelection", (int64)ECrossplayPreference::NoSelection },
		{ "ECrossplayPreference::OptedIn", (int64)ECrossplayPreference::OptedIn },
		{ "ECrossplayPreference::OptedOut", (int64)ECrossplayPreference::OptedOut },
		{ "ECrossplayPreference::OptedOutRestricted", (int64)ECrossplayPreference::OptedOutRestricted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_ECrossplayPreference_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	"ECrossplayPreference",
	"ECrossplayPreference",
	Z_Construct_UEnum_Party_ECrossplayPreference_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ECrossplayPreference_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ECrossplayPreference_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Party_ECrossplayPreference_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Party_ECrossplayPreference()
{
	if (!Z_Registration_Info_UEnum_ECrossplayPreference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrossplayPreference.InnerSingleton, Z_Construct_UEnum_Party_ECrossplayPreference_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECrossplayPreference.InnerSingleton;
}
// End Enum ECrossplayPreference

// Begin ScriptStruct FUserPlatform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserPlatform;
class UScriptStruct* FUserPlatform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserPlatform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserPlatform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserPlatform, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("UserPlatform"));
	}
	return Z_Registration_Info_UScriptStruct_UserPlatform.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FUserPlatform>()
{
	return FUserPlatform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Thin wrapper to infuse a raw platform string with some meaning */" },
#endif
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Thin wrapper to infuse a raw platform string with some meaning" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserPlatform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserPlatform_Statics::NewProp_PlatformDescription = { "PlatformDescription", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserPlatform, PlatformDescription), Z_Construct_UScriptStruct_FSocialPlatformDescription, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformDescription_MetaData), NewProp_PlatformDescription_MetaData) }; // 2963305255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPlatform_Statics::NewProp_PlatformDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserPlatform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	&NewStructOps,
	"UserPlatform",
	Z_Construct_UScriptStruct_FUserPlatform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPlatform_Statics::PropPointers),
	sizeof(FUserPlatform),
	alignof(FUserPlatform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPlatform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserPlatform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserPlatform()
{
	if (!Z_Registration_Info_UScriptStruct_UserPlatform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserPlatform.InnerSingleton, Z_Construct_UScriptStruct_FUserPlatform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserPlatform.InnerSingleton;
}
// End ScriptStruct FUserPlatform

// Begin Enum EPlatformIconDisplayRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlatformIconDisplayRule;
static UEnum* EPlatformIconDisplayRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlatformIconDisplayRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlatformIconDisplayRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_EPlatformIconDisplayRule, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("EPlatformIconDisplayRule"));
	}
	return Z_Registration_Info_UEnum_EPlatformIconDisplayRule.OuterSingleton;
}
template<> PARTY_API UEnum* StaticEnum<EPlatformIconDisplayRule>()
{
	return EPlatformIconDisplayRule_StaticEnum();
}
struct Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Name", "EPlatformIconDisplayRule::Always" },
		{ "AlwaysIfDifferent.Comment", "// always show the platform icon\n" },
		{ "AlwaysIfDifferent.Name", "EPlatformIconDisplayRule::AlwaysIfDifferent" },
		{ "AlwaysIfDifferent.ToolTip", "always show the platform icon" },
		{ "AlwaysIfDifferentWhenInCrossplayParty.Comment", "// always show the icon if I'm in a crossplay party\n" },
		{ "AlwaysIfDifferentWhenInCrossplayParty.Name", "EPlatformIconDisplayRule::AlwaysIfDifferentWhenInCrossplayParty" },
		{ "AlwaysIfDifferentWhenInCrossplayParty.ToolTip", "always show the icon if I'm in a crossplay party" },
		{ "AlwaysWhenInCrossplayParty.Comment", "// always show the icon if it's a different platform from my own\n" },
		{ "AlwaysWhenInCrossplayParty.Name", "EPlatformIconDisplayRule::AlwaysWhenInCrossplayParty" },
		{ "AlwaysWhenInCrossplayParty.ToolTip", "always show the icon if it's a different platform from my own" },
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
		{ "Never.Comment", "// only show the icon if it's different from my own and I'm in a crossplay party\n" },
		{ "Never.Name", "EPlatformIconDisplayRule::Never" },
		{ "Never.ToolTip", "only show the icon if it's different from my own and I'm in a crossplay party" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlatformIconDisplayRule::Always", (int64)EPlatformIconDisplayRule::Always },
		{ "EPlatformIconDisplayRule::AlwaysIfDifferent", (int64)EPlatformIconDisplayRule::AlwaysIfDifferent },
		{ "EPlatformIconDisplayRule::AlwaysWhenInCrossplayParty", (int64)EPlatformIconDisplayRule::AlwaysWhenInCrossplayParty },
		{ "EPlatformIconDisplayRule::AlwaysIfDifferentWhenInCrossplayParty", (int64)EPlatformIconDisplayRule::AlwaysIfDifferentWhenInCrossplayParty },
		{ "EPlatformIconDisplayRule::Never", (int64)EPlatformIconDisplayRule::Never },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	"EPlatformIconDisplayRule",
	"EPlatformIconDisplayRule",
	Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Party_EPlatformIconDisplayRule()
{
	if (!Z_Registration_Info_UEnum_EPlatformIconDisplayRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlatformIconDisplayRule.InnerSingleton, Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlatformIconDisplayRule.InnerSingleton;
}
// End Enum EPlatformIconDisplayRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESocialSubsystem_StaticEnum, TEXT("ESocialSubsystem"), &Z_Registration_Info_UEnum_ESocialSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2614250507U) },
		{ ESocialRelationship_StaticEnum, TEXT("ESocialRelationship"), &Z_Registration_Info_UEnum_ESocialRelationship, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3632160941U) },
		{ ECrossplayPreference_StaticEnum, TEXT("ECrossplayPreference"), &Z_Registration_Info_UEnum_ECrossplayPreference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1861956490U) },
		{ EPlatformIconDisplayRule_StaticEnum, TEXT("EPlatformIconDisplayRule"), &Z_Registration_Info_UEnum_EPlatformIconDisplayRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1744218883U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUserPlatform::StaticStruct, Z_Construct_UScriptStruct_FUserPlatform_Statics::NewStructOps, TEXT("UserPlatform"), &Z_Registration_Info_UScriptStruct_UserPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserPlatform), 1295274137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_3644741803(TEXT("/Script/Party"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
