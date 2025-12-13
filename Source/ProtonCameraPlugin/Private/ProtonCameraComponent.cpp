// Copyright (c) 2025 Arkn Studio - (Sakurairinaqwq)

#include "ProtonCameraComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraShakeSourceComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "PhysicsProxy/SingleParticlePhysicsProxy.h"
#include "Components/PrimitiveComponent.h"

// 设置此组件的默认值
UProtonCameraComponent::UProtonCameraComponent()
{
	// 设置此组件在游戏开始时初始化，并且每帧都Tick。
	PrimaryComponentTick.bCanEverTick = true;
	// 关键修复：确保相机在物理更新之后才更新，避免与R-Tune等物理系统冲突。
	PrimaryComponentTick.TickGroup = ETickingGroup::TG_PostPhysics;
	
	// 创建所有需要的组件
	SpringarmRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PC_SpringarmRoot"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("PC_SpringArm"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PC_Camera"));
	CameraShakeSource = CreateDefaultSubobject<UCameraShakeSourceComponent>(TEXT("PC_CameraShakeSource"));
	PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PC_PostProcess"));
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("PC_SphereCollision"));
}

// 游戏开始时调用
void UProtonCameraComponent::BeginPlay()
{
	Super::BeginPlay();
	InitializeAndAttach();

	// 初始化相机配置文件，从循环列表或单个配置文件中选择。
	if (bEnableCameraCycle)
	{
		if (CameraCycle.Num() > 0)
		{
			// 确保起始索引在有效范围内。
			if (StartingIndex < 0 || StartingIndex >= CameraCycle.Num())
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Proton相机: 循环的起始索引超出范围。已重置为 0。"));
				CycleIndex = 0;
			}
			else
			{
				CycleIndex = StartingIndex;
			}
			Properties = CameraCycle[CycleIndex]->Properties;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Proton相机: '启用相机循环'为 true, 但'相机循环列表'为空。将使用默认属性。"));
		}
	}
	else
	{
		if (IsValid(CameraProfile))
		{
			Properties = CameraProfile->Properties;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Proton相机: 未指定'相机配置文件'。将使用默认属性。"));
		}
	}
}


void UProtonCameraComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (DeltaTime > 1.0f / 12.0f)
		return;
	
    // 确保我们的物理组件是有效的
	if (!OwningActor || !PhysicsComponent) return;

	if (GetWorld()->GetNetMode() == NM_Standalone || GetWorld()->GetNetMode() == NM_Client)
	{
		// 为新的一帧重置修改器因子
        VelocityModifierFactor = AccelerationModifierFactor = DecelerationModifierFactor = YForceModifierFactor = ZForceModifierFactor = 0;
		
        // 缓存DeltaTime用于计算
        FrameDeltaTime = DeltaTime;
		SmoothedDeltaTime = FMath::Lerp(SmoothedDeltaTime, FrameDeltaTime, 0.05f);

        // 确保当前激活的属性与所选的配置文件保持同步
		if (bEnableCameraCycle)
		{
			if(CameraCycle.IsValidIndex(CycleIndex))
				Properties = CameraCycle[CycleIndex]->Properties;
		}
		else
		{
			if (IsValid(CameraProfile))
				Properties = CameraProfile->Properties;
		}

		// --- 配置弹簧臂 ---
		SpringArm->bDoCollisionTest = Properties.CameraCollisionSettings.bDoCollisionTest;
		SpringArm->ProbeSize = Properties.CameraCollisionSettings.ProbeSize;
		SpringArm->ProbeChannel = Properties.CameraCollisionSettings.ProbeChannel;
		SpringArm->bInheritPitch = false;
		SpringArm->bInheritYaw = false;
		SpringArm->bInheritRoll = false;
		SpringArm->CameraRotationLagSpeed = 0; 

		if (Properties.SpringarmSettings.bInheritRoll)
			Properties.SpringarmSettings.bRollCompensation = false;

		// --- 计算目标旋转 ---
		// 使用 PhysicsComponent 的旋转作为延迟目标，而不是 OwningActor
		SmoothedParentRotation = FMath::QInterpTo(SmoothedParentRotation.Quaternion(), PhysicsComponent->GetComponentQuat(), FrameDeltaTime, Properties.SpringarmSettings.RotationLag).Rotator();

		TargetRotation = SmoothedParentRotation;
		if (!Properties.SpringarmSettings.bInheritPitch) { TargetRotation.Pitch = 0; }
		if (!Properties.SpringarmSettings.bInheritYaw)   { TargetRotation.Yaw = 0; }
		if (!Properties.SpringarmSettings.bInheritRoll)  { TargetRotation.Roll = 0; }
		
		TargetRotation += FRotator(-Properties.Pitch, Properties.Yaw + 180 * bInReverse, 0) + AdditionalRotation;

		CurrentSmoothedManualRotation = FQuat::Slerp(
			CurrentSmoothedManualRotation.Quaternion(),
			InterpolatedManualRotation.Quaternion(),
			FMath::Clamp(Properties.RotationInterpSpeed * FrameDeltaTime, 0, 1)).Rotator();
		
		CurrentSmoothedManualSpin = FQuat::Slerp(
			CurrentSmoothedManualSpin.Quaternion(),
			InterpolatedManualSpin.Quaternion(),
			FMath::Clamp(Properties.SpinInterpSpeed * FrameDeltaTime, 0, 1)).Rotator();

		TargetRotation += InstantManualRotation + InstantManualSpin + CurrentSmoothedManualRotation + CurrentSmoothedManualSpin;

		// --- 计算目标位置、FOV、长度 ---
        FVector PrevTargetLocation = TargetLocation;
		TargetLocation = Properties.Offset + InterpolatedManualOffset + AdditionalOffset;
		TargetFOV = Properties.FOV + ManualFOVOffset + AdditionalFOV;
		TargetLength = Properties.Length + AdditionalLength;

        // --- 应用基于运动的修改器 ---
		if (!bIsUsingManualPhysicsSettings)
			CalculateMotionValues();
		
		if (Properties.VelocitySettings.bEnableVelocityModifier)      { CalculateVelocityOffsets(); }
		if (Properties.AccelerationSettings.bEnableAccelerationModifier) { CalculateAccelerationOffsets(); }
		if (Properties.DecelerationSettings.bEnableDecelerationModifier) { CalculateDecelerationOffsets(); }
		if (Properties.ZForceSettings.bEnableZForceModifier)          { CalculateZForce(); }
		if (Properties.YForceSettings.bEnableYForceModifier)          { CalculateYForce(); }

        // --- 应用效果 ---
		if (Properties.ShakeSettings.bEnableSpeedShake) { CalculateSpeedShake(); }
		if (Properties.ShakeSettings.bEnableImpactShake) { CalculateImpactShake(); }
		
		// --- 应用最终变换 ---
		if (Properties.SpringarmSettings.bRollCompensation)
		{
            // 使用 PhysicsComponent 的旋转来计算翻滚补偿
			SpringarmRoot->SetRelativeRotation(FRotator(0, 0, -PhysicsComponent->GetComponentRotation().Roll));
		}
		else
		{
			SpringarmRoot->SetRelativeRotation(FRotator::ZeroRotator);
		}

		TargetLocation = FMath::Lerp(PrevTargetLocation, TargetLocation, FMath::Clamp(Properties.OffsetInterpSpeed * FrameDeltaTime, 0, 1));
		SpringArm->SetRelativeLocation(TargetLocation + InstantManualOffset);
		SpringArm->SetRelativeRotation(TargetRotation);
		Camera->SetFieldOfView(TargetFOV);
		
        // --- 清理工作 ---
		SetPostProcessValues();
		SetFinalValues();
	}
}

