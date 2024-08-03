// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/Chatroom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatroom() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARTY_API UClass* Z_Construct_UClass_UChatroom();
PARTY_API UClass* Z_Construct_UClass_UChatroom_NoRegister();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin Class UChatroom
void UChatroom::StaticRegisterNativesUChatroom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChatroom);
UClass* Z_Construct_UClass_UChatroom_NoRegister()
{
	return UChatroom::StaticClass();
}
struct Z_Construct_UClass_UChatroom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Helper class for maintaining a single chat room at the game level\n */" },
#endif
		{ "IncludePath", "Chatroom.h" },
		{ "ModuleRelativePath", "Public/Chatroom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper class for maintaining a single chat room at the game level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentChatRoomId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current chat room associated with this object (FString so UPROPERTY works) */" },
#endif
		{ "ModuleRelativePath", "Public/Chatroom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current chat room associated with this object (FString so UPROPERTY works)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxChatRoomRetries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max number of retries before giving up on chat */" },
#endif
		{ "ModuleRelativePath", "Public/Chatroom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max number of retries before giving up on chat" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChatRoomRetries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current number of retries on a chat room */" },
#endif
		{ "ModuleRelativePath", "Public/Chatroom.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current number of retries on a chat room" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentChatRoomId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChatRoomRetries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChatRoomRetries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatroom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChatroom_Statics::NewProp_CurrentChatRoomId = { "CurrentChatRoomId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChatroom, CurrentChatRoomId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentChatRoomId_MetaData), NewProp_CurrentChatRoomId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChatroom_Statics::NewProp_MaxChatRoomRetries = { "MaxChatRoomRetries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChatroom, MaxChatRoomRetries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxChatRoomRetries_MetaData), NewProp_MaxChatRoomRetries_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChatroom_Statics::NewProp_NumChatRoomRetries = { "NumChatRoomRetries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChatroom, NumChatRoomRetries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChatRoomRetries_MetaData), NewProp_NumChatRoomRetries_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChatroom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatroom_Statics::NewProp_CurrentChatRoomId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatroom_Statics::NewProp_MaxChatRoomRetries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatroom_Statics::NewProp_NumChatRoomRetries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatroom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChatroom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatroom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChatroom_Statics::ClassParams = {
	&UChatroom::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChatroom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChatroom_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChatroom_Statics::Class_MetaDataParams), Z_Construct_UClass_UChatroom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChatroom()
{
	if (!Z_Registration_Info_UClass_UChatroom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChatroom.OuterSingleton, Z_Construct_UClass_UChatroom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChatroom.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<UChatroom>()
{
	return UChatroom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChatroom);
UChatroom::~UChatroom() {}
// End Class UChatroom

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChatroom, UChatroom::StaticClass, TEXT("UChatroom"), &Z_Registration_Info_UClass_UChatroom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChatroom), 4022754730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_3932774807(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
