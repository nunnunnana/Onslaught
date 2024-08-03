// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusFindSessionsCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOculusFindSessionsCallbackProxy;
#ifdef ONLINESUBSYSTEMOCULUS_OculusFindSessionsCallbackProxy_generated_h
#error "OculusFindSessionsCallbackProxy.generated.h already included, missing '#pragma once' in OculusFindSessionsCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMOCULUS_OculusFindSessionsCallbackProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFindModeratedSessions); \
	DECLARE_FUNCTION(execFindMatchmakingSessions);


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUOculusFindSessionsCallbackProxy(); \
	friend struct Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UOculusFindSessionsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemOculus"), ONLINESUBSYSTEMOCULUS_API) \
	DECLARE_SERIALIZER(UOculusFindSessionsCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMOCULUS_API UOculusFindSessionsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusFindSessionsCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMOCULUS_API, UOculusFindSessionsCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusFindSessionsCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusFindSessionsCallbackProxy(UOculusFindSessionsCallbackProxy&&); \
	UOculusFindSessionsCallbackProxy(const UOculusFindSessionsCallbackProxy&); \
public: \
	ONLINESUBSYSTEMOCULUS_API virtual ~UOculusFindSessionsCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_14_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_17_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMOCULUS_API UClass* StaticClass<class UOculusFindSessionsCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
