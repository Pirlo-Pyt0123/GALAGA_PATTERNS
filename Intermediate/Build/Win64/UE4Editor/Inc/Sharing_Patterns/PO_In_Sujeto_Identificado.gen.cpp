// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/PO_In_Sujeto_Identificado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePO_In_Sujeto_Identificado() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_UPO_In_Sujeto_Identificado_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_UPO_In_Sujeto_Identificado();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void UPO_In_Sujeto_Identificado::StaticRegisterNativesUPO_In_Sujeto_Identificado()
	{
	}
	UClass* Z_Construct_UClass_UPO_In_Sujeto_Identificado_NoRegister()
	{
		return UPO_In_Sujeto_Identificado::StaticClass();
	}
	struct Z_Construct_UClass_UPO_In_Sujeto_Identificado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPO_In_Sujeto_Identificado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPO_In_Sujeto_Identificado_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PO_In_Sujeto_Identificado.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPO_In_Sujeto_Identificado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPO_In_Sujeto_Identificado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPO_In_Sujeto_Identificado_Statics::ClassParams = {
		&UPO_In_Sujeto_Identificado::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPO_In_Sujeto_Identificado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPO_In_Sujeto_Identificado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPO_In_Sujeto_Identificado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPO_In_Sujeto_Identificado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPO_In_Sujeto_Identificado, 1812503062);
	template<> SHARING_PATTERNS_API UClass* StaticClass<UPO_In_Sujeto_Identificado>()
	{
		return UPO_In_Sujeto_Identificado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPO_In_Sujeto_Identificado(Z_Construct_UClass_UPO_In_Sujeto_Identificado, &UPO_In_Sujeto_Identificado::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("UPO_In_Sujeto_Identificado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPO_In_Sujeto_Identificado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
