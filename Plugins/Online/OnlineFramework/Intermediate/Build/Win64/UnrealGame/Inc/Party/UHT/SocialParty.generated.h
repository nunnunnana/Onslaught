// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Party/SocialParty.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTY_SocialParty_generated_h
#error "SocialParty.generated.h already included, missing '#pragma once' in SocialParty.h"
#endif
#define PARTY_SocialParty_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartyRepData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FOnlinePartyRepDataBase Super;


template<> PARTY_API UScriptStruct* StaticStruct<struct FPartyRepData>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialParty(); \
	friend struct Z_Construct_UClass_USocialParty_Statics; \
public: \
	DECLARE_CLASS(USocialParty, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Party"), NO_API) \
	DECLARE_SERIALIZER(USocialParty) \
	DECLARE_WITHIN(USocialManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USocialParty(USocialParty&&); \
	USocialParty(const USocialParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialParty); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USocialParty) \
	NO_API virtual ~USocialParty();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_79_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTY_API UClass* StaticClass<class USocialParty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
