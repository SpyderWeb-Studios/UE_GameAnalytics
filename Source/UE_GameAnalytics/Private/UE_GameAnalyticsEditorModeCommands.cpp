// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_GameAnalyticsEditorModeCommands.h"
#include "UE_GameAnalyticsEditorMode.h"
#include "EditorStyleSet.h"

#define LOCTEXT_NAMESPACE "UE_GameAnalyticsEditorModeCommands"

FUE_GameAnalyticsEditorModeCommands::FUE_GameAnalyticsEditorModeCommands()
	: TCommands<FUE_GameAnalyticsEditorModeCommands>("UE_GameAnalyticsEditorMode",
		NSLOCTEXT("UE_GameAnalyticsEditorMode", "UE_GameAnalyticsEditorModeCommands", "UE_GameAnalytics Editor Mode"),
		NAME_None,
		FEditorStyle::GetStyleSetName())
{
}

void FUE_GameAnalyticsEditorModeCommands::RegisterCommands()
{
	TArray <TSharedPtr<FUICommandInfo>>& ToolCommands = Commands.FindOrAdd(NAME_Default);

	UI_COMMAND(SimpleTool, "Show Actor Info", "Opens message box with info about a clicked actor", EUserInterfaceActionType::Button, FInputChord());
	ToolCommands.Add(SimpleTool);

	UI_COMMAND(InteractiveTool, "Measure Distance", "Measures distance between 2 points (click to set origin, shift-click to set end point)", EUserInterfaceActionType::ToggleButton, FInputChord());
	ToolCommands.Add(InteractiveTool);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> FUE_GameAnalyticsEditorModeCommands::GetCommands()
{
	return FUE_GameAnalyticsEditorModeCommands::Get().Commands;
}

#undef LOCTEXT_NAMESPACE
