// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hotfix/Public/UpdateManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
HOTFIX_API UClass* Z_Construct_UClass_UUpdateManager();
HOTFIX_API UClass* Z_Construct_UClass_UUpdateManager_NoRegister();
HOTFIX_API UEnum* Z_Construct_UEnum_Hotfix_EHotfixResult();
HOTFIX_API UEnum* Z_Construct_UEnum_Hotfix_EUpdateCompletionStatus();
HOTFIX_API UEnum* Z_Construct_UEnum_Hotfix_EUpdateState();
HOTFIX_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateContextDefinition();
UPackage* Z_Construct_UPackage__Script_Hotfix();
// End Cross Module References

// Begin Enum EUpdateState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateState;
static UEnum* EUpdateState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUpdateState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUpdateState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Hotfix_EUpdateState, (UObject*)Z_Construct_UPackage__Script_Hotfix(), TEXT("EUpdateState"));
	}
	return Z_Registration_Info_UEnum_EUpdateState.OuterSingleton;
}
template<> HOTFIX_API UEnum* StaticEnum<EUpdateState>()
{
	return EUpdateState_StaticEnum();
}
struct Z_Construct_UEnum_Hotfix_EUpdateState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CheckingForHotfix.Comment", "/** Checking with hotfix for available updates */" },
		{ "CheckingForHotfix.Name", "EUpdateState::CheckingForHotfix" },
		{ "CheckingForHotfix.ToolTip", "Checking with hotfix for available updates" },
		{ "CheckingForPatch.Comment", "/** Checking for an available patch */" },
		{ "CheckingForPatch.Name", "EUpdateState::CheckingForPatch" },
		{ "CheckingForPatch.ToolTip", "Checking for an available patch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Various states the update manager flows through as it checks for patches/hotfixes\n */" },
