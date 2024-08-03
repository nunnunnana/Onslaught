// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyBeaconHost.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOBBY_LobbyBeaconHost_generated_h
#error "LobbyBeaconHost.generated.h already included, missing '#pragma once' in LobbyBeaconHost.h"
#endif
#define LOBBY_LobbyBeaconHost_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_24_INCLASS \
private: \
	static void StaticRegisterNativesALobbyBeaconHost(); \
	friend struct Z_Construct_UClass_ALobbyBeaconHost_Statics; \
public: \
	DECLARE_CLASS(ALobbyBeaconHost, AOnlineBeaconHostObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lobby"), NO_API) \
	DECLARE_SERIALIZER(ALobbyBeaconHost)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyBeaconHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyBeaconHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyBeaconHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyBeaconHost); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALobbyBeaconHost(ALobbyBeaconHost&&); \
	ALobbyBeaconHost(const ALobbyBeaconHost&); \
public: \
	NO_API virtual ~ALobbyBeaconHost();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_21_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_24_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOBBY_API UClass* StaticClass<class ALobbyBeaconHost>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconHost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