void UProtonCameraComponent::InitializeAndAttach()
{
	OwningActor = GetOwner();
	if (!OwningActor) return;

	USceneComponent* ComponentToFollow = nullptr;
	TArray<UPrimitiveComponent*> PrimitiveComponents;
	OwningActor->GetComponents<UPrimitiveComponent>(PrimitiveComponents);

	for (UPrimitiveComponent* Component : PrimitiveComponents)
	{
		if (Component && Component->IsSimulatingPhysics())
		{
			ComponentToFollow = Component;
			break; 
		}
	}
	
	if (!ComponentToFollow)
	{
		ComponentToFollow = OwningActor->GetRootComponent();
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Proton相机: 未找到模拟物理的组件, 已自动附着到Actor根组件。为确保兼容性，请检查车辆主网格体是否已启用物理模拟。"));
	}

    // 存储找到的组件
    PhysicsComponent = ComponentToFollow;

	// 注册所有组件
	SpringarmRoot->RegisterComponent();
	SpringArm->RegisterComponent();
	Camera->RegisterComponent();
	CameraShakeSource->RegisterComponent();
	PostProcessComponent->RegisterComponent();
	SphereCollision->RegisterComponent();
	
	// 将弹簧臂根部附着到我们找到的物理核心上
	SpringarmRoot->AttachToComponent(PhysicsComponent, FAttachmentTransformRules::KeepRelativeTransform);

	// 建立相机层级结构
	SpringArm->AttachToComponent(SpringarmRoot, FAttachmentTransformRules::KeepRelativeTransform);
	Camera->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform);
	CameraShakeSource->AttachToComponent(Camera, FAttachmentTransformRules::KeepRelativeTransform);
    
    // 【关键修正】将 SphereCollision 附着到 Camera，而不是其自身
	SphereCollision->AttachToComponent(Camera, FAttachmentTransformRules::KeepRelativeTransform);
	PostProcessComponent->AttachToComponent(SphereCollision, FAttachmentTransformRules::KeepRelativeTransform);
	
	// 设置初始值
	SpringArm->SetRelativeLocation(Properties.Offset);
	SpringArm->SetAbsolute(false, false, false);
	SpringArm->TargetArmLength = Properties.Length + AdditionalLength;
	SpringArm->bEnableCameraLag = false;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->bUseCameraLagSubstepping = true;

	SetPostProcessValues();
}

void UProtonCameraComponent::CalculateMotionValues()
{
    // 确保物理组件有效，并基于它来计算
	if (!PhysicsComponent) return;
	
	PreviousVelocity = Velocity;
	PreviousAcceleration = Acceleration;
	
    // 使用 PhysicsComponent 的变换
	FTransform Transform = PhysicsComponent->GetComponentTransform();
	FQuat OldOrientation = Orientation;
	Orientation = Transform.GetRotation();
    Location = Transform.GetLocation();
	
    // 使用 GetPhysicsLinearVelocity 获取物理速度
    FVector CurrentPhysicsVelocity = static_cast<UPrimitiveComponent*>(PhysicsComponent)->GetPhysicsLinearVelocity();
	Velocity = FMath::Lerp(Velocity, CurrentPhysicsVelocity, 0.1f);
	
	if (SmoothedDeltaTime > SMALL_NUMBER)
	{
		Acceleration = FMath::Lerp(Acceleration, (Velocity - PreviousVelocity) / SmoothedDeltaTime, 0.1f);
		AccelerationInstant = (CurrentPhysicsVelocity - PreviousVelocity) / SmoothedDeltaTime;
	}
	
	Speed = Velocity.Length();
	
	float AccelLerpSpeed = Properties.AccelerationSettings.bEnableAccelerationModifier ? Properties.AccelerationSettings.AccelerationInterpolationSpeed : 5.0f; 
	float DecelLerpSpeed = Properties.DecelerationSettings.bEnableDecelerationModifier ? Properties.DecelerationSettings.DecelerationInterpolationSpeed : 5.0f;

	LocalVelocity = Orientation.UnrotateVector(Velocity);
		
	LocalAcceleration = FVector(
		FMath::Lerp(LocalAcceleration.X,
			Orientation.UnrotateVector(Acceleration).X,
			FrameDeltaTime * (FMath::Sign(LocalAcceleration.X) != FMath::Sign(LocalVelocity.X) ? DecelLerpSpeed : AccelLerpSpeed)),
		Orientation.UnrotateVector(Acceleration).Y,
		Orientation.UnrotateVector(Acceleration).Z
    );

	if (SmoothedDeltaTime > SMALL_NUMBER)
	{
		FQuat DeltaQ = OldOrientation.Inverse() * Orientation;
		FVector Axis;
		float Angle;
		DeltaQ.ToAxisAndAngle(Axis, Angle);
		Angle = FMath::RadiansToDegrees(Angle);
		AngularVelocity = Orientation.RotateVector((Axis * Angle) / SmoothedDeltaTime);
	}
}

