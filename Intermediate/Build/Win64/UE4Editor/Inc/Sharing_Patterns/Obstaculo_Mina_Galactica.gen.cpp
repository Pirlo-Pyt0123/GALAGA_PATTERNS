// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/Obstaculo_Mina_Galactica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculo_Mina_Galactica() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_Mina_Galactica_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_Mina_Galactica();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_P();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void AObstaculo_Mina_Galactica::StaticRegisterNativesAObstaculo_Mina_Galactica()
	{
	}
	UClass* Z_Construct_UClass_AObstaculo_Mina_Galactica_NoRegister()
	{
		return AObstaculo_Mina_Galactica::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculo_Mina_Galactica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculo_Mina_Galactica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo_P,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Mina_Galactica_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstaculo_Mina_Galactica.h" },
		{ "ModuleRelativePath", "Obstaculo_Mina_Galactica.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculo_Mina_Galactica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculo_Mina_Galactica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculo_Mina_Galactica_Statics::ClassParams = {
		&AObstaculo_Mina_Galactica::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Mina_Galactica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Mina_Galactica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculo_Mina_Galactica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculo_Mina_Galactica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculo_Mina_Galactica, 2032981671);
	template<> SHARING_PATTERNS_API UClass* StaticClass<AObstaculo_Mina_Galactica>()
	{
		return AObstaculo_Mina_Galactica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculo_Mina_Galactica(Z_Construct_UClass_AObstaculo_Mina_Galactica, &AObstaculo_Mina_Galactica::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("AObstaculo_Mina_Galactica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculo_Mina_Galactica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
