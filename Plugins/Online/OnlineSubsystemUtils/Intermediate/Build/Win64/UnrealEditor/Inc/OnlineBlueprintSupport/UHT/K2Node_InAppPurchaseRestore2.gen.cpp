// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineBlueprintSupport/Classes/K2Node_InAppPurchaseRestore2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_InAppPurchaseRestore2() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
ONLINEBLUEPRINTSUPPORT_API UClass* Z_Construct_UClass_UK2Node_InAppPurchaseRestore2();
ONLINEBLUEPRINTSUPPORT_API UClass* Z_Construct_UClass_UK2Node_InAppPurchaseRestore2_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineBlueprintSupport();
// End Cross Module References

// Begin Class UK2Node_InAppPurchaseRestore2
void UK2Node_InAppPurchaseRestore2::StaticRegisterNativesUK2Node_InAppPurchaseRestore2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_InAppPurchaseRestore2);
UClass* Z_Construct_UClass_UK2Node_InAppPurchaseRestore2_NoRegister()
{
	return UK2Node_InAppPurchaseRestore2::StaticClass();
}
struct Z_Construct_UClass_UK2Node_InAppPurchaseRestore2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_InAppPurchaseRestore2.h" },
		{ "ModuleRelativePath", "Classes/K2Node_InAppPurchaseRestore2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_InAppPurchaseRestore2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UK2Node_InAppPurchaseRestore2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineBlueprintSupport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InAppPurchaseRestore2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_InAppPurchaseRestore2_Statics::ClassParams = {
	&UK2Node_InAppPurchaseRestore2::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InAppPurchaseRestore2_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_InAppPurchaseRestore2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_InAppPurchaseRestore2()
{
	if (!Z_Registration_Info_UClass_UK2Node_InAppPurchaseRestore2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_InAppPurchaseRestore2.OuterSingleton, Z_Construct_UClass_UK2Node_InAppPurchaseRestore2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_InAppPurchaseRestore2.OuterSingleton;
}
template<> ONLINEBLUEPRINTSUPPORT_API UClass* StaticClass<UK2Node_InAppPurchaseRestore2>()
{
	return UK2Node_InAppPurchaseRestore2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_InAppPurchaseRestore2);
UK2Node_InAppPurchaseRestore2::~UK2Node_InAppPurchaseRestore2() {}
// End Class UK2Node_InAppPurchaseRestore2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineSubsystemUtils_Source_OnlineBlueprintSupport_Classes_K2Node_InAppPurchaseRestore2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_InAppPurchaseRestore2, UK2Node_InAppPurchaseRestore2::StaticClass, TEXT("UK2Node_InAppPurchaseRestore2"), &Z_Registration_Info_UClass_UK2Node_InAppPurchaseRestore2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_InAppPurchaseRestore2), 1089620104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineSubsystemUtils_Source_OnlineBlueprintSupport_Classes_K2Node_InAppPurchaseRestore2_h_3141819692(TEXT("/Script/OnlineBlueprintSupport"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineSubsystemUtils_Source_OnlineBlueprintSupport_Classes_K2Node_InAppPurchaseRestore2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineSubsystemUtils_Source_OnlineBlueprintSupport_Classes_K2Node_InAppPurchaseRestore2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
