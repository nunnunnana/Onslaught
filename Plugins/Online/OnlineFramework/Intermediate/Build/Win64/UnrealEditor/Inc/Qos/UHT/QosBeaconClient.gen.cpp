// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Qos/Public/QosBeaconClient.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQosBeaconClient() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
QOS_API UClass* Z_Construct_UClass_AQosBeaconClient();
QOS_API UClass* Z_Construct_UClass_AQosBeaconClient_NoRegister();
QOS_API UEnum* Z_Construct_UEnum_Qos_EQosResponseType();
UPackage* Z_Construct_UPackage__Script_Qos();
// End Cross Module References

// Begin Enum EQosResponseType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQosResponseType;
static UEnum* EQosResponseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQosResponseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQosResponseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Qos_EQosResponseType, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("EQosResponseType"));
	}
	return Z_Registration_Info_UEnum_EQosResponseType.OuterSingleton;
}
template<> QOS_API UEnum* StaticEnum<EQosResponseType>()
{
	return EQosResponseType_StaticEnum();
}
struct Z_Construct_UEnum_Qos_EQosResponseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Types of responses that can come back from the beacon\n */" },
#endif
		{ "Failure.Comment", "/** Some kind of failure */" },
		{ "Failure.Name", "EQosResponseType::Failure" },
		{ "Failure.ToolTip", "Some kind of failure" },
		{ "ModuleRelativePath", "Public/QosBeaconClient.h" },
		{ "NoResponse.Comment", "/** Failed to connect to Qos endpoint */" },
		{ "NoResponse.Name", "EQosResponseType::NoResponse" },
		{ "NoResponse.ToolTip", "Failed to connect to Qos endpoint" },
		{ "Success.Comment", "/** Response received from the Qos host  */" },
		{ "Success.Name", "EQosResponseType::Success" },
		{ "Success.ToolTip", "Response received from the Qos host" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Types of responses that can come back from the beacon" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQosResponseType::NoResponse", (int64)EQosResponseType::NoResponse },
		{ "EQosResponseType::Success", (int64)EQosResponseType::Success },
		{ "EQosResponseType::Failure", (int64)EQosResponseType::Failure },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Qos_EQosResponseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Qos,
	nullptr,
	"EQosResponseType",
	"EQosResponseType",
	Z_Construct_UEnum_Qos_EQosResponseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Qos_EQosResponseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Qos_EQosResponseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Qos_EQosResponseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Qos_EQosResponseType()
{
	if (!Z_Registration_Info_UEnum_EQosResponseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQosResponseType.InnerSingleton, Z_Construct_UEnum_Qos_EQosResponseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQosResponseType.InnerSingleton;
}
// End Enum EQosResponseType

// Begin Class AQosBeaconClient Function ClientQosResponse
struct QosBeaconClient_eventClientQosResponse_Parms
{
	EQosResponseType Response;
};
static FName NAME_AQosBeaconClient_ClientQosResponse = FName(TEXT("ClientQosResponse"));
void AQosBeaconClient::ClientQosResponse(EQosResponseType Response)
{
	QosBeaconClient_eventClientQosResponse_Parms Parms;
	Parms.Response=Response;
	ProcessEvent(FindFunctionChecked(NAME_AQosBeaconClient_ClientQosResponse),&Parms);
}
struct Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Response from the host session after making a Qos request\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/QosBeaconClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Response from the host session after making a Qos request" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Response_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::NewProp_Response_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QosBeaconClient_eventClientQosResponse_Parms, Response), Z_Construct_UEnum_Qos_EQosResponseType, METADATA_PARAMS(0, nullptr) }; // 3458809329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::NewProp_Response_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQosBeaconClient, nullptr, "ClientQosResponse", nullptr, nullptr, Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::PropPointers), sizeof(QosBeaconClient_eventClientQosResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(QosBeaconClient_eventClientQosResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQosBeaconClient::execClientQosResponse)
{
	P_GET_ENUM(EQosResponseType,Z_Param_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientQosResponse_Implementation(EQosResponseType(Z_Param_Response));
	P_NATIVE_END;
}
// End Class AQosBeaconClient Function ClientQosResponse

// Begin Class AQosBeaconClient Function ServerQosRequest
struct QosBeaconClient_eventServerQosRequest_Parms
{
	FString InSessionId;
};
static FName NAME_AQosBeaconClient_ServerQosRequest = FName(TEXT("ServerQosRequest"));
void AQosBeaconClient::ServerQosRequest(const FString& InSessionId)
{
	QosBeaconClient_eventServerQosRequest_Parms Parms;
	Parms.InSessionId=InSessionId;
	ProcessEvent(FindFunctionChecked(NAME_AQosBeaconClient_ServerQosRequest),&Parms);
}
struct Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Contact the server with a Qos request and begin timing\n\x09 *\n\x09 * @param InSessionId reference session id to make sure the session is the correct one\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/QosBeaconClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contact the server with a Qos request and begin timing\n\n@param InSessionId reference session id to make sure the session is the correct one" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSessionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest_Statics::NewProp_InSessionId = { "InSessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QosBeaconClient_eventServerQosRequest_Parms, InSessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSessionId_MetaData), NewProp_InSessionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest_Statics::NewProp_InSessionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQosBeaconClient, nullptr, "ServerQosRequest", nullptr, nullptr, Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest_Statics::PropPointers), sizeof(QosBeaconClient_eventServerQosRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(QosBeaconClient_eventServerQosRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AQosBeaconClient::execServerQosRequest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSessionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerQosRequest_Validate(Z_Param_InSessionId))
	{
		RPC_ValidateFailed(TEXT("ServerQosRequest_Validate"));
		return;
	}
	P_THIS->ServerQosRequest_Implementation(Z_Param_InSessionId);
	P_NATIVE_END;
}
// End Class AQosBeaconClient Function ServerQosRequest

