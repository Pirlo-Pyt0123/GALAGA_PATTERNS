// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/PO_In_Observador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePO_In_Observador() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_UPO_In_Observador_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_UPO_In_Observador();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void UPO_In_Observador::StaticRegisterNativesUPO_In_Observador()
	{
	}
	UClass* Z_Construct_UClass_UPO_In_Observador_NoRegister()
	{
		return UPO_In_Observador::StaticClass();
	}
	struct Z_Construct_UClass_UPO_In_Observador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPO_In_Observador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPO_In_Observador_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PO_In_Observador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPO_In_Observador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPO_In_Observador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPO_In_Observador_Statics::ClassParams = {
		&UPO_In_Observador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPO_In_Observador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPO_In_Observador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPO_In_Observador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPO_In_Observador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPO_In_Observador, 2025639143);
	template<> SHARING_PATTERNS_API UClass* StaticClass<UPO_In_Observador>()
	{
		return UPO_In_Observador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPO_In_Observador(Z_Construct_UClass_UPO_In_Observador, &UPO_In_Observador::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("UPO_In_Observador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPO_In_Observador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
