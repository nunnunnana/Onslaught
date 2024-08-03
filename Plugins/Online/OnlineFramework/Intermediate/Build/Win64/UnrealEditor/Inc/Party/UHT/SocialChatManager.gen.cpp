// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/Chat/SocialChatManager.h"
#include "Party/Public/SocialToolkit.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
PARTY_API UClass* Z_Construct_UClass_USocialChatChannel_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialChatManager();
PARTY_API UClass* Z_Construct_UClass_USocialChatManager_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialChatRoom_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialGroupChannel_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialPrivateMessageChannel_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialReadOnlyChatChannel_NoRegister();
PARTY_API UClass* Z_Construct_UClass_USocialUser_NoRegister();
PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FSocialChatChannelConfig();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin ScriptStruct FSocialChatChannelConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SocialChatChannelConfig;
class UScriptStruct* FSocialChatChannelConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SocialChatChannelConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SocialChatChannelConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialChatChannelConfig, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("SocialChatChannelConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SocialChatChannelConfig.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FSocialChatChannelConfig>()
{
	return FSocialChatChannelConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocialUser_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListenChannels_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialChatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SocialUser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListenChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ListenChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialChatChannelConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::NewProp_SocialUser = { "SocialUser", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocialChatChannelConfig, SocialUser), Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocialUser_MetaData), NewProp_SocialUser_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::NewProp_ListenChannels_Inner = { "ListenChannels", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USocialChatChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::NewProp_ListenChannels = { "ListenChannels", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSocialChatChannelConfig, ListenChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListenChannels_MetaData), NewProp_ListenChannels_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::NewProp_SocialUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::NewProp_ListenChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::NewProp_ListenChannels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
	nullptr,
	&NewStructOps,
	"SocialChatChannelConfig",
	Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::PropPointers),
	sizeof(FSocialChatChannelConfig),
	alignof(FSocialChatChannelConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSocialChatChannelConfig()
{
	if (!Z_Registration_Info_UScriptStruct_SocialChatChannelConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SocialChatChannelConfig.InnerSingleton, Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SocialChatChannelConfig.InnerSingleton;
}
// End ScriptStruct FSocialChatChannelConfig

// Begin Class USocialChatManager
void USocialChatManager::StaticRegisterNativesUSocialChatManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialChatManager);
UClass* Z_Construct_UClass_USocialChatManager_NoRegister()
{
	return USocialChatManager::StaticClass();
}
struct Z_Construct_UClass_USocialChatManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The chat manager is a fully passive construct that watches for creation of chat rooms and message activity therein */" },
#endif
		{ "IncludePath", "Chat/SocialChatManager.h" },
		{ "ModuleRelativePath", "Public/Chat/SocialChatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The chat manager is a fully passive construct that watches for creation of chat rooms and message activity therein" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectChannelsByTargetUser_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatRoomsById_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadOnlyChannelsByDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableChatSlashCommands_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupChannels_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chat/SocialChatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectChannelsByTargetUser_ValueProp;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DirectChannelsByTargetUser_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DirectChannelsByTargetUser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatRoomsById_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatRoomsById_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ChatRoomsById;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadOnlyChannelsByDisplayName_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReadOnlyChannelsByDisplayName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReadOnlyChannelsByDisplayName;
	static void NewProp_bEnableChatSlashCommands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableChatSlashCommands;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroupChannels_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupChannels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GroupChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialChatManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_DirectChannelsByTargetUser_ValueProp = { "DirectChannelsByTargetUser", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USocialPrivateMessageChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_DirectChannelsByTargetUser_Key_KeyProp = { "DirectChannelsByTargetUser_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_DirectChannelsByTargetUser = { "DirectChannelsByTargetUser", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialChatManager, DirectChannelsByTargetUser), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectChannelsByTargetUser_MetaData), NewProp_DirectChannelsByTargetUser_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_ChatRoomsById_ValueProp = { "ChatRoomsById", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USocialChatRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_ChatRoomsById_Key_KeyProp = { "ChatRoomsById_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_ChatRoomsById = { "ChatRoomsById", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialChatManager, ChatRoomsById), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatRoomsById_MetaData), NewProp_ChatRoomsById_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_ReadOnlyChannelsByDisplayName_ValueProp = { "ReadOnlyChannelsByDisplayName", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USocialReadOnlyChatChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_ReadOnlyChannelsByDisplayName_Key_KeyProp = { "ReadOnlyChannelsByDisplayName_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_ReadOnlyChannelsByDisplayName = { "ReadOnlyChannelsByDisplayName", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialChatManager, ReadOnlyChannelsByDisplayName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadOnlyChannelsByDisplayName_MetaData), NewProp_ReadOnlyChannelsByDisplayName_MetaData) };
void Z_Construct_UClass_USocialChatManager_Statics::NewProp_bEnableChatSlashCommands_SetBit(void* Obj)
{
	((USocialChatManager*)Obj)->bEnableChatSlashCommands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_bEnableChatSlashCommands = { "bEnableChatSlashCommands", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USocialChatManager), &Z_Construct_UClass_USocialChatManager_Statics::NewProp_bEnableChatSlashCommands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableChatSlashCommands_MetaData), NewProp_bEnableChatSlashCommands_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_GroupChannels_ValueProp = { "GroupChannels", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USocialGroupChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_GroupChannels_Key_KeyProp = { "GroupChannels_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(0, nullptr) }; // 3410776867
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USocialChatManager_Statics::NewProp_GroupChannels = { "GroupChannels", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USocialChatManager, GroupChannels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupChannels_MetaData), NewProp_GroupChannels_MetaData) }; // 3410776867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialChatManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_DirectChannelsByTargetUser_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_DirectChannelsByTargetUser_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_DirectChannelsByTargetUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_ChatRoomsById_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_ChatRoomsById_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_ChatRoomsById,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_ReadOnlyChannelsByDisplayName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_ReadOnlyChannelsByDisplayName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_ReadOnlyChannelsByDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_bEnableChatSlashCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_GroupChannels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_GroupChannels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatManager_Statics::NewProp_GroupChannels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialChatManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USocialChatManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialChatManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialChatManager_Statics::ClassParams = {
	&USocialChatManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USocialChatManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USocialChatManager_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialChatManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialChatManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialChatManager()
{
	if (!Z_Registration_Info_UClass_USocialChatManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialChatManager.OuterSingleton, Z_Construct_UClass_USocialChatManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialChatManager.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialChatManager>()
{
	return USocialChatManager::StaticClass();
}
USocialChatManager::USocialChatManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialChatManager);
USocialChatManager::~USocialChatManager() {}
// End Class USocialChatManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSocialChatChannelConfig::StaticStruct, Z_Construct_UScriptStruct_FSocialChatChannelConfig_Statics::NewStructOps, TEXT("SocialChatChannelConfig"), &Z_Registration_Info_UScriptStruct_SocialChatChannelConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocialChatChannelConfig), 2415731820U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialChatManager, USocialChatManager::StaticClass, TEXT("USocialChatManager"), &Z_Registration_Info_UClass_USocialChatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialChatManager), 2215665301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_3102089532(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
