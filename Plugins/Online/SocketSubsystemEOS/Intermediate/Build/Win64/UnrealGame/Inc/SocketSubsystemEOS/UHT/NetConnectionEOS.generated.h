// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetConnectionEOS.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCKETSUBSYSTEMEOS_NetConnectionEOS_generated_h
#error "NetConnectionEOS.generated.h already included, missing '#pragma once' in NetConnectionEOS.h"
#endif
#define SOCKETSUBSYSTEMEOS_NetConnectionEOS_generated_h

#define FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetConnectionEOS(); \
	friend struct Z_Construct_UClass_UNetConnectionEOS_Statics; \
public: \
	DECLARE_CLASS(UNetConnectionEOS, UIpConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocketSubsystemEOS"), NO_API) \
	DECLARE_SERIALIZER(UNetConnectionEOS)


#define FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetConnectionEOS(UNetConnectionEOS&&); \
	UNetConnectionEOS(const UNetConnectionEOS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetConnectionEOS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetConnectionEOS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetConnectionEOS) \
	NO_API virtual ~UNetConnectionEOS();


#define FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_8_PROLOG
#define FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOCKETSUBSYSTEMEOS_API UClass* StaticClass<class UNetConnectionEOS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Private_NetConnectionEOS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
