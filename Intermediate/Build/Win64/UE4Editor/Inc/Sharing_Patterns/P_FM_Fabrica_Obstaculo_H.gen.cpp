// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/P_FM_Fabrica_Obstaculo_H.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_FM_Fabrica_Obstaculo_H() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_P();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void AP_FM_Fabrica_Obstaculo_H::StaticRegisterNativesAP_FM_Fabrica_Obstaculo_H()
	{
	}
	UClass* Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H_NoRegister()
	{
		return AP_FM_Fabrica_Obstaculo_H::StaticClass();
	}
	struct Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_P,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "P_FM_Fabrica_Obstaculo_H.h" },
		{ "ModuleRelativePath", "P_FM_Fabrica_Obstaculo_H.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_FM_Fabrica_Obstaculo_H>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H_Statics::ClassParams = {
		&AP_FM_Fabrica_Obstaculo_H::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_FM_Fabrica_Obstaculo_H, 1674007084);
	template<> SHARING_PATTERNS_API UClass* StaticClass<AP_FM_Fabrica_Obstaculo_H>()
	{
		return AP_FM_Fabrica_Obstaculo_H::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_FM_Fabrica_Obstaculo_H(Z_Construct_UClass_AP_FM_Fabrica_Obstaculo_H, &AP_FM_Fabrica_Obstaculo_H::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("AP_FM_Fabrica_Obstaculo_H"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_FM_Fabrica_Obstaculo_H);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
