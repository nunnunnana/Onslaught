// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/Party/SocialParty.h"
#include "Party/Public/Party/PartyTypes.h"
#include "Party/Public/SocialManager.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialParty() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconClient_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ASpectatorBeaconClient_NoRegister();
PARTY_API UClass* Z_Construct_UClass_UPartyMember_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialParty();
PARTY_API UClass* Z_Construct_UClass_USocialParty_NoRegister();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FOnlinePartyRepDataBase();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyPlatformSessionInfo();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyPrivacySettings();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyRepData();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin ScriptStruct FPartyRepData
static_assert(std::is_polymorphic<FPartyRepData>() == std::is_polymorphic<FOnlinePartyRepDataBase>(), "USTRUCT FPartyRepData cannot be polymorphic unless super FOnlinePartyRepDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyRepData;
class UScriptStruct* FPartyRepData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyRepData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyRepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyRepData, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyRepData"));
	}
	return Z_Registration_Info_UScriptStruct_PartyRepData.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyRepData>()
{
	return FPartyRepData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPartyRepData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base struct used to replicate data about the state of the party to all members. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base struct used to replicate data about the state of the party to all members." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivacySettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The privacy settings for the party */" },
#endif
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The privacy settings for the party" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSessions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of platform sessions for the party. Includes one entry per platform that needs a session and has a member of that session. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of platform sessions for the party. Includes one entry per platform that needs a session and has a member of that session." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrivacySettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSessions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformSessions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyRepData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PrivacySettings = { "PrivacySettings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyRepData, PrivacySettings), Z_Construct_UScriptStruct_FPartyPrivacySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivacySettings_MetaData), NewProp_PrivacySettings_MetaData) }; // 2616550649
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PlatformSessions_Inner = { "PlatformSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPartyPlatformSessionInfo, METADATA_PARAMS(0, nullptr) }; // 3799803226
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PlatformSessions = { "PlatformSessions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyRepData, PlatformSessions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformSessions_MetaData), NewProp_PlatformSessions_MetaData) }; // 3799803226
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyRepData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PrivacySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PlatformSessions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PlatformSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyRepData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyRepData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
	Z_Construct_UScriptStruct_FOnlinePartyRepDataBase,
	&NewStructOps,
	"PartyRepData",
	Z_Construct_UScriptStruct_FPartyRepData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyRepData_Statics::PropPointers),
	sizeof(FPartyRepData),
	alignof(FPartyRepData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyRepData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPartyRepData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPartyRepData()
{
	if (!Z_Registration_Info_UScriptStruct_PartyRepData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyRepData.InnerSingleton, Z_Construct_UScriptStruct_FPartyRepData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PartyRepData.InnerSingleton;
}
// End ScriptStruct FPartyRepData

// Begin Class USocialParty
void USocialParty::StaticRegisterNativesUSocialParty()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialParty);
UClass* Z_Construct_UClass_USocialParty_NoRegister()
{
	return USocialParty::StaticClass();
}
struct Z_Construct_UClass_USocialParty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Party game state that contains all information relevant to the communication within a party\n * Keeps all players in sync with the state of the party and its individual members\n */" },
#endif
		{ "IncludePath", "Party/SocialParty.h" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Party game state that contains all information relevant to the communication within a party\nKeeps all players in sync with the state of the party and its individual members" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservationBeaconClientClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reservation beacon class for getting server approval for new party members while in a game */" },
#endif
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reservation beacon class for getting server approval for new party members while in a game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorBeaconClientClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spectator beacon class for getting server approval for new spectators while in a game */" },
#endif
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spectator beacon class for getting server approval for new spectators while in a game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningLocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLeaderId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tracked explicitly so we know which player was demoted whenever the leader changes */" },
#endif
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracked explicitly so we know which player was demoted whenever the leader changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyMembersById_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticPartyRejoin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformUserInviteCooldown_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryUserInviteCooldown_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservationBeaconClient_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reservation beacon client instance while getting approval for new party members*/" },
#endif
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reservation beacon client instance while getting approval for new party members" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorBeaconClient_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spectator beacon client instance while getting approval for spectator*/" },
#endif
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spectator beacon client instance while getting approval for spectator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressTimerRate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How often the timer should check in seconds for stale data when running. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often the timer should check in seconds for stale data when running." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressRequestTimeout_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How long in seconds before join in progress requests timeout and are cleared from member data. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long in seconds before join in progress requests timeout and are cleared from member data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressResponseTimeout_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How long in seconds before join in progress responses are cleared from member data. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long in seconds before join in progress responses are cleared from member data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReservationBeaconClientClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpectatorBeaconClientClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwningLocalUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLeaderId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyMembersById_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartyMembersById_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PartyMembersById;
	static void NewProp_bEnableAutomaticPartyRejoin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticPartyRejoin;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PlatformUserInviteCooldown;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PrimaryUserInviteCooldown;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ReservationBeaconClient;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SpectatorBeaconClient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JoinInProgressTimerRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JoinInProgressRequestTimeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JoinInProgressResponseTimeout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialParty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClientClass = { "ReservationBeaconClientClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, ReservationBeaconClientClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APartyBeaconClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservationBeaconClientClass_MetaData), NewProp_ReservationBeaconClientClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClientClass = { "SpectatorBeaconClientClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, SpectatorBeaconClientClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASpectatorBeaconClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectatorBeaconClientClass_MetaData), NewProp_SpectatorBeaconClientClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_OwningLocalUserId = { "OwningLocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, OwningLocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningLocalUserId_MetaData), NewProp_OwningLocalUserId_MetaData) }; // 3410776867
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_CurrentLeaderId = { "CurrentLeaderId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, CurrentLeaderId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLeaderId_MetaData), NewProp_CurrentLeaderId_MetaData) }; // 3410776867
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById_ValueProp = { "PartyMembersById", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPartyMember_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById_Key_KeyProp = { "PartyMembersById_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(0, nullptr) }; // 3410776867
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById = { "PartyMembersById", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, PartyMembersById), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyMembersById_MetaData), NewProp_PartyMembersById_MetaData) }; // 3410776867
void Z_Construct_UClass_USocialParty_Statics::NewProp_bEnableAutomaticPartyRejoin_SetBit(void* Obj)
{
	((USocialParty*)Obj)->bEnableAutomaticPartyRejoin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_bEnableAutomaticPartyRejoin = { "bEnableAutomaticPartyRejoin", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USocialParty), &Z_Construct_UClass_USocialParty_Statics::NewProp_bEnableAutomaticPartyRejoin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutomaticPartyRejoin_MetaData), NewProp_bEnableAutomaticPartyRejoin_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_PlatformUserInviteCooldown = { "PlatformUserInviteCooldown", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, PlatformUserInviteCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformUserInviteCooldown_MetaData), NewProp_PlatformUserInviteCooldown_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_PrimaryUserInviteCooldown = { "PrimaryUserInviteCooldown", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, PrimaryUserInviteCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryUserInviteCooldown_MetaData), NewProp_PrimaryUserInviteCooldown_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClient = { "ReservationBeaconClient", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, ReservationBeaconClient), Z_Construct_UClass_APartyBeaconClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservationBeaconClient_MetaData), NewProp_ReservationBeaconClient_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClient = { "SpectatorBeaconClient", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, SpectatorBeaconClient), Z_Construct_UClass_ASpectatorBeaconClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectatorBeaconClient_MetaData), NewProp_SpectatorBeaconClient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressTimerRate = { "JoinInProgressTimerRate", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, JoinInProgressTimerRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinInProgressTimerRate_MetaData), NewProp_JoinInProgressTimerRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressRequestTimeout = { "JoinInProgressRequestTimeout", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, JoinInProgressRequestTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinInProgressRequestTimeout_MetaData), NewProp_JoinInProgressRequestTimeout_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressResponseTimeout = { "JoinInProgressResponseTimeout", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialParty, JoinInProgressResponseTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinInProgressResponseTimeout_MetaData), NewProp_JoinInProgressResponseTimeout_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialParty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClientClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClientClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_OwningLocalUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_CurrentLeaderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_bEnableAutomaticPartyRejoin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_PlatformUserInviteCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_PrimaryUserInviteCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressTimerRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressRequestTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressResponseTimeout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USocialParty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialParty_Statics::ClassParams = {
	&USocialParty::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USocialParty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::PropPointers),
	0,
	0x001000ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialParty_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialParty()
{
	if (!Z_Registration_Info_UClass_USocialParty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialParty.OuterSingleton, Z_Construct_UClass_USocialParty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialParty.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialParty>()
{
	return USocialParty::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialParty);
USocialParty::~USocialParty() {}
// End Class USocialParty

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPartyRepData::StaticStruct, Z_Construct_UScriptStruct_FPartyRepData_Statics::NewStructOps, TEXT("PartyRepData"), &Z_Registration_Info_UScriptStruct_PartyRepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyRepData), 4000714476U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialParty, USocialParty::StaticClass, TEXT("USocialParty"), &Z_Registration_Info_UClass_USocialParty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialParty), 3391765778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_3658473811(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
