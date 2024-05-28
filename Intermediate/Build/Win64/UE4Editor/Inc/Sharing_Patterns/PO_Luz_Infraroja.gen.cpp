// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/PO_Luz_Infraroja.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePO_Luz_Infraroja() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_APO_Luz_Infraroja_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_APO_Luz_Infraroja();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void APO_Luz_Infraroja::StaticRegisterNativesAPO_Luz_Infraroja()
	{
	}
	UClass* Z_Construct_UClass_APO_Luz_Infraroja_NoRegister()
	{
		return APO_Luz_Infraroja::StaticClass();
	}
	struct Z_Construct_UClass_APO_Luz_Infraroja_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfraredLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfraredLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APO_Luz_Infraroja_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APO_Luz_Infraroja_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PO_Luz_Infraroja.h" },
		{ "ModuleRelativePath", "PO_Luz_Infraroja.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "PO_Luz_Infraroja" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PO_Luz_Infraroja.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APO_Luz_Infraroja, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_InfraredLight_MetaData[] = {
		{ "Category", "PO_Luz_Infraroja" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PO_Luz_Infraroja.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_InfraredLight = { "InfraredLight", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APO_Luz_Infraroja, InfraredLight), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_InfraredLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_InfraredLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "PO_Luz_Infraroja" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PO_Luz_Infraroja.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APO_Luz_Infraroja, CollisionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_CollisionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APO_Luz_Infraroja_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_InfraredLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APO_Luz_Infraroja_Statics::NewProp_CollisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APO_Luz_Infraroja_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APO_Luz_Infraroja>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APO_Luz_Infraroja_Statics::ClassParams = {
		&APO_Luz_Infraroja::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APO_Luz_Infraroja_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APO_Luz_Infraroja_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APO_Luz_Infraroja_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APO_Luz_Infraroja_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APO_Luz_Infraroja()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APO_Luz_Infraroja_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APO_Luz_Infraroja, 142814636);
	template<> SHARING_PATTERNS_API UClass* StaticClass<APO_Luz_Infraroja>()
	{
		return APO_Luz_Infraroja::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APO_Luz_Infraroja(Z_Construct_UClass_APO_Luz_Infraroja, &APO_Luz_Infraroja::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("APO_Luz_Infraroja"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APO_Luz_Infraroja);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