void UProtonCameraComponent::CalculateVelocityOffsets()
{
	float EffectiveSpeed = Properties.VelocitySettings.bUseSpeed ? Speed : FMath::Abs(LocalVelocity.X);
	float ModifierFactor = EffectiveSpeed / (Properties.VelocitySettings.NormalizationVelocity * 100.0f);
	
	if (Properties.VelocitySettings.bClampVelocity)
	{
		ModifierFactor = FMath::Clamp(ModifierFactor, -1.0f, 1.0f);
	}
	
	TargetLocation += Properties.VelocitySettings.OffsetByVelocity * ModifierFactor * FVector((bInReverse ? -1 : 1), 1, 1);
	TargetRotation += Properties.VelocitySettings.RotationByVelocity * ModifierFactor;
	TargetFOV += Properties.VelocitySettings.FOVByVelocity * ModifierFactor;
	TargetLength += Properties.VelocitySettings.LengthOffsetByVelocity * ModifierFactor;
	VelocityModifierFactor = ModifierFactor;
}

void UProtonCameraComponent::CalculateAccelerationOffsets()
{
	float ModifierFactor = (bInReverse ? -1 : 1) * LocalAcceleration.X / (Properties.AccelerationSettings.NormalizationAcceleration * 100.0f);
	ModifierFactor = FMath::Pow(FMath::Max(ModifierFactor, 0.0f), 1.5f);

	if (Properties.AccelerationSettings.bClampAcceleration)
	{
		ModifierFactor = FMath::Clamp(ModifierFactor, 0.0f, 1.0f);
	}
	
	TargetLocation += Properties.AccelerationSettings.OffsetByAcceleration * ModifierFactor * (bInReverse ? FVector(-1, 1, 1) : FVector(1, 1, 1));
	TargetRotation += Properties.AccelerationSettings.RotationByAcceleration * ModifierFactor;
	TargetFOV += Properties.AccelerationSettings.FOVByAcceleration * ModifierFactor;
	TargetLength += Properties.AccelerationSettings.LengthOffsetByAcceleration * ModifierFactor;
	AccelerationModifierFactor = ModifierFactor;
}

void UProtonCameraComponent::CalculateDecelerationOffsets()
{
	float ModifierFactor = (bInReverse ? 1 : -1) * LocalAcceleration.X / (Properties.DecelerationSettings.NormalizationDeceleration * 100.0f);
	ModifierFactor = FMath::Pow(FMath::Max(ModifierFactor, 0.0f), 1.3f);
	
	if (Properties.DecelerationSettings.bClampDeceleration)
	{
		ModifierFactor = FMath::Clamp(ModifierFactor, 0.0f, 1.0f);
	}
	
	TargetLocation += Properties.DecelerationSettings.OffsetByDeceleration * ModifierFactor * (bInReverse ? FVector(-1, 1, 1) : FVector(1, 1, 1));
	TargetRotation += Properties.DecelerationSettings.RotationByDeceleration * ModifierFactor;
	TargetFOV += Properties.DecelerationSettings.FOVByDeceleration * ModifierFactor;
	TargetLength += Properties.DecelerationSettings.LengthOffsetByDeceleration * ModifierFactor;
	DecelerationModifierFactor = ModifierFactor;
}

