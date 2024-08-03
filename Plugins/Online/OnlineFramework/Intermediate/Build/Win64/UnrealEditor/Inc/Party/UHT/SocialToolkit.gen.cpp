// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/SocialToolkit.h"
#include "Party/Public/SocialManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialToolkit() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialChatManager_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialToolkit();
PARTY_API UClass* Z_Construct_UClass_USocialToolkit_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialUser_NoRegister();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin Class USocialToolkit
void USocialToolkit::StaticRegisterNativesUSocialToolkit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialToolkit);
UClass* Z_Construct_UClass_USocialToolkit_NoRegister()
{
	return USocialToolkit::StaticClass();
}
struct Z_Construct_UClass_USocialToolkit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Represents the full suite of social functionality available to a given LocalPlayer */" },
#endif
		{ "IncludePath", "SocialToolkit.h" },
		{ "ModuleRelativePath", "Public/SocialToolkit.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the full suite of social functionality available to a given LocalPlayer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUser_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialToolkit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllUsers_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialToolkit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveInvalidatedUserFromMaps_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialToolkit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialToolkit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocialChatManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialToolkit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalUser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllUsers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllUsers;
	static void NewProp_bRemoveInvalidatedUserFromMaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveInvalidatedUserFromMaps;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LocalPlayerOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SocialChatManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialToolkit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialToolkit_Statics::NewProp_LocalUser = { "LocalUser", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialToolkit, LocalUser), Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUser_MetaData), NewProp_LocalUser_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialToolkit_Statics::NewProp_AllUsers_Inner = { "AllUsers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialToolkit_Statics::NewProp_AllUsers = { "AllUsers", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialToolkit, AllUsers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllUsers_MetaData), NewProp_AllUsers_MetaData) };
void Z_Construct_UClass_USocialToolkit_Statics::NewProp_bRemoveInvalidatedUserFromMaps_SetBit(void* Obj)
{
	((USocialToolkit*)Obj)->bRemoveInvalidatedUserFromMaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialToolkit_Statics::NewProp_bRemoveInvalidatedUserFromMaps = { "bRemoveInvalidatedUserFromMaps", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USocialToolkit), &Z_Construct_UClass_USocialToolkit_Statics::NewProp_bRemoveInvalidatedUserFromMaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveInvalidatedUserFromMaps_MetaData), NewProp_bRemoveInvalidatedUserFromMaps_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USocialToolkit_Statics::NewProp_LocalPlayerOwner = { "LocalPlayerOwner", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialToolkit, LocalPlayerOwner), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPlayerOwner_MetaData), NewProp_LocalPlayerOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialToolkit_Statics::NewProp_SocialChatManager = { "SocialChatManager", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialToolkit, SocialChatManager), Z_Construct_UClass_USocialChatManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocialChatManager_MetaData), NewProp_SocialChatManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialToolkit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialToolkit_Statics::NewProp_LocalUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialToolkit_Statics::NewProp_AllUsers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialToolkit_Statics::NewProp_AllUsers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialToolkit_Statics::NewProp_bRemoveInvalidatedUserFromMaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialToolkit_Statics::NewProp_LocalPlayerOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialToolkit_Statics::NewProp_SocialChatManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialToolkit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USocialToolkit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialToolkit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialToolkit_Statics::ClassParams = {
	&USocialToolkit::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USocialToolkit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USocialToolkit_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialToolkit_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialToolkit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialToolkit()
{
	if (!Z_Registration_Info_UClass_USocialToolkit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialToolkit.OuterSingleton, Z_Construct_UClass_USocialToolkit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialToolkit.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialToolkit>()
{
	return USocialToolkit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialToolkit);
USocialToolkit::~USocialToolkit() {}
// End Class USocialToolkit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialToolkit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialToolkit, USocialToolkit::StaticClass, TEXT("USocialToolkit"), &Z_Registration_Info_UClass_USocialToolkit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialToolkit), 3311420887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialToolkit_h_18498088(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialToolkit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialToolkit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
