// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProtonCameraComponent.h"
#include "ProtonCameraStructLibrary.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProtonCameraComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
PROTONCAMERAPLUGIN_API UClass* Z_Construct_UClass_UProtonCameraComponent();
PROTONCAMERAPLUGIN_API UClass* Z_Construct_UClass_UProtonCameraComponent_NoRegister();
PROTONCAMERAPLUGIN_API UClass* Z_Construct_UClass_UProtonCameraProfile_NoRegister();
PROTONCAMERAPLUGIN_API UEnum* Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType();
PROTONCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FProtonCameraProperties();
UPackage* Z_Construct_UPackage__Script_ProtonCameraPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UProtonCameraComponent Function AddImpactShake ***************************
struct Z_Construct_UFunction_UProtonCameraComponent_AddImpactShake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xa7\xa6\xe5\x8f\x91\xe5\xbd\x93\xe5\x89\x8d\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe5\xbd\x93\xe5\x89\x8d\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84\xe5\x86\xb2\xe5\x87\xbb\xe6\x8a\x96\xe5\x8a\xa8\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddImpactShake constinit property declarations ************************
// ********** End Function AddImpactShake constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_AddImpactShake_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "AddImpactShake", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddImpactShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_AddImpactShake_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UProtonCameraComponent_AddImpactShake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_AddImpactShake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execAddImpactShake)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddImpactShake();
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function AddImpactShake *****************************

// ********** Begin Class UProtonCameraComponent Function AddManualFOV *****************************
struct Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics
{
	struct ProtonCameraComponent_eventAddManualFOV_Parms
	{
		float InFOV;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xb8\xba\xe7\x9b\xb8\xe6\x9c\xba\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8d\x95\xe5\xb8\xa7\xe7\x9a\x84\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89""FOV\xe5\x81\x8f\xe7\xa7\xbb(\xc2\xb0)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x89\x8b\xe5\x8a\xa8""FOV" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xba\xe7\x9b\xb8\xe6\x9c\xba\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8d\x95\xe5\xb8\xa7\xe7\x9a\x84\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89""FOV\xe5\x81\x8f\xe7\xa7\xbb(\xc2\xb0)\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddManualFOV constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddManualFOV constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddManualFOV Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::NewProp_InFOV = { "InFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventAddManualFOV_Parms, InFOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::NewProp_InFOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::PropPointers) < 2048);
// ********** End Function AddManualFOV Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "AddManualFOV", 	Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::ProtonCameraComponent_eventAddManualFOV_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::ProtonCameraComponent_eventAddManualFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execAddManualFOV)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InFOV);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddManualFOV(Z_Param_InFOV);
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function AddManualFOV *******************************

