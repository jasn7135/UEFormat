// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Public/Widgets/Anim/UEFAnimImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEFAnimImportOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	UEFORMAT_API UClass* Z_Construct_UClass_UEFAnimImportOptions();
	UEFORMAT_API UClass* Z_Construct_UClass_UEFAnimImportOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UEFormat();
// End Cross Module References
	void UEFAnimImportOptions::StaticRegisterNativesUEFAnimImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEFAnimImportOptions);
	UClass* Z_Construct_UClass_UEFAnimImportOptions_NoRegister()
	{
		return UEFAnimImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UEFAnimImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEFAnimImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UEFormat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEFAnimImportOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Anim/UEFAnimImportOptions.h" },
		{ "ModuleRelativePath", "Public/Widgets/Anim/UEFAnimImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEFAnimImportOptions_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/Widgets/Anim/UEFAnimImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEFAnimImportOptions_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEFAnimImportOptions, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEFAnimImportOptions_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEFAnimImportOptions_Statics::NewProp_Skeleton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEFAnimImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEFAnimImportOptions_Statics::NewProp_Skeleton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEFAnimImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEFAnimImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEFAnimImportOptions_Statics::ClassParams = {
		&UEFAnimImportOptions::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEFAnimImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEFAnimImportOptions_Statics::PropPointers),
		0,
		0x001000AAu,
		METADATA_PARAMS(Z_Construct_UClass_UEFAnimImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEFAnimImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEFAnimImportOptions()
	{
		if (!Z_Registration_Info_UClass_UEFAnimImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEFAnimImportOptions.OuterSingleton, Z_Construct_UClass_UEFAnimImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEFAnimImportOptions.OuterSingleton;
	}
	template<> UEFORMAT_API UClass* StaticClass<UEFAnimImportOptions>()
	{
		return UEFAnimImportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEFAnimImportOptions);
	UEFAnimImportOptions::~UEFAnimImportOptions() {}
	struct Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Widgets_Anim_UEFAnimImportOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Widgets_Anim_UEFAnimImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEFAnimImportOptions, UEFAnimImportOptions::StaticClass, TEXT("UEFAnimImportOptions"), &Z_Registration_Info_UClass_UEFAnimImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEFAnimImportOptions), 971836747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Widgets_Anim_UEFAnimImportOptions_h_2246036316(TEXT("/Script/UEFormat"),
		Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Widgets_Anim_UEFAnimImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Widgets_Anim_UEFAnimImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
