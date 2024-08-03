// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UpdateManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOTFIX_UpdateManager_generated_h
#error "UpdateManager.generated.h already included, missing '#pragma once' in UpdateManager.h"
#endif
#define HOTFIX_UpdateManager_generated_h

#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOTFIX_API UScriptStruct* StaticStruct<struct FUpdateContextDefinition>();

#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateManager(); \
	friend struct Z_Construct_UClass_UUpdateManager_Statics; \
public: \
	DECLARE_CLASS(UUpdateManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hotfix"), NO_API) \
	DECLARE_SERIALIZER(UUpdateManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_143_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUpdateManager(UUpdateManager&&); \
	UUpdateManager(const UUpdateManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUpdateManager)


#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_140_PROLOG
#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_143_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOTFIX_API UClass* StaticClass<class UUpdateManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h


#define FOREACH_ENUM_EUPDATESTATE(op) \
	op(EUpdateState::UpdateIdle) \
	op(EUpdateState::UpdatePending) \
	op(EUpdateState::CheckingForPatch) \
	op(EUpdateState::CheckingForHotfix) \
	op(EUpdateState::WaitingOnInitialLoad) \
	op(EUpdateState::InitialLoadComplete) \
	op(EUpdateState::UpdateComplete) 

enum class EUpdateState : uint8;
template<> struct TIsUEnumClass<EUpdateState> { enum { Value = true }; };
template<> HOTFIX_API UEnum* StaticEnum<EUpdateState>();

#define FOREACH_ENUM_EUPDATECOMPLETIONSTATUS(op) \
	op(EUpdateCompletionStatus::UpdateUnknown) \
	op(EUpdateCompletionStatus::UpdateSuccess) \
	op(EUpdateCompletionStatus::UpdateSuccess_NoChange) \
	op(EUpdateCompletionStatus::UpdateSuccess_NeedsReload) \
	op(EUpdateCompletionStatus::UpdateSuccess_NeedsRelaunch) \
	op(EUpdateCompletionStatus::UpdateSuccess_NeedsPatch) \
	op(EUpdateCompletionStatus::UpdateFailure_PatchCheck) \
	op(EUpdateCompletionStatus::UpdateFailure_HotfixCheck) \
	op(EUpdateCompletionStatus::UpdateFailure_NotLoggedIn) 

enum class EUpdateCompletionStatus : uint8;
template<> struct TIsUEnumClass<EUpdateCompletionStatus> { enum { Value = true }; };
template<> HOTFIX_API UEnum* StaticEnum<EUpdateCompletionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