// Begin Class AQosBeaconClient
void AQosBeaconClient::StaticRegisterNativesAQosBeaconClient()
{
	UClass* Class = AQosBeaconClient::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientQosResponse", &AQosBeaconClient::execClientQosResponse },
		{ "ServerQosRequest", &AQosBeaconClient::execServerQosRequest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQosBeaconClient);
UClass* Z_Construct_UClass_AQosBeaconClient_NoRegister()
{
	return AQosBeaconClient::StaticClass();
}
struct Z_Construct_UClass_AQosBeaconClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A beacon client used for quality timings to a specified session\n */" },
#endif
		{ "IncludePath", "QosBeaconClient.h" },
		{ "ModuleRelativePath", "Public/QosBeaconClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A beacon client used for quality timings to a specified session" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AQosBeaconClient_ClientQosResponse, "ClientQosResponse" }, // 58077660
		{ &Z_Construct_UFunction_AQosBeaconClient_ServerQosRequest, "ServerQosRequest" }, // 1959443345
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQosBeaconClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AQosBeaconClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
	(UObject* (*)())Z_Construct_UPackage__Script_Qos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQosBeaconClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQosBeaconClient_Statics::ClassParams = {
	&AQosBeaconClient::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQosBeaconClient_Statics::Class_MetaDataParams), Z_Construct_UClass_AQosBeaconClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQosBeaconClient()
{
	if (!Z_Registration_Info_UClass_AQosBeaconClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQosBeaconClient.OuterSingleton, Z_Construct_UClass_AQosBeaconClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQosBeaconClient.OuterSingleton;
}
template<> QOS_API UClass* StaticClass<AQosBeaconClient>()
{
	return AQosBeaconClient::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQosBeaconClient);
AQosBeaconClient::~AQosBeaconClient() {}
// End Class AQosBeaconClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQosResponseType_StaticEnum, TEXT("EQosResponseType"), &Z_Registration_Info_UEnum_EQosResponseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3458809329U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQosBeaconClient, AQosBeaconClient::StaticClass, TEXT("AQosBeaconClient"), &Z_Registration_Info_UClass_AQosBeaconClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQosBeaconClient), 4012056892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_958185355(TEXT("/Script/Qos"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
