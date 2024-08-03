// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusCreateSessionCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOculusCreateSessionCallbackProxy;
#ifdef ONLINESUBSYSTEMOCULUS_OculusCreateSessionCallbackProxy_generated_h
#error "OculusCreateSessionCallbackProxy.generated.h already included, missing '#pragma once' in OculusCreateSessionCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMOCULUS_OculusCreateSessionCallbackProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateSession);


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOculusCreateSessionCallbackProxy(); \
	friend struct Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UOculusCreateSessionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemOculus"), ONLINESUBSYSTEMOCULUS_API) \
	DECLARE_SERIALIZER(UOculusCreateSessionCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMOCULUS_API UOculusCreateSessionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusCreateSessionCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMOCULUS_API, UOculusCreateSessionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusCreateSessionCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusCreateSessionCallbackProxy(UOculusCreateSessionCallbackProxy&&); \
	UOculusCreateSessionCallbackProxy(const UOculusCreateSessionCallbackProxy&); \
public: \
	ONLINESUBSYSTEMOCULUS_API virtual ~UOculusCreateSessionCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_13_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_16_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMOCULUS_API UClass* StaticClass<class UOculusCreateSessionCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
