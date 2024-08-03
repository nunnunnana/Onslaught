// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlineHotfixManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOTFIX_OnlineHotfixManager_generated_h
#error "OnlineHotfixManager.generated.h already included, missing '#pragma once' in OnlineHotfixManager.h"
#endif
#define HOTFIX_OnlineHotfixManager_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartHotfixProcess);


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineHotfixManager(); \
	friend struct Z_Construct_UClass_UOnlineHotfixManager_Statics; \
public: \
	DECLARE_CLASS(UOnlineHotfixManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hotfix"), NO_API) \
	DECLARE_SERIALIZER(UOnlineHotfixManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_92_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnlineHotfixManager(UOnlineHotfixManager&&); \
	UOnlineHotfixManager(const UOnlineHotfixManager&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineHotfixManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlineHotfixManager)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_88_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOTFIX_API UClass* StaticClass<class UOnlineHotfixManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h


#define FOREACH_ENUM_EHOTFIXRESULT(op) \
	op(EHotfixResult::Failed) \
	op(EHotfixResult::Success) \
	op(EHotfixResult::SuccessNoChange) \
	op(EHotfixResult::SuccessNeedsReload) \
	op(EHotfixResult::SuccessNeedsRelaunch) 

enum class EHotfixResult : uint8;
template<> struct TIsUEnumClass<EHotfixResult> { enum { Value = true }; };
template<> HOTFIX_API UEnum* StaticEnum<EHotfixResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
