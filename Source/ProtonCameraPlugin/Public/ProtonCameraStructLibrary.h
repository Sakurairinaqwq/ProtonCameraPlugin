// Copyright (c) 2025 Arkn Studio - (Sakurairinaqwq)

#pragma once

#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "ProtonCameraStructLibrary.generated.h"

class UCameraShakeBase;

UENUM(BlueprintType)
enum class EProtonCameraModifierType : uint8
{
	Velocity UMETA(DisplayName="速度"),
	Acceleration UMETA(DisplayName="加速度"),
	Deceleration UMETA(DisplayName="减速度"),
	YForce UMETA(DisplayName="Y轴力"),
	ZForce UMETA(DisplayName="Z轴力"),
};

// 用于在编辑器中创建分隔符的空结构体
USTRUCT(BlueprintType)
struct FProtonSpacerStruct
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FProtonCameraCollisionSettings
{
	GENERATED_BODY()
	/** 如果为 true, 将执行碰撞测试以防止相机穿透场景物体。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="启用碰撞测试", Category="相机碰撞")
	bool bDoCollisionTest = true;
	/** 查询探球的大小(cm)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="探球大小", Category="相机碰撞", meta=(editcondition="bDoCollisionTest"))
	float ProbeSize = 12;
	/** 查询探球的碰撞通道(默认为Camera)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="探球通道", Category="相机碰撞", meta=(editcondition="bDoCollisionTest"))
	TEnumAsByte<ECollisionChannel> ProbeChannel = ECollisionChannel::ECC_Camera;
};

USTRUCT(BlueprintType)
struct FProtonSpringarmSettings
{
	GENERATED_BODY()
	/** 相机弹簧臂的旋转延迟速度。设置为0可完全禁用延迟。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="旋转延迟", Category="弹簧臂设置")
	float RotationLag = 5;
	/** 如果为 true, 弹簧臂将继承其父Actor的Pitch(俯仰)旋转。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="继承俯仰(Pitch)", Category="弹簧臂设置")
	bool bInheritPitch = true;
	/** 如果为 true, 弹簧臂将继承其父Actor的Yaw(偏航)旋转。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="继承偏航(Yaw)", Category="弹簧臂设置")
	bool bInheritYaw = true;
	/** 如果为 true, 弹簧臂将继承其父Actor的Roll(翻滚)旋转。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="继承翻滚(Roll)", Category="弹簧臂设置")
	bool bInheritRoll = false;
	/** 如果为 true, 将补偿父Actor的翻滚，以保持相机水平(与'继承翻滚'冲突)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="翻滚补偿", Category="弹簧臂设置", meta=(EditCondition="!bInheritRoll"))
	bool bRollCompensation = true;
};

USTRUCT(BlueprintType)
struct FProtonVelocitySettings
{
	GENERATED_BODY()	
	/** 如果为 true, 启用基于车辆前进速度的相机修改器。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="启用速度修改器", Category="效果修改器")
	bool bEnableVelocityModifier = true;
	/** 如果为 true, 使用车辆的总速率进行计算。如果为 false, 仅使用速度的前向(X轴)分量。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="使用总速率", Category="效果修改器|速度", meta=(EditCondition="bEnableVelocityModifier", EditConditionHides))
	bool bUseSpeed = true;
	/** 在此速率(m/s)下，所有基于速度的偏移将完全生效(即修改因子达到1.0)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="标准化速率", Category="效果修改器|速度", meta=(EditCondition="bEnableVelocityModifier", EditConditionHides))
	float NormalizationVelocity = 50;
	/** 如果为 true, 修改因子将被限制在-1到1之间，防止在极端速度下效果过于夸张。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="限制速度效果", Category="效果修改器|速度", meta=(EditCondition="bEnableVelocityModifier", EditConditionHides))
	bool bClampVelocity = true;
	/** 在标准化速率下，应用的弹簧臂长度偏移量(cm)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随速度的长度偏移", Category="效果修改器|速度", meta=(EditCondition="bEnableVelocityModifier", EditConditionHides))
	float LengthOffsetByVelocity = 100;
	/** 在标准化速率下，应用的位置偏移量(cm)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随速度的位置偏移", Category="效果修改器|速度", meta=(EditCondition="bEnableVelocityModifier", EditConditionHides))
	FVector OffsetByVelocity = FVector(80, 0, 0);
	/** 在标准化速率下，应用的旋转偏移量(°)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随速度的旋转偏移", Category="效果修改器|速度", meta=(EditCondition="bEnableVelocityModifier", EditConditionHides))
	FRotator RotationByVelocity = FRotator(0, 0, 0);
	/** 在标准化速率下，应用的FOV偏移量(°)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随速度的FOV偏移", Category="效果修改器|速度", meta=(EditCondition="bEnableVelocityModifier", EditConditionHides))
	float FOVByVelocity = 35;
};

USTRUCT(BlueprintType)
struct FProtonAccelerationSettings
{
	GENERATED_BODY()
	/** 如果为 true, 启用基于车辆前进加速度的相机修改器。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="启用加速度修改器", Category="效果修改器")
	bool bEnableAccelerationModifier = true;
	/** 基于加速度的相机偏移的插值速度。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="加速度插值速度", Category="效果修改器|加速度", meta=(EditCondition="bEnableAccelerationModifier", EditConditionHides))
	float AccelerationInterpolationSpeed = 5;
	/** 在此加速度(m/s^2)下，所有基于加速度的偏移将完全生效。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="标准化加速度", Category="效果修改器|加速度", meta=(EditCondition="bEnableAccelerationModifier", EditConditionHides))
	float NormalizationAcceleration = 20;
	/** 如果为 true, 修改因子将被限制，防止效果过于夸张。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="限制加速度效果", Category="效果修改器|加速度", meta=(EditCondition="bEnableAccelerationModifier", EditConditionHides))
	bool bClampAcceleration = false;
	/** 在标准化加速度下，应用的弹簧臂长度偏移量(cm)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随加速度的长度偏移", Category="效果修改器|加速度", meta=(EditCondition="bEnableAccelerationModifier", EditConditionHides))
	float LengthOffsetByAcceleration = 0;
	/** 在标准化加速度下，应用的位置偏移量(cm)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随加速度的位置偏移", Category="效果修改器|加速度", meta=(EditCondition="bEnableAccelerationModifier", EditConditionHides))
	FVector OffsetByAcceleration = FVector(-80, 0, 5);
	/** 在标准化加速度下，应用的旋转偏移量(°)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随加速度的旋转偏移", Category="效果修改器|加速度", meta=(EditCondition="bEnableAccelerationModifier", EditConditionHides))
	FRotator RotationByAcceleration = FRotator(0, 0, 0);
	/** 在标准化加速度下，应用的FOV偏移量(°)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随加速度的FOV偏移", Category="效果修改器|加速度", meta=(EditCondition="bEnableAccelerationModifier", EditConditionHides))
	float FOVByAcceleration = 0;	
};

USTRUCT(BlueprintType)
struct FProtonDecelerationSettings
{
	GENERATED_BODY()	
	/** 如果为 true, 启用基于车辆前进减速度(负加速度)的相机修改器。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="启用减速度修改器", Category="效果修改器")
	bool bEnableDecelerationModifier = true;
	/** 基于减速度的相机偏移的插值速度。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="减速度插值速度", Category="效果修改器|减速度", meta=(EditCondition="bEnableDecelerationModifier", EditConditionHides))
	float DecelerationInterpolationSpeed = 5;
	/** 在此减速度(m/s^2)下，所有基于减速度的偏移将完全生效。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="标准化减速度", Category="效果修改器|减速度", meta=(EditCondition="bEnableDecelerationModifier", EditConditionHides))
	float NormalizationDeceleration = 15;
	/** 如果为 true, 修改因子将被限制，防止效果过于夸张。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="限制减速度效果", Category="效果修改器|减速度", meta=(EditCondition="bEnableDecelerationModifier", EditConditionHides))
	bool bClampDeceleration = true;
	/** 在标准化减速度下，应用的弹簧臂长度偏移量(cm)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随减速度的长度偏移", Category="效果修改器|减速度", meta=(EditCondition="bEnableDecelerationModifier", EditConditionHides))
	float LengthOffsetByDeceleration = 0;
	/** 在标准化减速度下，应用的位置偏移量(cm)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随减速度的位置偏移", Category="效果修改器|减速度", meta=(EditCondition="bEnableDecelerationModifier", EditConditionHides))
	FVector OffsetByDeceleration = FVector(100, 0, -25);
	/** 在标准化减速度下，应用的旋转偏移量(°)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随减速度的旋转偏移", Category="效果修改器|减速度", meta=(EditCondition="bEnableDecelerationModifier", EditConditionHides))
	FRotator RotationByDeceleration = FRotator(0, 0, 0);
	/** 在标准化减速度下，应用的FOV偏移量(°)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随减速度的FOV偏移", Category="效果修改器|减速度", meta=(EditCondition="bEnableDecelerationModifier", EditConditionHides))
	float FOVByDeceleration = 0;	
};

USTRUCT(BlueprintType)
struct FProtonYForceSettings
{
	GENERATED_BODY()	
	/** 如果为 true, 启用基于车辆侧向(Y轴)G力的相机修改器。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="启用Y轴力修改器", Category="效果修改器")
	bool bEnableYForceModifier = true;
	/** 侧向相机移动效果的插值速度。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="Y轴力插值速度", Category="效果修改器|Y轴力", meta=(EditCondition="bEnableYForceModifier", EditConditionHides))
	float YForceInterpolationSpeed = 20;
	/** 在此侧向加速度(m/s^2)下，所有基于Y轴力的偏移将完全生效。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="标准化Y轴力", Category="效果修改器|Y轴力", meta=(EditCondition="bEnableYForceModifier", EditConditionHides))
	float NormalizationYForce = 25;
	/** 如果为 true, 修改因子将被限制，防止效果过于夸张。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="限制Y轴力效果", Category="效果修改器|Y轴力", meta=(EditCondition="bEnableYForceModifier", EditConditionHides))
	bool bClampYForce = false;
	/** 在标准化Y轴力下，应用的位置偏移量(cm)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随Y轴力的位置偏移", Category="效果修改器|Y轴力", meta=(EditCondition="bEnableYForceModifier", EditConditionHides))
	FVector OffsetByYForce = FVector(0, 45, -5);
	/** 在标准化Y轴力下，应用的旋转偏移量(°)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随Y轴力的旋转偏移", Category="效果修改器|Y轴力", meta=(EditCondition="bEnableYForceModifier", EditConditionHides))
	FRotator RotationByYForce = FRotator(0, 0, 4);
};

USTRUCT(BlueprintType)
struct FProtonZForceSettings
{
	GENERATED_BODY()	
	/** 如果为 true, 启用基于车辆垂直(Z轴)G力的相机修改器。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="启用Z轴力修改器", Category="效果修改器")
	bool bEnableZForceModifier = true;
	/** 垂直相机移动效果的插值速度。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="Z轴力插值速度", Category="效果修改器|Z轴力", meta=(EditCondition="bEnableZForceModifier", EditConditionHides))
	float ZForceInterpolationSpeed = 20;
	/** 在此垂直加速度(m/s^2)下，所有基于Z轴力的偏移将完全生效。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="标准化Z轴力", Category="效果修改器|Z轴力", meta=(EditCondition="bEnableZForceModifier", EditConditionHides))
	float NormalizationZForce = 10;
	/** 如果为 true, 修改因子将被限制，防止效果过于夸张。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="限制Z轴力效果", Category="效果修改器|Z轴力", meta=(EditCondition="bEnableZForceModifier", EditConditionHides))
	bool bClampZForce = true;
	/** 在标准化Z轴力下，应用的位置偏移量(cm)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="随Z轴力的位置偏移", Category="效果修改器|Z轴力", meta=(EditCondition="bEnableZForceModifier", EditConditionHides))
	FVector OffsetByZForce = FVector(0, 0, -100);
};

USTRUCT(BlueprintType)
struct FProtonShakeSettings
{
	GENERATED_BODY()
	/** 如果为 true, 应用一个随车辆速率变化的相机抖动效果。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="启用速度抖动", Category="相机抖动|速度抖动")
	bool bEnableSpeedShake = true;
	/** 用于高速抖动效果的相机抖动蓝图类。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="速度抖动模式", Category="相机抖动|速度抖动", meta=(EditCondition="bEnableSpeedShake"))
	TSubclassOf<UCameraShakeBase> SpeedShakeClass = LoadClass<UCameraShakeBase>(nullptr, TEXT("/ProtonCameraPlugin/CameraShake/PC_DefaultSpeedShake.PC_DefaultSpeedShake_C"));
	/** 速度抖动强度的乘数。值越高，抖动越强。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="速度抖动强度", Category="相机抖动|速度抖动", meta=(EditCondition="bEnableSpeedShake"))
	float SpeedShakeScale = 1;
	/** 在此速率范围(m/s)内，抖动强度从0线性插值到最大值。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="速度抖动范围", Category="相机抖动|速度抖动", meta=(EditCondition="bEnableSpeedShake"))
	FFloatRange SpeedShakeRange = FFloatRange(10, 50);
	/** 如果为 true, 即使速度超过范围，抖动强度也将被限制在最大值。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="限制速度抖动", Category="相机抖动|速度抖动", meta=(EditCondition="bEnableSpeedShake"))
	bool bClampSpeedShake = true;
	
	/** 用于撞击效果的相机抖动蓝图类。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="冲击抖动模式", Category="相机抖动|冲击抖动")
	TSubclassOf<UCameraShakeBase> ImpactShakeClass = LoadClass<UCameraShakeBase>(nullptr, TEXT("/ProtonCameraPlugin/CameraShake/PC_DefaultImpactShake.PC_DefaultImpactShake_C"));
	/** 冲击抖动强度的乘数。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="冲击抖动强度", Category="相机抖动|冲击抖动")
	float ImpactShakeScale = 1;
	/** 如果为 true, 在检测到非常高的G力时自动触发冲击抖动。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="启用自动冲击抖动", Category="相机抖动|冲击抖动")
	bool bEnableImpactShake = true;
	/** 触发自动冲击抖动所需的G力阈值(m/s^2)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="自动冲击抖动阈值", Category="相机抖动|冲击抖动", meta=(EditCondition="bEnableImpactShake"))
	float ImpactShakeThreshold = 100;
};

USTRUCT(BlueprintType)
struct FProtonPostProcessProperties
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Proton相机")
	float Priority = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Proton相机")
	float BlendWeight = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Proton相机")
	bool bIsEnabled = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Proton相机")
	bool bIsUnbound = false;
	/** 应用于此相机局部后期处理体积的设置。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Proton相机")
	FPostProcessSettings Settings;
		
	/** 如果为 true, 根据选定的相机修改器自动调整暗角强度。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="启用暗角效果", Category="后期处理|暗角效果")
	bool bEnableVignetteEffect = true;
	/** 其效果因子将用于驱动暗角强度的修改器类型。对应的修改器必须已启用。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="暗角修改器类型", Category="后期处理|暗角效果", meta=(EditCondition="bEnableVignetteEffect"))
	EProtonCameraModifierType VignetteModifierType;
	/** 暗角强度的范围。最终强度将基于修改器因子在此范围内插值。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="暗角强度范围", Category="后期处理|暗角效果", meta=(EditCondition="bEnableVignetteEffect"))
	FFloatRange VignetteIntensityRange = FFloatRange(0.4, 1);
};

USTRUCT(BlueprintType, DisplayName="Proton相机配置文件")
struct FProtonCameraProperties
{
	GENERATED_BODY()
	
	/** 配置文件的名称，用于在调试或UI中识别。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "配置文件名称", Category="Proton相机")
	FName Name = TEXT("默认");
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName="​", Category="Proton相机")
	FProtonSpacerStruct Spacer0a;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName="主要属性", Category="Proton相机")
	FProtonSpacerStruct Spacer0;
	
	/** 相机弹簧臂的基础长度(cm)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="基础长度", Category="Proton相机")
	float Length = 450;
	/** 相机弹簧臂的基础相对位置(cm)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="基础偏移", Category="Proton相机")
	FVector Offset = FVector(0, 0, 35);
	/** 相机弹簧臂的基础俯仰角度(°)。正值使相机向下看。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="基础俯仰", Category="Proton相机")
	float Pitch = 6;
	/** 相机弹簧臂的基础偏航角度(°)。正值使相机向右看。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="基础偏航", Category="Proton相机")
	float Yaw = 0;
	/** 相机的基础视野(FOV)(°)。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="基础FOV", Category="Proton相机")
	float FOV = 90;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName="​", Category="Proton相机")
	FProtonSpacerStruct Spacer4;
	
	/** 所有组合位置偏移的通用插值速度。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="偏移插值速度", Category="Proton相机")
	float OffsetInterpSpeed = 10;	
	/** 手动旋转输入(来自'AddManualRotation')的插值速度。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="旋转插值速度", Category="Proton相机")
	float RotationInterpSpeed = 30;
	/** 使用'AddManualSpinXY'时手柄摇杆输入的死区。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="自旋死区", Category="Proton相机", meta=(ClampMin="0", ClampMax="1"))
	float SpinDeadzone = 0.6f;
	/** 手动自旋输入(来自'AddManualSpinXY'或'AddManualSpinAngle')的插值速度。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="自旋插值速度", Category="Proton相机")
	float SpinInterpSpeed = 30;
	/** 如果大于1，来自'AddManualSpinXY'的自旋将被吸附到指定数量的间隔上。这会强制使用瞬时插值。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="自旋吸附因子", Category="Proton相机", meta=(ClampMin="1", ClampMax="16"))
	int SpinModulationFactor = 1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName="​", Category="Proton相机")
	FProtonSpacerStruct Spacer1a;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName="弹簧臂行为", Category="Proton相机")
	FProtonSpacerStruct Spacer1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Proton相机")
	FProtonCameraCollisionSettings CameraCollisionSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Proton相机")
	FProtonSpringarmSettings SpringarmSettings;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName="​", Category="Proton相机")
	FProtonSpacerStruct Spacer2a;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName="效果修改器", Category="Proton相机")
	FProtonSpacerStruct Spacer2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Proton相机")
	FProtonVelocitySettings VelocitySettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Proton相机")
	FProtonAccelerationSettings AccelerationSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Proton相机")
	FProtonDecelerationSettings DecelerationSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="Y轴力设置(复制不稳定)", Category="Proton相机")
	FProtonYForceSettings YForceSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="Z轴力设置", Category="Proton相机")
	FProtonZForceSettings ZForceSettings;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName="​", Category="Proton相机")
	FProtonSpacerStruct Spacer3a;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName="效果", Category="Proton相机")
	FProtonSpacerStruct Spacer3;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="相机抖动设置", Category="Proton相机")
	FProtonShakeSettings ShakeSettings;
	
	/** 附着在此相机上的局部后期处理体积的属性。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="后期处理体积属性", Category="Proton相机")
	FProtonPostProcessProperties PostProcessVolumeProperties;
};

class PROTONCAMERAPLUGIN_API ProtonCameraStructLibrary
{
public:
	ProtonCameraStructLibrary();
	~ProtonCameraStructLibrary();
};
