// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_GameAnalyticsEditorModeToolkit.h"
#include "UE_GameAnalyticsEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "UE_GameAnalyticsEditorModeToolkit"

FUE_GameAnalyticsEditorModeToolkit::FUE_GameAnalyticsEditorModeToolkit()
{
}

void FUE_GameAnalyticsEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FUE_GameAnalyticsEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FUE_GameAnalyticsEditorModeToolkit::GetToolkitFName() const
{
	return FName("UE_GameAnalyticsEditorMode");
}

FText FUE_GameAnalyticsEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "UE_GameAnalyticsEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE
