// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/Nave_Enemiga_05.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Enemiga_05() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_ANave_Enemiga_05_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_ANave_Enemiga_05();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_ANave_Enemiga_P();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void ANave_Enemiga_05::StaticRegisterNativesANave_Enemiga_05()
	{
	}
	UClass* Z_Construct_UClass_ANave_Enemiga_05_NoRegister()
	{
		return ANave_Enemiga_05::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Enemiga_05_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Enemiga_05_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave_Enemiga_P,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Enemiga_05_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nave_Enemiga_05.h" },
		{ "ModuleRelativePath", "Nave_Enemiga_05.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Enemiga_05_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Enemiga_05>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Enemiga_05_Statics::ClassParams = {
		&ANave_Enemiga_05::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Enemiga_05_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Enemiga_05_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Enemiga_05()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Enemiga_05_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Enemiga_05, 1876094036);
	template<> SHARING_PATTERNS_API UClass* StaticClass<ANave_Enemiga_05>()
	{
		return ANave_Enemiga_05::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Enemiga_05(Z_Construct_UClass_ANave_Enemiga_05, &ANave_Enemiga_05::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("ANave_Enemiga_05"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Enemiga_05);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
