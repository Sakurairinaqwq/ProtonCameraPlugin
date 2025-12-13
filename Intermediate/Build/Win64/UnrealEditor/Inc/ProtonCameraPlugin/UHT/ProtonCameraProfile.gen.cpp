// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProtonCameraProfile.h"
#include "ProtonCameraStructLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProtonCameraProfile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
PROTONCAMERAPLUGIN_API UClass* Z_Construct_UClass_UProtonCameraProfile();
PROTONCAMERAPLUGIN_API UClass* Z_Construct_UClass_UProtonCameraProfile_NoRegister();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonCameraProperties();
UPackage* Z_Construct_UPackage__Script_ProtonCameraPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UProtonCameraProfile *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProtonCameraProfile;
UClass* UProtonCameraProfile::GetPrivateStaticClass()
{
	using TClass = UProtonCameraProfile;
	if (!Z_Registration_Info_UClass_UProtonCameraProfile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProtonCameraProfile"),
			Z_Registration_Info_UClass_UProtonCameraProfile.InnerSingleton,
			StaticRegisterNativesUProtonCameraProfile,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UProtonCameraProfile.InnerSingleton;
}
UClass* Z_Construct_UClass_UProtonCameraProfile_NoRegister()
{
	return UProtonCameraProfile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProtonCameraProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  \xe4\xb8\x80\xe4\xb8\xaa\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98\xe4\xb8\x80\xe5\xa5\x97\xe5\xae\x8c\xe6\x95\xb4\xe7\x9a\x84Proton\xe7\x9b\xb8\xe6\x9c\xba\xe8\xa1\x8c\xe4\xb8\xba\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "ProtonCameraProfile.h" },
		{ "ModuleRelativePath", "Public/ProtonCameraProfile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x80\xe4\xb8\xaa\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98\xe4\xb8\x80\xe5\xa5\x97\xe5\xae\x8c\xe6\x95\xb4\xe7\x9a\x84Proton\xe7\x9b\xb8\xe6\x9c\xba\xe8\xa1\x8c\xe4\xb8\xba\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xae\x9a\xe4\xb9\x89\xe6\xad\xa4\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9b\xb8\xe6\x9c\xba\xe8\xa1\x8c\xe4\xb8\xba\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe9\x9b\x86\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/ProtonCameraProfile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x9a\xe4\xb9\x89\xe6\xad\xa4\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9b\xb8\xe6\x9c\xba\xe8\xa1\x8c\xe4\xb8\xba\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe9\x9b\x86\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UProtonCameraProfile constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UProtonCameraProfile constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProtonCameraProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProtonCameraProfile_Statics

// ********** Begin Class UProtonCameraProfile Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraProfile_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraProfile, Properties), Z_Construct_UScriptStruct_FProtonCameraProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) }; // 2365004740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProtonCameraProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraProfile_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProtonCameraProfile_Statics::PropPointers) < 2048);
// ********** End Class UProtonCameraProfile Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UProtonCameraProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProtonCameraProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProtonCameraProfile_Statics::ClassParams = {
	&UProtonCameraProfile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProtonCameraProfile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProtonCameraProfile_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProtonCameraProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UProtonCameraProfile_Statics::Class_MetaDataParams)
};
void UProtonCameraProfile::StaticRegisterNativesUProtonCameraProfile()
{
}
UClass* Z_Construct_UClass_UProtonCameraProfile()
{
	if (!Z_Registration_Info_UClass_UProtonCameraProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProtonCameraProfile.OuterSingleton, Z_Construct_UClass_UProtonCameraProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProtonCameraProfile.OuterSingleton;
}
UProtonCameraProfile::UProtonCameraProfile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProtonCameraProfile);
UProtonCameraProfile::~UProtonCameraProfile() {}
// ********** End Class UProtonCameraProfile *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h__Script_ProtonCameraPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProtonCameraProfile, UProtonCameraProfile::StaticClass, TEXT("UProtonCameraProfile"), &Z_Registration_Info_UClass_UProtonCameraProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProtonCameraProfile), 1131765638U) },
	};
}; // Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h__Script_ProtonCameraPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h__Script_ProtonCameraPlugin_1353286734{
	TEXT("/Script/ProtonCameraPlugin"),
	Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h__Script_ProtonCameraPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h__Script_ProtonCameraPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
