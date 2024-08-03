// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chat/SocialChatRoom.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTY_SocialChatRoom_generated_h
#error "SocialChatRoom.generated.h already included, missing '#pragma once' in SocialChatRoom.h"
#endif
#define PARTY_SocialChatRoom_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialChatRoom(); \
	friend struct Z_Construct_UClass_USocialChatRoom_Statics; \
public: \
	DECLARE_CLASS(USocialChatRoom, USocialChatChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Party"), NO_API) \
	DECLARE_SERIALIZER(USocialChatRoom)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocialChatRoom(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USocialChatRoom(USocialChatRoom&&); \
	USocialChatRoom(const USocialChatRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialChatRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialChatRoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialChatRoom) \
	NO_API virtual ~USocialChatRoom();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_11_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTY_API UClass* StaticClass<class USocialChatRoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chat_SocialChatRoom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
