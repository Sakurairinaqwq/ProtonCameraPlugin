// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProtonCameraProfile.h"

#ifdef PROTONCAMERAPLUGIN_ProtonCameraProfile_generated_h
#error "ProtonCameraProfile.generated.h already included, missing '#pragma once' in ProtonCameraProfile.h"
#endif
#define PROTONCAMERAPLUGIN_ProtonCameraProfile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProtonCameraProfile *****************************************************
struct Z_Construct_UClass_UProtonCameraProfile_Statics;
PROTONCAMERAPLUGIN_API UClass* Z_Construct_UClass_UProtonCameraProfile_NoRegister();

#define FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProtonCameraProfile(); \
	friend struct ::Z_Construct_UClass_UProtonCameraProfile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROTONCAMERAPLUGIN_API UClass* ::Z_Construct_UClass_UProtonCameraProfile_NoRegister(); \
public: \
	DECLARE_CLASS2(UProtonCameraProfile, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProtonCameraPlugin"), Z_Construct_UClass_UProtonCameraProfile_NoRegister) \
	DECLARE_SERIALIZER(UProtonCameraProfile)


#define FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProtonCameraProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProtonCameraProfile(UProtonCameraProfile&&) = delete; \
	UProtonCameraProfile(const UProtonCameraProfile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProtonCameraProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProtonCameraProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProtonCameraProfile) \
	NO_API virtual ~UProtonCameraProfile();


#define FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h_13_PROLOG
#define FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h_16_INCLASS_NO_PURE_DECLS \
	FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProtonCameraProfile;

// ********** End Class UProtonCameraProfile *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraProfile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
