// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Public/Factories/UEFAnimFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEFAnimFactory() {}
// Cross Module References
	UEFORMAT_API UClass* Z_Construct_UClass_UEFAnimFactory();
	UEFORMAT_API UClass* Z_Construct_UClass_UEFAnimFactory_NoRegister();
	UEFORMAT_API UClass* Z_Construct_UClass_UEFAnimImportOptions_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UEFormat();
// End Cross Module References
	void UEFAnimFactory::StaticRegisterNativesUEFAnimFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEFAnimFactory);
	UClass* Z_Construct_UClass_UEFAnimFactory_NoRegister()
	{
		return UEFAnimFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEFAnimFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsImporter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsImporter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEFAnimFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UEFormat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEFAnimFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/UEFAnimFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/UEFAnimFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEFAnimFactory_Statics::NewProp_SettingsImporter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factories/UEFAnimFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEFAnimFactory_Statics::NewProp_SettingsImporter = { "SettingsImporter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEFAnimFactory, SettingsImporter), Z_Construct_UClass_UEFAnimImportOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEFAnimFactory_Statics::NewProp_SettingsImporter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEFAnimFactory_Statics::NewProp_SettingsImporter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEFAnimFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEFAnimFactory_Statics::NewProp_SettingsImporter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEFAnimFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEFAnimFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEFAnimFactory_Statics::ClassParams = {
		&UEFAnimFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEFAnimFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEFAnimFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEFAnimFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEFAnimFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEFAnimFactory()
	{
		if (!Z_Registration_Info_UClass_UEFAnimFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEFAnimFactory.OuterSingleton, Z_Construct_UClass_UEFAnimFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEFAnimFactory.OuterSingleton;
	}
	template<> UEFORMAT_API UClass* StaticClass<UEFAnimFactory>()
	{
		return UEFAnimFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEFAnimFactory);
	UEFAnimFactory::~UEFAnimFactory() {}
	struct Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEFAnimFactory, UEFAnimFactory::StaticClass, TEXT("UEFAnimFactory"), &Z_Registration_Info_UClass_UEFAnimFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEFAnimFactory), 3533437701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h_522725723(TEXT("/Script/UEFormat"),
		Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFAnimFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
