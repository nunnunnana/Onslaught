// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Qos/Public/QosBeaconHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQosBeaconHost() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
QOS_API UClass* Z_Construct_UClass_AQosBeaconHost();
QOS_API UClass* Z_Construct_UClass_AQosBeaconHost_NoRegister();
UPackage* Z_Construct_UPackage__Script_Qos();
// End Cross Module References

// Begin Class AQosBeaconHost
void AQosBeaconHost::StaticRegisterNativesAQosBeaconHost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQosBeaconHost);
UClass* Z_Construct_UClass_AQosBeaconHost_NoRegister()
{
	return AQosBeaconHost::StaticClass();
}
struct Z_Construct_UClass_AQosBeaconHost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A beacon host listening for Qos requests from a potential client\n */" },
#endif
		{ "IncludePath", "QosBeaconHost.h" },
		{ "ModuleRelativePath", "Public/QosBeaconHost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A beacon host listening for Qos requests from a potential client" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQosBeaconHost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AQosBeaconHost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Qos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQosBeaconHost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQosBeaconHost_Statics::ClassParams = {
	&AQosBeaconHost::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQosBeaconHost_Statics::Class_MetaDataParams), Z_Construct_UClass_AQosBeaconHost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQosBeaconHost()
{
	if (!Z_Registration_Info_UClass_AQosBeaconHost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQosBeaconHost.OuterSingleton, Z_Construct_UClass_AQosBeaconHost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQosBeaconHost.OuterSingleton;
}
template<> QOS_API UClass* StaticClass<AQosBeaconHost>()
{
	return AQosBeaconHost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQosBeaconHost);
AQosBeaconHost::~AQosBeaconHost() {}
// End Class AQosBeaconHost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQosBeaconHost, AQosBeaconHost::StaticClass, TEXT("AQosBeaconHost"), &Z_Registration_Info_UClass_AQosBeaconHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQosBeaconHost), 2374144741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_3161330554(TEXT("/Script/Qos"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
