// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_GameAnalyticsEditorMode.h"
#include "UE_GameAnalyticsEditorModeToolkit.h"
#include "EdModeInteractiveToolsContext.h"
#include "InteractiveToolManager.h"
#include "UE_GameAnalyticsEditorModeCommands.h"


//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
// AddYourTool Step 1 - include the header file for your Tools here
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
#include "Tools/UE_GameAnalyticsSimpleTool.h"
#include "Tools/UE_GameAnalyticsInteractiveTool.h"

// step 2: register a ToolBuilder in FUE_GameAnalyticsEditorMode::Enter() below


#define LOCTEXT_NAMESPACE "UE_GameAnalyticsEditorMode"

const FEditorModeID UUE_GameAnalyticsEditorMode::EM_UE_GameAnalyticsEditorModeId = TEXT("EM_UE_GameAnalyticsEditorMode");

FString UUE_GameAnalyticsEditorMode::SimpleToolName = TEXT("UE_GameAnalytics_ActorInfoTool");
FString UUE_GameAnalyticsEditorMode::InteractiveToolName = TEXT("UE_GameAnalytics_MeasureDistanceTool");


UUE_GameAnalyticsEditorMode::UUE_GameAnalyticsEditorMode()
{
	FModuleManager::Get().LoadModule("EditorStyle");

	// appearance and icon in the editing mode ribbon can be customized here
	Info = FEditorModeInfo(UUE_GameAnalyticsEditorMode::EM_UE_GameAnalyticsEditorModeId,
		LOCTEXT("ModeName", "UE_GameAnalytics"),
		FSlateIcon(),
		true);
}


UUE_GameAnalyticsEditorMode::~UUE_GameAnalyticsEditorMode()
{
}


void UUE_GameAnalyticsEditorMode::ActorSelectionChangeNotify()
{
}

void UUE_GameAnalyticsEditorMode::Enter()
{
	UEdMode::Enter();

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// AddYourTool Step 2 - register the ToolBuilders for your Tools here.
	// The string name you pass to the ToolManager is used to select/activate your ToolBuilder later.
	//////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////// 
	const FUE_GameAnalyticsEditorModeCommands& SampleToolCommands = FUE_GameAnalyticsEditorModeCommands::Get();

	RegisterTool(SampleToolCommands.SimpleTool, SimpleToolName, NewObject<UUE_GameAnalyticsSimpleToolBuilder>(this));
	RegisterTool(SampleToolCommands.InteractiveTool, InteractiveToolName, NewObject<UUE_GameAnalyticsInteractiveToolBuilder>(this));

	// active tool type is not relevant here, we just set to default
	GetToolManager()->SelectActiveToolType(EToolSide::Left, SimpleToolName);
}

void UUE_GameAnalyticsEditorMode::CreateToolkit()
{
	Toolkit = MakeShareable(new FUE_GameAnalyticsEditorModeToolkit);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> UUE_GameAnalyticsEditorMode::GetModeCommands() const
{
	return FUE_GameAnalyticsEditorModeCommands::Get().GetCommands();
}

#undef LOCTEXT_NAMESPACE
