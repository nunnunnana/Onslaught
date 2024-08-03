// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/SocialSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARTY_API UClass* Z_Construct_UClass_USocialSettings();
PARTY_API UClass* Z_Construct_UClass_USocialSettings_NoRegister();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FSocialPlatformDescription();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin ScriptStruct FSocialPlatformDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SocialPlatformDescription;
class UScriptStruct* FSocialPlatformDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SocialPlatformDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SocialPlatformDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialPlatformDescription, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("SocialPlatformDescription"));
	}
	return Z_Registration_Info_UScriptStruct_SocialPlatformDescription.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FSocialPlatformDescription>()
{
	return FSocialPlatformDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The name of this platform\n\x09 * @see IOnlineSubsystem::GetLocalPlatformName\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of this platform\n@see IOnlineSubsystem::GetLocalPlatformName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of this platform.  For example DESKTOP or MOBILE */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of this platform.  For example DESKTOP or MOBILE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineSubsystem_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The online subsystem this platform uses */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The online subsystem this platform uses" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The session type this platform uses */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The session type this platform uses" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The external association type for this platform */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The external association type for this platform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossplayPool_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The crossplay pool this platform belongs to */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The crossplay pool this platform belongs to" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnlineSubsystem;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalAccountType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CrossplayPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialPlatformDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocialPlatformDescription, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocialPlatformDescription, PlatformType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformType_MetaData), NewProp_PlatformType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_OnlineSubsystem = { "OnlineSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocialPlatformDescription, OnlineSubsystem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineSubsystem_MetaData), NewProp_OnlineSubsystem_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocialPlatformDescription, SessionType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionType_MetaData), NewProp_SessionType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_ExternalAccountType = { "ExternalAccountType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocialPlatformDescription, ExternalAccountType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalAccountType_MetaData), NewProp_ExternalAccountType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_CrossplayPool = { "CrossplayPool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocialPlatformDescription, CrossplayPool), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossplayPool_MetaData), NewProp_CrossplayPool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_OnlineSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_SessionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_ExternalAccountType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_CrossplayPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	&NewStructOps,
	"SocialPlatformDescription",
	Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::PropPointers),
	sizeof(FSocialPlatformDescription),
	alignof(FSocialPlatformDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSocialPlatformDescription()
{
	if (!Z_Registration_Info_UScriptStruct_SocialPlatformDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SocialPlatformDescription.InnerSingleton, Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SocialPlatformDescription.InnerSingleton;
}
// End ScriptStruct FSocialPlatformDescription

// Begin Class USocialSettings
void USocialSettings::StaticRegisterNativesUSocialSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialSettings);
UClass* Z_Construct_UClass_USocialSettings_NoRegister()
{
	return USocialSettings::StaticClass();
}
struct Z_Construct_UClass_USocialSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Config-driven settings object for the social framework.\n * Only the CDO is ever expected to be used, no instance is ever expected to be created.\n */" },
#endif
		{ "IncludePath", "SocialSettings.h" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config-driven settings object for the social framework.\nOnly the CDO is ever expected to be used, no instance is ever expected to be created." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OssNamesWithEnvironmentIdPrefix_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The specific OSS' that have their IDs stored with an additional prefix for the environment to which they pertain.\n\x09 * This is only necessary for OSS' (ex: Switch) that do not have separate environments, just one big pot with both dev and prod users/friendships/etc.\n\x09 * For these cases, the linked account ID stored on the Primary UserInfo for this particular OSS will be prefixed with the specific environment in which the linkage exists.\n\x09 * Additionally, the prefix must be prepended when mapping the external ID to a primary ID.\n\x09 * Overall, it's a major hassle that can hopefully be done away with eventually, but for now is necessary to fake environmental behavior on OSS' without environments.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The specific OSS' that have their IDs stored with an additional prefix for the environment to which they pertain.\nThis is only necessary for OSS' (ex: Switch) that do not have separate environments, just one big pot with both dev and prod users/friendships/etc.\nFor these cases, the linked account ID stored on the Primary UserInfo for this particular OSS will be prefixed with the specific environment in which the linkage exists.\nAdditionally, the prefix must be prepended when mapping the external ID to a primary ID.\nOverall, it's a major hassle that can hopefully be done away with eventually, but for now is necessary to fake environmental behavior on OSS' without environments." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxPartySize_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many players are in a party by default */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many players are in a party by default" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferPlatformInvites_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, prioritize the platform's social system over the publisher's */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, prioritize the platform's social system over the publisher's" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMustSendPrimaryInvites_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, always send invites using the publisher's system even if already sent via a platform system */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, always send invites using the publisher's system even if already sent via a platform system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeavePartyOnDisconnect_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we leave a party when it enters the disconnected state? */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we leave a party when it enters the disconnected state?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How often the user list will update in seconds */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often the user list will update in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserListAutoUpdateRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinNicknameLength_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shortest possible player nickname */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shortest possible player nickname" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNicknameLength_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Longest possible player nickname */" },
#endif
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Longest possible player nickname" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocialPlatformDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SonyOSSNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OssNamesWithEnvironmentIdPrefix_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OssNamesWithEnvironmentIdPrefix;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultMaxPartySize;
	static void NewProp_bPreferPlatformInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferPlatformInvites;
	static void NewProp_bMustSendPrimaryInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustSendPrimaryInvites;
	static void NewProp_bLeavePartyOnDisconnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeavePartyOnDisconnect;
	static void NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UserListAutoUpdateRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinNicknameLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNicknameLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocialPlatformDescriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SocialPlatformDescriptions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SonyOSSNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SonyOSSNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_OssNamesWithEnvironmentIdPrefix_Inner = { "OssNamesWithEnvironmentIdPrefix", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_OssNamesWithEnvironmentIdPrefix = { "OssNamesWithEnvironmentIdPrefix", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialSettings, OssNamesWithEnvironmentIdPrefix), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OssNamesWithEnvironmentIdPrefix_MetaData), NewProp_OssNamesWithEnvironmentIdPrefix_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_DefaultMaxPartySize = { "DefaultMaxPartySize", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialSettings, DefaultMaxPartySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaxPartySize_MetaData), NewProp_DefaultMaxPartySize_MetaData) };
