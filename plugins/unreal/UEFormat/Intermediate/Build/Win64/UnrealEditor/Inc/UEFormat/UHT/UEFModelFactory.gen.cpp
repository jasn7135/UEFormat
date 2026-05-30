// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Public/Factories/UEFModelFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEFModelFactory() {}
// Cross Module References
	UEFORMAT_API UClass* Z_Construct_UClass_UEFModelFactory();
	UEFORMAT_API UClass* Z_Construct_UClass_UEFModelFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UEFormat();
// End Cross Module References
	void UEFModelFactory::StaticRegisterNativesUEFModelFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEFModelFactory);
	UClass* Z_Construct_UClass_UEFModelFactory_NoRegister()
	{
		return UEFModelFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEFModelFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEFModelFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UEFormat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEFModelFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/UEFModelFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/UEFModelFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEFModelFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEFModelFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEFModelFactory_Statics::ClassParams = {
		&UEFModelFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEFModelFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEFModelFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEFModelFactory()
	{
		if (!Z_Registration_Info_UClass_UEFModelFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEFModelFactory.OuterSingleton, Z_Construct_UClass_UEFModelFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEFModelFactory.OuterSingleton;
	}
	template<> UEFORMAT_API UClass* StaticClass<UEFModelFactory>()
	{
		return UEFModelFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEFModelFactory);
	UEFModelFactory::~UEFModelFactory() {}
	struct Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEFModelFactory, UEFModelFactory::StaticClass, TEXT("UEFModelFactory"), &Z_Registration_Info_UClass_UEFModelFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEFModelFactory), 695222737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h_1849899790(TEXT("/Script/UEFormat"),
		Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEFN_Builds_UnrealEngineProjects_FortniteGame_Plugins_UEFormat_Source_UEFormat_Public_Factories_UEFModelFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
