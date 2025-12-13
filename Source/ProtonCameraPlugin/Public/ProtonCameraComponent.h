// Copyright (c) 2025 Arkn Studio - (Sakurairinaqwq)

#pragma once

#include "CoreMinimal.h"
#include "ProtonCameraProfile.h"
#include "Components/ActorComponent.h"
#include "ProtonCameraStructLibrary.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine.h"
#include "ProtonCameraComponent.generated.h"

UCLASS(Blueprintable, DisplayName="Proton相机", ClassGroup=(ProtonCamera), meta=(BlueprintSpawnableComponent))
class PROTONCAMERAPLUGIN_API UProtonCameraComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// ... (从 UProtonCameraComponent() 到 SmoothedDeltaTime 的所有公开属性保持不变) ...
    // ... The public properties from UProtonCameraComponent() to SmoothedDeltaTime remain unchanged ...
	
	// 设置此组件的默认值
	UProtonCameraComponent();

	// 本系统将要控制的相机组件
	UPROPERTY(BlueprintReadWrite, Category="Proton相机")
	class UCameraComponent* Camera;

	/** 如果为 true, 允许通过'CycleCameraProfile'函数在多个相机配置文件之间循环切换。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "启用相机循环", Category="Proton相机")
	bool bEnableCameraCycle = false;
	
	/** 当'启用相机循环'为 false 时，使用的单个相机配置文件。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "相机配置文件", Category="Proton相机", meta=(EditCondition="!bEnableCameraCycle"))
	UProtonCameraProfile* CameraProfile = LoadObject<UProtonCameraProfile>(nullptr, TEXT("/ProtonCameraPlugin/Profiles/PC_Default.PC_Default"));
	
	/** 当'启用相机循环'为 true 时，用于循环切换的相机配置文件数组。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "相机循环列表", Category="Proton相机", meta=(EditCondition="bEnableCameraCycle"))
	TArray<UProtonCameraProfile*> CameraCycle = TArray<UProtonCameraProfile*>{ LoadObject<UProtonCameraProfile>(nullptr, TEXT("/ProtonCameraPlugin/Profiles/PC_Default.PC_Default")) };
	
	/** 游戏开始时，在'相机循环列表'中默认选择的配置文件索引。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "起始索引", Category="Proton相机", meta=(EditCondition="bEnableCameraCycle"))
	int StartingIndex = 0;

	/** 为相机弹簧臂提供额外的长度偏移(cm)。用于在不修改配置文件的情况下，对特定载具进行微调。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="额外长度", Category="Proton相机|载具特定偏移")
	float AdditionalLength = 0;
	
	/** 为相机弹簧臂提供额外的相对位置偏移(cm)。用于对特定载具进行微调。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="额外偏移", Category="Proton相机|载具特定偏移")
	FVector AdditionalOffset = FVector::ZeroVector;
	
	/** 为相机弹簧臂提供额外的相对旋转偏移(°)。用于对特定载具进行微调。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="额外旋转", Category="Proton相机|载具特定偏移")
	FRotator AdditionalRotation = FRotator::ZeroRotator;
	
	/** 为相机提供额外的视野(FOV)偏移(°)。用于对特定载具进行微调。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="额外FOV", Category="Proton相机|载具特定偏移")
	float AdditionalFOV = 0;
	
	/** 如果为 true, 在编辑器中显示只读的调试属性。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "查看调试属性", Category="Proton相机|调试")
	bool bViewDebugProperties;
	
	//~ Begin 调试属性
	/** 当前激活的、定义相机行为的属性集。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName = "当前配置文件", Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	FProtonCameraProperties Properties;
	
	/** 载具Actor的当前世界空间位置(cm)。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	FVector Location;
	
	/** 经过平滑处理的载具Actor的世界空间速度(cm/s)。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	FVector Velocity;
	
	/** 经过平滑处理的载具Actor的速率(cm/s)。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	float Speed;
	
	/** 经过平滑处理的载具Actor的世界空间加速度(cm/s^2)，用于相机效果。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	FVector Acceleration;
	
	/** 未经平滑处理的、瞬时的载具Actor的世界空间加速度(cm/s^2)。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	FVector AccelerationInstant;
	
	/** 经过平滑处理的载具Actor的局部空间速度(cm/s)。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	FVector LocalVelocity;
	
	/** 经过平滑处理的载具Actor的局部空间加速度(cm/s^2)。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	FVector LocalAcceleration;
	
	/** 载具Actor的世界空间朝向(四元数)。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	FQuat Orientation;
	
	/** 载具Actor的世界空间旋转(欧拉角)。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	FRotator Rotation;
	
	/** 载具Actor的世界空间角速度(欧拉角, °/s)。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	FVector AngularVelocity;
	
	/** 相机是否处于倒车行为状态。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	bool bInReverse;
	
	/** 如果启用了相机循环，此为'相机循环列表'中的当前索引。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName = "当前循环索引", Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	int CycleIndex = 0;

	/** 计算出的速度效果修改因子 [0,1]。可用于自定义逻辑。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName = "速度因子", Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	float VelocityModifierFactor;
	/** 计算出的加速度效果修改因子 [0,1]。可用于自定义逻辑。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName = "加速度因子", Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	float AccelerationModifierFactor;
	/** 计算出的减速度效果修改因子 [0,1]。可用于自定义逻辑。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName = "减速度因子", Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	float DecelerationModifierFactor;
	/** 计算出的Y轴力(侧向)效果修改因子 [-1,1]。可用于自定义逻辑。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName = "Y轴力因子", Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	float YForceModifierFactor;
	/** 计算出的Z轴力(垂直)效果修改因子 [-1-1]。可用于自定义逻辑。*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName = "Z轴力因子", Category="Proton相机|调试", meta=(EditCondition="bViewDebugProperties", EditConditionHides))
	float ZForceModifierFactor;
	//~ End 调试属性
	
	/** 平滑处理的DeltaTime，用于在不同帧率下进行稳定的物理计算。*/
	float SmoothedDeltaTime;

