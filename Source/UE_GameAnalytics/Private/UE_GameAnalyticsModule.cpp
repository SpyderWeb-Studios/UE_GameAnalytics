// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_GameAnalyticsModule.h"
#include "UE_GameAnalyticsEditorModeCommands.h"

#define LOCTEXT_NAMESPACE "UE_GameAnalyticsModule"

void FUE_GameAnalyticsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FUE_GameAnalyticsEditorModeCommands::Register();
}

void FUE_GameAnalyticsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FUE_GameAnalyticsEditorModeCommands::Unregister();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FUE_GameAnalyticsModule, UE_GameAnalyticsEditorMode)