// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusUpdateSessionCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOculusUpdateSessionCallbackProxy;
#ifdef ONLINESUBSYSTEMOCULUS_OculusUpdateSessionCallbackProxy_generated_h
#error "OculusUpdateSessionCallbackProxy.generated.h already included, missing '#pragma once' in OculusUpdateSessionCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMOCULUS_OculusUpdateSessionCallbackProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusUpdateSessionCallbackProxy_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSessionEnqueue);


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusUpdateSessionCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOculusUpdateSessionCallbackProxy(); \
	friend struct Z_Construct_UClass_UOculusUpdateSessionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UOculusUpdateSessionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemOculus"), ONLINESUBSYSTEMOCULUS_API) \
	DECLARE_SERIALIZER(UOculusUpdateSessionCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusUpdateSessionCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMOCULUS_API UOculusUpdateSessionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusUpdateSessionCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMOCULUS_API, UOculusUpdateSessionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusUpdateSessionCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusUpdateSessionCallbackProxy(UOculusUpdateSessionCallbackProxy&&); \
	UOculusUpdateSessionCallbackProxy(const UOculusUpdateSessionCallbackProxy&); \
public: \
	ONLINESUBSYSTEMOCULUS_API virtual ~UOculusUpdateSessionCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusUpdateSessionCallbackProxy_h_13_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusUpdateSessionCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusUpdateSessionCallbackProxy_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusUpdateSessionCallbackProxy_h_16_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusUpdateSessionCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMOCULUS_API UClass* StaticClass<class UOculusUpdateSessionCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusUpdateSessionCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