#endif
		{ "InitialLoadComplete.Comment", "/** Preloading complete */" },
		{ "InitialLoadComplete.Name", "EUpdateState::InitialLoadComplete" },
		{ "InitialLoadComplete.ToolTip", "Preloading complete" },
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Various states the update manager flows through as it checks for patches/hotfixes" },
#endif
		{ "UpdateComplete.Comment", "/** Last update check completed successfully */" },
		{ "UpdateComplete.Name", "EUpdateState::UpdateComplete" },
		{ "UpdateComplete.ToolTip", "Last update check completed successfully" },
		{ "UpdateIdle.Comment", "/** No updates in progress */" },
		{ "UpdateIdle.Name", "EUpdateState::UpdateIdle" },
		{ "UpdateIdle.ToolTip", "No updates in progress" },
		{ "UpdatePending.Comment", "/** An update is waiting to be triggered at the right time */" },
		{ "UpdatePending.Name", "EUpdateState::UpdatePending" },
		{ "UpdatePending.ToolTip", "An update is waiting to be triggered at the right time" },
		{ "WaitingOnInitialLoad.Comment", "/** Waiting for the async loading / preloading to complete */" },
		{ "WaitingOnInitialLoad.Name", "EUpdateState::WaitingOnInitialLoad" },
		{ "WaitingOnInitialLoad.ToolTip", "Waiting for the async loading / preloading to complete" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUpdateState::UpdateIdle", (int64)EUpdateState::UpdateIdle },
		{ "EUpdateState::UpdatePending", (int64)EUpdateState::UpdatePending },
		{ "EUpdateState::CheckingForPatch", (int64)EUpdateState::CheckingForPatch },
		{ "EUpdateState::CheckingForHotfix", (int64)EUpdateState::CheckingForHotfix },
		{ "EUpdateState::WaitingOnInitialLoad", (int64)EUpdateState::WaitingOnInitialLoad },
		{ "EUpdateState::InitialLoadComplete", (int64)EUpdateState::InitialLoadComplete },
		{ "EUpdateState::UpdateComplete", (int64)EUpdateState::UpdateComplete },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Hotfix_EUpdateState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Hotfix,
	nullptr,
	"EUpdateState",
	"EUpdateState",
	Z_Construct_UEnum_Hotfix_EUpdateState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Hotfix_EUpdateState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Hotfix_EUpdateState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Hotfix_EUpdateState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Hotfix_EUpdateState()
{
	if (!Z_Registration_Info_UEnum_EUpdateState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateState.InnerSingleton, Z_Construct_UEnum_Hotfix_EUpdateState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUpdateState.InnerSingleton;
}
// End Enum EUpdateState

// Begin Enum EUpdateCompletionStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateCompletionStatus;
static UEnum* EUpdateCompletionStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUpdateCompletionStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUpdateCompletionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Hotfix_EUpdateCompletionStatus, (UObject*)Z_Construct_UPackage__Script_Hotfix(), TEXT("EUpdateCompletionStatus"));
	}
	return Z_Registration_Info_UEnum_EUpdateCompletionStatus.OuterSingleton;
}
template<> HOTFIX_API UEnum* StaticEnum<EUpdateCompletionStatus>()
{
	return EUpdateCompletionStatus_StaticEnum();
}
struct Z_Construct_UEnum_Hotfix_EUpdateCompletionStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Possible outcomes at the end of an update check\n */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible outcomes at the end of an update check" },
#endif
		{ "UpdateFailure_HotfixCheck.Comment", "/** Update failed in the hotfix check */" },
		{ "UpdateFailure_HotfixCheck.Name", "EUpdateCompletionStatus::UpdateFailure_HotfixCheck" },
		{ "UpdateFailure_HotfixCheck.ToolTip", "Update failed in the hotfix check" },
		{ "UpdateFailure_NotLoggedIn.Comment", "/** Update failed due to not being logged in */" },
		{ "UpdateFailure_NotLoggedIn.Name", "EUpdateCompletionStatus::UpdateFailure_NotLoggedIn" },
		{ "UpdateFailure_NotLoggedIn.ToolTip", "Update failed due to not being logged in" },
		{ "UpdateFailure_PatchCheck.Comment", "/** Update failed in the patch check */" },
		{ "UpdateFailure_PatchCheck.Name", "EUpdateCompletionStatus::UpdateFailure_PatchCheck" },
		{ "UpdateFailure_PatchCheck.ToolTip", "Update failed in the patch check" },
		{ "UpdateSuccess.Comment", "/** Update completed successfully, some changes applied */" },
		{ "UpdateSuccess.Name", "EUpdateCompletionStatus::UpdateSuccess" },
		{ "UpdateSuccess.ToolTip", "Update completed successfully, some changes applied" },
		{ "UpdateSuccess_NeedsPatch.Comment", "/** Update completed successfully, a patch must be download to continue */" },
		{ "UpdateSuccess_NeedsPatch.Name", "EUpdateCompletionStatus::UpdateSuccess_NeedsPatch" },
		{ "UpdateSuccess_NeedsPatch.ToolTip", "Update completed successfully, a patch must be download to continue" },
		{ "UpdateSuccess_NeedsRelaunch.Comment", "/** Update completed successfully, need to relaunch the game */" },
		{ "UpdateSuccess_NeedsRelaunch.Name", "EUpdateCompletionStatus::UpdateSuccess_NeedsRelaunch" },
		{ "UpdateSuccess_NeedsRelaunch.ToolTip", "Update completed successfully, need to relaunch the game" },
		{ "UpdateSuccess_NeedsReload.Comment", "/** Update completed successfully, need to reload the map */" },
		{ "UpdateSuccess_NeedsReload.Name", "EUpdateCompletionStatus::UpdateSuccess_NeedsReload" },
		{ "UpdateSuccess_NeedsReload.ToolTip", "Update completed successfully, need to reload the map" },
		{ "UpdateSuccess_NoChange.Comment", "/** Update completed successfully, no changed needed */" },
		{ "UpdateSuccess_NoChange.Name", "EUpdateCompletionStatus::UpdateSuccess_NoChange" },
		{ "UpdateSuccess_NoChange.ToolTip", "Update completed successfully, no changed needed" },
		{ "UpdateUnknown.Comment", "/** Unknown update completion */" },
		{ "UpdateUnknown.Name", "EUpdateCompletionStatus::UpdateUnknown" },
		{ "UpdateUnknown.ToolTip", "Unknown update completion" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUpdateCompletionStatus::UpdateUnknown", (int64)EUpdateCompletionStatus::UpdateUnknown },
		{ "EUpdateCompletionStatus::UpdateSuccess", (int64)EUpdateCompletionStatus::UpdateSuccess },
		{ "EUpdateCompletionStatus::UpdateSuccess_NoChange", (int64)EUpdateCompletionStatus::UpdateSuccess_NoChange },
		{ "EUpdateCompletionStatus::UpdateSuccess_NeedsReload", (int64)EUpdateCompletionStatus::UpdateSuccess_NeedsReload },
		{ "EUpdateCompletionStatus::UpdateSuccess_NeedsRelaunch", (int64)EUpdateCompletionStatus::UpdateSuccess_NeedsRelaunch },
		{ "EUpdateCompletionStatus::UpdateSuccess_NeedsPatch", (int64)EUpdateCompletionStatus::UpdateSuccess_NeedsPatch },
		{ "EUpdateCompletionStatus::UpdateFailure_PatchCheck", (int64)EUpdateCompletionStatus::UpdateFailure_PatchCheck },
		{ "EUpdateCompletionStatus::UpdateFailure_HotfixCheck", (int64)EUpdateCompletionStatus::UpdateFailure_HotfixCheck },
		{ "EUpdateCompletionStatus::UpdateFailure_NotLoggedIn", (int64)EUpdateCompletionStatus::UpdateFailure_NotLoggedIn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Hotfix_EUpdateCompletionStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Hotfix,
	nullptr,
	"EUpdateCompletionStatus",
	"EUpdateCompletionStatus",
	Z_Construct_UEnum_Hotfix_EUpdateCompletionStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Hotfix_EUpdateCompletionStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Hotfix_EUpdateCompletionStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Hotfix_EUpdateCompletionStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Hotfix_EUpdateCompletionStatus()
{
	if (!Z_Registration_Info_UEnum_EUpdateCompletionStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateCompletionStatus.InnerSingleton, Z_Construct_UEnum_Hotfix_EUpdateCompletionStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUpdateCompletionStatus.InnerSingleton;
}
// End Enum EUpdateCompletionStatus

// Begin ScriptStruct FUpdateContextDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateContextDefinition;
class UScriptStruct* FUpdateContextDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateContextDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateContextDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateContextDefinition, (UObject*)Z_Construct_UPackage__Script_Hotfix(), TEXT("UpdateContextDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateContextDefinition.OuterSingleton;
}
template<> HOTFIX_API UScriptStruct* StaticStruct<FUpdateContextDefinition>()
{
	return FUpdateContextDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Update context definition loaded from config.\n *\n * Defines the behavior to use during an update check.\n */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update context definition loaded from config.\n\nDefines the behavior to use during an update check." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name used to lookup the context definition. */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name used to lookup the context definition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to perform any checks. */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to perform any checks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckAvailabilityOnly_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to perform an update, or to only check for the presence of an update. */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to perform an update, or to only check for the presence of an update." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPatchCheckEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to check for patches during the update process. */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to check for patches during the update process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additional tags for extensibility. */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional tags for extensibility." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bCheckAvailabilityOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckAvailabilityOnly;
	static void NewProp_bPatchCheckEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPatchCheckEnabled;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalTags_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AdditionalTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateContextDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateContextDefinition, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FUpdateContextDefinition*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUpdateContextDefinition), &Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bCheckAvailabilityOnly_SetBit(void* Obj)
{
	((FUpdateContextDefinition*)Obj)->bCheckAvailabilityOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bCheckAvailabilityOnly = { "bCheckAvailabilityOnly", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUpdateContextDefinition), &Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bCheckAvailabilityOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckAvailabilityOnly_MetaData), NewProp_bCheckAvailabilityOnly_MetaData) };
void Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bPatchCheckEnabled_SetBit(void* Obj)
{
	((FUpdateContextDefinition*)Obj)->bPatchCheckEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bPatchCheckEnabled = { "bPatchCheckEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUpdateContextDefinition), &Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bPatchCheckEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPatchCheckEnabled_MetaData), NewProp_bPatchCheckEnabled_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_AdditionalTags_ElementProp = { "AdditionalTags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_AdditionalTags = { "AdditionalTags", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateContextDefinition, AdditionalTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalTags_MetaData), NewProp_AdditionalTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bCheckAvailabilityOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_bPatchCheckEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_AdditionalTags_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewProp_AdditionalTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Hotfix,
	nullptr,
	&NewStructOps,
	"UpdateContextDefinition",
	Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::PropPointers),
	sizeof(FUpdateContextDefinition),
	alignof(FUpdateContextDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateContextDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateContextDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateContextDefinition.InnerSingleton, Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpdateContextDefinition.InnerSingleton;
}
// End ScriptStruct FUpdateContextDefinition

// Begin Class UUpdateManager
void UUpdateManager::StaticRegisterNativesUUpdateManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpdateManager);
UClass* Z_Construct_UClass_UUpdateManager_NoRegister()
{
	return UUpdateManager::StaticClass();
}
struct Z_Construct_UClass_UUpdateManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Update manager\n *\n * Checks the system and/or backend for the possibility of a patch and hotfix\n * Will not apply a hotfix if a pending patch is available\n * Notifies the game of the result of the check\n * - possibly requires UI to prevent user from playing if a patch is available\n * - possibly requires UI to prevent user from player if a hotfix requires a reload of existing data\n */" },
#endif
		{ "IncludePath", "UpdateManager.h" },
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update manager\n\nChecks the system and/or backend for the possibility of a patch and hotfix\nWill not apply a hotfix if a pending patch is available\nNotifies the game of the result of the check\n- possibly requires UI to prevent user from playing if a patch is available\n- possibly requires UI to prevent user from player if a hotfix requires a reload of existing data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateCheckStartDelay_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time to wait before starting an update check. */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time to wait before starting an update check." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateCheckCachedResponseDelay_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time to wait before returning a cached response when updates are started. */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time to wait before returning a cached response when updates are started." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HotfixCheckCompleteDelay_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time to wait between the internal hotfix check completing and advancing to the next stage */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time to wait between the internal hotfix check completing and advancing to the next stage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateCheckCompleteDelay_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time to wait at the end of the entire check before notifying listening entities */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time to wait at the end of the entire check before notifying listening entities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HotfixAvailabilityCheckCompleteDelay_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time to wait between the internal hotfix availability check completing and advancing to the next stage */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time to wait between the internal hotfix availability check completing and advancing to the next stage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateCheckAvailabilityCompleteDelay_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time to wait at the end of the entire check before notifying listening entities (availability check only) */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time to wait at the end of the entire check before notifying listening entities (availability check only)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppSuspendedUpdateCheckTimeSeconds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If application is suspended longer than this, trigger an update check when resuming */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If application is suspended longer than this, trigger an update check when resuming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialUpdateFinished_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Has the first update completed */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Has the first update completed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckHotfixAvailabilityOnly_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is this run only checking and not applying */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this run only checking and not applying" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUpdateState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current state of the update */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current state of the update" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorstNumFilesPendingLoadViewed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What was the maximum number of pending async loads we've seen so far */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What was the maximum number of pending async loads we've seen so far" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastHotfixResult_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Result of the last hotfix */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of the last hotfix" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateCheck_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Timestamp of last update check (0:normal, 1:availability only) */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timestamp of last update check (0:normal, 1:availability only)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCompletionResult_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Last update check result (0:normal, 1:availability only) */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last update check result (0:normal, 1:availability only)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateStateEnum_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** String output */" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "String output" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateCompletionEnum_MetaData[] = {
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContextDefinitionUnknown_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Definition to use when a context lookup fails.\n" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Definition to use when a context lookup fails." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContextDefinitions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Definitions for update behavior.\n" },
#endif
		{ "ModuleRelativePath", "Public/UpdateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Definitions for update behavior." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateCheckStartDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateCheckCachedResponseDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HotfixCheckCompleteDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateCheckCompleteDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HotfixAvailabilityCheckCompleteDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateCheckAvailabilityCompleteDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppSuspendedUpdateCheckTimeSeconds;
	static void NewProp_bInitialUpdateFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialUpdateFinished;
	static void NewProp_bCheckHotfixAvailabilityOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckHotfixAvailabilityOnly;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentUpdateState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentUpdateState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorstNumFilesPendingLoadViewed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastHotfixResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LastHotfixResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastUpdateCheck;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastCompletionResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LastCompletionResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateStateEnum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateCompletionEnum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContextDefinitionUnknown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContextDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdateContextDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateCheckStartDelay = { "UpdateCheckStartDelay", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, UpdateCheckStartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateCheckStartDelay_MetaData), NewProp_UpdateCheckStartDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateCheckCachedResponseDelay = { "UpdateCheckCachedResponseDelay", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, UpdateCheckCachedResponseDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateCheckCachedResponseDelay_MetaData), NewProp_UpdateCheckCachedResponseDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_HotfixCheckCompleteDelay = { "HotfixCheckCompleteDelay", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, HotfixCheckCompleteDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HotfixCheckCompleteDelay_MetaData), NewProp_HotfixCheckCompleteDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateCheckCompleteDelay = { "UpdateCheckCompleteDelay", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, UpdateCheckCompleteDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateCheckCompleteDelay_MetaData), NewProp_UpdateCheckCompleteDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_HotfixAvailabilityCheckCompleteDelay = { "HotfixAvailabilityCheckCompleteDelay", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, HotfixAvailabilityCheckCompleteDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HotfixAvailabilityCheckCompleteDelay_MetaData), NewProp_HotfixAvailabilityCheckCompleteDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateCheckAvailabilityCompleteDelay = { "UpdateCheckAvailabilityCompleteDelay", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, UpdateCheckAvailabilityCompleteDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateCheckAvailabilityCompleteDelay_MetaData), NewProp_UpdateCheckAvailabilityCompleteDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_AppSuspendedUpdateCheckTimeSeconds = { "AppSuspendedUpdateCheckTimeSeconds", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, AppSuspendedUpdateCheckTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppSuspendedUpdateCheckTimeSeconds_MetaData), NewProp_AppSuspendedUpdateCheckTimeSeconds_MetaData) };
