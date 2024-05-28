// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/OP_Torreta_Sus_01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOP_Torreta_Sus_01() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AOP_Torreta_Sus_01_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AOP_Torreta_Sus_01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void AOP_Torreta_Sus_01::StaticRegisterNativesAOP_Torreta_Sus_01()
	{
	}
	UClass* Z_Construct_UClass_AOP_Torreta_Sus_01_NoRegister()
	{
		return AOP_Torreta_Sus_01::StaticClass();
	}
	struct Z_Construct_UClass_AOP_Torreta_Sus_01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOP_Torreta_Sus_01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOP_Torreta_Sus_01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OP_Torreta_Sus_01.h" },
		{ "ModuleRelativePath", "OP_Torreta_Sus_01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOP_Torreta_Sus_01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOP_Torreta_Sus_01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOP_Torreta_Sus_01_Statics::ClassParams = {
		&AOP_Torreta_Sus_01::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOP_Torreta_Sus_01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOP_Torreta_Sus_01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOP_Torreta_Sus_01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOP_Torreta_Sus_01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOP_Torreta_Sus_01, 740145253);
	template<> SHARING_PATTERNS_API UClass* StaticClass<AOP_Torreta_Sus_01>()
	{
		return AOP_Torreta_Sus_01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOP_Torreta_Sus_01(Z_Construct_UClass_AOP_Torreta_Sus_01, &AOP_Torreta_Sus_01::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("AOP_Torreta_Sus_01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOP_Torreta_Sus_01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