private:
	/** 当前帧的DeltaTime。*/
	float FrameDeltaTime;

	/** 上一帧的车辆速度，用于计算加速度。*/
	FVector PreviousVelocity;
	/** 上一帧的车辆加速度。*/
	FVector PreviousAcceleration;

	/** 如果为 true, 物理属性将由'SetPhysicsProperties'手动设置，绕过自动计算。*/
	bool bIsUsingManualPhysicsSettings = false;

	/** 拥有此组件的Actor (即车辆Pawn)。*/
	UPROPERTY()
	AActor* OwningActor;

    /** 【关键改动】存储我们实际附着的、正在模拟物理的组件。*/
    UPROPERTY()
    class USceneComponent* PhysicsComponent;
	
	/** 经过平滑处理的父级车辆旋转，用于创建延迟效果。*/
	FRotator SmoothedParentRotation;
	
	/** 每帧计算出的弹簧臂根部的最终目标位置。*/
	FVector TargetLocation;
	/** 每帧计算出的弹簧臂根部的最终目标旋转。*/
	FRotator TargetRotation;
	/** 每帧计算出的相机的最终目标FOV。*/
	float TargetFOV;
	/** 每帧计算出的弹簧臂的最终目标长度。*/
	float TargetLength;

	/** 来自于插值手动旋转输入的当前平滑旋转值。*/
	FRotator CurrentSmoothedManualRotation;
	/** 来自于插值手动自旋输入的当前平滑旋转值。*/
	FRotator CurrentSmoothedManualSpin;

	/** 一个瞬态的偏移值，将平滑地插值到相机位置中。每帧重置。*/
	FVector InterpolatedManualOffset;
	/** 一个瞬态的旋转值，将平滑地插值到相机旋转中。每帧重置。*/
	FRotator InterpolatedManualRotation;
	/** 一个瞬态的自旋(Yaw)值，将平滑地插值到相机旋转中。每帧重置。*/
	FRotator InterpolatedManualSpin;

	/** 一个无插值、立即生效的手动偏移。每帧重置。*/
	FVector InstantManualOffset;
	/** 一个无插值、立即生效的手动旋转。每帧重置。*/
	FRotator InstantManualRotation;
	/** 一个无插值、立即生效的手动自旋(Yaw)。每帧重置。*/
	FRotator InstantManualSpin;
	/** 存储上一帧的立即生效的手动旋转。*/
	FRotator PreviousInstantManualRotation;
	
	/** 一个手动的FOV偏移。每帧重置。*/
	float ManualFOVOffset;
	/** 一个手动的弹簧臂长度偏移。每帧重置。*/
	float ManualLengthOffset;
	
	//~ Begin 组件
	UPROPERTY()
	class USpringArmComponent* SpringArm;
	UPROPERTY()
	class UCameraShakeSourceComponent* CameraShakeSource;
	UPROPERTY()
	class UPostProcessComponent* PostProcessComponent;
	UPROPERTY()
	class USphereComponent* SphereCollision;
	UPROPERTY()
	class USceneComponent* SpringarmRoot; // 中间组件，用于处理翻滚补偿等独立旋转
	//~ End 组件

