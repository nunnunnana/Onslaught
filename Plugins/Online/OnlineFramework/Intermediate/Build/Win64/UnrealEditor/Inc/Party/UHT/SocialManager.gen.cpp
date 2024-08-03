// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/SocialManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARTY_API UClass* Z_Construct_UClass_USocialDebugTools_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialManager();
PARTY_API UClass* Z_Construct_UClass_USocialManager_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialToolkit_NoRegister();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin Class USocialManager
void USocialManager::StaticRegisterNativesUSocialManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialManager);
UClass* Z_Construct_UClass_USocialManager_NoRegister()
{
	return USocialManager::StaticClass();
}
struct Z_Construct_UClass_USocialManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Singleton manager at the top of the social framework */" },
#endif
		{ "IncludePath", "SocialManager.h" },
		{ "ModuleRelativePath", "Public/SocialManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Singleton manager at the top of the social framework" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocialToolkits_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocialDebugTools_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SocialToolkits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SocialToolkits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SocialDebugTools;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialManager_Statics::NewProp_SocialToolkits_Inner = { "SocialToolkits", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USocialToolkit_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialManager_Statics::NewProp_SocialToolkits = { "SocialToolkits", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialManager, SocialToolkits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocialToolkits_MetaData), NewProp_SocialToolkits_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialManager_Statics::NewProp_SocialDebugTools = { "SocialDebugTools", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialManager, SocialDebugTools), Z_Construct_UClass_USocialDebugTools_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocialDebugTools_MetaData), NewProp_SocialDebugTools_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialManager_Statics::NewProp_SocialToolkits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialManager_Statics::NewProp_SocialToolkits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialManager_Statics::NewProp_SocialDebugTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USocialManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialManager_Statics::ClassParams = {
	&USocialManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USocialManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USocialManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialManager()
{
	if (!Z_Registration_Info_UClass_USocialManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialManager.OuterSingleton, Z_Construct_UClass_USocialManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialManager.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialManager>()
{
	return USocialManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialManager);
USocialManager::~USocialManager() {}
// End Class USocialManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialManager, USocialManager::StaticClass, TEXT("USocialManager"), &Z_Registration_Info_UClass_USocialManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialManager), 3559762268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_4155264099(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
