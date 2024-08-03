// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/Chat/SocialPrivateMessageChannel.h"
#include "Party/Public/Chat/SocialChatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialPrivateMessageChannel() {}

// Begin Cross Module References
PARTY_API UClass* Z_Construct_UClass_USocialChatChannel();
PARTY_API UClass* Z_Construct_UClass_USocialPrivateMessageChannel();
PARTY_API UClass* Z_Construct_UClass_USocialPrivateMessageChannel_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialUser_NoRegister();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin Class USocialPrivateMessageChannel
void USocialPrivateMessageChannel::StaticRegisterNativesUSocialPrivateMessageChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialPrivateMessageChannel);
UClass* Z_Construct_UClass_USocialPrivateMessageChannel_NoRegister()
{
	return USocialPrivateMessageChannel::StaticClass();
}
struct Z_Construct_UClass_USocialPrivateMessageChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A modified version of a chat room that only contains two participants - the current user and a private recipient of their messages.\n * This is equivalent to sending a \"whisper\".\n */" },
#endif
		{ "IncludePath", "Chat/SocialPrivateMessageChannel.h" },
		{ "ModuleRelativePath", "Public/Chat/SocialPrivateMessageChannel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A modified version of a chat room that only contains two participants - the current user and a private recipient of their messages.\nThis is equivalent to sending a \"whisper\"." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUser_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The recipient of the current user's messages */" },
#endif
		{ "ModuleRelativePath", "Public/Chat/SocialPrivateMessageChannel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The recipient of the current user's messages" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialPrivateMessageChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialPrivateMessageChannel_Statics::NewProp_TargetUser = { "TargetUser", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialPrivateMessageChannel, TargetUser), Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUser_MetaData), NewProp_TargetUser_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialPrivateMessageChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialPrivateMessageChannel_Statics::NewProp_TargetUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialPrivateMessageChannel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USocialPrivateMessageChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USocialChatChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialPrivateMessageChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialPrivateMessageChannel_Statics::ClassParams = {
	&USocialPrivateMessageChannel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USocialPrivateMessageChannel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USocialPrivateMessageChannel_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialPrivateMessageChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialPrivateMessageChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialPrivateMessageChannel()
{
	if (!Z_Registration_Info_UClass_USocialPrivateMessageChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialPrivateMessageChannel.OuterSingleton, Z_Construct_UClass_USocialPrivateMessageChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialPrivateMessageChannel.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialPrivateMessageChannel>()
{
	return USocialPrivateMessageChannel::StaticClass();
}
USocialPrivateMessageChannel::USocialPrivateMessageChannel() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialPrivateMessageChannel);
USocialPrivateMessageChannel::~USocialPrivateMessageChannel() {}
// End Class USocialPrivateMessageChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPrivateMessageChannel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialPrivateMessageChannel, USocialPrivateMessageChannel::StaticClass, TEXT("USocialPrivateMessageChannel"), &Z_Registration_Info_UClass_USocialPrivateMessageChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialPrivateMessageChannel), 1285967764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPrivateMessageChannel_h_3984635112(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPrivateMessageChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPrivateMessageChannel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
