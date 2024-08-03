// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lobby/Public/LobbyBeaconState.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyBeaconState() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AInfo();
LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister();
LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconState();
LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconState_NoRegister();
LOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo();
LOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_Lobby();
// End Cross Module References

// Begin ScriptStruct FLobbyPlayerStateActorInfo
static_assert(std::is_polymorphic<FLobbyPlayerStateActorInfo>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FLobbyPlayerStateActorInfo cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo;
class UScriptStruct* FLobbyPlayerStateActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo, (UObject*)Z_Construct_UPackage__Script_Lobby(), TEXT("LobbyPlayerStateActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.OuterSingleton;
}
template<> LOBBY_API UScriptStruct* StaticStruct<FLobbyPlayerStateActorInfo>()
{
	return FLobbyPlayerStateActorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Replication structure for a single beacon player state\n */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication structure for a single beacon player state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyPlayerState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actual player state actor */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actual player state actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LobbyPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyPlayerStateActorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::NewProp_LobbyPlayerState = { "LobbyPlayerState", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyPlayerStateActorInfo, LobbyPlayerState), Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyPlayerState_MetaData), NewProp_LobbyPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::NewProp_LobbyPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Lobby,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"LobbyPlayerStateActorInfo",
	Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::PropPointers),
	sizeof(FLobbyPlayerStateActorInfo),
	alignof(FLobbyPlayerStateActorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.InnerSingleton;
}
// End ScriptStruct FLobbyPlayerStateActorInfo

// Begin ScriptStruct FLobbyPlayerStateInfoArray
static_assert(std::is_polymorphic<FLobbyPlayerStateInfoArray>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FLobbyPlayerStateInfoArray cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray;
class UScriptStruct* FLobbyPlayerStateInfoArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray, (UObject*)Z_Construct_UPackage__Script_Lobby(), TEXT("LobbyPlayerStateInfoArray"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.OuterSingleton;
}
template<> LOBBY_API UScriptStruct* StaticStruct<FLobbyPlayerStateInfoArray>()
{
	return FLobbyPlayerStateInfoArray::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FLobbyPlayerStateInfoArray);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FLobbyPlayerStateInfoArray);
#endif
struct Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Struct for fast TArray replication of lobby player state */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for fast TArray replication of lobby player state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All of the players in the lobby */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All of the players in the lobby" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Owning lobby beacon for this array of players */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Owning lobby beacon for this array of players" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Players_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyPlayerStateInfoArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo, METADATA_PARAMS(0, nullptr) }; // 305830077
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyPlayerStateInfoArray, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) }; // 305830077
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_ParentState = { "ParentState", nullptr, (EPropertyFlags)0x0144000080000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLobbyPlayerStateInfoArray, ParentState), Z_Construct_UClass_ALobbyBeaconState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentState_MetaData), NewProp_ParentState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_Players_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_Players,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_ParentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Lobby,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"LobbyPlayerStateInfoArray",
	Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::PropPointers),
	sizeof(FLobbyPlayerStateInfoArray),
	alignof(FLobbyPlayerStateInfoArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.InnerSingleton, Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.InnerSingleton;
}
// End ScriptStruct FLobbyPlayerStateInfoArray

// Begin Class ALobbyBeaconState Function OnRep_LobbyStarted
struct Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle the lobby starting */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle the lobby starting" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconState, nullptr, "OnRep_LobbyStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyBeaconState::execOnRep_LobbyStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LobbyStarted();
	P_NATIVE_END;
}
// End Class ALobbyBeaconState Function OnRep_LobbyStarted

// Begin Class ALobbyBeaconState Function OnRep_WaitForPlayersTimeRemaining
struct Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle notification of time left to wait for lobby to start */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle notification of time left to wait for lobby to start" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconState, nullptr, "OnRep_WaitForPlayersTimeRemaining", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyBeaconState::execOnRep_WaitForPlayersTimeRemaining)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_WaitForPlayersTimeRemaining();
	P_NATIVE_END;
}
// End Class ALobbyBeaconState Function OnRep_WaitForPlayersTimeRemaining

// Begin Class ALobbyBeaconState
void ALobbyBeaconState::StaticRegisterNativesALobbyBeaconState()
{
	UClass* Class = ALobbyBeaconState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_LobbyStarted", &ALobbyBeaconState::execOnRep_LobbyStarted },
		{ "OnRep_WaitForPlayersTimeRemaining", &ALobbyBeaconState::execOnRep_WaitForPlayersTimeRemaining },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyBeaconState);
