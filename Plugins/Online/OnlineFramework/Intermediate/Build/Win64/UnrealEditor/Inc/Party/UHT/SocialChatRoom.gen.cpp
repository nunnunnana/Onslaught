// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/Chat/SocialChatRoom.h"
#include "Party/Public/Chat/SocialChatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatRoom() {}

// Begin Cross Module References
PARTY_API UClass* Z_Construct_UClass_USocialChatChannel();
PARTY_API UClass* Z_Construct_UClass_USocialChatRoom();
PARTY_API UClass* Z_Construct_UClass_USocialChatRoom_NoRegister();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin Class USocialChatRoom
void USocialChatRoom::StaticRegisterNativesUSocialChatRoom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialChatRoom);
UClass* Z_Construct_UClass_USocialChatRoom_NoRegister()
{
	return USocialChatRoom::StaticClass();
}
struct Z_Construct_UClass_USocialChatRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A multi-user chat room channel. Used for all chat situations outside of private user-to-user direct messages. */" },
#endif
		{ "IncludePath", "Chat/SocialChatRoom.h" },
		{ "ModuleRelativePath", "Public/Chat/SocialChatRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A multi-user chat room channel. Used for all chat situations outside of private user-to-user direct messages." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialChatRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USocialChatRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USocialChatChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialChatRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialChatRoom_Statics::ClassParams = {
	&USocialChatRoom::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialChatRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialChatRoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialChatRoom()
{
	if (!Z_Registration_Info_UClass_USocialChatRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialChatRoom.OuterSingleton, Z_Construct_UClass_USocialChatRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialChatRoom.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialChatRoom>()
{
	return USocialChatRoom::StaticClass();
}
USocialChatRoom::USocialChatRoom() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialChatRoom);
USocialChatRoom::~USocialChatRoom() {}
// End Class USocialChatRoom

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialChatRoom, USocialChatRoom::StaticClass, TEXT("USocialChatRoom"), &Z_Registration_Info_UClass_USocialChatRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialChatRoom), 3641380523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_3909923905(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
