// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocialSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTY_SocialSettings_generated_h
#error "SocialSettings.generated.h already included, missing '#pragma once' in SocialSettings.h"
#endif
#define PARTY_SocialSettings_generated_h

#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


template<> PARTY_API UScriptStruct* StaticStruct<struct FSocialPlatformDescription>();

#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialSettings(); \
	friend struct Z_Construct_UClass_USocialSettings_Statics; \
public: \
	DECLARE_CLASS(USocialSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Party"), NO_API) \
	DECLARE_SERIALIZER(USocialSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USocialSettings(USocialSettings&&); \
	USocialSettings(const USocialSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocialSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialSettings) \
	NO_API virtual ~USocialSettings();


#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_49_PROLOG
#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_52_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTY_API UClass* StaticClass<class USocialSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
