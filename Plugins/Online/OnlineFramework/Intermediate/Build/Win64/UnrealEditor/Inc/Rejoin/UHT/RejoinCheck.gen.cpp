// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rejoin/Public/RejoinCheck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRejoinCheck() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
REJOIN_API UClass* Z_Construct_UClass_URejoinCheck();
REJOIN_API UClass* Z_Construct_UClass_URejoinCheck_NoRegister();
REJOIN_API UEnum* Z_Construct_UEnum_Rejoin_ERejoinStatus();
UPackage* Z_Construct_UPackage__Script_Rejoin();
// End Cross Module References

// Begin Enum ERejoinStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERejoinStatus;
static UEnum* ERejoinStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERejoinStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERejoinStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Rejoin_ERejoinStatus, (UObject*)Z_Construct_UPackage__Script_Rejoin(), TEXT("ERejoinStatus"));
	}
	return Z_Registration_Info_UEnum_ERejoinStatus.OuterSingleton;
}
template<> REJOIN_API UEnum* StaticEnum<ERejoinStatus>()
{
	return ERejoinStatus_StaticEnum();
}
struct Z_Construct_UEnum_Rejoin_ERejoinStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Possible states that a rejoin check can be in at any given time\n */" },
#endif
		{ "ModuleRelativePath", "Public/RejoinCheck.h" },
		{ "NeedsRecheck.Comment", "// We need to recheck the state before allowing any further progress through the UI (e.g right after login or right after leaving a match without it ending normally).\n" },
		{ "NeedsRecheck.Name", "ERejoinStatus::NeedsRecheck" },
		{ "NeedsRecheck.ToolTip", "We need to recheck the state before allowing any further progress through the UI (e.g right after login or right after leaving a match without it ending normally)." },
		{ "NoMatchToRejoin.Comment", "// There is no match to rejoin.  The user is already in a match or there is no match in progress for the user. \n" },
		{ "NoMatchToRejoin.Name", "ERejoinStatus::NoMatchToRejoin" },
		{ "NoMatchToRejoin.ToolTip", "There is no match to rejoin.  The user is already in a match or there is no match in progress for the user." },
		{ "NoMatchToRejoin_MatchEnded.Comment", "// Match ended normally, no check required (only set when returning from a match)\n" },
		{ "NoMatchToRejoin_MatchEnded.Name", "ERejoinStatus::NoMatchToRejoin_MatchEnded" },
		{ "NoMatchToRejoin_MatchEnded.ToolTip", "Match ended normally, no check required (only set when returning from a match)" },
		{ "RejoinAvailable.Comment", "// There is a rejoin available for the user\n" },
		{ "RejoinAvailable.Name", "ERejoinStatus::RejoinAvailable" },
		{ "RejoinAvailable.ToolTip", "There is a rejoin available for the user" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible states that a rejoin check can be in at any given time" },
#endif
		{ "UpdatingStatus.Comment", "// We are currently updating the status of rejoin\n" },
		{ "UpdatingStatus.Name", "ERejoinStatus::UpdatingStatus" },
		{ "UpdatingStatus.ToolTip", "We are currently updating the status of rejoin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERejoinStatus::NoMatchToRejoin", (int64)ERejoinStatus::NoMatchToRejoin },
		{ "ERejoinStatus::RejoinAvailable", (int64)ERejoinStatus::RejoinAvailable },
		{ "ERejoinStatus::UpdatingStatus", (int64)ERejoinStatus::UpdatingStatus },
		{ "ERejoinStatus::NeedsRecheck", (int64)ERejoinStatus::NeedsRecheck },
		{ "ERejoinStatus::NoMatchToRejoin_MatchEnded", (int64)ERejoinStatus::NoMatchToRejoin_MatchEnded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Rejoin_ERejoinStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Rejoin,
	nullptr,
	"ERejoinStatus",
	"ERejoinStatus",
	Z_Construct_UEnum_Rejoin_ERejoinStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Rejoin_ERejoinStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Rejoin_ERejoinStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Rejoin_ERejoinStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Rejoin_ERejoinStatus()
{
	if (!Z_Registration_Info_UEnum_ERejoinStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERejoinStatus.InnerSingleton, Z_Construct_UEnum_Rejoin_ERejoinStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERejoinStatus.InnerSingleton;
}
// End Enum ERejoinStatus

// Begin Class URejoinCheck
void URejoinCheck::StaticRegisterNativesURejoinCheck()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URejoinCheck);
UClass* Z_Construct_UClass_URejoinCheck_NoRegister()
{
	return URejoinCheck::StaticClass();
}
struct Z_Construct_UClass_URejoinCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Class responsible for maintaining the status/availability of a session already in progress for a client to join\n */" },
#endif
		{ "IncludePath", "RejoinCheck.h" },
		{ "ModuleRelativePath", "Public/RejoinCheck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class responsible for maintaining the status/availability of a session already in progress for a client to join" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownStatus_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rejoin status */" },
#endif
		{ "ModuleRelativePath", "Public/RejoinCheck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rejoin status" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRejoinAfterCheck_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flag set during a possible brief period where the user hit rejoin but the check was already in flight */" },
#endif
		{ "ModuleRelativePath", "Public/RejoinCheck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag set during a possible brief period where the user hit rejoin but the check was already in flight" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttemptingRejoin_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is a rejoin attempt in progress, prevents reentry */" },
#endif
		{ "ModuleRelativePath", "Public/RejoinCheck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is a rejoin attempt in progress, prevents reentry" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastKnownStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LastKnownStatus;
	static void NewProp_bRejoinAfterCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRejoinAfterCheck;
	static void NewProp_bAttemptingRejoin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttemptingRejoin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URejoinCheck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URejoinCheck_Statics::NewProp_LastKnownStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URejoinCheck_Statics::NewProp_LastKnownStatus = { "LastKnownStatus", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URejoinCheck, LastKnownStatus), Z_Construct_UEnum_Rejoin_ERejoinStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownStatus_MetaData), NewProp_LastKnownStatus_MetaData) }; // 4230565787
void Z_Construct_UClass_URejoinCheck_Statics::NewProp_bRejoinAfterCheck_SetBit(void* Obj)
{
	((URejoinCheck*)Obj)->bRejoinAfterCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URejoinCheck_Statics::NewProp_bRejoinAfterCheck = { "bRejoinAfterCheck", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URejoinCheck), &Z_Construct_UClass_URejoinCheck_Statics::NewProp_bRejoinAfterCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRejoinAfterCheck_MetaData), NewProp_bRejoinAfterCheck_MetaData) };
void Z_Construct_UClass_URejoinCheck_Statics::NewProp_bAttemptingRejoin_SetBit(void* Obj)
{
	((URejoinCheck*)Obj)->bAttemptingRejoin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URejoinCheck_Statics::NewProp_bAttemptingRejoin = { "bAttemptingRejoin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URejoinCheck), &Z_Construct_UClass_URejoinCheck_Statics::NewProp_bAttemptingRejoin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttemptingRejoin_MetaData), NewProp_bAttemptingRejoin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URejoinCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URejoinCheck_Statics::NewProp_LastKnownStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URejoinCheck_Statics::NewProp_LastKnownStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URejoinCheck_Statics::NewProp_bRejoinAfterCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URejoinCheck_Statics::NewProp_bAttemptingRejoin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URejoinCheck_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URejoinCheck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Rejoin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URejoinCheck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URejoinCheck_Statics::ClassParams = {
	&URejoinCheck::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URejoinCheck_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URejoinCheck_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URejoinCheck_Statics::Class_MetaDataParams), Z_Construct_UClass_URejoinCheck_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URejoinCheck()
{
	if (!Z_Registration_Info_UClass_URejoinCheck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URejoinCheck.OuterSingleton, Z_Construct_UClass_URejoinCheck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URejoinCheck.OuterSingleton;
}
template<> REJOIN_API UClass* StaticClass<URejoinCheck>()
{
	return URejoinCheck::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URejoinCheck);
URejoinCheck::~URejoinCheck() {}
// End Class URejoinCheck

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERejoinStatus_StaticEnum, TEXT("ERejoinStatus"), &Z_Registration_Info_UEnum_ERejoinStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4230565787U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URejoinCheck, URejoinCheck::StaticClass, TEXT("URejoinCheck"), &Z_Registration_Info_UClass_URejoinCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URejoinCheck), 1984463793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_1232807797(TEXT("/Script/Rejoin"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
