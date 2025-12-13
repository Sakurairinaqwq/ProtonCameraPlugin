// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProtonCameraStructLibrary.h"
#include "Engine/Scene.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProtonCameraStructLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
PROTONCAMERAPLUGIN_API UEnum* Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonAccelerationSettings();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonCameraCollisionSettings();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonCameraProperties();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonDecelerationSettings();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonPostProcessProperties();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonShakeSettings();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonSpacerStruct();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonSpringarmSettings();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonVelocitySettings();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonYForceSettings();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonZForceSettings();
UPackage* Z_Construct_UPackage__Script_ProtonCameraPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EProtonCameraModifierType *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProtonCameraModifierType;
static UEnum* EProtonCameraModifierType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProtonCameraModifierType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProtonCameraModifierType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("EProtonCameraModifierType"));
	}
	return Z_Registration_Info_UEnum_EProtonCameraModifierType.OuterSingleton;
}
template<> PROTONCAMERAPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<EProtonCameraModifierType>()
{
	return EProtonCameraModifierType_StaticEnum();
}
struct Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Acceleration.DisplayName", "\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
		{ "Acceleration.Name", "EProtonCameraModifierType::Acceleration" },
		{ "BlueprintType", "true" },
		{ "Deceleration.DisplayName", "\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6" },
		{ "Deceleration.Name", "EProtonCameraModifierType::Deceleration" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
		{ "Velocity.DisplayName", "\xe9\x80\x9f\xe5\xba\xa6" },
		{ "Velocity.Name", "EProtonCameraModifierType::Velocity" },
		{ "YForce.DisplayName", "Y\xe8\xbd\xb4\xe5\x8a\x9b" },
		{ "YForce.Name", "EProtonCameraModifierType::YForce" },
		{ "ZForce.DisplayName", "Z\xe8\xbd\xb4\xe5\x8a\x9b" },
		{ "ZForce.Name", "EProtonCameraModifierType::ZForce" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProtonCameraModifierType::Velocity", (int64)EProtonCameraModifierType::Velocity },
		{ "EProtonCameraModifierType::Acceleration", (int64)EProtonCameraModifierType::Acceleration },
		{ "EProtonCameraModifierType::Deceleration", (int64)EProtonCameraModifierType::Deceleration },
		{ "EProtonCameraModifierType::YForce", (int64)EProtonCameraModifierType::YForce },
		{ "EProtonCameraModifierType::ZForce", (int64)EProtonCameraModifierType::ZForce },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	"EProtonCameraModifierType",
	"EProtonCameraModifierType",
	Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType()
{
	if (!Z_Registration_Info_UEnum_EProtonCameraModifierType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProtonCameraModifierType.InnerSingleton, Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProtonCameraModifierType.InnerSingleton;
}
// ********** End Enum EProtonCameraModifierType ***************************************************

// ********** Begin ScriptStruct FProtonSpacerStruct ***********************************************
struct Z_Construct_UScriptStruct_FProtonSpacerStruct_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProtonSpacerStruct); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProtonSpacerStruct); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe5\x88\x86\xe9\x9a\x94\xe7\xac\xa6\xe7\x9a\x84\xe7\xa9\xba\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe5\x88\x86\xe9\x9a\x94\xe7\xac\xa6\xe7\x9a\x84\xe7\xa9\xba\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProtonSpacerStruct constinit property declarations ***************
// ********** End ScriptStruct FProtonSpacerStruct constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtonSpacerStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProtonSpacerStruct_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProtonSpacerStruct;
class UScriptStruct* FProtonSpacerStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonSpacerStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProtonSpacerStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtonSpacerStruct, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("ProtonSpacerStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FProtonSpacerStruct.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtonSpacerStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	&NewStructOps,
	"ProtonSpacerStruct",
	nullptr,
	0,
	sizeof(FProtonSpacerStruct),
	alignof(FProtonSpacerStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonSpacerStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtonSpacerStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtonSpacerStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonSpacerStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProtonSpacerStruct.InnerSingleton, Z_Construct_UScriptStruct_FProtonSpacerStruct_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProtonSpacerStruct.InnerSingleton);
}
// ********** End ScriptStruct FProtonSpacerStruct *************************************************

// ********** Begin ScriptStruct FProtonCameraCollisionSettings ************************************
struct Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProtonCameraCollisionSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProtonCameraCollisionSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoCollisionTest_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe7\xa2\xb0\xe6\x92\x9e" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xb0\x86\xe6\x89\xa7\xe8\xa1\x8c\xe7\xa2\xb0\xe6\x92\x9e\xe6\xb5\x8b\xe8\xaf\x95\xe4\xbb\xa5\xe9\x98\xb2\xe6\xad\xa2\xe7\x9b\xb8\xe6\x9c\xba\xe7\xa9\xbf\xe9\x80\x8f\xe5\x9c\xba\xe6\x99\xaf\xe7\x89\xa9\xe4\xbd\x93\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8\xe7\xa2\xb0\xe6\x92\x9e\xe6\xb5\x8b\xe8\xaf\x95" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xb0\x86\xe6\x89\xa7\xe8\xa1\x8c\xe7\xa2\xb0\xe6\x92\x9e\xe6\xb5\x8b\xe8\xaf\x95\xe4\xbb\xa5\xe9\x98\xb2\xe6\xad\xa2\xe7\x9b\xb8\xe6\x9c\xba\xe7\xa9\xbf\xe9\x80\x8f\xe5\x9c\xba\xe6\x99\xaf\xe7\x89\xa9\xe4\xbd\x93\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeSize_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe7\xa2\xb0\xe6\x92\x9e" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x9f\xa5\xe8\xaf\xa2\xe6\x8e\xa2\xe7\x90\x83\xe7\x9a\x84\xe5\xa4\xa7\xe5\xb0\x8f(cm)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\x8e\xa2\xe7\x90\x83\xe5\xa4\xa7\xe5\xb0\x8f" },
		{ "editcondition", "bDoCollisionTest" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9f\xa5\xe8\xaf\xa2\xe6\x8e\xa2\xe7\x90\x83\xe7\x9a\x84\xe5\xa4\xa7\xe5\xb0\x8f(cm)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeChannel_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe7\xa2\xb0\xe6\x92\x9e" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x9f\xa5\xe8\xaf\xa2\xe6\x8e\xa2\xe7\x90\x83\xe7\x9a\x84\xe7\xa2\xb0\xe6\x92\x9e\xe9\x80\x9a\xe9\x81\x93(\xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\xba""Camera)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\x8e\xa2\xe7\x90\x83\xe9\x80\x9a\xe9\x81\x93" },
		{ "editcondition", "bDoCollisionTest" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9f\xa5\xe8\xaf\xa2\xe6\x8e\xa2\xe7\x90\x83\xe7\x9a\x84\xe7\xa2\xb0\xe6\x92\x9e\xe9\x80\x9a\xe9\x81\x93(\xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\xba""Camera)\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProtonCameraCollisionSettings constinit property declarations ****
	static void NewProp_bDoCollisionTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCollisionTest;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProbeSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProbeChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProtonCameraCollisionSettings constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtonCameraCollisionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProtonCameraCollisionSettings;
class UScriptStruct* FProtonCameraCollisionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonCameraCollisionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProtonCameraCollisionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtonCameraCollisionSettings, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("ProtonCameraCollisionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FProtonCameraCollisionSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FProtonCameraCollisionSettings Property Definitions ***************
void Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::NewProp_bDoCollisionTest_SetBit(void* Obj)
{
	((FProtonCameraCollisionSettings*)Obj)->bDoCollisionTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::NewProp_bDoCollisionTest = { "bDoCollisionTest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonCameraCollisionSettings), &Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::NewProp_bDoCollisionTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoCollisionTest_MetaData), NewProp_bDoCollisionTest_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::NewProp_ProbeSize = { "ProbeSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraCollisionSettings, ProbeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeSize_MetaData), NewProp_ProbeSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::NewProp_ProbeChannel = { "ProbeChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraCollisionSettings, ProbeChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeChannel_MetaData), NewProp_ProbeChannel_MetaData) }; // 838391399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::NewProp_bDoCollisionTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::NewProp_ProbeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::NewProp_ProbeChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProtonCameraCollisionSettings Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	&NewStructOps,
	"ProtonCameraCollisionSettings",
	Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::PropPointers),
	sizeof(FProtonCameraCollisionSettings),
	alignof(FProtonCameraCollisionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtonCameraCollisionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonCameraCollisionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProtonCameraCollisionSettings.InnerSingleton, Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProtonCameraCollisionSettings.InnerSingleton);
}
// ********** End ScriptStruct FProtonCameraCollisionSettings **************************************

// ********** Begin ScriptStruct FProtonSpringarmSettings ******************************************
struct Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProtonSpringarmSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProtonSpringarmSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationLag_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe8\xae\xbe\xe7\xbd\xae" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\xbb\xb6\xe8\xbf\x9f\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xba""0\xe5\x8f\xaf\xe5\xae\x8c\xe5\x85\xa8\xe7\xa6\x81\xe7\x94\xa8\xe5\xbb\xb6\xe8\xbf\x9f\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\x97\x8b\xe8\xbd\xac\xe5\xbb\xb6\xe8\xbf\x9f" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\xbb\xb6\xe8\xbf\x9f\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xba""0\xe5\x8f\xaf\xe5\xae\x8c\xe5\x85\xa8\xe7\xa6\x81\xe7\x94\xa8\xe5\xbb\xb6\xe8\xbf\x9f\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritPitch_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe8\xae\xbe\xe7\xbd\xae" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe5\xb0\x86\xe7\xbb\xa7\xe6\x89\xbf\xe5\x85\xb6\xe7\x88\xb6""Actor\xe7\x9a\x84Pitch(\xe4\xbf\xaf\xe4\xbb\xb0)\xe6\x97\x8b\xe8\xbd\xac\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe7\xbb\xa7\xe6\x89\xbf\xe4\xbf\xaf\xe4\xbb\xb0(Pitch)" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe5\xb0\x86\xe7\xbb\xa7\xe6\x89\xbf\xe5\x85\xb6\xe7\x88\xb6""Actor\xe7\x9a\x84Pitch(\xe4\xbf\xaf\xe4\xbb\xb0)\xe6\x97\x8b\xe8\xbd\xac\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritYaw_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe8\xae\xbe\xe7\xbd\xae" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe5\xb0\x86\xe7\xbb\xa7\xe6\x89\xbf\xe5\x85\xb6\xe7\x88\xb6""Actor\xe7\x9a\x84Yaw(\xe5\x81\x8f\xe8\x88\xaa)\xe6\x97\x8b\xe8\xbd\xac\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe7\xbb\xa7\xe6\x89\xbf\xe5\x81\x8f\xe8\x88\xaa(Yaw)" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe5\xb0\x86\xe7\xbb\xa7\xe6\x89\xbf\xe5\x85\xb6\xe7\x88\xb6""Actor\xe7\x9a\x84Yaw(\xe5\x81\x8f\xe8\x88\xaa)\xe6\x97\x8b\xe8\xbd\xac\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritRoll_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe8\xae\xbe\xe7\xbd\xae" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe5\xb0\x86\xe7\xbb\xa7\xe6\x89\xbf\xe5\x85\xb6\xe7\x88\xb6""Actor\xe7\x9a\x84Roll(\xe7\xbf\xbb\xe6\xbb\x9a)\xe6\x97\x8b\xe8\xbd\xac\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe7\xbb\xa7\xe6\x89\xbf\xe7\xbf\xbb\xe6\xbb\x9a(Roll)" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe5\xb0\x86\xe7\xbb\xa7\xe6\x89\xbf\xe5\x85\xb6\xe7\x88\xb6""Actor\xe7\x9a\x84Roll(\xe7\xbf\xbb\xe6\xbb\x9a)\xe6\x97\x8b\xe8\xbd\xac\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRollCompensation_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe8\xae\xbe\xe7\xbd\xae" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xb0\x86\xe8\xa1\xa5\xe5\x81\xbf\xe7\x88\xb6""Actor\xe7\x9a\x84\xe7\xbf\xbb\xe6\xbb\x9a\xef\xbc\x8c\xe4\xbb\xa5\xe4\xbf\x9d\xe6\x8c\x81\xe7\x9b\xb8\xe6\x9c\xba\xe6\xb0\xb4\xe5\xb9\xb3(\xe4\xb8\x8e'\xe7\xbb\xa7\xe6\x89\xbf\xe7\xbf\xbb\xe6\xbb\x9a'\xe5\x86\xb2\xe7\xaa\x81)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe7\xbf\xbb\xe6\xbb\x9a\xe8\xa1\xa5\xe5\x81\xbf" },
		{ "EditCondition", "!bInheritRoll" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xb0\x86\xe8\xa1\xa5\xe5\x81\xbf\xe7\x88\xb6""Actor\xe7\x9a\x84\xe7\xbf\xbb\xe6\xbb\x9a\xef\xbc\x8c\xe4\xbb\xa5\xe4\xbf\x9d\xe6\x8c\x81\xe7\x9b\xb8\xe6\x9c\xba\xe6\xb0\xb4\xe5\xb9\xb3(\xe4\xb8\x8e'\xe7\xbb\xa7\xe6\x89\xbf\xe7\xbf\xbb\xe6\xbb\x9a'\xe5\x86\xb2\xe7\xaa\x81)\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProtonSpringarmSettings constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationLag;
	static void NewProp_bInheritPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritPitch;
	static void NewProp_bInheritYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritYaw;
	static void NewProp_bInheritRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritRoll;
	static void NewProp_bRollCompensation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRollCompensation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProtonSpringarmSettings constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtonSpringarmSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProtonSpringarmSettings;
class UScriptStruct* FProtonSpringarmSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonSpringarmSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProtonSpringarmSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtonSpringarmSettings, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("ProtonSpringarmSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FProtonSpringarmSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FProtonSpringarmSettings Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_RotationLag = { "RotationLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonSpringarmSettings, RotationLag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationLag_MetaData), NewProp_RotationLag_MetaData) };
void Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritPitch_SetBit(void* Obj)
{
	((FProtonSpringarmSettings*)Obj)->bInheritPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritPitch = { "bInheritPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonSpringarmSettings), &Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritPitch_MetaData), NewProp_bInheritPitch_MetaData) };
void Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritYaw_SetBit(void* Obj)
{
	((FProtonSpringarmSettings*)Obj)->bInheritYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritYaw = { "bInheritYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonSpringarmSettings), &Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritYaw_MetaData), NewProp_bInheritYaw_MetaData) };
void Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritRoll_SetBit(void* Obj)
{
	((FProtonSpringarmSettings*)Obj)->bInheritRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritRoll = { "bInheritRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonSpringarmSettings), &Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritRoll_MetaData), NewProp_bInheritRoll_MetaData) };
void Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bRollCompensation_SetBit(void* Obj)
{
	((FProtonSpringarmSettings*)Obj)->bRollCompensation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bRollCompensation = { "bRollCompensation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonSpringarmSettings), &Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bRollCompensation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRollCompensation_MetaData), NewProp_bRollCompensation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_RotationLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bInheritRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewProp_bRollCompensation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProtonSpringarmSettings Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	&NewStructOps,
	"ProtonSpringarmSettings",
	Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::PropPointers),
	sizeof(FProtonSpringarmSettings),
	alignof(FProtonSpringarmSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtonSpringarmSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonSpringarmSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProtonSpringarmSettings.InnerSingleton, Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProtonSpringarmSettings.InnerSingleton);
}
// ********** End ScriptStruct FProtonSpringarmSettings ********************************************

// ********** Begin ScriptStruct FProtonVelocitySettings *******************************************
struct Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProtonVelocitySettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProtonVelocitySettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVelocityModifier_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x90\xaf\xe7\x94\xa8\xe5\x9f\xba\xe4\xba\x8e\xe8\xbd\xa6\xe8\xbe\x86\xe5\x89\x8d\xe8\xbf\x9b\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8\xe9\x80\x9f\xe5\xba\xa6\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x90\xaf\xe7\x94\xa8\xe5\x9f\xba\xe4\xba\x8e\xe8\xbd\xa6\xe8\xbe\x86\xe5\x89\x8d\xe8\xbf\x9b\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpeed_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbd\xbf\xe7\x94\xa8\xe8\xbd\xa6\xe8\xbe\x86\xe7\x9a\x84\xe6\x80\xbb\xe9\x80\x9f\xe7\x8e\x87\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xae\xa1\xe7\xae\x97\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba false, \xe4\xbb\x85\xe4\xbd\xbf\xe7\x94\xa8\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe5\x89\x8d\xe5\x90\x91(X\xe8\xbd\xb4)\xe5\x88\x86\xe9\x87\x8f\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe6\x80\xbb\xe9\x80\x9f\xe7\x8e\x87" },
		{ "EditCondition", "bEnableVelocityModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbd\xbf\xe7\x94\xa8\xe8\xbd\xa6\xe8\xbe\x86\xe7\x9a\x84\xe6\x80\xbb\xe9\x80\x9f\xe7\x8e\x87\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xae\xa1\xe7\xae\x97\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba false, \xe4\xbb\x85\xe4\xbd\xbf\xe7\x94\xa8\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe5\x89\x8d\xe5\x90\x91(X\xe8\xbd\xb4)\xe5\x88\x86\xe9\x87\x8f\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationVelocity_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xad\xa4\xe9\x80\x9f\xe7\x8e\x87(m/s)\xe4\xb8\x8b\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe4\xba\x8e\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe5\xae\x8c\xe5\x85\xa8\xe7\x94\x9f\xe6\x95\x88(\xe5\x8d\xb3\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe8\xbe\xbe\xe5\x88\xb0""1.0)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe9\x80\x9f\xe7\x8e\x87" },
		{ "EditCondition", "bEnableVelocityModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xad\xa4\xe9\x80\x9f\xe7\x8e\x87(m/s)\xe4\xb8\x8b\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe4\xba\x8e\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe5\xae\x8c\xe5\x85\xa8\xe7\x94\x9f\xe6\x95\x88(\xe5\x8d\xb3\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe8\xbe\xbe\xe5\x88\xb0""1.0)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampVelocity_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xe5\x9c\xa8-1\xe5\x88\xb0""1\xe4\xb9\x8b\xe9\x97\xb4\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe5\x9c\xa8\xe6\x9e\x81\xe7\xab\xaf\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xe6\x95\x88\xe6\x9e\x9c\xe8\xbf\x87\xe4\xba\x8e\xe5\xa4\xb8\xe5\xbc\xa0\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x99\x90\xe5\x88\xb6\xe9\x80\x9f\xe5\xba\xa6\xe6\x95\x88\xe6\x9e\x9c" },
		{ "EditCondition", "bEnableVelocityModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xe5\x9c\xa8-1\xe5\x88\xb0""1\xe4\xb9\x8b\xe9\x97\xb4\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe5\x9c\xa8\xe6\x9e\x81\xe7\xab\xaf\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xe6\x95\x88\xe6\x9e\x9c\xe8\xbf\x87\xe4\xba\x8e\xe5\xa4\xb8\xe5\xbc\xa0\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthOffsetByVelocity_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe9\x80\x9f\xe7\x8e\x87\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableVelocityModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe9\x80\x9f\xe7\x8e\x87\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetByVelocity_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe9\x80\x9f\xe7\x8e\x87\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableVelocityModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe9\x80\x9f\xe7\x8e\x87\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationByVelocity_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe9\x80\x9f\xe7\x8e\x87\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableVelocityModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe9\x80\x9f\xe7\x8e\x87\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVByVelocity_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe9\x80\x9f\xe7\x8e\x87\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84""FOV\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84""FOV\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableVelocityModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe9\x80\x9f\xe7\x8e\x87\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84""FOV\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProtonVelocitySettings constinit property declarations ***********
	static void NewProp_bEnableVelocityModifier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVelocityModifier;
	static void NewProp_bUseSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizationVelocity;
	static void NewProp_bClampVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthOffsetByVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetByVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationByVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVByVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProtonVelocitySettings constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtonVelocitySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProtonVelocitySettings;
class UScriptStruct* FProtonVelocitySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonVelocitySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProtonVelocitySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtonVelocitySettings, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("ProtonVelocitySettings"));
	}
	return Z_Registration_Info_UScriptStruct_FProtonVelocitySettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FProtonVelocitySettings Property Definitions **********************
void Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bEnableVelocityModifier_SetBit(void* Obj)
{
	((FProtonVelocitySettings*)Obj)->bEnableVelocityModifier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bEnableVelocityModifier = { "bEnableVelocityModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonVelocitySettings), &Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bEnableVelocityModifier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableVelocityModifier_MetaData), NewProp_bEnableVelocityModifier_MetaData) };
void Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bUseSpeed_SetBit(void* Obj)
{
	((FProtonVelocitySettings*)Obj)->bUseSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bUseSpeed = { "bUseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonVelocitySettings), &Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bUseSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpeed_MetaData), NewProp_bUseSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_NormalizationVelocity = { "NormalizationVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonVelocitySettings, NormalizationVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizationVelocity_MetaData), NewProp_NormalizationVelocity_MetaData) };
void Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bClampVelocity_SetBit(void* Obj)
{
	((FProtonVelocitySettings*)Obj)->bClampVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bClampVelocity = { "bClampVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonVelocitySettings), &Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bClampVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampVelocity_MetaData), NewProp_bClampVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_LengthOffsetByVelocity = { "LengthOffsetByVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonVelocitySettings, LengthOffsetByVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthOffsetByVelocity_MetaData), NewProp_LengthOffsetByVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_OffsetByVelocity = { "OffsetByVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonVelocitySettings, OffsetByVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetByVelocity_MetaData), NewProp_OffsetByVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_RotationByVelocity = { "RotationByVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonVelocitySettings, RotationByVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationByVelocity_MetaData), NewProp_RotationByVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_FOVByVelocity = { "FOVByVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonVelocitySettings, FOVByVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVByVelocity_MetaData), NewProp_FOVByVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bEnableVelocityModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bUseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_NormalizationVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_bClampVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_LengthOffsetByVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_OffsetByVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_RotationByVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewProp_FOVByVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProtonVelocitySettings Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	&NewStructOps,
	"ProtonVelocitySettings",
	Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::PropPointers),
	sizeof(FProtonVelocitySettings),
	alignof(FProtonVelocitySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtonVelocitySettings()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonVelocitySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProtonVelocitySettings.InnerSingleton, Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProtonVelocitySettings.InnerSingleton);
}
// ********** End ScriptStruct FProtonVelocitySettings *********************************************

// ********** Begin ScriptStruct FProtonAccelerationSettings ***************************************
struct Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProtonAccelerationSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProtonAccelerationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAccelerationModifier_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x90\xaf\xe7\x94\xa8\xe5\x9f\xba\xe4\xba\x8e\xe8\xbd\xa6\xe8\xbe\x86\xe5\x89\x8d\xe8\xbf\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x90\xaf\xe7\x94\xa8\xe5\x9f\xba\xe4\xba\x8e\xe8\xbd\xa6\xe8\xbe\x86\xe5\x89\x8d\xe8\xbf\x9b\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationInterpolationSpeed_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9f\xba\xe4\xba\x8e\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe5\x81\x8f\xe7\xa7\xbb\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6" },
		{ "EditCondition", "bEnableAccelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\xba\xe4\xba\x8e\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe5\x81\x8f\xe7\xa7\xbb\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationAcceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xad\xa4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(m/s^2)\xe4\xb8\x8b\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe4\xba\x8e\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe5\xae\x8c\xe5\x85\xa8\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
		{ "EditCondition", "bEnableAccelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xad\xa4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(m/s^2)\xe4\xb8\x8b\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe4\xba\x8e\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe5\xae\x8c\xe5\x85\xa8\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampAcceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe6\x95\x88\xe6\x9e\x9c\xe8\xbf\x87\xe4\xba\x8e\xe5\xa4\xb8\xe5\xbc\xa0\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x99\x90\xe5\x88\xb6\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe6\x95\x88\xe6\x9e\x9c" },
		{ "EditCondition", "bEnableAccelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe6\x95\x88\xe6\x9e\x9c\xe8\xbf\x87\xe4\xba\x8e\xe5\xa4\xb8\xe5\xbc\xa0\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthOffsetByAcceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableAccelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetByAcceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableAccelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationByAcceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableAccelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVByAcceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84""FOV\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84""FOV\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableAccelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84""FOV\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProtonAccelerationSettings constinit property declarations *******
	static void NewProp_bEnableAccelerationModifier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAccelerationModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccelerationInterpolationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizationAcceleration;
	static void NewProp_bClampAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthOffsetByAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetByAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationByAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVByAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProtonAccelerationSettings constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtonAccelerationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProtonAccelerationSettings;
class UScriptStruct* FProtonAccelerationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonAccelerationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProtonAccelerationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtonAccelerationSettings, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("ProtonAccelerationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FProtonAccelerationSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FProtonAccelerationSettings Property Definitions ******************
void Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_bEnableAccelerationModifier_SetBit(void* Obj)
{
	((FProtonAccelerationSettings*)Obj)->bEnableAccelerationModifier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_bEnableAccelerationModifier = { "bEnableAccelerationModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonAccelerationSettings), &Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_bEnableAccelerationModifier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAccelerationModifier_MetaData), NewProp_bEnableAccelerationModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_AccelerationInterpolationSpeed = { "AccelerationInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonAccelerationSettings, AccelerationInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationInterpolationSpeed_MetaData), NewProp_AccelerationInterpolationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_NormalizationAcceleration = { "NormalizationAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonAccelerationSettings, NormalizationAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizationAcceleration_MetaData), NewProp_NormalizationAcceleration_MetaData) };
void Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_bClampAcceleration_SetBit(void* Obj)
{
	((FProtonAccelerationSettings*)Obj)->bClampAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_bClampAcceleration = { "bClampAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonAccelerationSettings), &Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_bClampAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampAcceleration_MetaData), NewProp_bClampAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_LengthOffsetByAcceleration = { "LengthOffsetByAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonAccelerationSettings, LengthOffsetByAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthOffsetByAcceleration_MetaData), NewProp_LengthOffsetByAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_OffsetByAcceleration = { "OffsetByAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonAccelerationSettings, OffsetByAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetByAcceleration_MetaData), NewProp_OffsetByAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_RotationByAcceleration = { "RotationByAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonAccelerationSettings, RotationByAcceleration), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationByAcceleration_MetaData), NewProp_RotationByAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_FOVByAcceleration = { "FOVByAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonAccelerationSettings, FOVByAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVByAcceleration_MetaData), NewProp_FOVByAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_bEnableAccelerationModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_AccelerationInterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_NormalizationAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_bClampAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_LengthOffsetByAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_OffsetByAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_RotationByAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewProp_FOVByAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProtonAccelerationSettings Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	&NewStructOps,
	"ProtonAccelerationSettings",
	Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::PropPointers),
	sizeof(FProtonAccelerationSettings),
	alignof(FProtonAccelerationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtonAccelerationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonAccelerationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProtonAccelerationSettings.InnerSingleton, Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProtonAccelerationSettings.InnerSingleton);
}
// ********** End ScriptStruct FProtonAccelerationSettings *****************************************

// ********** Begin ScriptStruct FProtonDecelerationSettings ***************************************
struct Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProtonDecelerationSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProtonDecelerationSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDecelerationModifier_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x90\xaf\xe7\x94\xa8\xe5\x9f\xba\xe4\xba\x8e\xe8\xbd\xa6\xe8\xbe\x86\xe5\x89\x8d\xe8\xbf\x9b\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6(\xe8\xb4\x9f\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6)\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x90\xaf\xe7\x94\xa8\xe5\x9f\xba\xe4\xba\x8e\xe8\xbd\xa6\xe8\xbe\x86\xe5\x89\x8d\xe8\xbf\x9b\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6(\xe8\xb4\x9f\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6)\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecelerationInterpolationSpeed_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9f\xba\xe4\xba\x8e\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe5\x81\x8f\xe7\xa7\xbb\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6" },
		{ "EditCondition", "bEnableDecelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9f\xba\xe4\xba\x8e\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe5\x81\x8f\xe7\xa7\xbb\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationDeceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xad\xa4\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6(m/s^2)\xe4\xb8\x8b\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe4\xba\x8e\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe5\xae\x8c\xe5\x85\xa8\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6" },
		{ "EditCondition", "bEnableDecelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xad\xa4\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6(m/s^2)\xe4\xb8\x8b\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe4\xba\x8e\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe5\xae\x8c\xe5\x85\xa8\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampDeceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe6\x95\x88\xe6\x9e\x9c\xe8\xbf\x87\xe4\xba\x8e\xe5\xa4\xb8\xe5\xbc\xa0\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x99\x90\xe5\x88\xb6\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe6\x95\x88\xe6\x9e\x9c" },
		{ "EditCondition", "bEnableDecelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe6\x95\x88\xe6\x9e\x9c\xe8\xbf\x87\xe4\xba\x8e\xe5\xa4\xb8\xe5\xbc\xa0\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthOffsetByDeceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableDecelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetByDeceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableDecelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationByDeceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableDecelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVByDeceleration_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84""FOV\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8f\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe7\x9a\x84""FOV\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableDecelerationModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84""FOV\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProtonDecelerationSettings constinit property declarations *******
	static void NewProp_bEnableDecelerationModifier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDecelerationModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecelerationInterpolationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizationDeceleration;
	static void NewProp_bClampDeceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthOffsetByDeceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetByDeceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationByDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVByDeceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProtonDecelerationSettings constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtonDecelerationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProtonDecelerationSettings;
class UScriptStruct* FProtonDecelerationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonDecelerationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProtonDecelerationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtonDecelerationSettings, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("ProtonDecelerationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FProtonDecelerationSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FProtonDecelerationSettings Property Definitions ******************
void Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_bEnableDecelerationModifier_SetBit(void* Obj)
{
	((FProtonDecelerationSettings*)Obj)->bEnableDecelerationModifier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_bEnableDecelerationModifier = { "bEnableDecelerationModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonDecelerationSettings), &Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_bEnableDecelerationModifier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDecelerationModifier_MetaData), NewProp_bEnableDecelerationModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_DecelerationInterpolationSpeed = { "DecelerationInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonDecelerationSettings, DecelerationInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecelerationInterpolationSpeed_MetaData), NewProp_DecelerationInterpolationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_NormalizationDeceleration = { "NormalizationDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonDecelerationSettings, NormalizationDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizationDeceleration_MetaData), NewProp_NormalizationDeceleration_MetaData) };
void Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_bClampDeceleration_SetBit(void* Obj)
{
	((FProtonDecelerationSettings*)Obj)->bClampDeceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_bClampDeceleration = { "bClampDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonDecelerationSettings), &Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_bClampDeceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampDeceleration_MetaData), NewProp_bClampDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_LengthOffsetByDeceleration = { "LengthOffsetByDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonDecelerationSettings, LengthOffsetByDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthOffsetByDeceleration_MetaData), NewProp_LengthOffsetByDeceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_OffsetByDeceleration = { "OffsetByDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonDecelerationSettings, OffsetByDeceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetByDeceleration_MetaData), NewProp_OffsetByDeceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_RotationByDeceleration = { "RotationByDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonDecelerationSettings, RotationByDeceleration), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationByDeceleration_MetaData), NewProp_RotationByDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_FOVByDeceleration = { "FOVByDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonDecelerationSettings, FOVByDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVByDeceleration_MetaData), NewProp_FOVByDeceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_bEnableDecelerationModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_DecelerationInterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_NormalizationDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_bClampDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_LengthOffsetByDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_OffsetByDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_RotationByDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewProp_FOVByDeceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProtonDecelerationSettings Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	&NewStructOps,
	"ProtonDecelerationSettings",
	Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::PropPointers),
	sizeof(FProtonDecelerationSettings),
	alignof(FProtonDecelerationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtonDecelerationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonDecelerationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProtonDecelerationSettings.InnerSingleton, Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProtonDecelerationSettings.InnerSingleton);
}
// ********** End ScriptStruct FProtonDecelerationSettings *****************************************

// ********** Begin ScriptStruct FProtonYForceSettings *********************************************
struct Z_Construct_UScriptStruct_FProtonYForceSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProtonYForceSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProtonYForceSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableYForceModifier_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x90\xaf\xe7\x94\xa8\xe5\x9f\xba\xe4\xba\x8e\xe8\xbd\xa6\xe8\xbe\x86\xe4\xbe\xa7\xe5\x90\x91(Y\xe8\xbd\xb4)G\xe5\x8a\x9b\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8Y\xe8\xbd\xb4\xe5\x8a\x9b\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x90\xaf\xe7\x94\xa8\xe5\x9f\xba\xe4\xba\x8e\xe8\xbd\xa6\xe8\xbe\x86\xe4\xbe\xa7\xe5\x90\x91(Y\xe8\xbd\xb4)G\xe5\x8a\x9b\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YForceInterpolationSpeed_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|Y\xe8\xbd\xb4\xe5\x8a\x9b" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbe\xa7\xe5\x90\x91\xe7\x9b\xb8\xe6\x9c\xba\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "Y\xe8\xbd\xb4\xe5\x8a\x9b\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6" },
		{ "EditCondition", "bEnableYForceModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbe\xa7\xe5\x90\x91\xe7\x9b\xb8\xe6\x9c\xba\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationYForce_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|Y\xe8\xbd\xb4\xe5\x8a\x9b" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xad\xa4\xe4\xbe\xa7\xe5\x90\x91\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(m/s^2)\xe4\xb8\x8b\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe4\xba\x8eY\xe8\xbd\xb4\xe5\x8a\x9b\xe7\x9a\x84\xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe5\xae\x8c\xe5\x85\xa8\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96Y\xe8\xbd\xb4\xe5\x8a\x9b" },
		{ "EditCondition", "bEnableYForceModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xad\xa4\xe4\xbe\xa7\xe5\x90\x91\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(m/s^2)\xe4\xb8\x8b\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe4\xba\x8eY\xe8\xbd\xb4\xe5\x8a\x9b\xe7\x9a\x84\xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe5\xae\x8c\xe5\x85\xa8\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampYForce_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|Y\xe8\xbd\xb4\xe5\x8a\x9b" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe6\x95\x88\xe6\x9e\x9c\xe8\xbf\x87\xe4\xba\x8e\xe5\xa4\xb8\xe5\xbc\xa0\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x99\x90\xe5\x88\xb6Y\xe8\xbd\xb4\xe5\x8a\x9b\xe6\x95\x88\xe6\x9e\x9c" },
		{ "EditCondition", "bEnableYForceModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe6\x95\x88\xe6\x9e\x9c\xe8\xbf\x87\xe4\xba\x8e\xe5\xa4\xb8\xe5\xbc\xa0\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetByYForce_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|Y\xe8\xbd\xb4\xe5\x8a\x9b" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96Y\xe8\xbd\xb4\xe5\x8a\x9b\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8fY\xe8\xbd\xb4\xe5\x8a\x9b\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableYForceModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96Y\xe8\xbd\xb4\xe5\x8a\x9b\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationByYForce_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|Y\xe8\xbd\xb4\xe5\x8a\x9b" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96Y\xe8\xbd\xb4\xe5\x8a\x9b\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8fY\xe8\xbd\xb4\xe5\x8a\x9b\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableYForceModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96Y\xe8\xbd\xb4\xe5\x8a\x9b\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(\xc2\xb0)\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProtonYForceSettings constinit property declarations *************
	static void NewProp_bEnableYForceModifier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableYForceModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YForceInterpolationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizationYForce;
	static void NewProp_bClampYForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampYForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetByYForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationByYForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProtonYForceSettings constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtonYForceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProtonYForceSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProtonYForceSettings;
class UScriptStruct* FProtonYForceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonYForceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProtonYForceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtonYForceSettings, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("ProtonYForceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FProtonYForceSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FProtonYForceSettings Property Definitions ************************
void Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_bEnableYForceModifier_SetBit(void* Obj)
{
	((FProtonYForceSettings*)Obj)->bEnableYForceModifier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_bEnableYForceModifier = { "bEnableYForceModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonYForceSettings), &Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_bEnableYForceModifier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableYForceModifier_MetaData), NewProp_bEnableYForceModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_YForceInterpolationSpeed = { "YForceInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonYForceSettings, YForceInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YForceInterpolationSpeed_MetaData), NewProp_YForceInterpolationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_NormalizationYForce = { "NormalizationYForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonYForceSettings, NormalizationYForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizationYForce_MetaData), NewProp_NormalizationYForce_MetaData) };
void Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_bClampYForce_SetBit(void* Obj)
{
	((FProtonYForceSettings*)Obj)->bClampYForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_bClampYForce = { "bClampYForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonYForceSettings), &Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_bClampYForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampYForce_MetaData), NewProp_bClampYForce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_OffsetByYForce = { "OffsetByYForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonYForceSettings, OffsetByYForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetByYForce_MetaData), NewProp_OffsetByYForce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_RotationByYForce = { "RotationByYForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonYForceSettings, RotationByYForce), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationByYForce_MetaData), NewProp_RotationByYForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_bEnableYForceModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_YForceInterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_NormalizationYForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_bClampYForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_OffsetByYForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewProp_RotationByYForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProtonYForceSettings Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	&NewStructOps,
	"ProtonYForceSettings",
	Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::PropPointers),
	sizeof(FProtonYForceSettings),
	alignof(FProtonYForceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtonYForceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonYForceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProtonYForceSettings.InnerSingleton, Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProtonYForceSettings.InnerSingleton);
}
// ********** End ScriptStruct FProtonYForceSettings ***********************************************

// ********** Begin ScriptStruct FProtonZForceSettings *********************************************
struct Z_Construct_UScriptStruct_FProtonZForceSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProtonZForceSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProtonZForceSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableZForceModifier_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x90\xaf\xe7\x94\xa8\xe5\x9f\xba\xe4\xba\x8e\xe8\xbd\xa6\xe8\xbe\x86\xe5\x9e\x82\xe7\x9b\xb4(Z\xe8\xbd\xb4)G\xe5\x8a\x9b\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8Z\xe8\xbd\xb4\xe5\x8a\x9b\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x90\xaf\xe7\x94\xa8\xe5\x9f\xba\xe4\xba\x8e\xe8\xbd\xa6\xe8\xbe\x86\xe5\x9e\x82\xe7\x9b\xb4(Z\xe8\xbd\xb4)G\xe5\x8a\x9b\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZForceInterpolationSpeed_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|Z\xe8\xbd\xb4\xe5\x8a\x9b" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9e\x82\xe7\x9b\xb4\xe7\x9b\xb8\xe6\x9c\xba\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "Z\xe8\xbd\xb4\xe5\x8a\x9b\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6" },
		{ "EditCondition", "bEnableZForceModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9e\x82\xe7\x9b\xb4\xe7\x9b\xb8\xe6\x9c\xba\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationZForce_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|Z\xe8\xbd\xb4\xe5\x8a\x9b" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xad\xa4\xe5\x9e\x82\xe7\x9b\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(m/s^2)\xe4\xb8\x8b\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe4\xba\x8eZ\xe8\xbd\xb4\xe5\x8a\x9b\xe7\x9a\x84\xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe5\xae\x8c\xe5\x85\xa8\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96Z\xe8\xbd\xb4\xe5\x8a\x9b" },
		{ "EditCondition", "bEnableZForceModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xad\xa4\xe5\x9e\x82\xe7\x9b\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(m/s^2)\xe4\xb8\x8b\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe5\x9f\xba\xe4\xba\x8eZ\xe8\xbd\xb4\xe5\x8a\x9b\xe7\x9a\x84\xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe5\xae\x8c\xe5\x85\xa8\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampZForce_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|Z\xe8\xbd\xb4\xe5\x8a\x9b" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe6\x95\x88\xe6\x9e\x9c\xe8\xbf\x87\xe4\xba\x8e\xe5\xa4\xb8\xe5\xbc\xa0\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x99\x90\xe5\x88\xb6Z\xe8\xbd\xb4\xe5\x8a\x9b\xe6\x95\x88\xe6\x9e\x9c" },
		{ "EditCondition", "bEnableZForceModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe6\x95\x88\xe6\x9e\x9c\xe8\xbf\x87\xe4\xba\x8e\xe5\xa4\xb8\xe5\xbc\xa0\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetByZForce_MetaData[] = {
		{ "Category", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8|Z\xe8\xbd\xb4\xe5\x8a\x9b" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96Z\xe8\xbd\xb4\xe5\x8a\x9b\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x9a\x8fZ\xe8\xbd\xb4\xe5\x8a\x9b\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "EditCondition", "bEnableZForceModifier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xa0\x87\xe5\x87\x86\xe5\x8c\x96Z\xe8\xbd\xb4\xe5\x8a\x9b\xe4\xb8\x8b\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f(cm)\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProtonZForceSettings constinit property declarations *************
	static void NewProp_bEnableZForceModifier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableZForceModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZForceInterpolationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizationZForce;
	static void NewProp_bClampZForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampZForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetByZForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProtonZForceSettings constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtonZForceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProtonZForceSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProtonZForceSettings;
class UScriptStruct* FProtonZForceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonZForceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProtonZForceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtonZForceSettings, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("ProtonZForceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FProtonZForceSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FProtonZForceSettings Property Definitions ************************
void Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_bEnableZForceModifier_SetBit(void* Obj)
{
	((FProtonZForceSettings*)Obj)->bEnableZForceModifier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_bEnableZForceModifier = { "bEnableZForceModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonZForceSettings), &Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_bEnableZForceModifier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableZForceModifier_MetaData), NewProp_bEnableZForceModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_ZForceInterpolationSpeed = { "ZForceInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonZForceSettings, ZForceInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZForceInterpolationSpeed_MetaData), NewProp_ZForceInterpolationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_NormalizationZForce = { "NormalizationZForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonZForceSettings, NormalizationZForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizationZForce_MetaData), NewProp_NormalizationZForce_MetaData) };
void Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_bClampZForce_SetBit(void* Obj)
{
	((FProtonZForceSettings*)Obj)->bClampZForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_bClampZForce = { "bClampZForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonZForceSettings), &Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_bClampZForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampZForce_MetaData), NewProp_bClampZForce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_OffsetByZForce = { "OffsetByZForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonZForceSettings, OffsetByZForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetByZForce_MetaData), NewProp_OffsetByZForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_bEnableZForceModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_ZForceInterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_NormalizationZForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_bClampZForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewProp_OffsetByZForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProtonZForceSettings Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	&NewStructOps,
	"ProtonZForceSettings",
	Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::PropPointers),
	sizeof(FProtonZForceSettings),
	alignof(FProtonZForceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtonZForceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonZForceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProtonZForceSettings.InnerSingleton, Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProtonZForceSettings.InnerSingleton);
}
// ********** End ScriptStruct FProtonZForceSettings ***********************************************

// ********** Begin ScriptStruct FProtonShakeSettings **********************************************
struct Z_Construct_UScriptStruct_FProtonShakeSettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProtonShakeSettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProtonShakeSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSpeedShake_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8|\xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xba\x94\xe7\x94\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe9\x9a\x8f\xe8\xbd\xa6\xe8\xbe\x86\xe9\x80\x9f\xe7\x8e\x87\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8\xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\xba\x94\xe7\x94\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe9\x9a\x8f\xe8\xbd\xa6\xe8\xbe\x86\xe9\x80\x9f\xe7\x8e\x87\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedShakeClass_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8|\xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x94\xa8\xe4\xba\x8e\xe9\xab\x98\xe9\x80\x9f\xe6\x8a\x96\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "EditCondition", "bEnableSpeedShake" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe9\xab\x98\xe9\x80\x9f\xe6\x8a\x96\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedShakeScale_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8|\xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8\xe5\xbc\xba\xe5\xba\xa6\xe7\x9a\x84\xe4\xb9\x98\xe6\x95\xb0\xe3\x80\x82\xe5\x80\xbc\xe8\xb6\x8a\xe9\xab\x98\xef\xbc\x8c\xe6\x8a\x96\xe5\x8a\xa8\xe8\xb6\x8a\xe5\xbc\xba\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8\xe5\xbc\xba\xe5\xba\xa6" },
		{ "EditCondition", "bEnableSpeedShake" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8\xe5\xbc\xba\xe5\xba\xa6\xe7\x9a\x84\xe4\xb9\x98\xe6\x95\xb0\xe3\x80\x82\xe5\x80\xbc\xe8\xb6\x8a\xe9\xab\x98\xef\xbc\x8c\xe6\x8a\x96\xe5\x8a\xa8\xe8\xb6\x8a\xe5\xbc\xba\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedShakeRange_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8|\xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x9c\xa8\xe6\xad\xa4\xe9\x80\x9f\xe7\x8e\x87\xe8\x8c\x83\xe5\x9b\xb4(m/s)\xe5\x86\x85\xef\xbc\x8c\xe6\x8a\x96\xe5\x8a\xa8\xe5\xbc\xba\xe5\xba\xa6\xe4\xbb\x8e""0\xe7\xba\xbf\xe6\x80\xa7\xe6\x8f\x92\xe5\x80\xbc\xe5\x88\xb0\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xbc\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "EditCondition", "bEnableSpeedShake" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe6\xad\xa4\xe9\x80\x9f\xe7\x8e\x87\xe8\x8c\x83\xe5\x9b\xb4(m/s)\xe5\x86\x85\xef\xbc\x8c\xe6\x8a\x96\xe5\x8a\xa8\xe5\xbc\xba\xe5\xba\xa6\xe4\xbb\x8e""0\xe7\xba\xbf\xe6\x80\xa7\xe6\x8f\x92\xe5\x80\xbc\xe5\x88\xb0\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xbc\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampSpeedShake_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8|\xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x8d\xb3\xe4\xbd\xbf\xe9\x80\x9f\xe5\xba\xa6\xe8\xb6\x85\xe8\xbf\x87\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe6\x8a\x96\xe5\x8a\xa8\xe5\xbc\xba\xe5\xba\xa6\xe4\xb9\x9f\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xe5\x9c\xa8\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xbc\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x99\x90\xe5\x88\xb6\xe9\x80\x9f\xe5\xba\xa6\xe6\x8a\x96\xe5\x8a\xa8" },
		{ "EditCondition", "bEnableSpeedShake" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x8d\xb3\xe4\xbd\xbf\xe9\x80\x9f\xe5\xba\xa6\xe8\xb6\x85\xe8\xbf\x87\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x8c\xe6\x8a\x96\xe5\x8a\xa8\xe5\xbc\xba\xe5\xba\xa6\xe4\xb9\x9f\xe5\xb0\x86\xe8\xa2\xab\xe9\x99\x90\xe5\x88\xb6\xe5\x9c\xa8\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xbc\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactShakeClass_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8|\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x94\xa8\xe4\xba\x8e\xe6\x92\x9e\xe5\x87\xbb\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe6\x92\x9e\xe5\x87\xbb\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactShakeScale_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8|\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8\xe5\xbc\xba\xe5\xba\xa6\xe7\x9a\x84\xe4\xb9\x98\xe6\x95\xb0\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8\xe5\xbc\xba\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8\xe5\xbc\xba\xe5\xba\xa6\xe7\x9a\x84\xe4\xb9\x98\xe6\x95\xb0\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableImpactShake_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8|\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x9c\xa8\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe9\x9d\x9e\xe5\xb8\xb8\xe9\xab\x98\xe7\x9a\x84G\xe5\x8a\x9b\xe6\x97\xb6\xe8\x87\xaa\xe5\x8a\xa8\xe8\xa7\xa6\xe5\x8f\x91\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8\xe8\x87\xaa\xe5\x8a\xa8\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x9c\xa8\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe9\x9d\x9e\xe5\xb8\xb8\xe9\xab\x98\xe7\x9a\x84G\xe5\x8a\x9b\xe6\x97\xb6\xe8\x87\xaa\xe5\x8a\xa8\xe8\xa7\xa6\xe5\x8f\x91\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactShakeThreshold_MetaData[] = {
		{ "Category", "\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8|\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xa7\xa6\xe5\x8f\x91\xe8\x87\xaa\xe5\x8a\xa8\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8\xe6\x89\x80\xe9\x9c\x80\xe7\x9a\x84G\xe5\x8a\x9b\xe9\x98\x88\xe5\x80\xbc(m/s^2)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe8\x87\xaa\xe5\x8a\xa8\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8\xe9\x98\x88\xe5\x80\xbc" },
		{ "EditCondition", "bEnableImpactShake" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe8\x87\xaa\xe5\x8a\xa8\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8\xe6\x89\x80\xe9\x9c\x80\xe7\x9a\x84G\xe5\x8a\x9b\xe9\x98\x88\xe5\x80\xbc(m/s^2)\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProtonShakeSettings constinit property declarations **************
	static void NewProp_bEnableSpeedShake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSpeedShake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpeedShakeClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedShakeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedShakeRange;
	static void NewProp_bClampSpeedShake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampSpeedShake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ImpactShakeClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactShakeScale;
	static void NewProp_bEnableImpactShake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableImpactShake;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactShakeThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProtonShakeSettings constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtonShakeSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProtonShakeSettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProtonShakeSettings;
class UScriptStruct* FProtonShakeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonShakeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProtonShakeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtonShakeSettings, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("ProtonShakeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FProtonShakeSettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FProtonShakeSettings Property Definitions *************************
void Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bEnableSpeedShake_SetBit(void* Obj)
{
	((FProtonShakeSettings*)Obj)->bEnableSpeedShake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bEnableSpeedShake = { "bEnableSpeedShake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonShakeSettings), &Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bEnableSpeedShake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSpeedShake_MetaData), NewProp_bEnableSpeedShake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_SpeedShakeClass = { "SpeedShakeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonShakeSettings, SpeedShakeClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedShakeClass_MetaData), NewProp_SpeedShakeClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_SpeedShakeScale = { "SpeedShakeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonShakeSettings, SpeedShakeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedShakeScale_MetaData), NewProp_SpeedShakeScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_SpeedShakeRange = { "SpeedShakeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonShakeSettings, SpeedShakeRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedShakeRange_MetaData), NewProp_SpeedShakeRange_MetaData) };
void Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bClampSpeedShake_SetBit(void* Obj)
{
	((FProtonShakeSettings*)Obj)->bClampSpeedShake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bClampSpeedShake = { "bClampSpeedShake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonShakeSettings), &Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bClampSpeedShake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampSpeedShake_MetaData), NewProp_bClampSpeedShake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_ImpactShakeClass = { "ImpactShakeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonShakeSettings, ImpactShakeClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactShakeClass_MetaData), NewProp_ImpactShakeClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_ImpactShakeScale = { "ImpactShakeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonShakeSettings, ImpactShakeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactShakeScale_MetaData), NewProp_ImpactShakeScale_MetaData) };
void Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bEnableImpactShake_SetBit(void* Obj)
{
	((FProtonShakeSettings*)Obj)->bEnableImpactShake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bEnableImpactShake = { "bEnableImpactShake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonShakeSettings), &Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bEnableImpactShake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableImpactShake_MetaData), NewProp_bEnableImpactShake_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_ImpactShakeThreshold = { "ImpactShakeThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonShakeSettings, ImpactShakeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactShakeThreshold_MetaData), NewProp_ImpactShakeThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bEnableSpeedShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_SpeedShakeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_SpeedShakeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_SpeedShakeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bClampSpeedShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_ImpactShakeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_ImpactShakeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_bEnableImpactShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewProp_ImpactShakeThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProtonShakeSettings Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	&NewStructOps,
	"ProtonShakeSettings",
	Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::PropPointers),
	sizeof(FProtonShakeSettings),
	alignof(FProtonShakeSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtonShakeSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonShakeSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProtonShakeSettings.InnerSingleton, Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProtonShakeSettings.InnerSingleton);
}
// ********** End ScriptStruct FProtonShakeSettings ************************************************

// ********** Begin ScriptStruct FProtonPostProcessProperties **************************************
struct Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProtonPostProcessProperties); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProtonPostProcessProperties); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnbound_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xba\x94\xe7\x94\xa8\xe4\xba\x8e\xe6\xad\xa4\xe7\x9b\xb8\xe6\x9c\xba\xe5\xb1\x80\xe9\x83\xa8\xe5\x90\x8e\xe6\x9c\x9f\xe5\xa4\x84\xe7\x90\x86\xe4\xbd\x93\xe7\xa7\xaf\xe7\x9a\x84\xe8\xae\xbe\xe7\xbd\xae\xe3\x80\x82*/" },
#endif
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xba\x94\xe7\x94\xa8\xe4\xba\x8e\xe6\xad\xa4\xe7\x9b\xb8\xe6\x9c\xba\xe5\xb1\x80\xe9\x83\xa8\xe5\x90\x8e\xe6\x9c\x9f\xe5\xa4\x84\xe7\x90\x86\xe4\xbd\x93\xe7\xa7\xaf\xe7\x9a\x84\xe8\xae\xbe\xe7\xbd\xae\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVignetteEffect_MetaData[] = {
		{ "Category", "\xe5\x90\x8e\xe6\x9c\x9f\xe5\xa4\x84\xe7\x90\x86|\xe6\x9a\x97\xe8\xa7\x92\xe6\x95\x88\xe6\x9e\x9c" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe6\xa0\xb9\xe6\x8d\xae\xe9\x80\x89\xe5\xae\x9a\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb0\x83\xe6\x95\xb4\xe6\x9a\x97\xe8\xa7\x92\xe5\xbc\xba\xe5\xba\xa6\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8\xe6\x9a\x97\xe8\xa7\x92\xe6\x95\x88\xe6\x9e\x9c" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe6\xa0\xb9\xe6\x8d\xae\xe9\x80\x89\xe5\xae\x9a\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb0\x83\xe6\x95\xb4\xe6\x9a\x97\xe8\xa7\x92\xe5\xbc\xba\xe5\xba\xa6\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteModifierType_MetaData[] = {
		{ "Category", "\xe5\x90\x8e\xe6\x9c\x9f\xe5\xa4\x84\xe7\x90\x86|\xe6\x9a\x97\xe8\xa7\x92\xe6\x95\x88\xe6\x9e\x9c" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x85\xb6\xe6\x95\x88\xe6\x9e\x9c\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe7\x94\xa8\xe4\xba\x8e\xe9\xa9\xb1\xe5\x8a\xa8\xe6\x9a\x97\xe8\xa7\x92\xe5\xbc\xba\xe5\xba\xa6\xe7\x9a\x84\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe7\xb1\xbb\xe5\x9e\x8b\xe3\x80\x82\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe5\xbf\x85\xe9\xa1\xbb\xe5\xb7\xb2\xe5\x90\xaf\xe7\x94\xa8\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\x9a\x97\xe8\xa7\x92\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "EditCondition", "bEnableVignetteEffect" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb6\xe6\x95\x88\xe6\x9e\x9c\xe5\x9b\xa0\xe5\xad\x90\xe5\xb0\x86\xe7\x94\xa8\xe4\xba\x8e\xe9\xa9\xb1\xe5\x8a\xa8\xe6\x9a\x97\xe8\xa7\x92\xe5\xbc\xba\xe5\xba\xa6\xe7\x9a\x84\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe7\xb1\xbb\xe5\x9e\x8b\xe3\x80\x82\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe5\xbf\x85\xe9\xa1\xbb\xe5\xb7\xb2\xe5\x90\xaf\xe7\x94\xa8\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteIntensityRange_MetaData[] = {
		{ "Category", "\xe5\x90\x8e\xe6\x9c\x9f\xe5\xa4\x84\xe7\x90\x86|\xe6\x9a\x97\xe8\xa7\x92\xe6\x95\x88\xe6\x9e\x9c" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x9a\x97\xe8\xa7\x92\xe5\xbc\xba\xe5\xba\xa6\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4\xe3\x80\x82\xe6\x9c\x80\xe7\xbb\x88\xe5\xbc\xba\xe5\xba\xa6\xe5\xb0\x86\xe5\x9f\xba\xe4\xba\x8e\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe5\x9b\xa0\xe5\xad\x90\xe5\x9c\xa8\xe6\xad\xa4\xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe6\x8f\x92\xe5\x80\xbc\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\x9a\x97\xe8\xa7\x92\xe5\xbc\xba\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "EditCondition", "bEnableVignetteEffect" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9a\x97\xe8\xa7\x92\xe5\xbc\xba\xe5\xba\xa6\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4\xe3\x80\x82\xe6\x9c\x80\xe7\xbb\x88\xe5\xbc\xba\xe5\xba\xa6\xe5\xb0\x86\xe5\x9f\xba\xe4\xba\x8e\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe5\x9b\xa0\xe5\xad\x90\xe5\x9c\xa8\xe6\xad\xa4\xe8\x8c\x83\xe5\x9b\xb4\xe5\x86\x85\xe6\x8f\x92\xe5\x80\xbc\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProtonPostProcessProperties constinit property declarations ******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static void NewProp_bIsUnbound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnbound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static void NewProp_bEnableVignetteEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVignetteEffect;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VignetteModifierType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VignetteModifierType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VignetteIntensityRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProtonPostProcessProperties constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtonPostProcessProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProtonPostProcessProperties;
class UScriptStruct* FProtonPostProcessProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonPostProcessProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProtonPostProcessProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtonPostProcessProperties, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("ProtonPostProcessProperties"));
	}
	return Z_Registration_Info_UScriptStruct_FProtonPostProcessProperties.OuterSingleton;
	}

// ********** Begin ScriptStruct FProtonPostProcessProperties Property Definitions *****************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonPostProcessProperties, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonPostProcessProperties, BlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendWeight_MetaData), NewProp_BlendWeight_MetaData) };
void Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((FProtonPostProcessProperties*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonPostProcessProperties), &Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
void Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bIsUnbound_SetBit(void* Obj)
{
	((FProtonPostProcessProperties*)Obj)->bIsUnbound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bIsUnbound = { "bIsUnbound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonPostProcessProperties), &Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bIsUnbound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUnbound_MetaData), NewProp_bIsUnbound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonPostProcessProperties, Settings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4126336051
void Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bEnableVignetteEffect_SetBit(void* Obj)
{
	((FProtonPostProcessProperties*)Obj)->bEnableVignetteEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bEnableVignetteEffect = { "bEnableVignetteEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProtonPostProcessProperties), &Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bEnableVignetteEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableVignetteEffect_MetaData), NewProp_bEnableVignetteEffect_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_VignetteModifierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_VignetteModifierType = { "VignetteModifierType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonPostProcessProperties, VignetteModifierType), Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteModifierType_MetaData), NewProp_VignetteModifierType_MetaData) }; // 4033666806
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_VignetteIntensityRange = { "VignetteIntensityRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonPostProcessProperties, VignetteIntensityRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteIntensityRange_MetaData), NewProp_VignetteIntensityRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_BlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bIsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bIsUnbound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_bEnableVignetteEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_VignetteModifierType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_VignetteModifierType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewProp_VignetteIntensityRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProtonPostProcessProperties Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	&NewStructOps,
	"ProtonPostProcessProperties",
	Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::PropPointers),
	sizeof(FProtonPostProcessProperties),
	alignof(FProtonPostProcessProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtonPostProcessProperties()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonPostProcessProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProtonPostProcessProperties.InnerSingleton, Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProtonPostProcessProperties.InnerSingleton);
}
// ********** End ScriptStruct FProtonPostProcessProperties ****************************************

// ********** Begin ScriptStruct FProtonCameraProperties *******************************************
struct Z_Construct_UScriptStruct_FProtonCameraProperties_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProtonCameraProperties); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProtonCameraProperties); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Proton\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe8\xb0\x83\xe8\xaf\x95\xe6\x88\x96UI\xe4\xb8\xad\xe8\xaf\x86\xe5\x88\xab\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe8\xb0\x83\xe8\xaf\x95\xe6\x88\x96UI\xe4\xb8\xad\xe8\xaf\x86\xe5\x88\xab\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer0a_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "\xe2\x80\x8b" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer0_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "\xe4\xb8\xbb\xe8\xa6\x81\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe9\x95\xbf\xe5\xba\xa6(cm)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x9f\xba\xe7\xa1\x80\xe9\x95\xbf\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe9\x95\xbf\xe5\xba\xa6(cm)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xbd\x8d\xe7\xbd\xae(cm)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x9f\xba\xe7\xa1\x80\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xbd\x8d\xe7\xbd\xae(cm)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xaf\xe4\xbb\xb0\xe8\xa7\x92\xe5\xba\xa6(\xc2\xb0)\xe3\x80\x82\xe6\xad\xa3\xe5\x80\xbc\xe4\xbd\xbf\xe7\x9b\xb8\xe6\x9c\xba\xe5\x90\x91\xe4\xb8\x8b\xe7\x9c\x8b\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xaf\xe4\xbb\xb0" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe4\xbf\xaf\xe4\xbb\xb0\xe8\xa7\x92\xe5\xba\xa6(\xc2\xb0)\xe3\x80\x82\xe6\xad\xa3\xe5\x80\xbc\xe4\xbd\xbf\xe7\x9b\xb8\xe6\x9c\xba\xe5\x90\x91\xe4\xb8\x8b\xe7\x9c\x8b\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe5\x81\x8f\xe8\x88\xaa\xe8\xa7\x92\xe5\xba\xa6(\xc2\xb0)\xe3\x80\x82\xe6\xad\xa3\xe5\x80\xbc\xe4\xbd\xbf\xe7\x9b\xb8\xe6\x9c\xba\xe5\x90\x91\xe5\x8f\xb3\xe7\x9c\x8b\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x9f\xba\xe7\xa1\x80\xe5\x81\x8f\xe8\x88\xaa" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe5\x81\x8f\xe8\x88\xaa\xe8\xa7\x92\xe5\xba\xa6(\xc2\xb0)\xe3\x80\x82\xe6\xad\xa3\xe5\x80\xbc\xe4\xbd\xbf\xe7\x9b\xb8\xe6\x9c\xba\xe5\x90\x91\xe5\x8f\xb3\xe7\x9c\x8b\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x9b\xb8\xe6\x9c\xba\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe8\xa7\x86\xe9\x87\x8e(FOV)(\xc2\xb0)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x9f\xba\xe7\xa1\x80""FOV" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe6\x9c\xba\xe7\x9a\x84\xe5\x9f\xba\xe7\xa1\x80\xe8\xa7\x86\xe9\x87\x8e(FOV)(\xc2\xb0)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer4_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "\xe2\x80\x8b" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetInterpSpeed_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x89\x80\xe6\x9c\x89\xe7\xbb\x84\xe5\x90\x88\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe7\x9a\x84\xe9\x80\x9a\xe7\x94\xa8\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x81\x8f\xe7\xa7\xbb\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x80\xe6\x9c\x89\xe7\xbb\x84\xe5\x90\x88\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe7\x9a\x84\xe9\x80\x9a\xe7\x94\xa8\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x89\x8b\xe5\x8a\xa8\xe6\x97\x8b\xe8\xbd\xac\xe8\xbe\x93\xe5\x85\xa5(\xe6\x9d\xa5\xe8\x87\xaa'AddManualRotation')\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\x97\x8b\xe8\xbd\xac\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x8b\xe5\x8a\xa8\xe6\x97\x8b\xe8\xbd\xac\xe8\xbe\x93\xe5\x85\xa5(\xe6\x9d\xa5\xe8\x87\xaa'AddManualRotation')\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpinDeadzone_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbd\xbf\xe7\x94\xa8'AddManualSpinXY'\xe6\x97\xb6\xe6\x89\x8b\xe6\x9f\x84\xe6\x91\x87\xe6\x9d\x86\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe6\xad\xbb\xe5\x8c\xba\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe8\x87\xaa\xe6\x97\x8b\xe6\xad\xbb\xe5\x8c\xba" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8'AddManualSpinXY'\xe6\x97\xb6\xe6\x89\x8b\xe6\x9f\x84\xe6\x91\x87\xe6\x9d\x86\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe6\xad\xbb\xe5\x8c\xba\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpinInterpSpeed_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x89\x8b\xe5\x8a\xa8\xe8\x87\xaa\xe6\x97\x8b\xe8\xbe\x93\xe5\x85\xa5(\xe6\x9d\xa5\xe8\x87\xaa'AddManualSpinXY'\xe6\x88\x96'AddManualSpinAngle')\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe8\x87\xaa\xe6\x97\x8b\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x8b\xe5\x8a\xa8\xe8\x87\xaa\xe6\x97\x8b\xe8\xbe\x93\xe5\x85\xa5(\xe6\x9d\xa5\xe8\x87\xaa'AddManualSpinXY'\xe6\x88\x96'AddManualSpinAngle')\xe7\x9a\x84\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpinModulationFactor_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe5\xa4\xa7\xe4\xba\x8e""1\xef\xbc\x8c\xe6\x9d\xa5\xe8\x87\xaa'AddManualSpinXY'\xe7\x9a\x84\xe8\x87\xaa\xe6\x97\x8b\xe5\xb0\x86\xe8\xa2\xab\xe5\x90\xb8\xe9\x99\x84\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe6\x95\xb0\xe9\x87\x8f\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94\xe4\xb8\x8a\xe3\x80\x82\xe8\xbf\x99\xe4\xbc\x9a\xe5\xbc\xba\xe5\x88\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9e\xac\xe6\x97\xb6\xe6\x8f\x92\xe5\x80\xbc\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe8\x87\xaa\xe6\x97\x8b\xe5\x90\xb8\xe9\x99\x84\xe5\x9b\xa0\xe5\xad\x90" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe5\xa4\xa7\xe4\xba\x8e""1\xef\xbc\x8c\xe6\x9d\xa5\xe8\x87\xaa'AddManualSpinXY'\xe7\x9a\x84\xe8\x87\xaa\xe6\x97\x8b\xe5\xb0\x86\xe8\xa2\xab\xe5\x90\xb8\xe9\x99\x84\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe6\x95\xb0\xe9\x87\x8f\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94\xe4\xb8\x8a\xe3\x80\x82\xe8\xbf\x99\xe4\xbc\x9a\xe5\xbc\xba\xe5\x88\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9e\xac\xe6\x97\xb6\xe6\x8f\x92\xe5\x80\xbc\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer1a_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "\xe2\x80\x8b" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer1_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe8\xa1\x8c\xe4\xb8\xba" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraCollisionSettings_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringarmSettings_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer2a_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "\xe2\x80\x8b" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer2_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocitySettings_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationSettings_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecelerationSettings_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YForceSettings_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "Y\xe8\xbd\xb4\xe5\x8a\x9b\xe8\xae\xbe\xe7\xbd\xae(\xe5\xa4\x8d\xe5\x88\xb6\xe4\xb8\x8d\xe7\xa8\xb3\xe5\xae\x9a)" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZForceSettings_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "Z\xe8\xbd\xb4\xe5\x8a\x9b\xe8\xae\xbe\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer3a_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "\xe2\x80\x8b" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer3_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "\xe6\x95\x88\xe6\x9e\x9c" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeSettings_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "DisplayName", "\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8\xe8\xae\xbe\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessVolumeProperties_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x99\x84\xe7\x9d\x80\xe5\x9c\xa8\xe6\xad\xa4\xe7\x9b\xb8\xe6\x9c\xba\xe4\xb8\x8a\xe7\x9a\x84\xe5\xb1\x80\xe9\x83\xa8\xe5\x90\x8e\xe6\x9c\x9f\xe5\xa4\x84\xe7\x90\x86\xe4\xbd\x93\xe7\xa7\xaf\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x90\x8e\xe6\x9c\x9f\xe5\xa4\x84\xe7\x90\x86\xe4\xbd\x93\xe7\xa7\xaf\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "ModuleRelativePath", "Public/ProtonCameraStructLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x99\x84\xe7\x9d\x80\xe5\x9c\xa8\xe6\xad\xa4\xe7\x9b\xb8\xe6\x9c\xba\xe4\xb8\x8a\xe7\x9a\x84\xe5\xb1\x80\xe9\x83\xa8\xe5\x90\x8e\xe6\x9c\x9f\xe5\xa4\x84\xe7\x90\x86\xe4\xbd\x93\xe7\xa7\xaf\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProtonCameraProperties constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spacer0a;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spacer0;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spacer4;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpinDeadzone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpinInterpSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpinModulationFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spacer1a;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spacer1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraCollisionSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpringarmSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spacer2a;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spacer2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocitySettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecelerationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YForceSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZForceSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spacer3a;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spacer3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessVolumeProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProtonCameraProperties constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtonCameraProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProtonCameraProperties_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProtonCameraProperties;
class UScriptStruct* FProtonCameraProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonCameraProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProtonCameraProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtonCameraProperties, (UObject*)Z_Construct_UPackage__Script_ProtonCameraPlugin(), TEXT("ProtonCameraProperties"));
	}
	return Z_Registration_Info_UScriptStruct_FProtonCameraProperties.OuterSingleton;
	}

// ********** Begin ScriptStruct FProtonCameraProperties Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer0a = { "Spacer0a", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Spacer0a), Z_Construct_UScriptStruct_FProtonSpacerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer0a_MetaData), NewProp_Spacer0a_MetaData) }; // 929742422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer0 = { "Spacer0", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Spacer0), Z_Construct_UScriptStruct_FProtonSpacerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer0_MetaData), NewProp_Spacer0_MetaData) }; // 929742422
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pitch_MetaData), NewProp_Pitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Yaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Yaw_MetaData), NewProp_Yaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOV_MetaData), NewProp_FOV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer4 = { "Spacer4", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Spacer4), Z_Construct_UScriptStruct_FProtonSpacerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer4_MetaData), NewProp_Spacer4_MetaData) }; // 929742422
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_OffsetInterpSpeed = { "OffsetInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, OffsetInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetInterpSpeed_MetaData), NewProp_OffsetInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, RotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationInterpSpeed_MetaData), NewProp_RotationInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_SpinDeadzone = { "SpinDeadzone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, SpinDeadzone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpinDeadzone_MetaData), NewProp_SpinDeadzone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_SpinInterpSpeed = { "SpinInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, SpinInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpinInterpSpeed_MetaData), NewProp_SpinInterpSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_SpinModulationFactor = { "SpinModulationFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, SpinModulationFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpinModulationFactor_MetaData), NewProp_SpinModulationFactor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer1a = { "Spacer1a", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Spacer1a), Z_Construct_UScriptStruct_FProtonSpacerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer1a_MetaData), NewProp_Spacer1a_MetaData) }; // 929742422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer1 = { "Spacer1", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Spacer1), Z_Construct_UScriptStruct_FProtonSpacerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer1_MetaData), NewProp_Spacer1_MetaData) }; // 929742422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_CameraCollisionSettings = { "CameraCollisionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, CameraCollisionSettings), Z_Construct_UScriptStruct_FProtonCameraCollisionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraCollisionSettings_MetaData), NewProp_CameraCollisionSettings_MetaData) }; // 3920594927
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_SpringarmSettings = { "SpringarmSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, SpringarmSettings), Z_Construct_UScriptStruct_FProtonSpringarmSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringarmSettings_MetaData), NewProp_SpringarmSettings_MetaData) }; // 4033232859
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer2a = { "Spacer2a", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Spacer2a), Z_Construct_UScriptStruct_FProtonSpacerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer2a_MetaData), NewProp_Spacer2a_MetaData) }; // 929742422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer2 = { "Spacer2", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Spacer2), Z_Construct_UScriptStruct_FProtonSpacerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer2_MetaData), NewProp_Spacer2_MetaData) }; // 929742422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_VelocitySettings = { "VelocitySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, VelocitySettings), Z_Construct_UScriptStruct_FProtonVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocitySettings_MetaData), NewProp_VelocitySettings_MetaData) }; // 1226520697
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_AccelerationSettings = { "AccelerationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, AccelerationSettings), Z_Construct_UScriptStruct_FProtonAccelerationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationSettings_MetaData), NewProp_AccelerationSettings_MetaData) }; // 3362314806
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_DecelerationSettings = { "DecelerationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, DecelerationSettings), Z_Construct_UScriptStruct_FProtonDecelerationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecelerationSettings_MetaData), NewProp_DecelerationSettings_MetaData) }; // 3974581823
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_YForceSettings = { "YForceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, YForceSettings), Z_Construct_UScriptStruct_FProtonYForceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YForceSettings_MetaData), NewProp_YForceSettings_MetaData) }; // 1645623691
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_ZForceSettings = { "ZForceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, ZForceSettings), Z_Construct_UScriptStruct_FProtonZForceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZForceSettings_MetaData), NewProp_ZForceSettings_MetaData) }; // 979551965
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer3a = { "Spacer3a", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Spacer3a), Z_Construct_UScriptStruct_FProtonSpacerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer3a_MetaData), NewProp_Spacer3a_MetaData) }; // 929742422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer3 = { "Spacer3", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, Spacer3), Z_Construct_UScriptStruct_FProtonSpacerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer3_MetaData), NewProp_Spacer3_MetaData) }; // 929742422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_ShakeSettings = { "ShakeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, ShakeSettings), Z_Construct_UScriptStruct_FProtonShakeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeSettings_MetaData), NewProp_ShakeSettings_MetaData) }; // 3069749542
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_PostProcessVolumeProperties = { "PostProcessVolumeProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProtonCameraProperties, PostProcessVolumeProperties), Z_Construct_UScriptStruct_FProtonPostProcessProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessVolumeProperties_MetaData), NewProp_PostProcessVolumeProperties_MetaData) }; // 3654732427
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer0a,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_FOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_OffsetInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_RotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_SpinDeadzone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_SpinInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_SpinModulationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer1a,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_CameraCollisionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_SpringarmSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer2a,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_VelocitySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_AccelerationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_DecelerationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_YForceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_ZForceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer3a,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_Spacer3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_ShakeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewProp_PostProcessVolumeProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProtonCameraProperties Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
	nullptr,
	&NewStructOps,
	"ProtonCameraProperties",
	Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::PropPointers),
	sizeof(FProtonCameraProperties),
	alignof(FProtonCameraProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProtonCameraProperties()
{
	if (!Z_Registration_Info_UScriptStruct_FProtonCameraProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProtonCameraProperties.InnerSingleton, Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProtonCameraProperties.InnerSingleton);
}
// ********** End ScriptStruct FProtonCameraProperties *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraStructLibrary_h__Script_ProtonCameraPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProtonCameraModifierType_StaticEnum, TEXT("EProtonCameraModifierType"), &Z_Registration_Info_UEnum_EProtonCameraModifierType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4033666806U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProtonSpacerStruct::StaticStruct, Z_Construct_UScriptStruct_FProtonSpacerStruct_Statics::NewStructOps, TEXT("ProtonSpacerStruct"),&Z_Registration_Info_UScriptStruct_FProtonSpacerStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtonSpacerStruct), 929742422U) },
		{ FProtonCameraCollisionSettings::StaticStruct, Z_Construct_UScriptStruct_FProtonCameraCollisionSettings_Statics::NewStructOps, TEXT("ProtonCameraCollisionSettings"),&Z_Registration_Info_UScriptStruct_FProtonCameraCollisionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtonCameraCollisionSettings), 3920594927U) },
		{ FProtonSpringarmSettings::StaticStruct, Z_Construct_UScriptStruct_FProtonSpringarmSettings_Statics::NewStructOps, TEXT("ProtonSpringarmSettings"),&Z_Registration_Info_UScriptStruct_FProtonSpringarmSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtonSpringarmSettings), 4033232859U) },
		{ FProtonVelocitySettings::StaticStruct, Z_Construct_UScriptStruct_FProtonVelocitySettings_Statics::NewStructOps, TEXT("ProtonVelocitySettings"),&Z_Registration_Info_UScriptStruct_FProtonVelocitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtonVelocitySettings), 1226520697U) },
		{ FProtonAccelerationSettings::StaticStruct, Z_Construct_UScriptStruct_FProtonAccelerationSettings_Statics::NewStructOps, TEXT("ProtonAccelerationSettings"),&Z_Registration_Info_UScriptStruct_FProtonAccelerationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtonAccelerationSettings), 3362314806U) },
		{ FProtonDecelerationSettings::StaticStruct, Z_Construct_UScriptStruct_FProtonDecelerationSettings_Statics::NewStructOps, TEXT("ProtonDecelerationSettings"),&Z_Registration_Info_UScriptStruct_FProtonDecelerationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtonDecelerationSettings), 3974581823U) },
		{ FProtonYForceSettings::StaticStruct, Z_Construct_UScriptStruct_FProtonYForceSettings_Statics::NewStructOps, TEXT("ProtonYForceSettings"),&Z_Registration_Info_UScriptStruct_FProtonYForceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtonYForceSettings), 1645623691U) },
		{ FProtonZForceSettings::StaticStruct, Z_Construct_UScriptStruct_FProtonZForceSettings_Statics::NewStructOps, TEXT("ProtonZForceSettings"),&Z_Registration_Info_UScriptStruct_FProtonZForceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtonZForceSettings), 979551965U) },
		{ FProtonShakeSettings::StaticStruct, Z_Construct_UScriptStruct_FProtonShakeSettings_Statics::NewStructOps, TEXT("ProtonShakeSettings"),&Z_Registration_Info_UScriptStruct_FProtonShakeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtonShakeSettings), 3069749542U) },
		{ FProtonPostProcessProperties::StaticStruct, Z_Construct_UScriptStruct_FProtonPostProcessProperties_Statics::NewStructOps, TEXT("ProtonPostProcessProperties"),&Z_Registration_Info_UScriptStruct_FProtonPostProcessProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtonPostProcessProperties), 3654732427U) },
		{ FProtonCameraProperties::StaticStruct, Z_Construct_UScriptStruct_FProtonCameraProperties_Statics::NewStructOps, TEXT("ProtonCameraProperties"),&Z_Registration_Info_UScriptStruct_FProtonCameraProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtonCameraProperties), 2365004740U) },
	};
}; // Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraStructLibrary_h__Script_ProtonCameraPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraStructLibrary_h__Script_ProtonCameraPlugin_1190668198{
	TEXT("/Script/ProtonCameraPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraStructLibrary_h__Script_ProtonCameraPlugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraStructLibrary_h__Script_ProtonCameraPlugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraStructLibrary_h__Script_ProtonCameraPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraStructLibrary_h__Script_ProtonCameraPlugin_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
