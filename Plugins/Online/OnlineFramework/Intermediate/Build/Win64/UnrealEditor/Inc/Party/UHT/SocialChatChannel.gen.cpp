// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/Chat/SocialChatChannel.h"
#include "Party/Public/Chat/SocialChatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatChannel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARTY_API UClass* Z_Construct_UClass_USocialChatChannel();
PARTY_API UClass* Z_Construct_UClass_USocialChatChannel_NoRegister();
PARTY_API UEnum* Z_Construct_UEnum_Party_ESocialChannelType();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin Enum ESocialChannelType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocialChannelType;
static UEnum* ESocialChannelType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESocialChannelType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESocialChannelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_ESocialChannelType, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("ESocialChannelType"));
	}
	return Z_Registration_Info_UEnum_ESocialChannelType.OuterSingleton;
}
template<> PARTY_API UEnum* StaticEnum<ESocialChannelType>()
{
	return ESocialChannelType_StaticEnum();
}
struct Z_Construct_UEnum_Party_ESocialChannelType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Founder.Name", "ESocialChannelType::Founder" },
		{ "General.Name", "ESocialChannelType::General" },
		{ "ModuleRelativePath", "Public/Chat/SocialChatChannel.h" },
		{ "Party.Name", "ESocialChannelType::Party" },
		{ "Private.Name", "ESocialChannelType::Private" },
		{ "System.Name", "ESocialChannelType::System" },
		{ "Team.Name", "ESocialChannelType::Team" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESocialChannelType::General", (int64)ESocialChannelType::General },
		{ "ESocialChannelType::Founder", (int64)ESocialChannelType::Founder },
		{ "ESocialChannelType::Party", (int64)ESocialChannelType::Party },
		{ "ESocialChannelType::Team", (int64)ESocialChannelType::Team },
		{ "ESocialChannelType::System", (int64)ESocialChannelType::System },
		{ "ESocialChannelType::Private", (int64)ESocialChannelType::Private },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_ESocialChannelType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	"ESocialChannelType",
	"ESocialChannelType",
	Z_Construct_UEnum_Party_ESocialChannelType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialChannelType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialChannelType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Party_ESocialChannelType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Party_ESocialChannelType()
{
	if (!Z_Registration_Info_UEnum_ESocialChannelType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocialChannelType.InnerSingleton, Z_Construct_UEnum_Party_ESocialChannelType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESocialChannelType.InnerSingleton;
}
// End Enum ESocialChannelType

// Begin Class USocialChatChannel
void USocialChatChannel::StaticRegisterNativesUSocialChatChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialChatChannel);
UClass* Z_Construct_UClass_USocialChatChannel_NoRegister()
{
	return USocialChatChannel::StaticClass();
}
struct Z_Construct_UClass_USocialChatChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base SocialCore chat channel class (partial ISocialChatChannel implementation) */" },
#endif
		{ "IncludePath", "Chat/SocialChatChannel.h" },
		{ "ModuleRelativePath", "Public/Chat/SocialChatChannel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base SocialCore chat channel class (partial ISocialChatChannel implementation)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialChatChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USocialChatChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialChatChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialChatChannel_Statics::ClassParams = {
	&USocialChatChannel::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialChatChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialChatChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialChatChannel()
{
	if (!Z_Registration_Info_UClass_USocialChatChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialChatChannel.OuterSingleton, Z_Construct_UClass_USocialChatChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialChatChannel.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialChatChannel>()
{
	return USocialChatChannel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialChatChannel);
USocialChatChannel::~USocialChatChannel() {}
// End Class USocialChatChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESocialChannelType_StaticEnum, TEXT("ESocialChannelType"), &Z_Registration_Info_UEnum_ESocialChannelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 805727112U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialChatChannel, USocialChatChannel::StaticClass, TEXT("USocialChatChannel"), &Z_Registration_Info_UClass_USocialChatChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialChatChannel), 2183638987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_2409085525(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatChannel_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
