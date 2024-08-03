// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/Chat/SocialGroupChannel.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialGroupChannel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
PARTY_API UClass* Z_Construct_UClass_USocialGroupChannel();
PARTY_API UClass* Z_Construct_UClass_USocialGroupChannel_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialUser_NoRegister();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin Class USocialGroupChannel
void USocialGroupChannel::StaticRegisterNativesUSocialGroupChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialGroupChannel);
UClass* Z_Construct_UClass_USocialGroupChannel_NoRegister()
{
	return USocialGroupChannel::StaticClass();
}
struct Z_Construct_UClass_USocialGroupChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Chat/SocialGroupChannel.h" },
		{ "ModuleRelativePath", "Public/Chat/SocialGroupChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocialUser_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialGroupChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialGroupChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialGroupChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialGroupChannel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SocialUser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Members;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialGroupChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_SocialUser = { "SocialUser", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialGroupChannel, SocialUser), Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocialUser_MetaData), NewProp_SocialUser_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialGroupChannel, GroupId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) }; // 3410776867
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialGroupChannel, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialGroupChannel, Members), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Members_MetaData), NewProp_Members_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialGroupChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_SocialUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_Members_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupChannel_Statics::NewProp_Members,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialGroupChannel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USocialGroupChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialGroupChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialGroupChannel_Statics::ClassParams = {
	&USocialGroupChannel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USocialGroupChannel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USocialGroupChannel_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialGroupChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialGroupChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialGroupChannel()
{
	if (!Z_Registration_Info_UClass_USocialGroupChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialGroupChannel.OuterSingleton, Z_Construct_UClass_USocialGroupChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialGroupChannel.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialGroupChannel>()
{
	return USocialGroupChannel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialGroupChannel);
USocialGroupChannel::~USocialGroupChannel() {}
// End Class USocialGroupChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialGroupChannel, USocialGroupChannel::StaticClass, TEXT("USocialGroupChannel"), &Z_Registration_Info_UClass_USocialGroupChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialGroupChannel), 3988696972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_525001930(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialGroupChannel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
