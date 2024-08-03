// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/Public/User/SocialUser.h"
#include "Party/Public/SocialToolkit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialUser() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PARTY_API UClass* Z_Construct_UClass_USocialUser();
PARTY_API UClass* Z_Construct_UClass_USocialUser_NoRegister();
UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

// Begin Class USocialUser
void USocialUser::StaticRegisterNativesUSocialUser()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialUser);
UClass* Z_Construct_UClass_USocialUser_NoRegister()
{
	return USocialUser::StaticClass();
}
struct Z_Construct_UClass_USocialUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "User/SocialUser.h" },
		{ "ModuleRelativePath", "Public/User/SocialUser.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USocialUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Party,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocialUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialUser_Statics::ClassParams = {
	&USocialUser::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocialUser_Statics::Class_MetaDataParams), Z_Construct_UClass_USocialUser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocialUser()
{
	if (!Z_Registration_Info_UClass_USocialUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialUser.OuterSingleton, Z_Construct_UClass_USocialUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocialUser.OuterSingleton;
}
template<> PARTY_API UClass* StaticClass<USocialUser>()
{
	return USocialUser::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocialUser);
USocialUser::~USocialUser() {}
// End Class USocialUser

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_User_SocialUser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocialUser, USocialUser::StaticClass, TEXT("USocialUser"), &Z_Registration_Info_UClass_USocialUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialUser), 3441418511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_User_SocialUser_h_2436286324(TEXT("/Script/Party"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_User_SocialUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_Onslaught_Plugins_Online_OnlineFramework_Source_Party_Public_User_SocialUser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
