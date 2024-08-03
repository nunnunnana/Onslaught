// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/Party/PartyMember.h"
#include "Party/Public/Party/SocialParty.h"
#include "Party/Public/SocialTypes.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyMember() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
PARTY_API UClass* Z_Construct_UClass_UPartyMember();
PARTY_API UClass* Z_Construct_UClass_UPartyMember_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialUser_NoRegister();
PARTY_API UEnum* Z_Construct_UEnum_Party_ECrossplayPreference();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FOnlinePartyRepDataBase();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberPlatformData();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberRepData();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FUserPlatform();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin ScriptStruct FPartyMemberPlatformData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyMemberPlatformData;
class UScriptStruct* FPartyMemberPlatformData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMemberPlatformData, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyMemberPlatformData"));
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyMemberPlatformData>()
{
	return FPartyMemberPlatformData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Platform data fields for party replication */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform data fields for party replication" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Native platform on which this party member is playing. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Native platform on which this party member is playing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Net ID for this party member on their native platform. Blank if this member has no Platform SocialSubsystem. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Net ID for this party member on their native platform. Blank if this member has no Platform SocialSubsystem." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The platform session this member is in. Can be blank for a bit while creating/joining.\n\x09 * Only relevant when this member is on a platform that requires a session backing the party.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The platform session this member is in. Can be blank for a bit while creating/joining.\nOnly relevant when this member is on a platform that requires a session backing the party." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Platform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMemberPlatformData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberPlatformData, Platform), Z_Construct_UScriptStruct_FUserPlatform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platform_MetaData), NewProp_Platform_MetaData) }; // 1295274137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberPlatformData, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueId_MetaData), NewProp_UniqueId_MetaData) }; // 3410776867
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberPlatformData, SessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_Platform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_UniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewProp_SessionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	&NewStructOps,
	"PartyMemberPlatformData",
	Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::PropPointers),
	sizeof(FPartyMemberPlatformData),
	alignof(FPartyMemberPlatformData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberPlatformData()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.InnerSingleton, Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberPlatformData.InnerSingleton;
}
// End ScriptStruct FPartyMemberPlatformData

// Begin ScriptStruct FPartyMemberJoinInProgressRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest;
class UScriptStruct* FPartyMemberJoinInProgressRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyMemberJoinInProgressRequest"));
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyMemberJoinInProgressRequest>()
{
	return FPartyMemberJoinInProgressRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Join in progress request. Represents a request from a local party member to a remote party member to acquire a reservation for the session the remote party member is in. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Join in progress request. Represents a request from a local party member to a remote party member to acquire a reservation for the session the remote party member is in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remote member we want to join. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remote member we want to join." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time the request was made. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time the request was made." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMemberJoinInProgressRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberJoinInProgressRequest, Target), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 3410776867
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberJoinInProgressRequest, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	&NewStructOps,
	"PartyMemberJoinInProgressRequest",
	Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::PropPointers),
	sizeof(FPartyMemberJoinInProgressRequest),
	alignof(FPartyMemberJoinInProgressRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.InnerSingleton, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest.InnerSingleton;
}
// End ScriptStruct FPartyMemberJoinInProgressRequest

