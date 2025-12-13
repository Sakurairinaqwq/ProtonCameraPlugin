// Copyright (c) 2025 Arkn Studio - (Sakurairinaqwq)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ProtonCameraStructLibrary.h"
#include "ProtonCameraProfile.generated.h"

/**
 *  一个数据资产，用于保存一套完整的Proton相机行为属性。
 */
UCLASS()
class PROTONCAMERAPLUGIN_API UProtonCameraProfile : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	/** 定义此配置文件中相机行为的属性集。*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "配置文件", Category="Proton相机")
	FProtonCameraProperties Properties;
};
