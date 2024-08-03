// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketSubsystemEOS/Public/NetDriverEOSBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetDriverEOSBase() {}

// Begin Cross Module References
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
SOCKETSUBSYSTEMEOS_API UClass* Z_Construct_UClass_UNetDriverEOSBase();
SOCKETSUBSYSTEMEOS_API UClass* Z_Construct_UClass_UNetDriverEOSBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocketSubsystemEOS();
// End Cross Module References

// Begin Class UNetDriverEOSBase
void UNetDriverEOSBase::StaticRegisterNativesUNetDriverEOSBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetDriverEOSBase);
UClass* Z_Construct_UClass_UNetDriverEOSBase_NoRegister()
{
	return UNetDriverEOSBase::StaticClass();
}
struct Z_Construct_UClass_UNetDriverEOSBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NetDriverEOSBase.h" },
		{ "ModuleRelativePath", "Public/NetDriverEOSBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPassthrough_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetDriverEOSBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingP2PSockets_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetDriverEOSBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPassthrough_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPassthrough;
	static void NewProp_bIsUsingP2PSockets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingP2PSockets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetDriverEOSBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsPassthrough_SetBit(void* Obj)
{
	((UNetDriverEOSBase*)Obj)->bIsPassthrough = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsPassthrough = { "bIsPassthrough", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNetDriverEOSBase), &Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsPassthrough_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPassthrough_MetaData), NewProp_bIsPassthrough_MetaData) };
void Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsUsingP2PSockets_SetBit(void* Obj)
{
	((UNetDriverEOSBase*)Obj)->bIsUsingP2PSockets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsUsingP2PSockets = { "bIsUsingP2PSockets", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNetDriverEOSBase), &Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsUsingP2PSockets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUsingP2PSockets_MetaData), NewProp_bIsUsingP2PSockets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetDriverEOSBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsPassthrough,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsUsingP2PSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEOSBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetDriverEOSBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_SocketSubsystemEOS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEOSBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetDriverEOSBase_Statics::ClassParams = {
	&UNetDriverEOSBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetDriverEOSBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEOSBase_Statics::PropPointers),
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEOSBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetDriverEOSBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetDriverEOSBase()
{
	if (!Z_Registration_Info_UClass_UNetDriverEOSBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetDriverEOSBase.OuterSingleton, Z_Construct_UClass_UNetDriverEOSBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetDriverEOSBase.OuterSingleton;
}
template<> SOCKETSUBSYSTEMEOS_API UClass* StaticClass<UNetDriverEOSBase>()
{
	return UNetDriverEOSBase::StaticClass();
}
UNetDriverEOSBase::UNetDriverEOSBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetDriverEOSBase);
UNetDriverEOSBase::~UNetDriverEOSBase() {}
// End Class UNetDriverEOSBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOSBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetDriverEOSBase, UNetDriverEOSBase::StaticClass, TEXT("UNetDriverEOSBase"), &Z_Registration_Info_UClass_UNetDriverEOSBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetDriverEOSBase), 1451680969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOSBase_h_2978168589(TEXT("/Script/SocketSubsystemEOS"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOSBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOSBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