// ********** Begin Class UProtonCameraComponent Function AddManualLength **************************
struct Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics
{
	struct ProtonCameraComponent_eventAddManualLength_Parms
	{
		float InLength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xb8\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb(cm)\xe3\x80\x82\xe6\xad\xa4\xe5\x80\xbc\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe4\xbf\x9d\xe7\x95\x99\xef\xbc\x8c\xe7\x9b\xb4\xe5\x88\xb0\xe5\x86\x8d\xe6\xac\xa1\xe8\xae\xbe\xe7\xbd\xae\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x89\x8b\xe5\x8a\xa8\xe9\x95\xbf\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb(cm)\xe3\x80\x82\xe6\xad\xa4\xe5\x80\xbc\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe4\xbf\x9d\xe7\x95\x99\xef\xbc\x8c\xe7\x9b\xb4\xe5\x88\xb0\xe5\x86\x8d\xe6\xac\xa1\xe8\xae\xbe\xe7\xbd\xae\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddManualLength constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddManualLength constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddManualLength Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::NewProp_InLength = { "InLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventAddManualLength_Parms, InLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::NewProp_InLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::PropPointers) < 2048);
// ********** End Function AddManualLength Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "AddManualLength", 	Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::ProtonCameraComponent_eventAddManualLength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::ProtonCameraComponent_eventAddManualLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_AddManualLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_AddManualLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execAddManualLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddManualLength(Z_Param_InLength);
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function AddManualLength ****************************

// ********** Begin Class UProtonCameraComponent Function AddManualOffset **************************
struct Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics
{
	struct ProtonCameraComponent_eventAddManualOffset_Parms
	{
		FVector InOffset;
		bool bOverrideInterpolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xb8\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8d\x95\xe5\xb8\xa7\xe7\x9a\x84\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe3\x80\x82\n\x09 * @param\x09InOffset\x09\x09\x09\x09\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x88\xb0\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe4\xbd\x8d\xe7\xa7\xbb\xe5\x90\x91\xe9\x87\x8f\xe3\x80\x82\n\x09 * @param\x09""bOverrideInterpolation\x09\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe7\xab\x8b\xe5\x8d\xb3\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba false, \xe5\xb0\x86\xe4\xbd\xbf\xe7\x94\xa8\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84'\xe5\x81\x8f\xe7\xa7\xbb\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6'\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe3\x80\x82\n\x09 */" },
#endif
		{ "CPP_Default_bOverrideInterpolation", "false" },
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x89\x8b\xe5\x8a\xa8\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8d\x95\xe5\xb8\xa7\xe7\x9a\x84\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb\xe3\x80\x82\n@param       InOffset                                \xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x88\xb0\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe4\xbd\x8d\xe7\xa7\xbb\xe5\x90\x91\xe9\x87\x8f\xe3\x80\x82\n@param       bOverrideInterpolation  \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x81\x8f\xe7\xa7\xbb\xe5\xb0\x86\xe7\xab\x8b\xe5\x8d\xb3\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba false, \xe5\xb0\x86\xe4\xbd\xbf\xe7\x94\xa8\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84'\xe5\x81\x8f\xe7\xa7\xbb\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6'\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddManualOffset constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOffset;
	static void NewProp_bOverrideInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddManualOffset constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddManualOffset Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventAddManualOffset_Parms, InOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::NewProp_bOverrideInterpolation_SetBit(void* Obj)
{
	((ProtonCameraComponent_eventAddManualOffset_Parms*)Obj)->bOverrideInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::NewProp_bOverrideInterpolation = { "bOverrideInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProtonCameraComponent_eventAddManualOffset_Parms), &Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::NewProp_bOverrideInterpolation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::NewProp_InOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::NewProp_bOverrideInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::PropPointers) < 2048);
// ********** End Function AddManualOffset Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "AddManualOffset", 	Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::ProtonCameraComponent_eventAddManualOffset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::ProtonCameraComponent_eventAddManualOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execAddManualOffset)
{
	P_GET_STRUCT(FVector,Z_Param_InOffset);
	P_GET_UBOOL(Z_Param_bOverrideInterpolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddManualOffset(Z_Param_InOffset,Z_Param_bOverrideInterpolation);
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function AddManualOffset ****************************

// ********** Begin Class UProtonCameraComponent Function AddManualRotation ************************
struct Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics
{
	struct ProtonCameraComponent_eventAddManualRotation_Parms
	{
		FRotator InRotation;
		bool bOverrideInterpolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xb8\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8d\x95\xe5\xb8\xa7\xe7\x9a\x84\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\xe3\x80\x82\n\x09 * @param\x09InRotation\x09\x09\x09\x09\xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x88\xb0\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe3\x80\x82\n\x09 * @param\x09""bOverrideInterpolation\x09\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe6\x97\x8b\xe8\xbd\xac\xe5\xb0\x86\xe7\xab\x8b\xe5\x8d\xb3\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba false, \xe5\xb0\x86\xe4\xbd\xbf\xe7\x94\xa8\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84'\xe6\x97\x8b\xe8\xbd\xac\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6'\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe3\x80\x82\n\x09 */" },
#endif
		{ "CPP_Default_bOverrideInterpolation", "false" },
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x89\x8b\xe5\x8a\xa8\xe6\x97\x8b\xe8\xbd\xac" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8d\x95\xe5\xb8\xa7\xe7\x9a\x84\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb\xe3\x80\x82\n@param       InRotation                              \xe8\xa6\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x88\xb0\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\xe3\x80\x82\n@param       bOverrideInterpolation  \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe6\x97\x8b\xe8\xbd\xac\xe5\xb0\x86\xe7\xab\x8b\xe5\x8d\xb3\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba false, \xe5\xb0\x86\xe4\xbd\xbf\xe7\x94\xa8\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84'\xe6\x97\x8b\xe8\xbd\xac\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6'\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddManualRotation constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
	static void NewProp_bOverrideInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddManualRotation constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddManualRotation Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventAddManualRotation_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::NewProp_bOverrideInterpolation_SetBit(void* Obj)
{
	((ProtonCameraComponent_eventAddManualRotation_Parms*)Obj)->bOverrideInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::NewProp_bOverrideInterpolation = { "bOverrideInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProtonCameraComponent_eventAddManualRotation_Parms), &Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::NewProp_bOverrideInterpolation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::NewProp_InRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::NewProp_bOverrideInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::PropPointers) < 2048);
// ********** End Function AddManualRotation Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "AddManualRotation", 	Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::ProtonCameraComponent_eventAddManualRotation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::ProtonCameraComponent_eventAddManualRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execAddManualRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_InRotation);
	P_GET_UBOOL(Z_Param_bOverrideInterpolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddManualRotation(Z_Param_InRotation,Z_Param_bOverrideInterpolation);
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function AddManualRotation **************************

// ********** Begin Class UProtonCameraComponent Function AddManualShake ***************************
struct Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics
{
	struct ProtonCameraComponent_eventAddManualShake_Parms
	{
		TSubclassOf<UCameraShakeBase> InShakeClass;
		float InIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xa7\xa6\xe5\x8f\x91\xe4\xb8\x80\xe4\xb8\xaa\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x89\x8b\xe5\x8a\xa8\xe6\x8a\x96\xe5\x8a\xa8" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe4\xb8\x80\xe4\xb8\xaa\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8a\x96\xe5\x8a\xa8\xe6\x95\x88\xe6\x9e\x9c\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddManualShake constinit property declarations ************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_InShakeClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddManualShake constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddManualShake Property Definitions ***********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::NewProp_InShakeClass = { "InShakeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventAddManualShake_Parms, InShakeClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::NewProp_InIntensity = { "InIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventAddManualShake_Parms, InIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::NewProp_InShakeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::NewProp_InIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::PropPointers) < 2048);
// ********** End Function AddManualShake Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "AddManualShake", 	Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::ProtonCameraComponent_eventAddManualShake_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::ProtonCameraComponent_eventAddManualShake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_AddManualShake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_AddManualShake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execAddManualShake)
{
	P_GET_OBJECT(UClass,Z_Param_InShakeClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddManualShake(Z_Param_InShakeClass,Z_Param_InIntensity);
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function AddManualShake *****************************

// ********** Begin Class UProtonCameraComponent Function AddManualSpinAngle ***********************
struct Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics
{
	struct ProtonCameraComponent_eventAddManualSpinAngle_Parms
	{
		float InAngle;
		bool bOverrideInterpolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe9\x80\x9a\xe8\xbf\x87\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x8c\xe4\xb8\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84Yaw\xe5\x81\x8f\xe7\xa7\xbb(\xe8\x87\xaa\xe6\x97\x8b)\xe3\x80\x82\n\x09 * @param\x09InAngle\x09\x09\x09\x09\x09\xe8\xa6\x81\xe8\xae\xbe\xe7\xbd\xae\xe7\x9a\x84\xe8\x87\xaa\xe6\x97\x8b\xe8\xa7\x92\xe5\xba\xa6(\xc2\xb0)\xe3\x80\x82\n\x09 * @param\x09""bOverrideInterpolation\x09\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe8\x87\xaa\xe6\x97\x8b\xe5\xb0\x86\xe7\xab\x8b\xe5\x8d\xb3\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba false, \xe5\xb0\x86\xe4\xbd\xbf\xe7\x94\xa8\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84'\xe8\x87\xaa\xe6\x97\x8b\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6'\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe3\x80\x82\n\x09 */" },
#endif
		{ "CPP_Default_bOverrideInterpolation", "false" },
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x89\x8b\xe5\x8a\xa8\xe8\x87\xaa\xe6\x97\x8b(\xe8\xa7\x92\xe5\xba\xa6)" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe8\xbf\x87\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x8c\xe4\xb8\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84Yaw\xe5\x81\x8f\xe7\xa7\xbb(\xe8\x87\xaa\xe6\x97\x8b)\xe3\x80\x82\n@param       InAngle                                 \xe8\xa6\x81\xe8\xae\xbe\xe7\xbd\xae\xe7\x9a\x84\xe8\x87\xaa\xe6\x97\x8b\xe8\xa7\x92\xe5\xba\xa6(\xc2\xb0)\xe3\x80\x82\n@param       bOverrideInterpolation  \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe8\x87\xaa\xe6\x97\x8b\xe5\xb0\x86\xe7\xab\x8b\xe5\x8d\xb3\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba false, \xe5\xb0\x86\xe4\xbd\xbf\xe7\x94\xa8\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84'\xe8\x87\xaa\xe6\x97\x8b\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6'\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddManualSpinAngle constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAngle;
	static void NewProp_bOverrideInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddManualSpinAngle constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddManualSpinAngle Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::NewProp_InAngle = { "InAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventAddManualSpinAngle_Parms, InAngle), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::NewProp_bOverrideInterpolation_SetBit(void* Obj)
{
	((ProtonCameraComponent_eventAddManualSpinAngle_Parms*)Obj)->bOverrideInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::NewProp_bOverrideInterpolation = { "bOverrideInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProtonCameraComponent_eventAddManualSpinAngle_Parms), &Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::NewProp_bOverrideInterpolation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::NewProp_InAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::NewProp_bOverrideInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::PropPointers) < 2048);
// ********** End Function AddManualSpinAngle Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "AddManualSpinAngle", 	Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::ProtonCameraComponent_eventAddManualSpinAngle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::ProtonCameraComponent_eventAddManualSpinAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execAddManualSpinAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAngle);
	P_GET_UBOOL(Z_Param_bOverrideInterpolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddManualSpinAngle(Z_Param_InAngle,Z_Param_bOverrideInterpolation);
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function AddManualSpinAngle *************************

// ********** Begin Class UProtonCameraComponent Function AddManualSpinXY **************************
struct Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics
{
	struct ProtonCameraComponent_eventAddManualSpinXY_Parms
	{
		FVector2D InRotationInput;
		bool bOverrideInterpolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xbd\xbf\xe7\x94\xa8X\xe5\x92\x8cY\xe8\xbe\x93\xe5\x85\xa5\xe4\xb8\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84Yaw\xe5\x81\x8f\xe7\xa7\xbb(\xe8\x87\xaa\xe6\x97\x8b)\xef\xbc\x8c\xe9\x9d\x9e\xe5\xb8\xb8\xe9\x80\x82\xe5\x90\x88\xe6\x89\x8b\xe6\x9f\x84\xe6\x91\x87\xe6\x9d\x86\xe3\x80\x82\n\x09 * @note\x09\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xef\xbc\x8c\xe6\x82\xa8\xe5\x8f\xaf\xe8\x83\xbd\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8\xe6\xad\xa4\xe8\x8a\x82\xe7\x82\xb9\xe7\x9a\x84\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a\xe4\xb8\x8a\xe5\x8f\xb3\xe9\x94\xae -> \"\xe6\x8b\x86\xe5\x88\x86\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe5\xbc\x95\xe8\x84\x9a\" (Split Struct Pin) \xe6\x9d\xa5\xe5\x88\x86\xe5\x88\xab\xe8\xbf\x9e\xe6\x8e\xa5X\xe5\x92\x8cY\xe3\x80\x82\n\x09 * @param\x09InRotationInput\x09\x09\x09\xe4\xb8\x80\xe4\xb8\xaa""2D\xe5\x90\x91\xe9\x87\x8f(X, Y)\xef\xbc\x8c\xe5\x85\xb6\xe5\x80\xbc\xe8\x8c\x83\xe5\x9b\xb4\xe4\xb8\xba-1\xe5\x88\xb0""1\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe8\xae\xbe\xe7\xbd\xae\xe8\x87\xaa\xe6\x97\x8b\xe8\xa7\x92\xe5\xba\xa6\xe3\x80\x82\n\x09 * @param\x09""bOverrideInterpolation\x09\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe8\x87\xaa\xe6\x97\x8b\xe5\xb0\x86\xe7\xab\x8b\xe5\x8d\xb3\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba false, \xe5\xb0\x86\xe4\xbd\xbf\xe7\x94\xa8\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84'\xe8\x87\xaa\xe6\x97\x8b\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6'\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe3\x80\x82\n\x09 */" },
#endif
		{ "CPP_Default_bOverrideInterpolation", "false" },
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x89\x8b\xe5\x8a\xa8\xe8\x87\xaa\xe6\x97\x8b(XY)" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8X\xe5\x92\x8cY\xe8\xbe\x93\xe5\x85\xa5\xe4\xb8\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84Yaw\xe5\x81\x8f\xe7\xa7\xbb(\xe8\x87\xaa\xe6\x97\x8b)\xef\xbc\x8c\xe9\x9d\x9e\xe5\xb8\xb8\xe9\x80\x82\xe5\x90\x88\xe6\x89\x8b\xe6\x9f\x84\xe6\x91\x87\xe6\x9d\x86\xe3\x80\x82\n@note        \xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xef\xbc\x8c\xe6\x82\xa8\xe5\x8f\xaf\xe8\x83\xbd\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8\xe6\xad\xa4\xe8\x8a\x82\xe7\x82\xb9\xe7\x9a\x84\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a\xe4\xb8\x8a\xe5\x8f\xb3\xe9\x94\xae -> \"\xe6\x8b\x86\xe5\x88\x86\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe5\xbc\x95\xe8\x84\x9a\" (Split Struct Pin) \xe6\x9d\xa5\xe5\x88\x86\xe5\x88\xab\xe8\xbf\x9e\xe6\x8e\xa5X\xe5\x92\x8cY\xe3\x80\x82\n@param       InRotationInput                 \xe4\xb8\x80\xe4\xb8\xaa""2D\xe5\x90\x91\xe9\x87\x8f(X, Y)\xef\xbc\x8c\xe5\x85\xb6\xe5\x80\xbc\xe8\x8c\x83\xe5\x9b\xb4\xe4\xb8\xba-1\xe5\x88\xb0""1\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe8\xae\xbe\xe7\xbd\xae\xe8\x87\xaa\xe6\x97\x8b\xe8\xa7\x92\xe5\xba\xa6\xe3\x80\x82\n@param       bOverrideInterpolation  \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe8\x87\xaa\xe6\x97\x8b\xe5\xb0\x86\xe7\xab\x8b\xe5\x8d\xb3\xe7\x94\x9f\xe6\x95\x88\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba false, \xe5\xb0\x86\xe4\xbd\xbf\xe7\x94\xa8\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84'\xe8\x87\xaa\xe6\x97\x8b\xe6\x8f\x92\xe5\x80\xbc\xe9\x80\x9f\xe5\xba\xa6'\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddManualSpinXY constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRotationInput;
	static void NewProp_bOverrideInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddManualSpinXY constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddManualSpinXY Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::NewProp_InRotationInput = { "InRotationInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventAddManualSpinXY_Parms, InRotationInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::NewProp_bOverrideInterpolation_SetBit(void* Obj)
{
	((ProtonCameraComponent_eventAddManualSpinXY_Parms*)Obj)->bOverrideInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::NewProp_bOverrideInterpolation = { "bOverrideInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProtonCameraComponent_eventAddManualSpinXY_Parms), &Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::NewProp_bOverrideInterpolation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::NewProp_InRotationInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::NewProp_bOverrideInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::PropPointers) < 2048);
// ********** End Function AddManualSpinXY Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "AddManualSpinXY", 	Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::ProtonCameraComponent_eventAddManualSpinXY_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::ProtonCameraComponent_eventAddManualSpinXY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execAddManualSpinXY)
{
	P_GET_STRUCT(FVector2D,Z_Param_InRotationInput);
	P_GET_UBOOL(Z_Param_bOverrideInterpolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddManualSpinXY(Z_Param_InRotationInput,Z_Param_bOverrideInterpolation);
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function AddManualSpinXY ****************************

// ********** Begin Class UProtonCameraComponent Function CycleCameraProfile ***********************
struct Z_Construct_UFunction_UProtonCameraComponent_CycleCameraProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x88\x87\xe6\x8d\xa2\xe5\x88\xb0'\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x97\xe8\xa1\xa8'\xe4\xb8\xad\xe7\x9a\x84\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82\xe9\x9c\x80\xe8\xa6\x81'bEnableCameraCycle'\xe4\xb8\xba true\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x87\xe6\x8d\xa2\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x87\xe6\x8d\xa2\xe5\x88\xb0'\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x97\xe8\xa1\xa8'\xe4\xb8\xad\xe7\x9a\x84\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82\xe9\x9c\x80\xe8\xa6\x81'bEnableCameraCycle'\xe4\xb8\xba true\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CycleCameraProfile constinit property declarations ********************
// ********** End Function CycleCameraProfile constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_CycleCameraProfile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "CycleCameraProfile", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_CycleCameraProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_CycleCameraProfile_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UProtonCameraComponent_CycleCameraProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_CycleCameraProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execCycleCameraProfile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CycleCameraProfile();
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function CycleCameraProfile *************************

// ********** Begin Class UProtonCameraComponent Function GetCycleIndex ****************************
struct Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics
{
	struct ProtonCameraComponent_eventGetCycleIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\x8e\xb7\xe5\x8f\x96'\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x97\xe8\xa1\xa8'\xe4\xb8\xad\xe7\x9a\x84\xe5\xbd\x93\xe5\x89\x8d\xe7\xb4\xa2\xe5\xbc\x95\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe5\xbe\xaa\xe7\x8e\xaf\xe7\xb4\xa2\xe5\xbc\x95" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96'\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x97\xe8\xa1\xa8'\xe4\xb8\xad\xe7\x9a\x84\xe5\xbd\x93\xe5\x89\x8d\xe7\xb4\xa2\xe5\xbc\x95\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCycleIndex constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCycleIndex constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCycleIndex Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventGetCycleIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::PropPointers) < 2048);
// ********** End Function GetCycleIndex Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "GetCycleIndex", 	Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::ProtonCameraComponent_eventGetCycleIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::ProtonCameraComponent_eventGetCycleIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execGetCycleIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCycleIndex();
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function GetCycleIndex ******************************

// ********** Begin Class UProtonCameraComponent Function GetModifierEffect ************************
struct Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics
{
	struct ProtonCameraComponent_eventGetModifierEffect_Parms
	{
		EProtonCameraModifierType ModifierType;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9a\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe5\xb7\xb2\xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe6\x95\x88\xe6\x9e\x9c\xe5\x80\xbc\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91(\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x8c\xe9\xa9\xb1\xe5\x8a\xa8\xe5\x90\x8e\xe6\x9c\x9f\xe5\xa4\x84\xe7\x90\x86\xe6\x95\x88\xe6\x9e\x9c)\xe3\x80\x82\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe5\xbf\x85\xe9\xa1\xbb\xe5\xb7\xb2\xe5\x90\xaf\xe7\x94\xa8\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe6\x95\x88\xe6\x9e\x9c" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9a\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe5\xb7\xb2\xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe6\x95\x88\xe6\x9e\x9c\xe5\x80\xbc\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91(\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x8c\xe9\xa9\xb1\xe5\x8a\xa8\xe5\x90\x8e\xe6\x9c\x9f\xe5\xa4\x84\xe7\x90\x86\xe6\x95\x88\xe6\x9e\x9c)\xe3\x80\x82\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe4\xbf\xae\xe6\x94\xb9\xe5\x99\xa8\xe5\xbf\x85\xe9\xa1\xbb\xe5\xb7\xb2\xe5\x90\xaf\xe7\x94\xa8\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetModifierEffect constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModifierType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetModifierEffect constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetModifierEffect Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::NewProp_ModifierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::NewProp_ModifierType = { "ModifierType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventGetModifierEffect_Parms, ModifierType), Z_Construct_UEnum_ProtonCameraPlugin_EProtonCameraModifierType, METADATA_PARAMS(0, nullptr) }; // 4033666806
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventGetModifierEffect_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::NewProp_ModifierType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::NewProp_ModifierType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::PropPointers) < 2048);
// ********** End Function GetModifierEffect Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "GetModifierEffect", 	Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::ProtonCameraComponent_eventGetModifierEffect_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::ProtonCameraComponent_eventGetModifierEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execGetModifierEffect)
{
	P_GET_ENUM(EProtonCameraModifierType,Z_Param_ModifierType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetModifierEffect(EProtonCameraModifierType(Z_Param_ModifierType));
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function GetModifierEffect **************************

// ********** Begin Class UProtonCameraComponent Function GetProfileAtCycleIndex *******************
struct Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics
{
	struct ProtonCameraComponent_eventGetProfileAtCycleIndex_Parms
	{
		int32 InIndex;
		UProtonCameraProfile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\x8e\xb7\xe5\x8f\x96'\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x97\xe8\xa1\xa8'\xe4\xb8\xad\xe6\x8c\x87\xe5\xae\x9a\xe7\xb4\xa2\xe5\xbc\x95\xe5\xa4\x84\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9a\xe7\xb4\xa2\xe5\xbc\x95\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96'\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x97\xe8\xa1\xa8'\xe4\xb8\xad\xe6\x8c\x87\xe5\xae\x9a\xe7\xb4\xa2\xe5\xbc\x95\xe5\xa4\x84\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetProfileAtCycleIndex constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProfileAtCycleIndex constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProfileAtCycleIndex Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventGetProfileAtCycleIndex_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventGetProfileAtCycleIndex_Parms, ReturnValue), Z_Construct_UClass_UProtonCameraProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::PropPointers) < 2048);
// ********** End Function GetProfileAtCycleIndex Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "GetProfileAtCycleIndex", 	Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::ProtonCameraComponent_eventGetProfileAtCycleIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::ProtonCameraComponent_eventGetProfileAtCycleIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execGetProfileAtCycleIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UProtonCameraProfile**)Z_Param__Result=P_THIS->GetProfileAtCycleIndex(Z_Param_InIndex);
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function GetProfileAtCycleIndex *********************

// ********** Begin Class UProtonCameraComponent Function SetIntoReverse ***************************
struct Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics
{
	struct ProtonCameraComponent_eventSetIntoReverse_Parms
	{
		bool bIsReversing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbd\xbf\xe7\x9b\xb8\xe6\x9c\xba\xe8\xbf\x9b\xe5\x85\xa5\xe5\x80\x92\xe8\xbd\xa6\xe8\xa1\x8c\xe4\xb8\xba\xe7\x8a\xb6\xe6\x80\x81(\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x8c\xe5\x8f\x8d\xe8\xbd\xacYaw)\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe5\x80\x92\xe8\xbd\xa6\xe7\x8a\xb6\xe6\x80\x81" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x9b\xb8\xe6\x9c\xba\xe8\xbf\x9b\xe5\x85\xa5\xe5\x80\x92\xe8\xbd\xa6\xe8\xa1\x8c\xe4\xb8\xba\xe7\x8a\xb6\xe6\x80\x81(\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x8c\xe5\x8f\x8d\xe8\xbd\xacYaw)\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetIntoReverse constinit property declarations ************************
	static void NewProp_bIsReversing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReversing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIntoReverse constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIntoReverse Property Definitions ***********************************
void Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::NewProp_bIsReversing_SetBit(void* Obj)
{
	((ProtonCameraComponent_eventSetIntoReverse_Parms*)Obj)->bIsReversing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::NewProp_bIsReversing = { "bIsReversing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProtonCameraComponent_eventSetIntoReverse_Parms), &Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::NewProp_bIsReversing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::NewProp_bIsReversing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::PropPointers) < 2048);
// ********** End Function SetIntoReverse Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "SetIntoReverse", 	Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::ProtonCameraComponent_eventSetIntoReverse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::ProtonCameraComponent_eventSetIntoReverse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execSetIntoReverse)
{
	P_GET_UBOOL(Z_Param_bIsReversing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIntoReverse(Z_Param_bIsReversing);
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function SetIntoReverse *****************************

// ********** Begin Class UProtonCameraComponent Function SetPhysicsProperties *********************
struct Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics
{
	struct ProtonCameraComponent_eventSetPhysicsProperties_Parms
	{
		FVector InVelocity;
		FVector InLocalVelocity;
		FVector InAcceleration;
		FVector InLocalAcceleration;
		FTransform InTransform;
		float InDeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x89\x8b\xe5\x8a\xa8\xe8\xae\xbe\xe7\xbd\xae\xe8\xbd\xa6\xe8\xbe\x86\xe7\x9a\x84\xe7\x89\xa9\xe7\x90\x86\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x82\xe8\xbf\x99\xe5\xaf\xb9\xe4\xba\x8e\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe4\xb8\x8a\xe7\x9a\x84\xe5\xa4\x8d\xe5\x88\xb6\xe8\xbd\xa6\xe8\xbe\x86\xe9\x9d\x9e\xe5\xb8\xb8\xe6\x9c\x89\xe7\x94\xa8\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xba\xe5\xae\x83\xe4\xbb\xac\xe6\x97\xa0\xe6\xb3\x95\xe8\xbf\x9b\xe8\xa1\x8c\xe6\x9c\xac\xe5\x9c\xb0\xe7\x89\xa9\xe7\x90\x86\xe8\xae\xa1\xe7\xae\x97\xe3\x80\x82\n\x09 * \xe8\xb0\x83\xe7\x94\xa8\xe6\xad\xa4\xe5\x87\xbd\xe6\x95\xb0\xe5\xb0\x86\xe7\xa6\x81\xe7\x94\xa8\xe6\x9c\xac\xe5\xb8\xa7\xe7\x9a\x84\xe8\x87\xaa\xe5\x8a\xa8\xe7\x89\xa9\xe7\x90\x86\xe8\xae\xa1\xe7\xae\x97\xe3\x80\x82\n\x09 * @param InVelocity - \xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82\n\x09 * @param InLocalVelocity - \xe5\xbd\x93\xe5\x89\x8d\xe5\xb1\x80\xe9\x83\xa8\xe7\xa9\xba\xe9\x97\xb4\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82\n\x09 * @param InAcceleration - \xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82\n\x09 * @param InLocalAcceleration - \xe5\xbd\x93\xe5\x89\x8d\xe5\xb1\x80\xe9\x83\xa8\xe7\xa9\xba\xe9\x97\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82\n\x09 * @param InTransform - \xe5\xbd\x93\xe5\x89\x8d""Actor\xe7\x9a\x84\xe5\x8f\x98\xe6\x8d\xa2\xe3\x80\x82\n\x09 * @param InDeltaTime - \xe8\xb7\x9d\xe7\xa6\xbb\xe4\xb8\x8a\xe6\xac\xa1\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe3\x80\x82\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x8b\xe5\x8a\xa8\xe8\xae\xbe\xe7\xbd\xae\xe8\xbd\xa6\xe8\xbe\x86\xe7\x9a\x84\xe7\x89\xa9\xe7\x90\x86\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x82\xe8\xbf\x99\xe5\xaf\xb9\xe4\xba\x8e\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe4\xb8\x8a\xe7\x9a\x84\xe5\xa4\x8d\xe5\x88\xb6\xe8\xbd\xa6\xe8\xbe\x86\xe9\x9d\x9e\xe5\xb8\xb8\xe6\x9c\x89\xe7\x94\xa8\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xba\xe5\xae\x83\xe4\xbb\xac\xe6\x97\xa0\xe6\xb3\x95\xe8\xbf\x9b\xe8\xa1\x8c\xe6\x9c\xac\xe5\x9c\xb0\xe7\x89\xa9\xe7\x90\x86\xe8\xae\xa1\xe7\xae\x97\xe3\x80\x82\n\xe8\xb0\x83\xe7\x94\xa8\xe6\xad\xa4\xe5\x87\xbd\xe6\x95\xb0\xe5\xb0\x86\xe7\xa6\x81\xe7\x94\xa8\xe6\x9c\xac\xe5\xb8\xa7\xe7\x9a\x84\xe8\x87\xaa\xe5\x8a\xa8\xe7\x89\xa9\xe7\x90\x86\xe8\xae\xa1\xe7\xae\x97\xe3\x80\x82\n@param InVelocity - \xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82\n@param InLocalVelocity - \xe5\xbd\x93\xe5\x89\x8d\xe5\xb1\x80\xe9\x83\xa8\xe7\xa9\xba\xe9\x97\xb4\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82\n@param InAcceleration - \xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82\n@param InLocalAcceleration - \xe5\xbd\x93\xe5\x89\x8d\xe5\xb1\x80\xe9\x83\xa8\xe7\xa9\xba\xe9\x97\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe3\x80\x82\n@param InTransform - \xe5\xbd\x93\xe5\x89\x8d""Actor\xe7\x9a\x84\xe5\x8f\x98\xe6\x8d\xa2\xe3\x80\x82\n@param InDeltaTime - \xe8\xb7\x9d\xe7\xa6\xbb\xe4\xb8\x8a\xe6\xac\xa1\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetPhysicsProperties constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocalVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocalAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPhysicsProperties constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPhysicsProperties Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventSetPhysicsProperties_Parms, InVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InLocalVelocity = { "InLocalVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventSetPhysicsProperties_Parms, InLocalVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InAcceleration = { "InAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventSetPhysicsProperties_Parms, InAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InLocalAcceleration = { "InLocalAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventSetPhysicsProperties_Parms, InLocalAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventSetPhysicsProperties_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProtonCameraComponent_eventSetPhysicsProperties_Parms, InDeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InLocalVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InLocalAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::NewProp_InDeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::PropPointers) < 2048);
// ********** End Function SetPhysicsProperties Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProtonCameraComponent, nullptr, "SetPhysicsProperties", 	Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::ProtonCameraComponent_eventSetPhysicsProperties_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::ProtonCameraComponent_eventSetPhysicsProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProtonCameraComponent::execSetPhysicsProperties)
{
	P_GET_STRUCT(FVector,Z_Param_InVelocity);
	P_GET_STRUCT(FVector,Z_Param_InLocalVelocity);
	P_GET_STRUCT(FVector,Z_Param_InAcceleration);
	P_GET_STRUCT(FVector,Z_Param_InLocalAcceleration);
	P_GET_STRUCT(FTransform,Z_Param_InTransform);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPhysicsProperties(Z_Param_InVelocity,Z_Param_InLocalVelocity,Z_Param_InAcceleration,Z_Param_InLocalAcceleration,Z_Param_InTransform,Z_Param_InDeltaTime);
	P_NATIVE_END;
}
// ********** End Class UProtonCameraComponent Function SetPhysicsProperties ***********************

// ********** Begin Class UProtonCameraComponent ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProtonCameraComponent;
UClass* UProtonCameraComponent::GetPrivateStaticClass()
{
	using TClass = UProtonCameraComponent;
	if (!Z_Registration_Info_UClass_UProtonCameraComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProtonCameraComponent"),
			Z_Registration_Info_UClass_UProtonCameraComponent.InnerSingleton,
			StaticRegisterNativesUProtonCameraComponent,
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
	return Z_Registration_Info_UClass_UProtonCameraComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UProtonCameraComponent_NoRegister()
{
	return UProtonCameraComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProtonCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ProtonCamera" },
		{ "DisplayName", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
		{ "IncludePath", "ProtonCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\xac\xe7\xb3\xbb\xe7\xbb\x9f\xe5\xb0\x86\xe8\xa6\x81\xe6\x8e\xa7\xe5\x88\xb6\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\xac\xe7\xb3\xbb\xe7\xbb\x9f\xe5\xb0\x86\xe8\xa6\x81\xe6\x8e\xa7\xe5\x88\xb6\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraCycle_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x85\x81\xe8\xae\xb8\xe9\x80\x9a\xe8\xbf\x87'CycleCameraProfile'\xe5\x87\xbd\xe6\x95\xb0\xe5\x9c\xa8\xe5\xa4\x9a\xe4\xb8\xaa\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb9\x8b\xe9\x97\xb4\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x87\xe6\x8d\xa2\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x85\x81\xe8\xae\xb8\xe9\x80\x9a\xe8\xbf\x87'CycleCameraProfile'\xe5\x87\xbd\xe6\x95\xb0\xe5\x9c\xa8\xe5\xa4\x9a\xe4\xb8\xaa\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe4\xb9\x8b\xe9\x97\xb4\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x87\xe6\x8d\xa2\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraProfile_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93'\xe5\x90\xaf\xe7\x94\xa8\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf'\xe4\xb8\xba false \xe6\x97\xb6\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe5\x8d\x95\xe4\xb8\xaa\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6" },
		{ "EditCondition", "!bEnableCameraCycle" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93'\xe5\x90\xaf\xe7\x94\xa8\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf'\xe4\xb8\xba false \xe6\x97\xb6\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe5\x8d\x95\xe4\xb8\xaa\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraCycle_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93'\xe5\x90\xaf\xe7\x94\xa8\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf'\xe4\xb8\xba true \xe6\x97\xb6\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x87\xe6\x8d\xa2\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe6\x95\xb0\xe7\xbb\x84\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x97\xe8\xa1\xa8" },
		{ "EditCondition", "bEnableCameraCycle" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93'\xe5\x90\xaf\xe7\x94\xa8\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf'\xe4\xb8\xba true \xe6\x97\xb6\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x87\xe6\x8d\xa2\xe7\x9a\x84\xe7\x9b\xb8\xe6\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe6\x95\xb0\xe7\xbb\x84\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingIndex_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\xb8\xb8\xe6\x88\x8f\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xef\xbc\x8c\xe5\x9c\xa8'\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x97\xe8\xa1\xa8'\xe4\xb8\xad\xe9\xbb\x98\xe8\xae\xa4\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe7\xb4\xa2\xe5\xbc\x95\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe8\xb5\xb7\xe5\xa7\x8b\xe7\xb4\xa2\xe5\xbc\x95" },
		{ "EditCondition", "bEnableCameraCycle" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xef\xbc\x8c\xe5\x9c\xa8'\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x97\xe8\xa1\xa8'\xe4\xb8\xad\xe9\xbb\x98\xe8\xae\xa4\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe7\xb4\xa2\xe5\xbc\x95\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalLength_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xbd\xbd\xe5\x85\xb7\xe7\x89\xb9\xe5\xae\x9a\xe5\x81\x8f\xe7\xa7\xbb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xb8\xba\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\x8f\x90\xe4\xbe\x9b\xe9\xa2\x9d\xe5\xa4\x96\xe7\x9a\x84\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb(cm)\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe4\xb8\x8d\xe4\xbf\xae\xe6\x94\xb9\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe6\x83\x85\xe5\x86\xb5\xe4\xb8\x8b\xef\xbc\x8c\xe5\xaf\xb9\xe7\x89\xb9\xe5\xae\x9a\xe8\xbd\xbd\xe5\x85\xb7\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbe\xae\xe8\xb0\x83\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\xa2\x9d\xe5\xa4\x96\xe9\x95\xbf\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xba\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\x8f\x90\xe4\xbe\x9b\xe9\xa2\x9d\xe5\xa4\x96\xe7\x9a\x84\xe9\x95\xbf\xe5\xba\xa6\xe5\x81\x8f\xe7\xa7\xbb(cm)\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe4\xb8\x8d\xe4\xbf\xae\xe6\x94\xb9\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe6\x83\x85\xe5\x86\xb5\xe4\xb8\x8b\xef\xbc\x8c\xe5\xaf\xb9\xe7\x89\xb9\xe5\xae\x9a\xe8\xbd\xbd\xe5\x85\xb7\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbe\xae\xe8\xb0\x83\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalOffset_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xbd\xbd\xe5\x85\xb7\xe7\x89\xb9\xe5\xae\x9a\xe5\x81\x8f\xe7\xa7\xbb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xb8\xba\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\x8f\x90\xe4\xbe\x9b\xe9\xa2\x9d\xe5\xa4\x96\xe7\x9a\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb(cm)\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\xaf\xb9\xe7\x89\xb9\xe5\xae\x9a\xe8\xbd\xbd\xe5\x85\xb7\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbe\xae\xe8\xb0\x83\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\xa2\x9d\xe5\xa4\x96\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xba\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\x8f\x90\xe4\xbe\x9b\xe9\xa2\x9d\xe5\xa4\x96\xe7\x9a\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb(cm)\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\xaf\xb9\xe7\x89\xb9\xe5\xae\x9a\xe8\xbd\xbd\xe5\x85\xb7\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbe\xae\xe8\xb0\x83\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalRotation_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xbd\xbd\xe5\x85\xb7\xe7\x89\xb9\xe5\xae\x9a\xe5\x81\x8f\xe7\xa7\xbb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xb8\xba\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\x8f\x90\xe4\xbe\x9b\xe9\xa2\x9d\xe5\xa4\x96\xe7\x9a\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb(\xc2\xb0)\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\xaf\xb9\xe7\x89\xb9\xe5\xae\x9a\xe8\xbd\xbd\xe5\x85\xb7\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbe\xae\xe8\xb0\x83\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\xa2\x9d\xe5\xa4\x96\xe6\x97\x8b\xe8\xbd\xac" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xba\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe6\x8f\x90\xe4\xbe\x9b\xe9\xa2\x9d\xe5\xa4\x96\xe7\x9a\x84\xe7\x9b\xb8\xe5\xaf\xb9\xe6\x97\x8b\xe8\xbd\xac\xe5\x81\x8f\xe7\xa7\xbb(\xc2\xb0)\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\xaf\xb9\xe7\x89\xb9\xe5\xae\x9a\xe8\xbd\xbd\xe5\x85\xb7\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbe\xae\xe8\xb0\x83\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalFOV_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xbd\xbd\xe5\x85\xb7\xe7\x89\xb9\xe5\xae\x9a\xe5\x81\x8f\xe7\xa7\xbb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xb8\xba\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8f\x90\xe4\xbe\x9b\xe9\xa2\x9d\xe5\xa4\x96\xe7\x9a\x84\xe8\xa7\x86\xe9\x87\x8e(FOV)\xe5\x81\x8f\xe7\xa7\xbb(\xc2\xb0)\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\xaf\xb9\xe7\x89\xb9\xe5\xae\x9a\xe8\xbd\xbd\xe5\x85\xb7\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbe\xae\xe8\xb0\x83\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\xa2\x9d\xe5\xa4\x96""FOV" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xba\xe7\x9b\xb8\xe6\x9c\xba\xe6\x8f\x90\xe4\xbe\x9b\xe9\xa2\x9d\xe5\xa4\x96\xe7\x9a\x84\xe8\xa7\x86\xe9\x87\x8e(FOV)\xe5\x81\x8f\xe7\xa7\xbb(\xc2\xb0)\xe3\x80\x82\xe7\x94\xa8\xe4\xba\x8e\xe5\xaf\xb9\xe7\x89\xb9\xe5\xae\x9a\xe8\xbd\xbd\xe5\x85\xb7\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbe\xae\xe8\xb0\x83\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bViewDebugProperties_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe6\x98\xbe\xe7\xa4\xba\xe5\x8f\xaa\xe8\xaf\xbb\xe7\x9a\x84\xe8\xb0\x83\xe8\xaf\x95\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe6\x9f\xa5\xe7\x9c\x8b\xe8\xb0\x83\xe8\xaf\x95\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba true, \xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe6\x98\xbe\xe7\xa4\xba\xe5\x8f\xaa\xe8\xaf\xbb\xe7\x9a\x84\xe8\xb0\x83\xe8\xaf\x95\xe5\xb1\x9e\xe6\x80\xa7\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe5\x89\x8d\xe6\xbf\x80\xe6\xb4\xbb\xe7\x9a\x84\xe3\x80\x81\xe5\xae\x9a\xe4\xb9\x89\xe7\x9b\xb8\xe6\x9c\xba\xe8\xa1\x8c\xe4\xb8\xba\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe9\x9b\x86\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\xbd\x93\xe5\x89\x8d\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6" },
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\xbf\x80\xe6\xb4\xbb\xe7\x9a\x84\xe3\x80\x81\xe5\xae\x9a\xe4\xb9\x89\xe7\x9b\xb8\xe6\x9c\xba\xe8\xa1\x8c\xe4\xb8\xba\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xe9\x9b\x86\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe4\xbd\x8d\xe7\xbd\xae(cm)\xe3\x80\x82*/" },
#endif
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe4\xbd\x8d\xe7\xbd\xae(cm)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xbb\x8f\xe8\xbf\x87\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe9\x80\x9f\xe5\xba\xa6(cm/s)\xe3\x80\x82*/" },
#endif
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x8f\xe8\xbf\x87\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe9\x80\x9f\xe5\xba\xa6(cm/s)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xbb\x8f\xe8\xbf\x87\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe9\x80\x9f\xe7\x8e\x87(cm/s)\xe3\x80\x82*/" },
#endif
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x8f\xe8\xbf\x87\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe9\x80\x9f\xe7\x8e\x87(cm/s)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xbb\x8f\xe8\xbf\x87\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(cm/s^2)\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe7\x9b\xb8\xe6\x9c\xba\xe6\x95\x88\xe6\x9e\x9c\xe3\x80\x82*/" },
#endif
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x8f\xe8\xbf\x87\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(cm/s^2)\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe7\x9b\xb8\xe6\x9c\xba\xe6\x95\x88\xe6\x9e\x9c\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationInstant_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x9c\xaa\xe7\xbb\x8f\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe3\x80\x81\xe7\x9e\xac\xe6\x97\xb6\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(cm/s^2)\xe3\x80\x82*/" },
#endif
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\xaa\xe7\xbb\x8f\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe3\x80\x81\xe7\x9e\xac\xe6\x97\xb6\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(cm/s^2)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalVelocity_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xbb\x8f\xe8\xbf\x87\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe5\xb1\x80\xe9\x83\xa8\xe7\xa9\xba\xe9\x97\xb4\xe9\x80\x9f\xe5\xba\xa6(cm/s)\xe3\x80\x82*/" },
#endif
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x8f\xe8\xbf\x87\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe5\xb1\x80\xe9\x83\xa8\xe7\xa9\xba\xe9\x97\xb4\xe9\x80\x9f\xe5\xba\xa6(cm/s)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalAcceleration_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xbb\x8f\xe8\xbf\x87\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe5\xb1\x80\xe9\x83\xa8\xe7\xa9\xba\xe9\x97\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(cm/s^2)\xe3\x80\x82*/" },
#endif
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x8f\xe8\xbf\x87\xe5\xb9\xb3\xe6\xbb\x91\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe5\xb1\x80\xe9\x83\xa8\xe7\xa9\xba\xe9\x97\xb4\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6(cm/s^2)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe6\x9c\x9d\xe5\x90\x91(\xe5\x9b\x9b\xe5\x85\x83\xe6\x95\xb0)\xe3\x80\x82*/" },
#endif
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe6\x9c\x9d\xe5\x90\x91(\xe5\x9b\x9b\xe5\x85\x83\xe6\x95\xb0)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe6\x97\x8b\xe8\xbd\xac(\xe6\xac\xa7\xe6\x8b\x89\xe8\xa7\x92)\xe3\x80\x82*/" },
#endif
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe6\x97\x8b\xe8\xbd\xac(\xe6\xac\xa7\xe6\x8b\x89\xe8\xa7\x92)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe8\xa7\x92\xe9\x80\x9f\xe5\xba\xa6(\xe6\xac\xa7\xe6\x8b\x89\xe8\xa7\x92, \xc2\xb0/s)\xe3\x80\x82*/" },
#endif
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbd\xbd\xe5\x85\xb7""Actor\xe7\x9a\x84\xe4\xb8\x96\xe7\x95\x8c\xe7\xa9\xba\xe9\x97\xb4\xe8\xa7\x92\xe9\x80\x9f\xe5\xba\xa6(\xe6\xac\xa7\xe6\x8b\x89\xe8\xa7\x92, \xc2\xb0/s)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInReverse_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x9b\xb8\xe6\x9c\xba\xe6\x98\xaf\xe5\x90\xa6\xe5\xa4\x84\xe4\xba\x8e\xe5\x80\x92\xe8\xbd\xa6\xe8\xa1\x8c\xe4\xb8\xba\xe7\x8a\xb6\xe6\x80\x81\xe3\x80\x82*/" },
#endif
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe6\x9c\xba\xe6\x98\xaf\xe5\x90\xa6\xe5\xa4\x84\xe4\xba\x8e\xe5\x80\x92\xe8\xbd\xa6\xe8\xa1\x8c\xe4\xb8\xba\xe7\x8a\xb6\xe6\x80\x81\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleIndex_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe5\x90\xaf\xe7\x94\xa8\xe4\xba\x86\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xef\xbc\x8c\xe6\xad\xa4\xe4\xb8\xba'\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x97\xe8\xa1\xa8'\xe4\xb8\xad\xe7\x9a\x84\xe5\xbd\x93\xe5\x89\x8d\xe7\xb4\xa2\xe5\xbc\x95\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\xbd\x93\xe5\x89\x8d\xe5\xbe\xaa\xe7\x8e\xaf\xe7\xb4\xa2\xe5\xbc\x95" },
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe5\x90\xaf\xe7\x94\xa8\xe4\xba\x86\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xef\xbc\x8c\xe6\xad\xa4\xe4\xb8\xba'\xe7\x9b\xb8\xe6\x9c\xba\xe5\xbe\xaa\xe7\x8e\xaf\xe5\x88\x97\xe8\xa1\xa8'\xe4\xb8\xad\xe7\x9a\x84\xe5\xbd\x93\xe5\x89\x8d\xe7\xb4\xa2\xe5\xbc\x95\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityModifierFactor_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84\xe9\x80\x9f\xe5\xba\xa6\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90 [0,1]\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe9\x80\x9f\xe5\xba\xa6\xe5\x9b\xa0\xe5\xad\x90" },
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84\xe9\x80\x9f\xe5\xba\xa6\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90 [0,1]\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationModifierFactor_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90 [0,1]\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe5\x9b\xa0\xe5\xad\x90" },
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90 [0,1]\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecelerationModifierFactor_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90 [0,1]\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe5\x9b\xa0\xe5\xad\x90" },
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84\xe5\x87\x8f\xe9\x80\x9f\xe5\xba\xa6\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90 [0,1]\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YForceModifierFactor_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84Y\xe8\xbd\xb4\xe5\x8a\x9b(\xe4\xbe\xa7\xe5\x90\x91)\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90 [-1,1]\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "Y\xe8\xbd\xb4\xe5\x8a\x9b\xe5\x9b\xa0\xe5\xad\x90" },
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84Y\xe8\xbd\xb4\xe5\x8a\x9b(\xe4\xbe\xa7\xe5\x90\x91)\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90 [-1,1]\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZForceModifierFactor_MetaData[] = {
		{ "Category", "Proton\xe7\x9b\xb8\xe6\x9c\xba|\xe8\xb0\x83\xe8\xaf\x95" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84Z\xe8\xbd\xb4\xe5\x8a\x9b(\xe5\x9e\x82\xe7\x9b\xb4)\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90 [-1-1]\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82*/" },
#endif
		{ "DisplayName", "Z\xe8\xbd\xb4\xe5\x8a\x9b\xe5\x9b\xa0\xe5\xad\x90" },
		{ "EditCondition", "bViewDebugProperties" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe7\x9a\x84Z\xe8\xbd\xb4\xe5\x8a\x9b(\xe5\x9e\x82\xe7\x9b\xb4)\xe6\x95\x88\xe6\x9e\x9c\xe4\xbf\xae\xe6\x94\xb9\xe5\x9b\xa0\xe5\xad\x90 [-1-1]\xe3\x80\x82\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x8b\xa5\xe6\x9c\x89\xe6\xad\xa4\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84""Actor (\xe5\x8d\xb3\xe8\xbd\xa6\xe8\xbe\x86Pawn)\xe3\x80\x82*/" },
#endif
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8b\xa5\xe6\x9c\x89\xe6\xad\xa4\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84""Actor (\xe5\x8d\xb3\xe8\xbd\xa6\xe8\xbe\x86Pawn)\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe3\x80\x90\xe5\x85\xb3\xe9\x94\xae\xe6\x94\xb9\xe5\x8a\xa8\xe3\x80\x91\xe5\xad\x98\xe5\x82\xa8\xe6\x88\x91\xe4\xbb\xac\xe5\xae\x9e\xe9\x99\x85\xe9\x99\x84\xe7\x9d\x80\xe7\x9a\x84\xe3\x80\x81\xe6\xad\xa3\xe5\x9c\xa8\xe6\xa8\xa1\xe6\x8b\x9f\xe7\x89\xa9\xe7\x90\x86\xe7\x9a\x84\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe3\x80\x90\xe5\x85\xb3\xe9\x94\xae\xe6\x94\xb9\xe5\x8a\xa8\xe3\x80\x91\xe5\xad\x98\xe5\x82\xa8\xe6\x88\x91\xe4\xbb\xac\xe5\xae\x9e\xe9\x99\x85\xe9\x99\x84\xe7\x9d\x80\xe7\x9a\x84\xe3\x80\x81\xe6\xad\xa3\xe5\x9c\xa8\xe6\xa8\xa1\xe6\x8b\x9f\xe7\x89\xa9\xe7\x90\x86\xe7\x9a\x84\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ Begin \xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeSource_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringarmRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProtonCameraComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UProtonCameraComponent constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static void NewProp_bEnableCameraCycle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraCycle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraProfile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraCycle_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraCycle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdditionalLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdditionalFOV;
	static void NewProp_bViewDebugProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bViewDebugProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationInstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static void NewProp_bInReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReverse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CycleIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityModifierFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccelerationModifierFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecelerationModifierFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YForceModifierFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZForceModifierFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraShakeSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringarmRoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UProtonCameraComponent constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddImpactShake"), .Pointer = &UProtonCameraComponent::execAddImpactShake },
		{ .NameUTF8 = UTF8TEXT("AddManualFOV"), .Pointer = &UProtonCameraComponent::execAddManualFOV },
		{ .NameUTF8 = UTF8TEXT("AddManualLength"), .Pointer = &UProtonCameraComponent::execAddManualLength },
		{ .NameUTF8 = UTF8TEXT("AddManualOffset"), .Pointer = &UProtonCameraComponent::execAddManualOffset },
		{ .NameUTF8 = UTF8TEXT("AddManualRotation"), .Pointer = &UProtonCameraComponent::execAddManualRotation },
		{ .NameUTF8 = UTF8TEXT("AddManualShake"), .Pointer = &UProtonCameraComponent::execAddManualShake },
		{ .NameUTF8 = UTF8TEXT("AddManualSpinAngle"), .Pointer = &UProtonCameraComponent::execAddManualSpinAngle },
		{ .NameUTF8 = UTF8TEXT("AddManualSpinXY"), .Pointer = &UProtonCameraComponent::execAddManualSpinXY },
		{ .NameUTF8 = UTF8TEXT("CycleCameraProfile"), .Pointer = &UProtonCameraComponent::execCycleCameraProfile },
		{ .NameUTF8 = UTF8TEXT("GetCycleIndex"), .Pointer = &UProtonCameraComponent::execGetCycleIndex },
		{ .NameUTF8 = UTF8TEXT("GetModifierEffect"), .Pointer = &UProtonCameraComponent::execGetModifierEffect },
		{ .NameUTF8 = UTF8TEXT("GetProfileAtCycleIndex"), .Pointer = &UProtonCameraComponent::execGetProfileAtCycleIndex },
		{ .NameUTF8 = UTF8TEXT("SetIntoReverse"), .Pointer = &UProtonCameraComponent::execSetIntoReverse },
		{ .NameUTF8 = UTF8TEXT("SetPhysicsProperties"), .Pointer = &UProtonCameraComponent::execSetPhysicsProperties },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProtonCameraComponent_AddImpactShake, "AddImpactShake" }, // 3053486969
		{ &Z_Construct_UFunction_UProtonCameraComponent_AddManualFOV, "AddManualFOV" }, // 3663090554
		{ &Z_Construct_UFunction_UProtonCameraComponent_AddManualLength, "AddManualLength" }, // 2930789455
		{ &Z_Construct_UFunction_UProtonCameraComponent_AddManualOffset, "AddManualOffset" }, // 296154238
		{ &Z_Construct_UFunction_UProtonCameraComponent_AddManualRotation, "AddManualRotation" }, // 3986963363
		{ &Z_Construct_UFunction_UProtonCameraComponent_AddManualShake, "AddManualShake" }, // 3663253044
		{ &Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinAngle, "AddManualSpinAngle" }, // 2182170190
		{ &Z_Construct_UFunction_UProtonCameraComponent_AddManualSpinXY, "AddManualSpinXY" }, // 782573210
		{ &Z_Construct_UFunction_UProtonCameraComponent_CycleCameraProfile, "CycleCameraProfile" }, // 2492140485
		{ &Z_Construct_UFunction_UProtonCameraComponent_GetCycleIndex, "GetCycleIndex" }, // 3880263782
		{ &Z_Construct_UFunction_UProtonCameraComponent_GetModifierEffect, "GetModifierEffect" }, // 639270761
		{ &Z_Construct_UFunction_UProtonCameraComponent_GetProfileAtCycleIndex, "GetProfileAtCycleIndex" }, // 3445946485
		{ &Z_Construct_UFunction_UProtonCameraComponent_SetIntoReverse, "SetIntoReverse" }, // 1444286106
		{ &Z_Construct_UFunction_UProtonCameraComponent_SetPhysicsProperties, "SetPhysicsProperties" }, // 1183274701
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProtonCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProtonCameraComponent_Statics

// ********** Begin Class UProtonCameraComponent Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
void Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bEnableCameraCycle_SetBit(void* Obj)
{
	((UProtonCameraComponent*)Obj)->bEnableCameraCycle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bEnableCameraCycle = { "bEnableCameraCycle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProtonCameraComponent), &Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bEnableCameraCycle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraCycle_MetaData), NewProp_bEnableCameraCycle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_CameraProfile = { "CameraProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, CameraProfile), Z_Construct_UClass_UProtonCameraProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraProfile_MetaData), NewProp_CameraProfile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_CameraCycle_Inner = { "CameraCycle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProtonCameraProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_CameraCycle = { "CameraCycle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, CameraCycle), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraCycle_MetaData), NewProp_CameraCycle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_StartingIndex = { "StartingIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, StartingIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingIndex_MetaData), NewProp_StartingIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AdditionalLength = { "AdditionalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, AdditionalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalLength_MetaData), NewProp_AdditionalLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AdditionalOffset = { "AdditionalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, AdditionalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalOffset_MetaData), NewProp_AdditionalOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AdditionalRotation = { "AdditionalRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, AdditionalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalRotation_MetaData), NewProp_AdditionalRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AdditionalFOV = { "AdditionalFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, AdditionalFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalFOV_MetaData), NewProp_AdditionalFOV_MetaData) };
void Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bViewDebugProperties_SetBit(void* Obj)
{
	((UProtonCameraComponent*)Obj)->bViewDebugProperties = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bViewDebugProperties = { "bViewDebugProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProtonCameraComponent), &Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bViewDebugProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bViewDebugProperties_MetaData), NewProp_bViewDebugProperties_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, Properties), Z_Construct_UScriptStruct_FProtonCameraProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) }; // 2365004740
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AccelerationInstant = { "AccelerationInstant", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, AccelerationInstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationInstant_MetaData), NewProp_AccelerationInstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_LocalVelocity = { "LocalVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, LocalVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalVelocity_MetaData), NewProp_LocalVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_LocalAcceleration = { "LocalAcceleration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, LocalAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalAcceleration_MetaData), NewProp_LocalAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
void Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bInReverse_SetBit(void* Obj)
{
	((UProtonCameraComponent*)Obj)->bInReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bInReverse = { "bInReverse", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProtonCameraComponent), &Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bInReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInReverse_MetaData), NewProp_bInReverse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_CycleIndex = { "CycleIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, CycleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleIndex_MetaData), NewProp_CycleIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_VelocityModifierFactor = { "VelocityModifierFactor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, VelocityModifierFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityModifierFactor_MetaData), NewProp_VelocityModifierFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AccelerationModifierFactor = { "AccelerationModifierFactor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, AccelerationModifierFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationModifierFactor_MetaData), NewProp_AccelerationModifierFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_DecelerationModifierFactor = { "DecelerationModifierFactor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, DecelerationModifierFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecelerationModifierFactor_MetaData), NewProp_DecelerationModifierFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_YForceModifierFactor = { "YForceModifierFactor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, YForceModifierFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YForceModifierFactor_MetaData), NewProp_YForceModifierFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_ZForceModifierFactor = { "ZForceModifierFactor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, ZForceModifierFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZForceModifierFactor_MetaData), NewProp_ZForceModifierFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningActor_MetaData), NewProp_OwningActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_PhysicsComponent = { "PhysicsComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, PhysicsComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsComponent_MetaData), NewProp_PhysicsComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_CameraShakeSource = { "CameraShakeSource", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, CameraShakeSource), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakeSource_MetaData), NewProp_CameraShakeSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_PostProcessComponent = { "PostProcessComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, PostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessComponent_MetaData), NewProp_PostProcessComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollision_MetaData), NewProp_SphereCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_SpringarmRoot = { "SpringarmRoot", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProtonCameraComponent, SpringarmRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringarmRoot_MetaData), NewProp_SpringarmRoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProtonCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bEnableCameraCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_CameraProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_CameraCycle_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_CameraCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_StartingIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AdditionalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AdditionalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AdditionalRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AdditionalFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bViewDebugProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AccelerationInstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_LocalVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_LocalAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_bInReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_CycleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_VelocityModifierFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_AccelerationModifierFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_DecelerationModifierFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_YForceModifierFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_ZForceModifierFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_OwningActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_PhysicsComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_CameraShakeSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_PostProcessComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_SphereCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProtonCameraComponent_Statics::NewProp_SpringarmRoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProtonCameraComponent_Statics::PropPointers) < 2048);
// ********** End Class UProtonCameraComponent Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UProtonCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProtonCameraPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProtonCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProtonCameraComponent_Statics::ClassParams = {
	&UProtonCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UProtonCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UProtonCameraComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProtonCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UProtonCameraComponent_Statics::Class_MetaDataParams)
};
void UProtonCameraComponent::StaticRegisterNativesUProtonCameraComponent()
{
	UClass* Class = UProtonCameraComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UProtonCameraComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UProtonCameraComponent()
{
	if (!Z_Registration_Info_UClass_UProtonCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProtonCameraComponent.OuterSingleton, Z_Construct_UClass_UProtonCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProtonCameraComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProtonCameraComponent);
UProtonCameraComponent::~UProtonCameraComponent() {}
// ********** End Class UProtonCameraComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h__Script_ProtonCameraPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProtonCameraComponent, UProtonCameraComponent::StaticClass, TEXT("UProtonCameraComponent"), &Z_Registration_Info_UClass_UProtonCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProtonCameraComponent), 1633763901U) },
	};
}; // Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h__Script_ProtonCameraPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h__Script_ProtonCameraPlugin_3720309246{
	TEXT("/Script/ProtonCameraPlugin"),
	Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h__Script_ProtonCameraPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mys_Plugins_ProtonCameraPlugin_Source_ProtonCameraPlugin_Public_ProtonCameraComponent_h__Script_ProtonCameraPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
