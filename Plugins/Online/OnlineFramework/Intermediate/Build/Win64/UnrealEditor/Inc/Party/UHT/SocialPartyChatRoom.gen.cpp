// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/Chat/SocialPartyChatRoom.h"
#include "Party/Public/Chat/SocialChatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialPartyChatRoom() {}

// Begin Cross Module References
PARTY_API UClass* Z_Construct_UClass_USocialChatRoom();
PARTY_API UClass* Z_Construct_UClass_USocialPartyChatRoom();
PARTY_API UClass* Z_Construct_UClass_USocialPartyChatRoom_NoRegister();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin Class USocialPartyChatRoom
void USocialPartyChatRoom::StaticRegisterNativesUSocialPartyChatRoom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialPartyChatRoom);
UClass* Z_Construct_UClass_USocialPartyChatRoom_NoRegister()
{
	return USocialPartyChatRoom::StaticClass();
}
struct Z_Construct_UClass_USocialPartyChatRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A multi-user chat room channel. Used for all chat situations outside of private user-to-user direct messages. */" },
#endif
		{ "IncludePath", "Chat/SocialPartyChatRoom.h" },
		{ "ModuleRelativePath", "Public/Chat/SocialPartyChatRoom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A multi-user chat room channel. Used for all chat situations outside of private user-to-user direct messages." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialPartyChatRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USocialPartyChatRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USocialChatRoom,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialPartyChatRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialPartyChatRoom_Statics::ClassParams = {
	&USocialPartyChatRoom::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialPartyChatRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialPartyChatRoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialPartyChatRoom()
{
	if (!Z_Registration_Info_UClass_USocialPartyChatRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialPartyChatRoom.OuterSingleton, Z_Construct_UClass_USocialPartyChatRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialPartyChatRoom.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialPartyChatRoom>()
{
	return USocialPartyChatRoom::StaticClass();
}
USocialPartyChatRoom::USocialPartyChatRoom() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialPartyChatRoom);
USocialPartyChatRoom::~USocialPartyChatRoom() {}
// End Class USocialPartyChatRoom

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialPartyChatRoom, USocialPartyChatRoom::StaticClass, TEXT("USocialPartyChatRoom"), &Z_Registration_Info_UClass_USocialPartyChatRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialPartyChatRoom), 2974645991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_3886241620(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialPartyChatRoom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
