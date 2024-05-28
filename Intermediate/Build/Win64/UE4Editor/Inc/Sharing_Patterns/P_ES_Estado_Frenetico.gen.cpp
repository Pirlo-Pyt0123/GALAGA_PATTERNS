// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/P_ES_Estado_Frenetico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_ES_Estado_Frenetico() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AP_ES_Estado_Frenetico_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AP_ES_Estado_Frenetico();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_UP_ES_Int_Estado_P_NoRegister();
// End Cross Module References
	void AP_ES_Estado_Frenetico::StaticRegisterNativesAP_ES_Estado_Frenetico()
	{
	}
	UClass* Z_Construct_UClass_AP_ES_Estado_Frenetico_NoRegister()
	{
		return AP_ES_Estado_Frenetico::StaticClass();
	}
	struct Z_Construct_UClass_AP_ES_Estado_Frenetico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_ES_Estado_Frenetico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_ES_Estado_Frenetico_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "P_ES_Estado_Frenetico.h" },
		{ "ModuleRelativePath", "P_ES_Estado_Frenetico.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AP_ES_Estado_Frenetico_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UP_ES_Int_Estado_P_NoRegister, (int32)VTABLE_OFFSET(AP_ES_Estado_Frenetico, IP_ES_Int_Estado_P), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_ES_Estado_Frenetico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_ES_Estado_Frenetico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_ES_Estado_Frenetico_Statics::ClassParams = {
		&AP_ES_Estado_Frenetico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AP_ES_Estado_Frenetico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_ES_Estado_Frenetico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_ES_Estado_Frenetico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_ES_Estado_Frenetico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_ES_Estado_Frenetico, 528389297);
	template<> SHARING_PATTERNS_API UClass* StaticClass<AP_ES_Estado_Frenetico>()
	{
		return AP_ES_Estado_Frenetico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_ES_Estado_Frenetico(Z_Construct_UClass_AP_ES_Estado_Frenetico, &AP_ES_Estado_Frenetico::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("AP_ES_Estado_Frenetico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_ES_Estado_Frenetico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
