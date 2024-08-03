// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chatroom.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTY_Chatroom_generated_h
#error "Chatroom.generated.h already included, missing '#pragma once' in Chatroom.h"
#endif
#define PARTY_Chatroom_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChatroom(); \
	friend struct Z_Construct_UClass_UChatroom_Statics; \
public: \
	DECLARE_CLASS(UChatroom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Party"), NO_API) \
	DECLARE_SERIALIZER(UChatroom) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChatroom(UChatroom&&); \
	UChatroom(const UChatroom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChatroom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatroom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChatroom) \
	NO_API virtual ~UChatroom();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_30_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTY_API UClass* StaticClass<class UChatroom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Chatroom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