// ... (protected 和 public 函数声明保持不变) ...
protected:
	// 游戏开始时调用
	virtual void BeginPlay() override;
	
	/** 初始化组件并自动附着到车辆的物理核心上。*/
	void InitializeAndAttach();

	void CalculateMotionValues();
	void CalculateVelocityOffsets();
	void CalculateAccelerationOffsets();
	void CalculateDecelerationOffsets();
	void CalculateYForce();
	void CalculateZForce();
	void CalculateSpeedShake() const;
	void CalculateImpactShake() const;
	void SetFinalValues();
	void SetPostProcessValues();
	void SetVignette();

public:
	/**
	 * 手动设置车辆的物理属性。这对于客户端上的复制车辆非常有用，因为它们无法进行本地物理计算。
	 * 调用此函数将禁用本帧的自动物理计算。
	 * @param InVelocity - 当前世界空间速度。
	 * @param InLocalVelocity - 当前局部空间速度。
	 * @param InAcceleration - 当前世界空间加速度。
	 * @param InLocalAcceleration - 当前局部空间加速度。
	 * @param InTransform - 当前Actor的变换。
	 * @param InDeltaTime - 距离上次更新的时间。
	 */
	UFUNCTION(BlueprintCallable, Category = "Proton相机")
	void SetPhysicsProperties(FVector InVelocity, FVector InLocalVelocity, FVector InAcceleration, FVector InLocalAcceleration, FTransform InTransform, float InDeltaTime);

	// 每帧调用
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	/** 为弹簧臂添加一个自定义的长度偏移(cm)。此值将一直保留，直到再次设置。*/
	UFUNCTION(BlueprintCallable, Category = "Proton相机", meta=(DisplayName="添加手动长度"))
	void AddManualLength(float InLength);
	
	/**
	 * 为弹簧臂添加一个单帧的自定义位置偏移。
	 * @param	InOffset				要添加到弹簧臂的位移向量。
	 * @param	bOverrideInterpolation	如果为 true, 偏移将立即生效。如果为 false, 将使用配置文件中的'偏移插值速度'进行平滑处理。
	 */
	UFUNCTION(BlueprintCallable, Category = "Proton相机", meta=(DisplayName="添加手动偏移"))
	void AddManualOffset(FVector InOffset, bool bOverrideInterpolation = false);
	
	/**
	 * 为弹簧臂添加一个单帧的自定义旋转偏移。
	 * @param	InRotation				要添加到弹簧臂的旋转。
	 * @param	bOverrideInterpolation	如果为 true, 旋转将立即生效。如果为 false, 将使用配置文件中的'旋转插值速度'进行平滑处理。
	 */
	UFUNCTION(BlueprintCallable, Category = "Proton相机", meta=(DisplayName="添加手动旋转"))
	void AddManualRotation(FRotator InRotation, bool bOverrideInterpolation = false);
	
	/**
	 * 使用X和Y输入为弹簧臂添加一个自定义的Yaw偏移(自旋)，非常适合手柄摇杆。
	 * @note	在蓝图中，您可能需要在此节点的输入引脚上右键 -> "拆分结构体引脚" (Split Struct Pin) 来分别连接X和Y。
	 * @param	InRotationInput			一个2D向量(X, Y)，其值范围为-1到1，用于设置自旋角度。
	 * @param	bOverrideInterpolation	如果为 true, 自旋将立即生效。如果为 false, 将使用配置文件中的'自旋插值速度'进行平滑处理。
	 */
	UFUNCTION(BlueprintCallable, Category = "Proton相机", meta=(DisplayName="添加手动自旋(XY)"))
	void AddManualSpinXY(FVector2D InRotationInput, bool bOverrideInterpolation = false);
	
	/**
	 * 通过直接设置角度，为弹簧臂添加一个自定义的Yaw偏移(自旋)。
	 * @param	InAngle					要设置的自旋角度(°)。
	 * @param	bOverrideInterpolation	如果为 true, 自旋将立即生效。如果为 false, 将使用配置文件中的'自旋插值速度'进行平滑处理。
	 */
	UFUNCTION(BlueprintCallable, Category = "Proton相机", meta=(DisplayName="添加手动自旋(角度)"))
	void AddManualSpinAngle(float InAngle, bool bOverrideInterpolation = false);
	
	/** 为相机添加一个单帧的自定义FOV偏移(°)。*/
	UFUNCTION(BlueprintCallable, Category = "Proton相机", meta=(DisplayName="添加手动FOV"))
	void AddManualFOV(float InFOV);
	
	/** 触发一个自定义的相机抖动效果。*/
	UFUNCTION(BlueprintCallable, Category = "Proton相机", meta=(DisplayName="添加手动抖动"))
	void AddManualShake(TSubclassOf<UCameraShakeBase> InShakeClass, float InIntensity);
	
	/** 触发当前相机配置文件中定义的冲击抖动。*/
	UFUNCTION(BlueprintCallable, Category = "Proton相机", meta=(DisplayName="添加冲击抖动"))
	void AddImpactShake();
	
	/** 使相机进入倒车行为状态(例如，反转Yaw)。*/
	UFUNCTION(BlueprintCallable, Category = "Proton相机", meta=(DisplayName="设置倒车状态"))
	void SetIntoReverse(bool bIsReversing);

	/** 获取指定类型的已计算出的修改器效果值。可用于自定义逻辑(例如，驱动后期处理效果)。对应的修改器必须已启用。*/
	UFUNCTION(BlueprintCallable, DisplayName = "获取修改器效果", Category = "Proton相机")
	float GetModifierEffect(EProtonCameraModifierType ModifierType) const;
	
	/** 获取'相机循环列表'中指定索引处的相机配置文件。*/
	UFUNCTION(BlueprintCallable, DisplayName = "获取指定索引的配置文件", Category = "Proton相机")
	UProtonCameraProfile* GetProfileAtCycleIndex(int InIndex) const;
	
	/** 获取'相机循环列表'中的当前索引。*/
	UFUNCTION(BlueprintCallable, DisplayName = "获取当前循环索引", Category = "Proton相机")
	int GetCycleIndex() const { return CycleIndex; }
	
	/** 切换到'相机循环列表'中的下一个相机配置文件。需要'bEnableCameraCycle'为 true。*/
	UFUNCTION(BlueprintCallable, DisplayName = "循环切换相机配置文件", Category = "Proton相机")
	void CycleCameraProfile();
};
