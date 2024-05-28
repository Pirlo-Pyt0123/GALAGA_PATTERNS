// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/P_ES_Int_Estado_P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_ES_Int_Estado_P() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_UP_ES_Int_Estado_P_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_UP_ES_Int_Estado_P();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
// End Cross Module References
	void UP_ES_Int_Estado_P::StaticRegisterNativesUP_ES_Int_Estado_P()
	{
	}
	UClass* Z_Construct_UClass_UP_ES_Int_Estado_P_NoRegister()
	{
		return UP_ES_Int_Estado_P::StaticClass();
	}
	struct Z_Construct_UClass_UP_ES_Int_Estado_P_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UP_ES_Int_Estado_P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UP_ES_Int_Estado_P_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "P_ES_Int_Estado_P.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UP_ES_Int_Estado_P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IP_ES_Int_Estado_P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UP_ES_Int_Estado_P_Statics::ClassParams = {
		&UP_ES_Int_Estado_P::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UP_ES_Int_Estado_P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UP_ES_Int_Estado_P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UP_ES_Int_Estado_P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UP_ES_Int_Estado_P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UP_ES_Int_Estado_P, 3372648485);
	template<> SHARING_PATTERNS_API UClass* StaticClass<UP_ES_Int_Estado_P>()
	{
		return UP_ES_Int_Estado_P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UP_ES_Int_Estado_P(Z_Construct_UClass_UP_ES_Int_Estado_P, &UP_ES_Int_Estado_P::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("UP_ES_Int_Estado_P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UP_ES_Int_Estado_P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