void UProtonCameraComponent::CalculateYForce()
{
	float ModifierFactor = LocalAcceleration.Y / (Properties.YForceSettings.NormalizationYForce * 100.0f);
	
	if (Properties.YForceSettings.bClampYForce)
	{
		ModifierFactor = FMath::Clamp(ModifierFactor, -1.0f, 1.0f);
	}
	
	ModifierFactor = FMath::Pow(FMath::Abs(ModifierFactor), 1.2f) * FMath::Sign(ModifierFactor);
	ModifierFactor = FMath::Lerp(YForceModifierFactor, ModifierFactor, FMath::Clamp(SmoothedDeltaTime * Properties.YForceSettings.YForceInterpolationSpeed, 0, 1));
	
	TargetLocation += FVector(Properties.YForceSettings.OffsetByYForce.X * FMath::Abs(ModifierFactor), Properties.YForceSettings.OffsetByYForce.Y * ModifierFactor, Properties.YForceSettings.OffsetByYForce.Z * FMath::Abs(ModifierFactor));
	TargetRotation += FRotator(Properties.YForceSettings.RotationByYForce.Pitch * FMath::Abs(ModifierFactor), Properties.YForceSettings.RotationByYForce.Yaw * ModifierFactor, Properties.YForceSettings.RotationByYForce.Roll * ModifierFactor);
	YForceModifierFactor = ModifierFactor;
}

void UProtonCameraComponent::CalculateZForce()
{
	float ModifierFactor = LocalAcceleration.Z / (Properties.ZForceSettings.NormalizationZForce * 100.0f);
	ModifierFactor = FMath::Lerp(ZForceModifierFactor, ModifierFactor, FMath::Clamp(SmoothedDeltaTime * Properties.ZForceSettings.ZForceInterpolationSpeed, 0, 1));
	
	if (Properties.ZForceSettings.bClampZForce)
	{
		ModifierFactor = FMath::Clamp(ModifierFactor, -1.0f, 1.0f);
	}
	
	TargetLocation += Properties.ZForceSettings.OffsetByZForce * ModifierFactor;
	ZForceModifierFactor = ModifierFactor;
}

void UProtonCameraComponent::CalculateSpeedShake() const
{
	if (!Properties.ShakeSettings.SpeedShakeClass) return;
	float ShakeScaleFactor = FMath::Max(0.0f, (Speed * 0.01f - Properties.ShakeSettings.SpeedShakeRange.GetLowerBoundValue()) / (Properties.ShakeSettings.SpeedShakeRange.GetUpperBoundValue() - Properties.ShakeSettings.SpeedShakeRange.GetLowerBoundValue()));
	
	if (Properties.ShakeSettings.bClampSpeedShake)
	{
		ShakeScaleFactor = FMath::Clamp(ShakeScaleFactor, 0.0f, 1.0f);
	}
	
	CameraShakeSource->StartCameraShake(Properties.ShakeSettings.SpeedShakeClass, ShakeScaleFactor * Properties.ShakeSettings.SpeedShakeScale);
}

void UProtonCameraComponent::CalculateImpactShake() const
{
	if (!Properties.ShakeSettings.ImpactShakeClass) return;
	if (AccelerationInstant.Length() > Properties.ShakeSettings.ImpactShakeThreshold * 100.0f)
	{
		CameraShakeSource->StartCameraShake(Properties.ShakeSettings.ImpactShakeClass, Properties.ShakeSettings.ImpactShakeScale);
	}
}

void UProtonCameraComponent::SetFinalValues()
{
	SpringArm->TargetArmLength = TargetLength + ManualLengthOffset;
	
	PreviousInstantManualRotation = InstantManualRotation;
	InterpolatedManualOffset = FVector::ZeroVector;
	InterpolatedManualRotation = FRotator::ZeroRotator;
	InterpolatedManualSpin = FRotator::ZeroRotator;
	InstantManualOffset = FVector::ZeroVector;
	InstantManualRotation = FRotator::ZeroRotator;
	InstantManualSpin = FRotator::ZeroRotator;
	ManualFOVOffset = 0;
}

