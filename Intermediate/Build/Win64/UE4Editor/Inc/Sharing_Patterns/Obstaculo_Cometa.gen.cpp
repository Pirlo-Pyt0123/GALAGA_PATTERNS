// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/Obstaculo_Cometa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculo_Cometa() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_Cometa_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_Cometa();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_P();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void AObstaculo_Cometa::StaticRegisterNativesAObstaculo_Cometa()
	{
	}
	UClass* Z_Construct_UClass_AObstaculo_Cometa_NoRegister()
	{
		return AObstaculo_Cometa::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculo_Cometa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculo_Cometa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo_P,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Cometa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstaculo_Cometa.h" },
		{ "ModuleRelativePath", "Obstaculo_Cometa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculo_Cometa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculo_Cometa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculo_Cometa_Statics::ClassParams = {
		&AObstaculo_Cometa::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Cometa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Cometa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculo_Cometa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculo_Cometa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculo_Cometa, 261194626);
	template<> SHARING_PATTERNS_API UClass* StaticClass<AObstaculo_Cometa>()
	{
		return AObstaculo_Cometa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculo_Cometa(Z_Construct_UClass_AObstaculo_Cometa, &AObstaculo_Cometa::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("AObstaculo_Cometa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculo_Cometa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
