// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Qos/Public/QosRegionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQosRegionManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
QOS_API UClass* Z_Construct_UClass_UQosEvaluator_NoRegister();
QOS_API UClass* Z_Construct_UClass_UQosRegionManager();
QOS_API UClass* Z_Construct_UClass_UQosRegionManager_NoRegister();
QOS_API UEnum* Z_Construct_UEnum_Qos_EQosCompletionResult();
QOS_API UEnum* Z_Construct_UEnum_Qos_EQosDatacenterResult();
QOS_API UScriptStruct* Z_Construct_UScriptStruct_FDatacenterQosInstance();
QOS_API UScriptStruct* Z_Construct_UScriptStruct_FQosDatacenterInfo();
QOS_API UScriptStruct* Z_Construct_UScriptStruct_FQosPingServerInfo();
QOS_API UScriptStruct* Z_Construct_UScriptStruct_FQosRegionInfo();
QOS_API UScriptStruct* Z_Construct_UScriptStruct_FQosSubspaceComparisonParams();
QOS_API UScriptStruct* Z_Construct_UScriptStruct_FRegionQosInstance();
UPackage* Z_Construct_UPackage__Script_Qos();
// End Cross Module References

// Begin Enum EQosDatacenterResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQosDatacenterResult;
static UEnum* EQosDatacenterResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQosDatacenterResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQosDatacenterResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Qos_EQosDatacenterResult, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("EQosDatacenterResult"));
	}
	return Z_Registration_Info_UEnum_EQosDatacenterResult.OuterSingleton;
}
template<> QOS_API UEnum* StaticEnum<EQosDatacenterResult>()
{
	return EQosDatacenterResult_StaticEnum();
}
struct Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enum for single region QoS return codes */" },
#endif
		{ "Incomplete.Comment", "/** QoS operation with one or more ping failures */" },
		{ "Incomplete.Name", "EQosDatacenterResult::Incomplete" },
		{ "Incomplete.ToolTip", "QoS operation with one or more ping failures" },
		{ "Invalid.Comment", "/** Incomplete, invalid result */" },
		{ "Invalid.Name", "EQosDatacenterResult::Invalid" },
		{ "Invalid.ToolTip", "Incomplete, invalid result" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "Success.Comment", "/** QoS operation was successful */" },
		{ "Success.Name", "EQosDatacenterResult::Success" },
		{ "Success.ToolTip", "QoS operation was successful" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum for single region QoS return codes" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQosDatacenterResult::Invalid", (int64)EQosDatacenterResult::Invalid },
		{ "EQosDatacenterResult::Success", (int64)EQosDatacenterResult::Success },
		{ "EQosDatacenterResult::Incomplete", (int64)EQosDatacenterResult::Incomplete },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Qos,
	nullptr,
	"EQosDatacenterResult",
	"EQosDatacenterResult",
	Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Qos_EQosDatacenterResult()
{
	if (!Z_Registration_Info_UEnum_EQosDatacenterResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQosDatacenterResult.InnerSingleton, Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQosDatacenterResult.InnerSingleton;
}
// End Enum EQosDatacenterResult

// Begin Enum EQosCompletionResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQosCompletionResult;
static UEnum* EQosCompletionResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQosCompletionResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQosCompletionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Qos_EQosCompletionResult, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("EQosCompletionResult"));
	}
	return Z_Registration_Info_UEnum_EQosCompletionResult.OuterSingleton;
}
template<> QOS_API UEnum* StaticEnum<EQosCompletionResult>()
{
	return EQosCompletionResult_StaticEnum();
}
struct Z_Construct_UEnum_Qos_EQosCompletionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Canceled.Comment", "/** QoS operation was canceled */" },
		{ "Canceled.Name", "EQosCompletionResult::Canceled" },
		{ "Canceled.ToolTip", "QoS operation was canceled" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enum for possible QoS return codes */" },
#endif
		{ "Failure.Comment", "/** QoS operation ended in failure */" },
		{ "Failure.Name", "EQosCompletionResult::Failure" },
		{ "Failure.ToolTip", "QoS operation ended in failure" },
		{ "Invalid.Comment", "/** Incomplete, invalid result */" },
		{ "Invalid.Name", "EQosCompletionResult::Invalid" },
		{ "Invalid.ToolTip", "Incomplete, invalid result" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "Success.Comment", "/** QoS operation was successful */" },
		{ "Success.Name", "EQosCompletionResult::Success" },
		{ "Success.ToolTip", "QoS operation was successful" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum for possible QoS return codes" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQosCompletionResult::Invalid", (int64)EQosCompletionResult::Invalid },
		{ "EQosCompletionResult::Success", (int64)EQosCompletionResult::Success },
		{ "EQosCompletionResult::Failure", (int64)EQosCompletionResult::Failure },
		{ "EQosCompletionResult::Canceled", (int64)EQosCompletionResult::Canceled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Qos,
	nullptr,
	"EQosCompletionResult",
	"EQosCompletionResult",
	Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Qos_EQosCompletionResult()
{
	if (!Z_Registration_Info_UEnum_EQosCompletionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQosCompletionResult.InnerSingleton, Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQosCompletionResult.InnerSingleton;
}
// End Enum EQosCompletionResult

// Begin ScriptStruct FQosSubspaceComparisonParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams;
class UScriptStruct* FQosSubspaceComparisonParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("QosSubspaceComparisonParams"));
	}
	return Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FQosSubspaceComparisonParams>()
{
	return FQosSubspaceComparisonParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Parameters to control the rules-based comparison of subspace vs non-subspace datacenter QoS results.\n * \n * @see FDatacenterQosInstance::IsNonSubspaceRecommended(const FDatacenterQosInstance&, const FDatacenterQosInstance&, const FQosSubspaceComparisonParams&)\n */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameters to control the rules-based comparison of subspace vs non-subspace datacenter QoS results.\n\n@see FDatacenterQosInstance::IsNonSubspaceRecommended(const FDatacenterQosInstance&, const FDatacenterQosInstance&, const FQosSubspaceComparisonParams&)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNonSubspacePingMs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Maximum allowed ping of the non-subspace.\n\x09 * If greater than this value, it is too slow, so fails to qualify.\n\x09 * Set to zero or less to disable checks against this field.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowed ping of the non-subspace.\nIf greater than this value, it is too slow, so fails to qualify.\nSet to zero or less to disable checks against this field." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSubspacePingMs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Minimum allowed ping of the subspace.\n\x09 * If below this value, it should not be overridden by the non-subspace.\n\x09 * Set to zero or less to disable checks against this field.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum allowed ping of the subspace.\nIf below this value, it should not be overridden by the non-subspace.\nSet to zero or less to disable checks against this field." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantMaxToleranceMs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Maximum allowed difference between the subspace and non-subspace's ping values in milliseconds.\n\x09 * If greater than this value, the non-subspace is too slow, so fails to qualify.\n\x09 * Set to zero or less to disable checks against this field.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowed difference between the subspace and non-subspace's ping values in milliseconds.\nIf greater than this value, the non-subspace is too slow, so fails to qualify.\nSet to zero or less to disable checks against this field." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaledMaxTolerancePct_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Maximum allowed difference between the subspace and non-subspace's ping values,\n\x09 * which scales as a proportion of the non-subspace's ping, so will differ between\n\x09 * comparisons when sorting a single list of datacenters.\n\x09 * If greater than the scaled difference, the non-subspace is too slow, so fails to qualify. \n\x09 * Set to zero or less to disable checks against this field.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowed difference between the subspace and non-subspace's ping values,\nwhich scales as a proportion of the non-subspace's ping, so will differ between\ncomparisons when sorting a single list of datacenters.\nIf greater than the scaled difference, the non-subspace is too slow, so fails to qualify.\nSet to zero or less to disable checks against this field." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNonSubspacePingMs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinSubspacePingMs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConstantMaxToleranceMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaledMaxTolerancePct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQosSubspaceComparisonParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MaxNonSubspacePingMs = { "MaxNonSubspacePingMs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosSubspaceComparisonParams, MaxNonSubspacePingMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNonSubspacePingMs_MetaData), NewProp_MaxNonSubspacePingMs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MinSubspacePingMs = { "MinSubspacePingMs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosSubspaceComparisonParams, MinSubspacePingMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSubspacePingMs_MetaData), NewProp_MinSubspacePingMs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ConstantMaxToleranceMs = { "ConstantMaxToleranceMs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosSubspaceComparisonParams, ConstantMaxToleranceMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantMaxToleranceMs_MetaData), NewProp_ConstantMaxToleranceMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ScaledMaxTolerancePct = { "ScaledMaxTolerancePct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosSubspaceComparisonParams, ScaledMaxTolerancePct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaledMaxTolerancePct_MetaData), NewProp_ScaledMaxTolerancePct_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MaxNonSubspacePingMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MinSubspacePingMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ConstantMaxToleranceMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ScaledMaxTolerancePct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Qos,
	nullptr,
	&NewStructOps,
	"QosSubspaceComparisonParams",
	Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::PropPointers),
	sizeof(FQosSubspaceComparisonParams),
	alignof(FQosSubspaceComparisonParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQosSubspaceComparisonParams()
{
	if (!Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.InnerSingleton, Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.InnerSingleton;
}
// End ScriptStruct FQosSubspaceComparisonParams

// Begin ScriptStruct FQosPingServerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QosPingServerInfo;
class UScriptStruct* FQosPingServerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QosPingServerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QosPingServerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQosPingServerInfo, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("QosPingServerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_QosPingServerInfo.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FQosPingServerInfo>()
{
	return FQosPingServerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQosPingServerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Individual ping server details\n */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Individual ping server details" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Address of server */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Address of server" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Port of server */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Port of server" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQosPingServerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosPingServerInfo, Address), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Address_MetaData), NewProp_Address_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosPingServerInfo, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Address,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Qos,
	nullptr,
	&NewStructOps,
	"QosPingServerInfo",
	Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::PropPointers),
	sizeof(FQosPingServerInfo),
	alignof(FQosPingServerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQosPingServerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_QosPingServerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QosPingServerInfo.InnerSingleton, Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QosPingServerInfo.InnerSingleton;
}
// End ScriptStruct FQosPingServerInfo

// Begin ScriptStruct FQosDatacenterInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QosDatacenterInfo;
class UScriptStruct* FQosDatacenterInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QosDatacenterInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QosDatacenterInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQosDatacenterInfo, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("QosDatacenterInfo"));
	}
	return Z_Registration_Info_UScriptStruct_QosDatacenterInfo.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FQosDatacenterInfo>()
{
	return FQosDatacenterInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Metadata about datacenters that can be queried\n */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Metadata about datacenters that can be queried" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Id for this datacenter */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id for this datacenter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Parent Region */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent Region" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is this region tested (only valid if region is enabled) */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this region tested (only valid if region is enabled)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Servers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Addresses of ping servers */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Addresses of ping servers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RegionId;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Servers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Servers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQosDatacenterInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosDatacenterInfo, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_RegionId = { "RegionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosDatacenterInfo, RegionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionId_MetaData), NewProp_RegionId_MetaData) };
void Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FQosDatacenterInfo*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQosDatacenterInfo), &Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Servers_Inner = { "Servers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQosPingServerInfo, METADATA_PARAMS(0, nullptr) }; // 2203156590
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosDatacenterInfo, Servers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Servers_MetaData), NewProp_Servers_MetaData) }; // 2203156590
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_RegionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Servers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Servers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Qos,
	nullptr,
	&NewStructOps,
	"QosDatacenterInfo",
	Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::PropPointers),
	sizeof(FQosDatacenterInfo),
	alignof(FQosDatacenterInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQosDatacenterInfo()
{
	if (!Z_Registration_Info_UScriptStruct_QosDatacenterInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QosDatacenterInfo.InnerSingleton, Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QosDatacenterInfo.InnerSingleton;
}
// End ScriptStruct FQosDatacenterInfo

// Begin ScriptStruct FQosRegionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QosRegionInfo;
class UScriptStruct* FQosRegionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QosRegionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QosRegionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQosRegionInfo, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("QosRegionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_QosRegionInfo.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FQosRegionInfo>()
{
	return FQosRegionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQosRegionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Metadata about regions made up of datacenters\n */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Metadata about regions made up of datacenters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Localized name of the region */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Localized name of the region" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Id for the region, all datacenters must reference one of these */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id for the region, all datacenters must reference one of these" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is this region tested at all (if false, overrides individual datacenters) */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this region tested at all (if false, overrides individual datacenters)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is this region visible in the UI (can be saved by user, replaced with auto if region disappears */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this region visible in the UI (can be saved by user, replaced with auto if region disappears" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAssignable_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Can this region be considered for auto detection */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can this region be considered for auto detection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSubspaceBias_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable biased sorting algorithm on results for this region, which prefers non-subspaces over subspaces */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable biased sorting algorithm on results for this region, which prefers non-subspaces over subspaces" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubspaceBiasParams_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Granular settings for biased subspace-based sorting algorithm, if enabled for this region */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Granular settings for biased subspace-based sorting algorithm, if enabled for this region" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RegionId;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static void NewProp_bAutoAssignable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAssignable;
	static void NewProp_bAllowSubspaceBias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSubspaceBias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubspaceBiasParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQosRegionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosRegionInfo, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_RegionId = { "RegionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosRegionInfo, RegionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionId_MetaData), NewProp_RegionId_MetaData) };
void Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FQosRegionInfo*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQosRegionInfo), &Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FQosRegionInfo*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQosRegionInfo), &Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
void Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAutoAssignable_SetBit(void* Obj)
{
	((FQosRegionInfo*)Obj)->bAutoAssignable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAutoAssignable = { "bAutoAssignable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQosRegionInfo), &Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAutoAssignable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoAssignable_MetaData), NewProp_bAutoAssignable_MetaData) };
void Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAllowSubspaceBias_SetBit(void* Obj)
{
	((FQosRegionInfo*)Obj)->bAllowSubspaceBias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAllowSubspaceBias = { "bAllowSubspaceBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQosRegionInfo), &Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAllowSubspaceBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSubspaceBias_MetaData), NewProp_bAllowSubspaceBias_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_SubspaceBiasParams = { "SubspaceBiasParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQosRegionInfo, SubspaceBiasParams), Z_Construct_UScriptStruct_FQosSubspaceComparisonParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubspaceBiasParams_MetaData), NewProp_SubspaceBiasParams_MetaData) }; // 1692836091
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQosRegionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_RegionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAutoAssignable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAllowSubspaceBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_SubspaceBiasParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Qos,
	nullptr,
	&NewStructOps,
	"QosRegionInfo",
	Z_Construct_UScriptStruct_FQosRegionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::PropPointers),
	sizeof(FQosRegionInfo),
	alignof(FQosRegionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQosRegionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQosRegionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_QosRegionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QosRegionInfo.InnerSingleton, Z_Construct_UScriptStruct_FQosRegionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QosRegionInfo.InnerSingleton;
}
// End ScriptStruct FQosRegionInfo

// Begin ScriptStruct FDatacenterQosInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatacenterQosInstance;
class UScriptStruct* FDatacenterQosInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatacenterQosInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatacenterQosInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatacenterQosInstance, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("DatacenterQosInstance"));
	}
	return Z_Registration_Info_UScriptStruct_DatacenterQosInstance.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FDatacenterQosInstance>()
{
	return FDatacenterQosInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Runtime information about a given region */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime information about a given region" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Information about the datacenter */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about the datacenter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Success of the qos evaluation */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Success of the qos evaluation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvgPingMs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Avg ping times across all search results */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Avg ping times across all search results" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PingResults_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transient list of ping times obtained for this datacenter */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transient list of ping times obtained for this datacenter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCheckTimestamp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Last time this datacenter was checked */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last time this datacenter was checked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsable_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the parent region usable */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the parent region usable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvgPingMs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PingResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PingResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastCheckTimestamp;
	static void NewProp_bUsable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatacenterQosInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatacenterQosInstance, Definition), Z_Construct_UScriptStruct_FQosDatacenterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) }; // 3111803781
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatacenterQosInstance, Result), Z_Construct_UEnum_Qos_EQosDatacenterResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2698831596
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_AvgPingMs = { "AvgPingMs", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatacenterQosInstance, AvgPingMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvgPingMs_MetaData), NewProp_AvgPingMs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_PingResults_Inner = { "PingResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_PingResults = { "PingResults", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatacenterQosInstance, PingResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PingResults_MetaData), NewProp_PingResults_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_LastCheckTimestamp = { "LastCheckTimestamp", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatacenterQosInstance, LastCheckTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCheckTimestamp_MetaData), NewProp_LastCheckTimestamp_MetaData) };
void Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_bUsable_SetBit(void* Obj)
{
	((FDatacenterQosInstance*)Obj)->bUsable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_bUsable = { "bUsable", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDatacenterQosInstance), &Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_bUsable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsable_MetaData), NewProp_bUsable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Definition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_AvgPingMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_PingResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_PingResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_LastCheckTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_bUsable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Qos,
	nullptr,
	&NewStructOps,
	"DatacenterQosInstance",
	Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::PropPointers),
	sizeof(FDatacenterQosInstance),
	alignof(FDatacenterQosInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatacenterQosInstance()
{
	if (!Z_Registration_Info_UScriptStruct_DatacenterQosInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatacenterQosInstance.InnerSingleton, Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatacenterQosInstance.InnerSingleton;
}
// End ScriptStruct FDatacenterQosInstance

// Begin ScriptStruct FRegionQosInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegionQosInstance;
class UScriptStruct* FRegionQosInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegionQosInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegionQosInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegionQosInstance, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("RegionQosInstance"));
	}
	return Z_Registration_Info_UScriptStruct_RegionQosInstance.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FRegionQosInstance>()
{
	return FRegionQosInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRegionQosInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Information about the region */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about the region" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatacenterOptions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of all known datacenters and their status */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of all known datacenters and their status" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DatacenterOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DatacenterOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegionQosInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionQosInstance, Definition), Z_Construct_UScriptStruct_FQosRegionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) }; // 750114436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_DatacenterOptions_Inner = { "DatacenterOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDatacenterQosInstance, METADATA_PARAMS(0, nullptr) }; // 3458889651
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_DatacenterOptions = { "DatacenterOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionQosInstance, DatacenterOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatacenterOptions_MetaData), NewProp_DatacenterOptions_MetaData) }; // 3458889651
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegionQosInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_Definition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_DatacenterOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_DatacenterOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionQosInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegionQosInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Qos,
	nullptr,
	&NewStructOps,
	"RegionQosInstance",
	Z_Construct_UScriptStruct_FRegionQosInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionQosInstance_Statics::PropPointers),
	sizeof(FRegionQosInstance),
	alignof(FRegionQosInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionQosInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRegionQosInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRegionQosInstance()
{
	if (!Z_Registration_Info_UScriptStruct_RegionQosInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegionQosInstance.InnerSingleton, Z_Construct_UScriptStruct_FRegionQosInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RegionQosInstance.InnerSingleton;
}
// End ScriptStruct FRegionQosInstance

// Begin Class UQosRegionManager
void UQosRegionManager::StaticRegisterNativesUQosRegionManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQosRegionManager);
UClass* Z_Construct_UClass_UQosRegionManager_NoRegister()
{
	return UQosRegionManager::StaticClass();
}
struct Z_Construct_UClass_UQosRegionManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Main Qos interface for actions related to server quality of service\n */" },
#endif
		{ "IncludePath", "QosRegionManager.h" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Qos interface for actions related to server quality of service" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTestsPerRegion_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of times to ping a given region using random sampling of available servers */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of times to ping a given region using random sampling of available servers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PingTimeout_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Timeout value for each ping request */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timeout value for each ping request" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubspaceBiasOrder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Global switch to enable/disable sorting of QoS datacenter results using rules-based comparison,\n\x09 * where subspaces are encountered.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global switch to enable/disable sorting of QoS datacenter results using rules-based comparison,\nwhere subspaces are encountered." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubspaceDelimiter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Delimiter string that identifies a subspace datacenter ID.\n\x09 * e.g. \"DE_S\" would be a subspace of the \"DE\" subregion, using \"_\" as the delimiter.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delimiter string that identifies a subspace datacenter ID.\ne.g. \"DE_S\" would be a subspace of the \"DE\" subregion, using \"_\" as the delimiter." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionDefinitions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Metadata about existing regions */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Metadata about existing regions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatacenterDefinitions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Metadata about datacenters within existing regions */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Metadata about datacenters within existing regions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCheckTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Evaluator_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the evaluator for making datacenter determinations (null when not active) */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the evaluator for making datacenter determinations (null when not active)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QosEvalResult_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Result of the last datacenter test */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of the last datacenter test" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionOptions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of all known regions and the datacenters in them */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of all known regions and the datacenters in them" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceRegionId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Value forced to be the region (development) */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value forced to be the region (development)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRegionForcedViaCommandline_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Was the region forced via commandline */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Was the region forced via commandline" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedRegionId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Value set by the game to be the current region */" },
#endif
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value set by the game to be the current region" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTestsPerRegion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PingTimeout;
	static void NewProp_bEnableSubspaceBiasOrder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubspaceBiasOrder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SubspaceDelimiter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegionDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DatacenterDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DatacenterDefinitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastCheckTimestamp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Evaluator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QosEvalResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QosEvalResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegionOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegionOptions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ForceRegionId;
	static void NewProp_bRegionForcedViaCommandline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegionForcedViaCommandline;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedRegionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQosRegionManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_NumTestsPerRegion = { "NumTestsPerRegion", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosRegionManager, NumTestsPerRegion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTestsPerRegion_MetaData), NewProp_NumTestsPerRegion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_PingTimeout = { "PingTimeout", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosRegionManager, PingTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PingTimeout_MetaData), NewProp_PingTimeout_MetaData) };
void Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bEnableSubspaceBiasOrder_SetBit(void* Obj)
{
	((UQosRegionManager*)Obj)->bEnableSubspaceBiasOrder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bEnableSubspaceBiasOrder = { "bEnableSubspaceBiasOrder", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQosRegionManager), &Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bEnableSubspaceBiasOrder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSubspaceBiasOrder_MetaData), NewProp_bEnableSubspaceBiasOrder_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SubspaceDelimiter = { "SubspaceDelimiter", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosRegionManager, SubspaceDelimiter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubspaceDelimiter_MetaData), NewProp_SubspaceDelimiter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionDefinitions_Inner = { "RegionDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQosRegionInfo, METADATA_PARAMS(0, nullptr) }; // 750114436
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionDefinitions = { "RegionDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosRegionManager, RegionDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionDefinitions_MetaData), NewProp_RegionDefinitions_MetaData) }; // 750114436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_DatacenterDefinitions_Inner = { "DatacenterDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQosDatacenterInfo, METADATA_PARAMS(0, nullptr) }; // 3111803781
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_DatacenterDefinitions = { "DatacenterDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosRegionManager, DatacenterDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatacenterDefinitions_MetaData), NewProp_DatacenterDefinitions_MetaData) }; // 3111803781
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_LastCheckTimestamp = { "LastCheckTimestamp", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosRegionManager, LastCheckTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCheckTimestamp_MetaData), NewProp_LastCheckTimestamp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_Evaluator = { "Evaluator", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosRegionManager, Evaluator), Z_Construct_UClass_UQosEvaluator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Evaluator_MetaData), NewProp_Evaluator_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_QosEvalResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_QosEvalResult = { "QosEvalResult", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosRegionManager, QosEvalResult), Z_Construct_UEnum_Qos_EQosCompletionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QosEvalResult_MetaData), NewProp_QosEvalResult_MetaData) }; // 2425722639
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionOptions_Inner = { "RegionOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRegionQosInstance, METADATA_PARAMS(0, nullptr) }; // 1351056027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionOptions = { "RegionOptions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosRegionManager, RegionOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionOptions_MetaData), NewProp_RegionOptions_MetaData) }; // 1351056027
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_ForceRegionId = { "ForceRegionId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosRegionManager, ForceRegionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceRegionId_MetaData), NewProp_ForceRegionId_MetaData) };
void Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bRegionForcedViaCommandline_SetBit(void* Obj)
{
	((UQosRegionManager*)Obj)->bRegionForcedViaCommandline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bRegionForcedViaCommandline = { "bRegionForcedViaCommandline", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQosRegionManager), &Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bRegionForcedViaCommandline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRegionForcedViaCommandline_MetaData), NewProp_bRegionForcedViaCommandline_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SelectedRegionId = { "SelectedRegionId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosRegionManager, SelectedRegionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedRegionId_MetaData), NewProp_SelectedRegionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQosRegionManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_NumTestsPerRegion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_PingTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bEnableSubspaceBiasOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SubspaceDelimiter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_DatacenterDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_DatacenterDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_LastCheckTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_Evaluator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_QosEvalResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_QosEvalResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_ForceRegionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bRegionForcedViaCommandline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SelectedRegionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQosRegionManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Qos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQosRegionManager_Statics::ClassParams = {
	&UQosRegionManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQosRegionManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UQosRegionManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQosRegionManager()
{
	if (!Z_Registration_Info_UClass_UQosRegionManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQosRegionManager.OuterSingleton, Z_Construct_UClass_UQosRegionManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQosRegionManager.OuterSingleton;
}
template<> QOS_API UClass* StaticClass<UQosRegionManager>()
{
	return UQosRegionManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQosRegionManager);
UQosRegionManager::~UQosRegionManager() {}
// End Class UQosRegionManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQosDatacenterResult_StaticEnum, TEXT("EQosDatacenterResult"), &Z_Registration_Info_UEnum_EQosDatacenterResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2698831596U) },
		{ EQosCompletionResult_StaticEnum, TEXT("EQosCompletionResult"), &Z_Registration_Info_UEnum_EQosCompletionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2425722639U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQosSubspaceComparisonParams::StaticStruct, Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewStructOps, TEXT("QosSubspaceComparisonParams"), &Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQosSubspaceComparisonParams), 1692836091U) },
		{ FQosPingServerInfo::StaticStruct, Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewStructOps, TEXT("QosPingServerInfo"), &Z_Registration_Info_UScriptStruct_QosPingServerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQosPingServerInfo), 2203156590U) },
		{ FQosDatacenterInfo::StaticStruct, Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewStructOps, TEXT("QosDatacenterInfo"), &Z_Registration_Info_UScriptStruct_QosDatacenterInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQosDatacenterInfo), 3111803781U) },
		{ FQosRegionInfo::StaticStruct, Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewStructOps, TEXT("QosRegionInfo"), &Z_Registration_Info_UScriptStruct_QosRegionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQosRegionInfo), 750114436U) },
		{ FDatacenterQosInstance::StaticStruct, Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewStructOps, TEXT("DatacenterQosInstance"), &Z_Registration_Info_UScriptStruct_DatacenterQosInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatacenterQosInstance), 3458889651U) },
		{ FRegionQosInstance::StaticStruct, Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewStructOps, TEXT("RegionQosInstance"), &Z_Registration_Info_UScriptStruct_RegionQosInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegionQosInstance), 1351056027U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQosRegionManager, UQosRegionManager::StaticClass, TEXT("UQosRegionManager"), &Z_Registration_Info_UClass_UQosRegionManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQosRegionManager), 2786563951U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_3897453733(TEXT("/Script/Qos"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
