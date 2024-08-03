// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Qos/Private/QosEvaluator.h"
#include "Qos/Public/QosRegionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQosEvaluator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
QOS_API UClass* Z_Construct_UClass_UQosEvaluator();
QOS_API UClass* Z_Construct_UClass_UQosEvaluator_NoRegister();
QOS_API UScriptStruct* Z_Construct_UScriptStruct_FDatacenterQosInstance();
UPackage* Z_Construct_UPackage__Script_Qos();
// End Cross Module References

// Begin Class UQosEvaluator
void UQosEvaluator::StaticRegisterNativesUQosEvaluator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQosEvaluator);
UClass* Z_Construct_UClass_UQosEvaluator_NoRegister()
{
	return UQosEvaluator::StaticClass();
}
struct Z_Construct_UClass_UQosEvaluator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Evaluates QoS metrics to determine the best datacenter under current conditions\n * Additionally capable of generically pinging an array of servers that have a QosBeaconHost active\n */" },
#endif
		{ "IncludePath", "QosEvaluator.h" },
		{ "ModuleRelativePath", "Private/QosEvaluator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluates QoS metrics to determine the best datacenter under current conditions\nAdditionally capable of generically pinging an array of servers that have a QosBeaconHost active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInProgress_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A QoS operation is in progress */" },
#endif
		{ "ModuleRelativePath", "Private/QosEvaluator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A QoS operation is in progress" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCancelOperation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should cancel occur at the next available opportunity */" },
#endif
		{ "ModuleRelativePath", "Private/QosEvaluator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should cancel occur at the next available opportunity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Datacenters_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of datacenters currently being evaluated */" },
#endif
		{ "ModuleRelativePath", "Private/QosEvaluator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of datacenters currently being evaluated" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInProgress;
	static void NewProp_bCancelOperation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelOperation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Datacenters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Datacenters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQosEvaluator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bInProgress_SetBit(void* Obj)
{
	((UQosEvaluator*)Obj)->bInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bInProgress = { "bInProgress", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQosEvaluator), &Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInProgress_MetaData), NewProp_bInProgress_MetaData) };
void Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bCancelOperation_SetBit(void* Obj)
{
	((UQosEvaluator*)Obj)->bCancelOperation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bCancelOperation = { "bCancelOperation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQosEvaluator), &Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bCancelOperation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCancelOperation_MetaData), NewProp_bCancelOperation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQosEvaluator_Statics::NewProp_Datacenters_Inner = { "Datacenters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDatacenterQosInstance, METADATA_PARAMS(0, nullptr) }; // 3458889651
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQosEvaluator_Statics::NewProp_Datacenters = { "Datacenters", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQosEvaluator, Datacenters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Datacenters_MetaData), NewProp_Datacenters_MetaData) }; // 3458889651
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQosEvaluator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosEvaluator_Statics::NewProp_bCancelOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosEvaluator_Statics::NewProp_Datacenters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosEvaluator_Statics::NewProp_Datacenters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQosEvaluator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQosEvaluator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Qos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQosEvaluator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQosEvaluator_Statics::ClassParams = {
	&UQosEvaluator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQosEvaluator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQosEvaluator_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQosEvaluator_Statics::Class_MetaDataParams), Z_Construct_UClass_UQosEvaluator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQosEvaluator()
{
	if (!Z_Registration_Info_UClass_UQosEvaluator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQosEvaluator.OuterSingleton, Z_Construct_UClass_UQosEvaluator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQosEvaluator.OuterSingleton;
}
template<> QOS_API UClass* StaticClass<UQosEvaluator>()
{
	return UQosEvaluator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQosEvaluator);
UQosEvaluator::~UQosEvaluator() {}
// End Class UQosEvaluator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQosEvaluator, UQosEvaluator::StaticClass, TEXT("UQosEvaluator"), &Z_Registration_Info_UClass_UQosEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQosEvaluator), 3261224126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_3330850417(TEXT("/Script/Qos"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Private_QosEvaluator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
