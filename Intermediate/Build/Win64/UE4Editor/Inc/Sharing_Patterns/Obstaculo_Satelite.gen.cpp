// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/Obstaculo_Satelite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculo_Satelite() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_Satelite_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_Satelite();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_P();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void AObstaculo_Satelite::StaticRegisterNativesAObstaculo_Satelite()
	{
	}
	UClass* Z_Construct_UClass_AObstaculo_Satelite_NoRegister()
	{
		return AObstaculo_Satelite::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculo_Satelite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculo_Satelite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo_P,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Satelite_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstaculo_Satelite.h" },
		{ "ModuleRelativePath", "Obstaculo_Satelite.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculo_Satelite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculo_Satelite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculo_Satelite_Statics::ClassParams = {
		&AObstaculo_Satelite::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Satelite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Satelite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculo_Satelite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculo_Satelite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculo_Satelite, 3902287112);
	template<> SHARING_PATTERNS_API UClass* StaticClass<AObstaculo_Satelite>()
	{
		return AObstaculo_Satelite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculo_Satelite(Z_Construct_UClass_AObstaculo_Satelite, &AObstaculo_Satelite::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("AObstaculo_Satelite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculo_Satelite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