UClass* Z_Construct_UClass_ALobbyBeaconState_NoRegister()
{
	return ALobbyBeaconState::StaticClass();
}
struct Z_Construct_UClass_ALobbyBeaconState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Shared state of the game from the lobby perspective\n * Duplicates much of the data in the traditional AGameState object for sharing with players\n * connected via beacon only\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LobbyBeaconState.h" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shared state of the game from the lobby perspective\nDuplicates much of the data in the traditional AGameState object for sharing with players\nconnected via beacon only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total number of players allowed in the lobby */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total number of players allowed in the lobby" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyBeaconPlayerStateClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class to use for lobby beacon player states */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to use for lobby beacon player states" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLobbyStarted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Has the lobby already been started */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Has the lobby already been started" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitForPlayersTimeRemaining_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time waiting for other players before starting the lobby */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time waiting for other players before starting the lobby" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of players currently in the game, lobby or otherwise */" },
#endif
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of players currently in the game, lobby or otherwise" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LobbyBeaconPlayerStateClass;
	static void NewProp_bLobbyStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLobbyStarted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitForPlayersTimeRemaining;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Players;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted, "OnRep_LobbyStarted" }, // 1284022152
		{ &Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining, "OnRep_WaitForPlayersTimeRemaining" }, // 408928075
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyBeaconState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyBeaconState, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayers_MetaData), NewProp_MaxPlayers_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_LobbyBeaconPlayerStateClass = { "LobbyBeaconPlayerStateClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyBeaconState, LobbyBeaconPlayerStateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyBeaconPlayerStateClass_MetaData), NewProp_LobbyBeaconPlayerStateClass_MetaData) };
void Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_bLobbyStarted_SetBit(void* Obj)
{
	((ALobbyBeaconState*)Obj)->bLobbyStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_bLobbyStarted = { "bLobbyStarted", "OnRep_LobbyStarted", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALobbyBeaconState), &Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_bLobbyStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLobbyStarted_MetaData), NewProp_bLobbyStarted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_WaitForPlayersTimeRemaining = { "WaitForPlayersTimeRemaining", "OnRep_WaitForPlayersTimeRemaining", (EPropertyFlags)0x0020080100004020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyBeaconState, WaitForPlayersTimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitForPlayersTimeRemaining_MetaData), NewProp_WaitForPlayersTimeRemaining_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyBeaconState, Players), Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) }; // 4165290949
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyBeaconState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_LobbyBeaconPlayerStateClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_bLobbyStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_WaitForPlayersTimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_Players,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALobbyBeaconState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Lobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyBeaconState_Statics::ClassParams = {
	&ALobbyBeaconState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALobbyBeaconState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconState_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconState_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyBeaconState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALobbyBeaconState()
{
	if (!Z_Registration_Info_UClass_ALobbyBeaconState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyBeaconState.OuterSingleton, Z_Construct_UClass_ALobbyBeaconState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyBeaconState.OuterSingleton;
}
template<> LOBBY_API UClass* StaticClass<ALobbyBeaconState>()
{
	return ALobbyBeaconState::StaticClass();
}
void ALobbyBeaconState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bLobbyStarted(TEXT("bLobbyStarted"));
	static const FName Name_WaitForPlayersTimeRemaining(TEXT("WaitForPlayersTimeRemaining"));
	static const FName Name_Players(TEXT("Players"));
	const bool bIsValid = true
		&& Name_bLobbyStarted == ClassReps[(int32)ENetFields_Private::bLobbyStarted].Property->GetFName()
		&& Name_WaitForPlayersTimeRemaining == ClassReps[(int32)ENetFields_Private::WaitForPlayersTimeRemaining].Property->GetFName()
		&& Name_Players == ClassReps[(int32)ENetFields_Private::Players].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALobbyBeaconState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyBeaconState);
ALobbyBeaconState::~ALobbyBeaconState() {}
// End Class ALobbyBeaconState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLobbyPlayerStateActorInfo::StaticStruct, Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::NewStructOps, TEXT("LobbyPlayerStateActorInfo"), &Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyPlayerStateActorInfo), 305830077U) },
		{ FLobbyPlayerStateInfoArray::StaticStruct, Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewStructOps, TEXT("LobbyPlayerStateInfoArray"), &Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyPlayerStateInfoArray), 4165290949U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyBeaconState, ALobbyBeaconState::StaticClass, TEXT("ALobbyBeaconState"), &Z_Registration_Info_UClass_ALobbyBeaconState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyBeaconState), 3804619631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_1006055908(TEXT("/Script/Lobby"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
