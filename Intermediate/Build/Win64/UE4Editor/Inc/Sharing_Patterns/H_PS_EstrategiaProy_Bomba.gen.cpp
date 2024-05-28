// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/H_PS_EstrategiaProy_Bomba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeH_PS_EstrategiaProy_Bomba() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_UPS_Int_Estragia_Disparo_NoRegister();
// End Cross Module References
	void AH_PS_EstrategiaProy_Bomba::StaticRegisterNativesAH_PS_EstrategiaProy_Bomba()
	{
	}
	UClass* Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba_NoRegister()
	{
		return AH_PS_EstrategiaProy_Bomba::StaticClass();
	}
	struct Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "H_PS_EstrategiaProy_Bomba.h" },
		{ "ModuleRelativePath", "H_PS_EstrategiaProy_Bomba.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPS_Int_Estragia_Disparo_NoRegister, (int32)VTABLE_OFFSET(AH_PS_EstrategiaProy_Bomba, IPS_Int_Estragia_Disparo), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AH_PS_EstrategiaProy_Bomba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba_Statics::ClassParams = {
		&AH_PS_EstrategiaProy_Bomba::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AH_PS_EstrategiaProy_Bomba, 3780791705);
	template<> SHARING_PATTERNS_API UClass* StaticClass<AH_PS_EstrategiaProy_Bomba>()
	{
		return AH_PS_EstrategiaProy_Bomba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AH_PS_EstrategiaProy_Bomba(Z_Construct_UClass_AH_PS_EstrategiaProy_Bomba, &AH_PS_EstrategiaProy_Bomba::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("AH_PS_EstrategiaProy_Bomba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AH_PS_EstrategiaProy_Bomba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