// Begin ScriptStruct FPartyMemberJoinInProgressResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse;
class UScriptStruct* FPartyMemberJoinInProgressResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyMemberJoinInProgressResponse"));
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyMemberJoinInProgressResponse>()
{
	return FPartyMemberJoinInProgressResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Join in progress response. Represents a response from a local party member to a remote party member that requested to join in progress. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Join in progress response. Represents a response from a local party member to a remote party member that requested to join in progress." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requester_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remote member that this response is for. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remote member that this response is for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time the request was made. Matches FPartyMemberJoinInProgressRequest::Time */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time the request was made. Matches FPartyMemberJoinInProgressRequest::Time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time the response was made. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time the response was made." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DenialReason_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Result of session reservation attempt.\n\x09 * @see EPartyJoinDenialReason\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of session reservation attempt.\n@see EPartyJoinDenialReason" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Requester;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RequestTime;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ResponseTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DenialReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMemberJoinInProgressResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_Requester = { "Requester", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberJoinInProgressResponse, Requester), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requester_MetaData), NewProp_Requester_MetaData) }; // 3410776867
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_RequestTime = { "RequestTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberJoinInProgressResponse, RequestTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestTime_MetaData), NewProp_RequestTime_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_ResponseTime = { "ResponseTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberJoinInProgressResponse, ResponseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseTime_MetaData), NewProp_ResponseTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_DenialReason = { "DenialReason", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberJoinInProgressResponse, DenialReason), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DenialReason_MetaData), NewProp_DenialReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_Requester,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_RequestTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_ResponseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewProp_DenialReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	&NewStructOps,
	"PartyMemberJoinInProgressResponse",
	Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::PropPointers),
	sizeof(FPartyMemberJoinInProgressResponse),
	alignof(FPartyMemberJoinInProgressResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.InnerSingleton, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse.InnerSingleton;
}
// End ScriptStruct FPartyMemberJoinInProgressResponse

