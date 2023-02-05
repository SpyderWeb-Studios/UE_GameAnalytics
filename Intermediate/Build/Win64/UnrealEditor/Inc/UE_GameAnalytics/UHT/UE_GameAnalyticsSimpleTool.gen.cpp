// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_GameAnalytics/Private/Tools/UE_GameAnalyticsSimpleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_GameAnalyticsSimpleTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleTool();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_NoRegister();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder_NoRegister();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE_GameAnalytics();
// End Cross Module References
	void UUE_GameAnalyticsSimpleToolBuilder::StaticRegisterNativesUUE_GameAnalyticsSimpleToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUE_GameAnalyticsSimpleToolBuilder);
	UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder_NoRegister()
	{
		return UUE_GameAnalyticsSimpleToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_GameAnalytics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UUE_GameAnalyticsSimpleTool\n */" },
		{ "IncludePath", "Tools/UE_GameAnalyticsSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsSimpleTool.h" },
		{ "ToolTip", "Builder for UUE_GameAnalyticsSimpleTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUE_GameAnalyticsSimpleToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder_Statics::ClassParams = {
		&UUE_GameAnalyticsSimpleToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleToolBuilder.OuterSingleton, Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleToolBuilder.OuterSingleton;
	}
	template<> UE_GAMEANALYTICS_API UClass* StaticClass<UUE_GameAnalyticsSimpleToolBuilder>()
	{
		return UUE_GameAnalyticsSimpleToolBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUE_GameAnalyticsSimpleToolBuilder);
	UUE_GameAnalyticsSimpleToolBuilder::~UUE_GameAnalyticsSimpleToolBuilder() {}
	void UUE_GameAnalyticsSimpleToolProperties::StaticRegisterNativesUUE_GameAnalyticsSimpleToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUE_GameAnalyticsSimpleToolProperties);
	UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_NoRegister()
	{
		return UUE_GameAnalyticsSimpleToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowExtendedInfo_MetaData[];
#endif
		static void NewProp_ShowExtendedInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExtendedInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_GameAnalytics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings UObject for UUE_GameAnalyticsSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
		{ "IncludePath", "Tools/UE_GameAnalyticsSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsSimpleTool.h" },
		{ "ToolTip", "Settings UObject for UUE_GameAnalyticsSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown. */" },
		{ "DisplayName", "Show Extended Info" },
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsSimpleTool.h" },
		{ "ToolTip", "If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown." },
	};
#endif
	void Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit(void* Obj)
	{
		((UUE_GameAnalyticsSimpleToolProperties*)Obj)->ShowExtendedInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::NewProp_ShowExtendedInfo = { "ShowExtendedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUE_GameAnalyticsSimpleToolProperties), &Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::NewProp_ShowExtendedInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUE_GameAnalyticsSimpleToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::ClassParams = {
		&UUE_GameAnalyticsSimpleToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties()
	{
		if (!Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleToolProperties.OuterSingleton, Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleToolProperties.OuterSingleton;
	}
	template<> UE_GAMEANALYTICS_API UClass* StaticClass<UUE_GameAnalyticsSimpleToolProperties>()
	{
		return UUE_GameAnalyticsSimpleToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUE_GameAnalyticsSimpleToolProperties);
	UUE_GameAnalyticsSimpleToolProperties::~UUE_GameAnalyticsSimpleToolProperties() {}
	void UUE_GameAnalyticsSimpleTool::StaticRegisterNativesUUE_GameAnalyticsSimpleTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUE_GameAnalyticsSimpleTool);
	UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_NoRegister()
	{
		return UUE_GameAnalyticsSimpleTool::StaticClass();
	}
	struct Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_GameAnalytics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UUE_GameAnalyticsSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\n * clicks left mouse button. All the action is in the ::OnClicked handler.\n */" },
		{ "IncludePath", "Tools/UE_GameAnalyticsSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsSimpleTool.h" },
		{ "ToolTip", "UUE_GameAnalyticsSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\nclicks left mouse button. All the action is in the ::OnClicked handler." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsSimpleTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUE_GameAnalyticsSimpleTool, Properties), Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUE_GameAnalyticsSimpleTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::ClassParams = {
		&UUE_GameAnalyticsSimpleTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUE_GameAnalyticsSimpleTool()
	{
		if (!Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleTool.OuterSingleton, Z_Construct_UClass_UUE_GameAnalyticsSimpleTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleTool.OuterSingleton;
	}
	template<> UE_GAMEANALYTICS_API UClass* StaticClass<UUE_GameAnalyticsSimpleTool>()
	{
		return UUE_GameAnalyticsSimpleTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUE_GameAnalyticsSimpleTool);
	UUE_GameAnalyticsSimpleTool::~UUE_GameAnalyticsSimpleTool() {}
	struct Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Private_Tools_UE_GameAnalyticsSimpleTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Private_Tools_UE_GameAnalyticsSimpleTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUE_GameAnalyticsSimpleToolBuilder, UUE_GameAnalyticsSimpleToolBuilder::StaticClass, TEXT("UUE_GameAnalyticsSimpleToolBuilder"), &Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUE_GameAnalyticsSimpleToolBuilder), 3077456528U) },
		{ Z_Construct_UClass_UUE_GameAnalyticsSimpleToolProperties, UUE_GameAnalyticsSimpleToolProperties::StaticClass, TEXT("UUE_GameAnalyticsSimpleToolProperties"), &Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUE_GameAnalyticsSimpleToolProperties), 1752149963U) },
		{ Z_Construct_UClass_UUE_GameAnalyticsSimpleTool, UUE_GameAnalyticsSimpleTool::StaticClass, TEXT("UUE_GameAnalyticsSimpleTool"), &Z_Registration_Info_UClass_UUE_GameAnalyticsSimpleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUE_GameAnalyticsSimpleTool), 1954915959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Private_Tools_UE_GameAnalyticsSimpleTool_h_292801934(TEXT("/Script/UE_GameAnalytics"),
		Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Private_Tools_UE_GameAnalyticsSimpleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Private_Tools_UE_GameAnalyticsSimpleTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
