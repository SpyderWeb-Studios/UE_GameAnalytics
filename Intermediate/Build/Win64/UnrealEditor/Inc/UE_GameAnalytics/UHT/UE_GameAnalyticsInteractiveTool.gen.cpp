// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_GameAnalytics/Private/Tools/UE_GameAnalyticsInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_GameAnalyticsInteractiveTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_NoRegister();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder_NoRegister();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties();
	UE_GAMEANALYTICS_API UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE_GameAnalytics();
// End Cross Module References
	void UUE_GameAnalyticsInteractiveToolBuilder::StaticRegisterNativesUUE_GameAnalyticsInteractiveToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUE_GameAnalyticsInteractiveToolBuilder);
	UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder_NoRegister()
	{
		return UUE_GameAnalyticsInteractiveToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_GameAnalytics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UUE_GameAnalyticsInteractiveTool\n */" },
		{ "IncludePath", "Tools/UE_GameAnalyticsInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsInteractiveTool.h" },
		{ "ToolTip", "Builder for UUE_GameAnalyticsInteractiveTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUE_GameAnalyticsInteractiveToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder_Statics::ClassParams = {
		&UUE_GameAnalyticsInteractiveToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveToolBuilder.OuterSingleton, Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveToolBuilder.OuterSingleton;
	}
	template<> UE_GAMEANALYTICS_API UClass* StaticClass<UUE_GameAnalyticsInteractiveToolBuilder>()
	{
		return UUE_GameAnalyticsInteractiveToolBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUE_GameAnalyticsInteractiveToolBuilder);
	UUE_GameAnalyticsInteractiveToolBuilder::~UUE_GameAnalyticsInteractiveToolBuilder() {}
	void UUE_GameAnalyticsInteractiveToolProperties::StaticRegisterNativesUUE_GameAnalyticsInteractiveToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUE_GameAnalyticsInteractiveToolProperties);
	UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_NoRegister()
	{
		return UUE_GameAnalyticsInteractiveToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_GameAnalytics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Property set for the UUE_GameAnalyticsInteractiveTool\n */" },
		{ "IncludePath", "Tools/UE_GameAnalyticsInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsInteractiveTool.h" },
		{ "ToolTip", "Property set for the UUE_GameAnalyticsInteractiveTool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** First point of measurement */" },
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsInteractiveTool.h" },
		{ "ToolTip", "First point of measurement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUE_GameAnalyticsInteractiveToolProperties, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Second point of measurement */" },
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsInteractiveTool.h" },
		{ "ToolTip", "Second point of measurement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUE_GameAnalyticsInteractiveToolProperties, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Current distance measurement */" },
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsInteractiveTool.h" },
		{ "ToolTip", "Current distance measurement" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUE_GameAnalyticsInteractiveToolProperties, Distance), METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_Distance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_EndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::NewProp_Distance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUE_GameAnalyticsInteractiveToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::ClassParams = {
		&UUE_GameAnalyticsInteractiveToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties()
	{
		if (!Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveToolProperties.OuterSingleton, Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveToolProperties.OuterSingleton;
	}
	template<> UE_GAMEANALYTICS_API UClass* StaticClass<UUE_GameAnalyticsInteractiveToolProperties>()
	{
		return UUE_GameAnalyticsInteractiveToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUE_GameAnalyticsInteractiveToolProperties);
	UUE_GameAnalyticsInteractiveToolProperties::~UUE_GameAnalyticsInteractiveToolProperties() {}
	void UUE_GameAnalyticsInteractiveTool::StaticRegisterNativesUUE_GameAnalyticsInteractiveTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUE_GameAnalyticsInteractiveTool);
	UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_NoRegister()
	{
		return UUE_GameAnalyticsInteractiveTool::StaticClass();
	}
	struct Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics
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
	UObject* (*const Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_GameAnalytics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UUE_GameAnalyticsInteractiveTool is an example Tool that allows the user to measure the \n * distance between two points. The first point is set by click-dragging the mouse, and\n * the second point is set by shift-click-dragging the mouse.\n */" },
		{ "IncludePath", "Tools/UE_GameAnalyticsInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsInteractiveTool.h" },
		{ "ToolTip", "UUE_GameAnalyticsInteractiveTool is an example Tool that allows the user to measure the\ndistance between two points. The first point is set by click-dragging the mouse, and\nthe second point is set by shift-click-dragging the mouse." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::NewProp_Properties_MetaData[] = {
		{ "Comment", "/** Properties of the tool are stored here */" },
		{ "ModuleRelativePath", "Private/Tools/UE_GameAnalyticsInteractiveTool.h" },
		{ "ToolTip", "Properties of the tool are stored here" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUE_GameAnalyticsInteractiveTool, Properties), Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUE_GameAnalyticsInteractiveTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::ClassParams = {
		&UUE_GameAnalyticsInteractiveTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool()
	{
		if (!Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveTool.OuterSingleton, Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveTool.OuterSingleton;
	}
	template<> UE_GAMEANALYTICS_API UClass* StaticClass<UUE_GameAnalyticsInteractiveTool>()
	{
		return UUE_GameAnalyticsInteractiveTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUE_GameAnalyticsInteractiveTool);
	UUE_GameAnalyticsInteractiveTool::~UUE_GameAnalyticsInteractiveTool() {}
	struct Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Private_Tools_UE_GameAnalyticsInteractiveTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Private_Tools_UE_GameAnalyticsInteractiveTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolBuilder, UUE_GameAnalyticsInteractiveToolBuilder::StaticClass, TEXT("UUE_GameAnalyticsInteractiveToolBuilder"), &Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUE_GameAnalyticsInteractiveToolBuilder), 2631977420U) },
		{ Z_Construct_UClass_UUE_GameAnalyticsInteractiveToolProperties, UUE_GameAnalyticsInteractiveToolProperties::StaticClass, TEXT("UUE_GameAnalyticsInteractiveToolProperties"), &Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUE_GameAnalyticsInteractiveToolProperties), 1480136221U) },
		{ Z_Construct_UClass_UUE_GameAnalyticsInteractiveTool, UUE_GameAnalyticsInteractiveTool::StaticClass, TEXT("UUE_GameAnalyticsInteractiveTool"), &Z_Registration_Info_UClass_UUE_GameAnalyticsInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUE_GameAnalyticsInteractiveTool), 3340046936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Private_Tools_UE_GameAnalyticsInteractiveTool_h_1143299809(TEXT("/Script/UE_GameAnalytics"),
		Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Private_Tools_UE_GameAnalyticsInteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_spyde_Perforce_ProjectMirror_AgentArachnid_depot_ProjectMirror_v9_Plugins_UE_GameAnalytics_Source_UE_GameAnalytics_Private_Tools_UE_GameAnalyticsInteractiveTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
