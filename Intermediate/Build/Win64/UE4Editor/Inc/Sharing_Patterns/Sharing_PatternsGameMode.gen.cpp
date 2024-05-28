// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/Sharing_PatternsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharing_PatternsGameMode() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_ASharing_PatternsGameMode_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_ASharing_PatternsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void ASharing_PatternsGameMode::StaticRegisterNativesASharing_PatternsGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASharing_PatternsGameMode_NoRegister()
	{
		return ASharing_PatternsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASharing_PatternsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASharing_PatternsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASharing_PatternsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Sharing_PatternsGameMode.h" },
		{ "ModuleRelativePath", "Sharing_PatternsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASharing_PatternsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASharing_PatternsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASharing_PatternsGameMode_Statics::ClassParams = {
		&ASharing_PatternsGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASharing_PatternsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASharing_PatternsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASharing_PatternsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASharing_PatternsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASharing_PatternsGameMode, 3292538730);
	template<> SHARING_PATTERNS_API UClass* StaticClass<ASharing_PatternsGameMode>()
	{
		return ASharing_PatternsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASharing_PatternsGameMode(Z_Construct_UClass_ASharing_PatternsGameMode, &ASharing_PatternsGameMode::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("ASharing_PatternsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASharing_PatternsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
