// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketSubsystemEOS/Private/NetConnectionEOS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetConnectionEOS() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
SOCKETSUBSYSTEMEOS_API UClass* Z_Construct_UClass_UNetConnectionEOS();
SOCKETSUBSYSTEMEOS_API UClass* Z_Construct_UClass_UNetConnectionEOS_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocketSubsystemEOS();
// End Cross Module References

// Begin Class UNetConnectionEOS
void UNetConnectionEOS::StaticRegisterNativesUNetConnectionEOS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetConnectionEOS);
UClass* Z_Construct_UClass_UNetConnectionEOS_NoRegister()
{
	return UNetConnectionEOS::StaticClass();
}
struct Z_Construct_UClass_UNetConnectionEOS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NetConnectionEOS.h" },
		{ "ModuleRelativePath", "Private/NetConnectionEOS.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetConnectionEOS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetConnectionEOS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_SocketSubsystemEOS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetConnectionEOS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetConnectionEOS_Statics::ClassParams = {
	&UNetConnectionEOS::StaticClass,
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
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetConnectionEOS_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetConnectionEOS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetConnectionEOS()
{
	if (!Z_Registration_Info_UClass_UNetConnectionEOS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetConnectionEOS.OuterSingleton, Z_Construct_UClass_UNetConnectionEOS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetConnectionEOS.OuterSingleton;
}
template<> SOCKETSUBSYSTEMEOS_API UClass* StaticClass<UNetConnectionEOS>()
{
	return UNetConnectionEOS::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetConnectionEOS);
UNetConnectionEOS::~UNetConnectionEOS() {}
// End Class UNetConnectionEOS

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetConnectionEOS, UNetConnectionEOS::StaticClass, TEXT("UNetConnectionEOS"), &Z_Registration_Info_UClass_UNetConnectionEOS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetConnectionEOS), 1712018147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_445157833(TEXT("/Script/SocketSubsystemEOS"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
