// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RejoinCheck.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REJOIN_RejoinCheck_generated_h
#error "RejoinCheck.generated.h already included, missing '#pragma once' in RejoinCheck.h"
#endif
#define REJOIN_RejoinCheck_generated_h

#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURejoinCheck(); \
	friend struct Z_Construct_UClass_URejoinCheck_Statics; \
public: \
	DECLARE_CLASS(URejoinCheck, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Rejoin"), NO_API) \
	DECLARE_SERIALIZER(URejoinCheck)


#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URejoinCheck(URejoinCheck&&); \
	URejoinCheck(const URejoinCheck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URejoinCheck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URejoinCheck); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URejoinCheck) \
	NO_API virtual ~URejoinCheck();


#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_74_PROLOG
#define FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_77_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REJOIN_API UClass* StaticClass<class URejoinCheck>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Rejoin_Public_RejoinCheck_h


#define FOREACH_ENUM_EREJOINSTATUS(op) \
	op(ERejoinStatus::NoMatchToRejoin) \
	op(ERejoinStatus::RejoinAvailable) \
	op(ERejoinStatus::UpdatingStatus) \
	op(ERejoinStatus::NeedsRecheck) \
	op(ERejoinStatus::NoMatchToRejoin_MatchEnded) 

enum class ERejoinStatus : uint8;
template<> struct TIsUEnumClass<ERejoinStatus> { enum { Value = true }; };
template<> REJOIN_API UEnum* StaticEnum<ERejoinStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