void Z_Construct_UClass_UUpdateManager_Statics::NewProp_bInitialUpdateFinished_SetBit(void* Obj)
{
	((UUpdateManager*)Obj)->bInitialUpdateFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_bInitialUpdateFinished = { "bInitialUpdateFinished", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUpdateManager), &Z_Construct_UClass_UUpdateManager_Statics::NewProp_bInitialUpdateFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialUpdateFinished_MetaData), NewProp_bInitialUpdateFinished_MetaData) };
void Z_Construct_UClass_UUpdateManager_Statics::NewProp_bCheckHotfixAvailabilityOnly_SetBit(void* Obj)
{
	((UUpdateManager*)Obj)->bCheckHotfixAvailabilityOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_bCheckHotfixAvailabilityOnly = { "bCheckHotfixAvailabilityOnly", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUpdateManager), &Z_Construct_UClass_UUpdateManager_Statics::NewProp_bCheckHotfixAvailabilityOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckHotfixAvailabilityOnly_MetaData), NewProp_bCheckHotfixAvailabilityOnly_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_CurrentUpdateState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_CurrentUpdateState = { "CurrentUpdateState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, CurrentUpdateState), Z_Construct_UEnum_Hotfix_EUpdateState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentUpdateState_MetaData), NewProp_CurrentUpdateState_MetaData) }; // 2462407136
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_WorstNumFilesPendingLoadViewed = { "WorstNumFilesPendingLoadViewed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, WorstNumFilesPendingLoadViewed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorstNumFilesPendingLoadViewed_MetaData), NewProp_WorstNumFilesPendingLoadViewed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_LastHotfixResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_LastHotfixResult = { "LastHotfixResult", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, LastHotfixResult), Z_Construct_UEnum_Hotfix_EHotfixResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastHotfixResult_MetaData), NewProp_LastHotfixResult_MetaData) }; // 1006494975
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_LastUpdateCheck = { "LastUpdateCheck", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(LastUpdateCheck, UUpdateManager), STRUCT_OFFSET(UUpdateManager, LastUpdateCheck), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateCheck_MetaData), NewProp_LastUpdateCheck_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_LastCompletionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_LastCompletionResult = { "LastCompletionResult", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(LastCompletionResult, UUpdateManager), STRUCT_OFFSET(UUpdateManager, LastCompletionResult), Z_Construct_UEnum_Hotfix_EUpdateCompletionStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCompletionResult_MetaData), NewProp_LastCompletionResult_MetaData) }; // 1664752831
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateStateEnum = { "UpdateStateEnum", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, UpdateStateEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateStateEnum_MetaData), NewProp_UpdateStateEnum_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateCompletionEnum = { "UpdateCompletionEnum", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, UpdateCompletionEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateCompletionEnum_MetaData), NewProp_UpdateCompletionEnum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateContextDefinitionUnknown = { "UpdateContextDefinitionUnknown", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, UpdateContextDefinitionUnknown), Z_Construct_UScriptStruct_FUpdateContextDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContextDefinitionUnknown_MetaData), NewProp_UpdateContextDefinitionUnknown_MetaData) }; // 4248197919
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateContextDefinitions_Inner = { "UpdateContextDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpdateContextDefinition, METADATA_PARAMS(0, nullptr) }; // 4248197919
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateContextDefinitions = { "UpdateContextDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateManager, UpdateContextDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContextDefinitions_MetaData), NewProp_UpdateContextDefinitions_MetaData) }; // 4248197919
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpdateManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateCheckStartDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateCheckCachedResponseDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_HotfixCheckCompleteDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateCheckCompleteDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_HotfixAvailabilityCheckCompleteDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateCheckAvailabilityCompleteDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_AppSuspendedUpdateCheckTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_bInitialUpdateFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_bCheckHotfixAvailabilityOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_CurrentUpdateState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_CurrentUpdateState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_WorstNumFilesPendingLoadViewed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_LastHotfixResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_LastHotfixResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_LastUpdateCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_LastCompletionResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_LastCompletionResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateStateEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateCompletionEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateContextDefinitionUnknown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateContextDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateManager_Statics::NewProp_UpdateContextDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUpdateManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Hotfix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpdateManager_Statics::ClassParams = {
	&UUpdateManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUpdateManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateManager_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UUpdateManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUpdateManager()
{
	if (!Z_Registration_Info_UClass_UUpdateManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateManager.OuterSingleton, Z_Construct_UClass_UUpdateManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUpdateManager.OuterSingleton;
}
template<> HOTFIX_API UClass* StaticClass<UUpdateManager>()
{
	return UUpdateManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateManager);
// End Class UUpdateManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUpdateState_StaticEnum, TEXT("EUpdateState"), &Z_Registration_Info_UEnum_EUpdateState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2462407136U) },
		{ EUpdateCompletionStatus_StaticEnum, TEXT("EUpdateCompletionStatus"), &Z_Registration_Info_UEnum_EUpdateCompletionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1664752831U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUpdateContextDefinition::StaticStruct, Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics::NewStructOps, TEXT("UpdateContextDefinition"), &Z_Registration_Info_UScriptStruct_UpdateContextDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateContextDefinition), 4248197919U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUpdateManager, UUpdateManager::StaticClass, TEXT("UUpdateManager"), &Z_Registration_Info_UClass_UUpdateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateManager), 355056737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_939761637(TEXT("/Script/Hotfix"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
