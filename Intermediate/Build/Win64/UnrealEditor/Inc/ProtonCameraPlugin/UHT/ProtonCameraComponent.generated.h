// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProtonCameraComponent.h"

#ifdef PROTONCAMERAPLUGIN_ProtonCameraComponent_generated_h
#error "ProtonCameraComponent.generated.h already included, missing '#pragma once' in ProtonCameraComponent.h"
#endif
#define PROTONCAMERAPLUGIN_ProtonCameraComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraShakeBase;
class UClass;
class UProtonCameraProfile;
enum class EProtonCameraModifierType : uint8;

// ********** Begin Class UProtonCameraComponent ***************************************************
#define FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCycleCameraProfile); \
	DECLARE_FUNCTION(execGetCycleIndex); \
	DECLARE_FUNCTION(execGetProfileAtCycleIndex); \
	DECLARE_FUNCTION(execGetModifierEffect); \
	DECLARE_FUNCTION(execSetIntoReverse); \
	DECLARE_FUNCTION(execAddImpactShake); \
	DECLARE_FUNCTION(execAddManualShake); \
	DECLARE_FUNCTION(execAddManualFOV); \
	DECLARE_FUNCTION(execAddManualSpinAngle); \
	DECLARE_FUNCTION(execAddManualSpinXY); \
	DECLARE_FUNCTION(execAddManualRotation); \
	DECLARE_FUNCTION(execAddManualOffset); \
	DECLARE_FUNCTION(execAddManualLength); \
	DECLARE_FUNCTION(execSetPhysicsProperties);


struct Z_Construct_UClass_UProtonCameraComponent_Statics;
PROTONCAMERAPLUGIN_API UClass* Z_Construct_UClass_UProtonCameraComponent_NoRegister();

#define FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProtonCameraComponent(); \
	friend struct ::Z_Construct_UClass_UProtonCameraComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROTONCAMERAPLUGIN_API UClass* ::Z_Construct_UClass_UProtonCameraComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UProtonCameraComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProtonCameraPlugin"), Z_Construct_UClass_UProtonCameraComponent_NoRegister) \
	DECLARE_SERIALIZER(UProtonCameraComponent)


#define FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProtonCameraComponent(UProtonCameraComponent&&) = delete; \
	UProtonCameraComponent(const UProtonCameraComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProtonCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProtonCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProtonCameraComponent) \
	NO_API virtual ~UProtonCameraComponent();


#define FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h_13_PROLOG
#define FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProtonCameraComponent;

// ********** End Class UProtonCameraComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