// Begin ScriptStruct FPartyMemberJoinInProgressData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData;
class UScriptStruct* FPartyMemberJoinInProgressData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyMemberJoinInProgressData"));
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyMemberJoinInProgressData>()
{
	return FPartyMemberJoinInProgressData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Join in progress data. Holds the current request and any responses. Requests and responses are expected to be cleared in a short amount of time. Combined into one field to reduce field count. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Join in progress data. Holds the current request and any responses. Requests and responses are expected to be cleared in a short amount of time. Combined into one field to reduce field count." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current request for the local member. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current request for the local member." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Responses_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of responses for other members who requested a reservation. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of responses for other members who requested a reservation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Responses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Responses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMemberJoinInProgressData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberJoinInProgressData, Request), Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1737468871
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Responses_Inner = { "Responses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse, METADATA_PARAMS(0, nullptr) }; // 1482922097
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Responses = { "Responses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberJoinInProgressData, Responses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Responses_MetaData), NewProp_Responses_MetaData) }; // 1482922097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Responses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewProp_Responses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	&NewStructOps,
	"PartyMemberJoinInProgressData",
	Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::PropPointers),
	sizeof(FPartyMemberJoinInProgressData),
	alignof(FPartyMemberJoinInProgressData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.InnerSingleton, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData.InnerSingleton;
}
// End ScriptStruct FPartyMemberJoinInProgressData

// Begin ScriptStruct FPartyMemberRepData
static_assert(std::is_polymorphic<FPartyMemberRepData>() == std::is_polymorphic<FOnlinePartyRepDataBase>(), "USTRUCT FPartyMemberRepData cannot be polymorphic unless super FOnlinePartyRepDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyMemberRepData;
class UScriptStruct* FPartyMemberRepData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberRepData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyMemberRepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyMemberRepData, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyMemberRepData"));
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberRepData.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyMemberRepData>()
{
	return FPartyMemberRepData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPartyMemberRepData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base struct used to replicate data about the state of a single party member to all members. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base struct used to replicate data about the state of a single party member to all members." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Platform data fields for party replication */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform data fields for party replication" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossplayPreference_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The crossplay preference of this user. Only relevant to crossplay party scenarios. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The crossplay preference of this user. Only relevant to crossplay party scenarios." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinMethod_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Method used to join the party */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method used to join the party" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data used for join in progress flow. */" },
#endif
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data used for join in progress flow." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CrossplayPreference_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CrossplayPreference;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JoinMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JoinInProgressData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyMemberRepData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_PlatformData = { "PlatformData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberRepData, PlatformData), Z_Construct_UScriptStruct_FPartyMemberPlatformData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformData_MetaData), NewProp_PlatformData_MetaData) }; // 1178335486
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_CrossplayPreference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_CrossplayPreference = { "CrossplayPreference", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberRepData, CrossplayPreference), Z_Construct_UEnum_Party_ECrossplayPreference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossplayPreference_MetaData), NewProp_CrossplayPreference_MetaData) }; // 1861956490
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinMethod = { "JoinMethod", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberRepData, JoinMethod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinMethod_MetaData), NewProp_JoinMethod_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinInProgressData = { "JoinInProgressData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPartyMemberRepData, JoinInProgressData), Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinInProgressData_MetaData), NewProp_JoinInProgressData_MetaData) }; // 2016641841
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_PlatformData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_CrossplayPreference_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_CrossplayPreference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewProp_JoinInProgressData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
	Z_Construct_UScriptStruct_FOnlinePartyRepDataBase,
	&NewStructOps,
	"PartyMemberRepData",
	Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::PropPointers),
	sizeof(FPartyMemberRepData),
	alignof(FPartyMemberRepData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberRepData()
{
	if (!Z_Registration_Info_UScriptStruct_PartyMemberRepData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyMemberRepData.InnerSingleton, Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PartyMemberRepData.InnerSingleton;
}
// End ScriptStruct FPartyMemberRepData

// Begin Class UPartyMember
void UPartyMember::StaticRegisterNativesUPartyMember()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartyMember);
UClass* Z_Construct_UClass_UPartyMember_NoRegister()
{
	return UPartyMember::StaticClass();
}
struct Z_Construct_UClass_UPartyMember_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Party/PartyMember.h" },
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocialUser_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/PartyMember.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SocialUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyMember>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPartyMember_Statics::NewProp_SocialUser = { "SocialUser", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartyMember, SocialUser), Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocialUser_MetaData), NewProp_SocialUser_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPartyMember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyMember_Statics::NewProp_SocialUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyMember_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPartyMember_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyMember_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartyMember_Statics::ClassParams = {
	&UPartyMember::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPartyMember_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPartyMember_Statics::PropPointers),
	0,
	0x001000A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPartyMember_Statics::Class_MetaDataParams), Z_Construct_UClass_UPartyMember_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPartyMember()
{
	if (!Z_Registration_Info_UClass_UPartyMember.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartyMember.OuterSingleton, Z_Construct_UClass_UPartyMember_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPartyMember.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<UPartyMember>()
{
	return UPartyMember::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyMember);
UPartyMember::~UPartyMember() {}
// End Class UPartyMember

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPartyMemberPlatformData::StaticStruct, Z_Construct_UScriptStruct_FPartyMemberPlatformData_Statics::NewStructOps, TEXT("PartyMemberPlatformData"), &Z_Registration_Info_UScriptStruct_PartyMemberPlatformData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyMemberPlatformData), 1178335486U) },
		{ FPartyMemberJoinInProgressRequest::StaticStruct, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressRequest_Statics::NewStructOps, TEXT("PartyMemberJoinInProgressRequest"), &Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyMemberJoinInProgressRequest), 1737468871U) },
		{ FPartyMemberJoinInProgressResponse::StaticStruct, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressResponse_Statics::NewStructOps, TEXT("PartyMemberJoinInProgressResponse"), &Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyMemberJoinInProgressResponse), 1482922097U) },
		{ FPartyMemberJoinInProgressData::StaticStruct, Z_Construct_UScriptStruct_FPartyMemberJoinInProgressData_Statics::NewStructOps, TEXT("PartyMemberJoinInProgressData"), &Z_Registration_Info_UScriptStruct_PartyMemberJoinInProgressData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyMemberJoinInProgressData), 2016641841U) },
		{ FPartyMemberRepData::StaticStruct, Z_Construct_UScriptStruct_FPartyMemberRepData_Statics::NewStructOps, TEXT("PartyMemberRepData"), &Z_Registration_Info_UScriptStruct_PartyMemberRepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyMemberRepData), 438027121U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPartyMember, UPartyMember::StaticClass, TEXT("UPartyMember"), &Z_Registration_Info_UClass_UPartyMember, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartyMember), 3390409903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_2001001318(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyMember_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
