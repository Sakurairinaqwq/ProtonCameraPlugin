// Copyright (c) 2025 Arkn Studio - (Sakurairinaqwq)

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FProtonCameraPluginModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
