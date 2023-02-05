// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_GameAnalytics/Public/UE_GameAnalyticsEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_GameAnalyticsEditorMode() {}
// Cross Module References
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsEditorMode();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsEditorMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UPackage* Z_Construct_UPackage__Script_UE_GameAnalytics();
// End Cross Module References
	void UUE_GameAnalyticsEditorMode::StaticRegisterNativesUUE_GameAnalyticsEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUE_GameAnalyticsEditorMode);
	UClass* Z_Construct_UClass_UUE_GameAnalyticsEditorMode_NoRegister()
	{
		return UUE_GameAnalyticsEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UUE_GameAnalyticsEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUE_GameAnalyticsEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_GameAnalytics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsEditorMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class provides an example of how to extend a UEdMode to add some simple tools\n * using the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\n * forward events to a UEdModeInteractiveToolsContext instance, which\n * has all the logic for interacting with the InputRouter, ToolManager, etc.\n * The functions provided here are the minimum to get started inserting some custom behavior.\n * Take a look at the UEdMode markup for more extensibility options.\n */" },
		{ "IncludePath", "UE_GameAnalyticsEditorMode.h" },
		{ "ModuleRelativePath", "Public/UE_GameAnalyticsEditorMode.h" },
		{ "ToolTip", "This class provides an example of how to extend a UEdMode to add some simple tools\nusing the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\nforward events to a UEdModeInteractiveToolsContext instance, which\nhas all the logic for interacting with the InputRouter, ToolManager, etc.\nThe functions provided here are the minimum to get started inserting some custom behavior.\nTake a look at the UEdMode markup for more extensibility options." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUE_GameAnalyticsEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUE_GameAnalyticsEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUE_GameAnalyticsEditorMode_Statics::ClassParams = {
		&UUE_GameAnalyticsEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUE_GameAnalyticsEditorMode()
	{
		if (!Z_Registration_Info_UClass_UUE_GameAnalyticsEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUE_GameAnalyticsEditorMode.OuterSingleton, Z_Construct_UClass_UUE_GameAnalyticsEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUE_GameAnalyticsEditorMode.OuterSingleton;
	}
	template<> UE_GAMEANALYTICS_API UClass* StaticClass<UUE_GameAnalyticsEditorMode>()
	{
		return UUE_GameAnalyticsEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUE_GameAnalyticsEditorMode);
	struct Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Public_UE_GameAnalyticsEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Public_UE_GameAnalyticsEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUE_GameAnalyticsEditorMode, UUE_GameAnalyticsEditorMode::StaticClass, TEXT("UUE_GameAnalyticsEditorMode"), &Z_Registration_Info_UClass_UUE_GameAnalyticsEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUE_GameAnalyticsEditorMode), 1857262615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Public_UE_GameAnalyticsEditorMode_h_633116002(TEXT("/Script/UE_GameAnalytics"),
		Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Public_UE_GameAnalyticsEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Public_UE_GameAnalyticsEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