void UProtonCameraComponent::SetPostProcessValues()
{
	PostProcessComponent->bEnabled = Properties.PostProcessVolumeProperties.bIsEnabled;
	PostProcessComponent->bUnbound = Properties.PostProcessVolumeProperties.bIsUnbound;
	PostProcessComponent->BlendWeight = Properties.PostProcessVolumeProperties.BlendWeight;
	PostProcessComponent->Priority = Properties.PostProcessVolumeProperties.Priority;
	
	if (Properties.PostProcessVolumeProperties.bEnableVignetteEffect)
	{
		SetVignette();
	}
	
	PostProcessComponent->Settings = Properties.PostProcessVolumeProperties.Settings;
}

void UProtonCameraComponent::SetVignette()
{
	float EffectFactor = 0;
	switch (Properties.PostProcessVolumeProperties.VignetteModifierType)
	{
		case EProtonCameraModifierType::Velocity:
			EffectFactor = FMath::Abs(VelocityModifierFactor);
			break;
		case EProtonCameraModifierType::Acceleration:
			EffectFactor = AccelerationModifierFactor;
			break;
		case EProtonCameraModifierType::Deceleration:
			EffectFactor = DecelerationModifierFactor;
			break;
		case EProtonCameraModifierType::YForce:
			EffectFactor = FMath::Abs(YForceModifierFactor);
			break;
		case EProtonCameraModifierType::ZForce:
			EffectFactor = FMath::Abs(ZForceModifierFactor);
			break;
		default: break;
	}
	
	Properties.PostProcessVolumeProperties.Settings.bOverride_VignetteIntensity = true;
	Properties.PostProcessVolumeProperties.Settings.VignetteIntensity = FMath::Lerp(
		Properties.PostProcessVolumeProperties.VignetteIntensityRange.GetLowerBoundValue(),
		Properties.PostProcessVolumeProperties.VignetteIntensityRange.GetUpperBoundValue(),
		EffectFactor);
}

void UProtonCameraComponent::AddManualLength(float InLength)
{
	ManualLengthOffset = InLength;
}

void UProtonCameraComponent::AddManualOffset(FVector InOffset, bool bOverrideInterpolation)
{
	if (bOverrideInterpolation)
	{
		InstantManualOffset = InOffset;
	}
	else
	{
		InterpolatedManualOffset = InOffset;
	}
}

void UProtonCameraComponent::AddManualRotation(FRotator InRotation, bool bOverrideInterpolation)
{
	if (bOverrideInterpolation)
	{
		InstantManualRotation += InRotation;
	}
	else
	{
		InterpolatedManualRotation += InRotation;
	}
}

void UProtonCameraComponent::AddManualSpinXY(FVector2D InRotationInput, bool bOverrideInterpolation)
{
	float yaw = 0;
	if (FMath::Abs(InRotationInput.X) > Properties.SpinDeadzone || FMath::Abs(InRotationInput.Y) > Properties.SpinDeadzone)
	{
		yaw = FMath::RadiansToDegrees(FMath::Atan2(InRotationInput.X, InRotationInput.Y));
	}
	
	if (Properties.SpinModulationFactor > 1)
	{
		float IntervalAngle = 360.0f / Properties.SpinModulationFactor;
		yaw = FMath::RoundToInt(yaw / IntervalAngle) * IntervalAngle;
		bOverrideInterpolation = true; 
	}
	
	if (bOverrideInterpolation)
	{
		InstantManualSpin = FRotator(0, yaw, 0);
	}
	else
	{
		InterpolatedManualSpin = FRotator(0, yaw, 0);
	}
}

void UProtonCameraComponent::AddManualSpinAngle(float InAngle, bool bOverrideInterpolation)
{
	if (bOverrideInterpolation)
	{
		InstantManualSpin += FRotator(0, InAngle, 0);
	}
	else
	{
		InterpolatedManualSpin += FRotator(0, InAngle, 0);
	}
}

void UProtonCameraComponent::AddManualFOV(float InFOV)
{
	ManualFOVOffset += InFOV;
}

void UProtonCameraComponent::AddManualShake(TSubclassOf<UCameraShakeBase> InShakeClass, float InIntensity)
{
	if (!InShakeClass) return;
	CameraShakeSource->StartCameraShake(InShakeClass, InIntensity);
}

