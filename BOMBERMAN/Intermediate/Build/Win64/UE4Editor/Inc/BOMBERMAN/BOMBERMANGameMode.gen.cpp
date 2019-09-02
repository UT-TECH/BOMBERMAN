// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BOMBERMAN/BOMBERMANGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBOMBERMANGameMode() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABOMBERMANGameMode_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABOMBERMANGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BOMBERMAN();
// End Cross Module References
	void ABOMBERMANGameMode::StaticRegisterNativesABOMBERMANGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABOMBERMANGameMode_NoRegister()
	{
		return ABOMBERMANGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABOMBERMANGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABOMBERMANGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BOMBERMAN,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABOMBERMANGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BOMBERMANGameMode.h" },
		{ "ModuleRelativePath", "BOMBERMANGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABOMBERMANGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABOMBERMANGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABOMBERMANGameMode_Statics::ClassParams = {
		&ABOMBERMANGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABOMBERMANGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABOMBERMANGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABOMBERMANGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABOMBERMANGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABOMBERMANGameMode, 3338391728);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABOMBERMANGameMode(Z_Construct_UClass_ABOMBERMANGameMode, &ABOMBERMANGameMode::StaticClass, TEXT("/Script/BOMBERMAN"), TEXT("ABOMBERMANGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABOMBERMANGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
