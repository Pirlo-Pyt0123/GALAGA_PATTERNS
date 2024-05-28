// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/Obstaculo_Meteoro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculo_Meteoro() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_Meteoro_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_Meteoro();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AObstaculo_P();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void AObstaculo_Meteoro::StaticRegisterNativesAObstaculo_Meteoro()
	{
	}
	UClass* Z_Construct_UClass_AObstaculo_Meteoro_NoRegister()
	{
		return AObstaculo_Meteoro::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculo_Meteoro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculo_Meteoro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo_P,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Meteoro_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstaculo_Meteoro.h" },
		{ "ModuleRelativePath", "Obstaculo_Meteoro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculo_Meteoro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculo_Meteoro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculo_Meteoro_Statics::ClassParams = {
		&AObstaculo_Meteoro::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Meteoro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Meteoro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculo_Meteoro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculo_Meteoro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculo_Meteoro, 884951580);
	template<> SHARING_PATTERNS_API UClass* StaticClass<AObstaculo_Meteoro>()
	{
		return AObstaculo_Meteoro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculo_Meteoro(Z_Construct_UClass_AObstaculo_Meteoro, &AObstaculo_Meteoro::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("AObstaculo_Meteoro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculo_Meteoro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
