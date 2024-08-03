// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/Chat/SocialReadOnlyChatChannel.h"
#include "Party/Public/Chat/SocialChatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialReadOnlyChatChannel() {}

// Begin Cross Module References
PARTY_API UClass* Z_Construct_UClass_USocialChatChannel();
PARTY_API UClass* Z_Construct_UClass_USocialReadOnlyChatChannel();
PARTY_API UClass* Z_Construct_UClass_USocialReadOnlyChatChannel_NoRegister();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin Class USocialReadOnlyChatChannel
void USocialReadOnlyChatChannel::StaticRegisterNativesUSocialReadOnlyChatChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialReadOnlyChatChannel);
UClass* Z_Construct_UClass_USocialReadOnlyChatChannel_NoRegister()
{
	return USocialReadOnlyChatChannel::StaticClass();
}
struct Z_Construct_UClass_USocialReadOnlyChatChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A strawman chat channel that relies exclusively on other channels messages for content, does not support sending messages\n */" },
#endif
		{ "IncludePath", "Chat/SocialReadOnlyChatChannel.h" },
		{ "ModuleRelativePath", "Public/Chat/SocialReadOnlyChatChannel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A strawman chat channel that relies exclusively on other channels messages for content, does not support sending messages" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialReadOnlyChatChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USocialChatChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::ClassParams = {
	&USocialReadOnlyChatChannel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialReadOnlyChatChannel()
{
	if (!Z_Registration_Info_UClass_USocialReadOnlyChatChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialReadOnlyChatChannel.OuterSingleton, Z_Construct_UClass_USocialReadOnlyChatChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialReadOnlyChatChannel.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialReadOnlyChatChannel>()
{
	return USocialReadOnlyChatChannel::StaticClass();
}
USocialReadOnlyChatChannel::USocialReadOnlyChatChannel() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialReadOnlyChatChannel);
USocialReadOnlyChatChannel::~USocialReadOnlyChatChannel() {}
// End Class USocialReadOnlyChatChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialReadOnlyChatChannel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialReadOnlyChatChannel, USocialReadOnlyChatChannel::StaticClass, TEXT("USocialReadOnlyChatChannel"), &Z_Registration_Info_UClass_USocialReadOnlyChatChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialReadOnlyChatChannel), 3616197500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialReadOnlyChatChannel_h_1057617291(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialReadOnlyChatChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialReadOnlyChatChannel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