void Z_Construct_UClass_USocialSettings_Statics::NewProp_bPreferPlatformInvites_SetBit(void* Obj)
{
	((USocialSettings*)Obj)->bPreferPlatformInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_bPreferPlatformInvites = { "bPreferPlatformInvites", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USocialSettings), &Z_Construct_UClass_USocialSettings_Statics::NewProp_bPreferPlatformInvites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferPlatformInvites_MetaData), NewProp_bPreferPlatformInvites_MetaData) };
void Z_Construct_UClass_USocialSettings_Statics::NewProp_bMustSendPrimaryInvites_SetBit(void* Obj)
{
	((USocialSettings*)Obj)->bMustSendPrimaryInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_bMustSendPrimaryInvites = { "bMustSendPrimaryInvites", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USocialSettings), &Z_Construct_UClass_USocialSettings_Statics::NewProp_bMustSendPrimaryInvites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMustSendPrimaryInvites_MetaData), NewProp_bMustSendPrimaryInvites_MetaData) };
void Z_Construct_UClass_USocialSettings_Statics::NewProp_bLeavePartyOnDisconnect_SetBit(void* Obj)
{
	((USocialSettings*)Obj)->bLeavePartyOnDisconnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_bLeavePartyOnDisconnect = { "bLeavePartyOnDisconnect", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USocialSettings), &Z_Construct_UClass_USocialSettings_Statics::NewProp_bLeavePartyOnDisconnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeavePartyOnDisconnect_MetaData), NewProp_bLeavePartyOnDisconnect_MetaData) };
void Z_Construct_UClass_USocialSettings_Statics::NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_SetBit(void* Obj)
{
	((USocialSettings*)Obj)->bSetDesiredPrivacyOnLocalPlayerBecomesLeader = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader = { "bSetDesiredPrivacyOnLocalPlayerBecomesLeader", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USocialSettings), &Z_Construct_UClass_USocialSettings_Statics::NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_MetaData), NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_UserListAutoUpdateRate = { "UserListAutoUpdateRate", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialSettings, UserListAutoUpdateRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserListAutoUpdateRate_MetaData), NewProp_UserListAutoUpdateRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_MinNicknameLength = { "MinNicknameLength", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialSettings, MinNicknameLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinNicknameLength_MetaData), NewProp_MinNicknameLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_MaxNicknameLength = { "MaxNicknameLength", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialSettings, MaxNicknameLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNicknameLength_MetaData), NewProp_MaxNicknameLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_SocialPlatformDescriptions_Inner = { "SocialPlatformDescriptions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSocialPlatformDescription, METADATA_PARAMS(0, nullptr) }; // 2963305255
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_SocialPlatformDescriptions = { "SocialPlatformDescriptions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialSettings, SocialPlatformDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocialPlatformDescriptions_MetaData), NewProp_SocialPlatformDescriptions_MetaData) }; // 2963305255
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_SonyOSSNames_Inner = { "SonyOSSNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_SonyOSSNames = { "SonyOSSNames", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialSettings, SonyOSSNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SonyOSSNames_MetaData), NewProp_SonyOSSNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_OssNamesWithEnvironmentIdPrefix_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_OssNamesWithEnvironmentIdPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_DefaultMaxPartySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_bPreferPlatformInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_bMustSendPrimaryInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_bLeavePartyOnDisconnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_UserListAutoUpdateRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_MinNicknameLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_MaxNicknameLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_SocialPlatformDescriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_SocialPlatformDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_SonyOSSNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_SonyOSSNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USocialSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialSettings_Statics::ClassParams = {
	&USocialSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USocialSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialSettings()
{
	if (!Z_Registration_Info_UClass_USocialSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialSettings.OuterSingleton, Z_Construct_UClass_USocialSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialSettings.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialSettings>()
{
	return USocialSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialSettings);
USocialSettings::~USocialSettings() {}
// End Class USocialSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSocialPlatformDescription::StaticStruct, Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewStructOps, TEXT("SocialPlatformDescription"), &Z_Registration_Info_UScriptStruct_SocialPlatformDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocialPlatformDescription), 2963305255U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialSettings, USocialSettings::StaticClass, TEXT("USocialSettings"), &Z_Registration_Info_UClass_USocialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialSettings), 3044179502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_899728636(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