void UProtonCameraComponent::AddImpactShake()
{
	if (!Properties.ShakeSettings.ImpactShakeClass) return;
	CameraShakeSource->StartCameraShake(Properties.ShakeSettings.ImpactShakeClass, Properties.ShakeSettings.ImpactShakeScale);
}

void UProtonCameraComponent::SetIntoReverse(bool bIsReversing)
{
	bInReverse = bIsReversing;
}

float UProtonCameraComponent::GetModifierEffect(EProtonCameraModifierType ModifierType) const
{
	switch (ModifierType)
	{
		case EProtonCameraModifierType::Velocity:     return VelocityModifierFactor;
		case EProtonCameraModifierType::Acceleration: return AccelerationModifierFactor;
		case EProtonCameraModifierType::Deceleration: return DecelerationModifierFactor;
		case EProtonCameraModifierType::YForce:       return YForceModifierFactor;
		case EProtonCameraModifierType::ZForce:       return ZForceModifierFactor;
		default: return 0.0f;
	}
}

UProtonCameraProfile* UProtonCameraComponent::GetProfileAtCycleIndex(int InIndex) const
{
	if (!CameraCycle.IsValidIndex(InIndex))
	{
		if (CameraCycle.Num() > 0) return CameraCycle[0];
		return nullptr;
	}
	return CameraCycle[InIndex];
}

void UProtonCameraComponent::CycleCameraProfile()
{
	if (bEnableCameraCycle && CameraCycle.Num() > 0)
	{
		CycleIndex = (CycleIndex + 1) % CameraCycle.Num();
		
		Properties = CameraCycle[CycleIndex]->Properties;

		TargetLocation = Properties.Offset + InterpolatedManualOffset + AdditionalOffset;
		TargetRotation = FRotator(-Properties.Pitch, Properties.Yaw + 180 * bInReverse, 0) + InterpolatedManualRotation + AdditionalRotation;
		TargetFOV = Properties.FOV + ManualFOVOffset + AdditionalFOV;
		TargetLength = Properties.Length + AdditionalLength;
		
		if (Properties.VelocitySettings.bEnableVelocityModifier) { CalculateVelocityOffsets(); }
		if (Properties.AccelerationSettings.bEnableAccelerationModifier) { CalculateAccelerationOffsets(); }
		if (Properties.DecelerationSettings.bEnableDecelerationModifier) { CalculateDecelerationOffsets(); }
		if (Properties.ZForceSettings.bEnableZForceModifier) { CalculateZForce(); }
		if (Properties.YForceSettings.bEnableYForceModifier) { CalculateYForce(); }
		
		CameraShakeSource->StopAllCameraShakes();
		if (Properties.ShakeSettings.bEnableSpeedShake) { CalculateSpeedShake(); }
		
		SpringArm->SetRelativeLocation(TargetLocation + InstantManualOffset);
		SpringArm->SetRelativeRotation(TargetRotation + InstantManualRotation);
	}
}

void UProtonCameraComponent::SetPhysicsProperties(FVector InVelocity, FVector InLocalVelocity, FVector InAcceleration, FVector InLocalAcceleration, FTransform InTransform, float InDeltaTime)
{
	Velocity = InVelocity;
	Acceleration = InAcceleration;
	Speed = Velocity.Length();
	bIsUsingManualPhysicsSettings = true;
	
	float AccelLerpSpeed = Properties.AccelerationSettings.bEnableAccelerationModifier ? Properties.AccelerationSettings.AccelerationInterpolationSpeed : 5; 
	float DecelLerpSpeed = Properties.DecelerationSettings.bEnableDecelerationModifier ? Properties.DecelerationSettings.DecelerationInterpolationSpeed : 5;
	
	LocalVelocity = InLocalVelocity;
	LocalAcceleration = FVector(
		FMath::Lerp(LocalAcceleration.X,
			InLocalAcceleration.X,
			FrameDeltaTime * (FMath::Sign(LocalAcceleration.X) != FMath::Sign(LocalVelocity.X) ? DecelLerpSpeed : AccelLerpSpeed)),
		InLocalAcceleration.Y,
		InLocalAcceleration.Z);
}
