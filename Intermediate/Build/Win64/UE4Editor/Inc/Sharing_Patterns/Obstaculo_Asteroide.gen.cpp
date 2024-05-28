// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/Obstaculo_Asteroide.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculo_Asteroide() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_Asteroide_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_Asteroide();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_P();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void AObstaculo_Asteroide::StaticRegisterNativesAObstaculo_Asteroide()
	{
	}
	UClass* Z_Construct_UClass_AObstaculo_Asteroide_NoRegister()
	{
		return AObstaculo_Asteroide::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculo_Asteroide_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculo_Asteroide_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo_P,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Asteroide_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstaculo_Asteroide.h" },
		{ "ModuleRelativePath", "Obstaculo_Asteroide.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculo_Asteroide_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculo_Asteroide>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculo_Asteroide_Statics::ClassParams = {
		&AObstaculo_Asteroide::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Asteroide_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Asteroide_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculo_Asteroide()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculo_Asteroide_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculo_Asteroide, 438627670);
	template<> SHARING_PATTERNS_API UClass* StaticClass<AObstaculo_Asteroide>()
	{
		return AObstaculo_Asteroide::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculo_Asteroide(Z_Construct_UClass_AObstaculo_Asteroide, &AObstaculo_Asteroide::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("AObstaculo_Asteroide"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculo_Asteroide);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
