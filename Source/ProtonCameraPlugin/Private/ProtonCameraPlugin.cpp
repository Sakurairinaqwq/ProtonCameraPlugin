// Copyright (c) 2025 Arkn Studio - (Sakurairinaqwq)

#include "ProtonCameraPlugin.h"

#define LOCTEXT_NAMESPACE "FProtonCameraPluginModule"

void FProtonCameraPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FProtonCameraPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FProtonCameraPluginModule, ProtonCameraPlugin)
