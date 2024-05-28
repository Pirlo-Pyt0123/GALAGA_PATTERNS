// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/NAVE_MAESTRA_FINAL_P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNAVE_MAESTRA_FINAL_P() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_ANave_Enemiga_P();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_APO_Luz_Infraroja_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_UPO_In_Sujeto_Identificado_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_UPO_In_Observador_NoRegister();
// End Cross Module References
	void ANAVE_MAESTRA_FINAL_P::StaticRegisterNativesANAVE_MAESTRA_FINAL_P()
	{
	}
	UClass* Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_NoRegister()
	{
		return ANAVE_MAESTRA_FINAL_P::StaticClass();
	}
	struct Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenaAA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScenaAA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nave_MeshAA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nave_MeshAA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Explosion_Nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Explosion_Nave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colision_Nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Colision_Nave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sonido_Nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sonido_Nave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LuzInfraroja_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LuzInfraroja;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave_Enemiga_P,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NAVE_MAESTRA_FINAL_P.h" },
		{ "ModuleRelativePath", "NAVE_MAESTRA_FINAL_P.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_ScenaAA_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente raiz que controlara los demas componentes ~~\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NAVE_MAESTRA_FINAL_P.h" },
		{ "ToolTip", "~~ Componente raiz que controlara los demas componentes ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_ScenaAA = { "ScenaAA", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANAVE_MAESTRA_FINAL_P, ScenaAA), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_ScenaAA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_ScenaAA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Nave_MeshAA_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Conponente de Malla para la nave ~~\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NAVE_MAESTRA_FINAL_P.h" },
		{ "ToolTip", "~~ Conponente de Malla para la nave ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Nave_MeshAA = { "Nave_MeshAA", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANAVE_MAESTRA_FINAL_P, Nave_MeshAA), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Nave_MeshAA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Nave_MeshAA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Explosion_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Explosion ~~\n" },
		{ "ModuleRelativePath", "NAVE_MAESTRA_FINAL_P.h" },
		{ "ToolTip", "~~ Componente de Explosion ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Explosion_Nave = { "Explosion_Nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANAVE_MAESTRA_FINAL_P, Explosion_Nave), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Explosion_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Explosion_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Colision_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Colsion : tipo caja ~~\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NAVE_MAESTRA_FINAL_P.h" },
		{ "ToolTip", "~~ Componente de Colsion : tipo caja ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Colision_Nave = { "Colision_Nave", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANAVE_MAESTRA_FINAL_P, Colision_Nave), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Colision_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Colision_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Sonido_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Sonido ~~\n" },
		{ "ModuleRelativePath", "NAVE_MAESTRA_FINAL_P.h" },
		{ "ToolTip", "~~ Componente de Sonido ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Sonido_Nave = { "Sonido_Nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANAVE_MAESTRA_FINAL_P, Sonido_Nave), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Sonido_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Sonido_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_LuzInfraroja_MetaData[] = {
		{ "Category", "NAVE_MAESTRA_FINAL_P" },
		{ "ModuleRelativePath", "NAVE_MAESTRA_FINAL_P.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_LuzInfraroja = { "LuzInfraroja", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANAVE_MAESTRA_FINAL_P, LuzInfraroja), Z_Construct_UClass_APO_Luz_Infraroja_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_LuzInfraroja_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_LuzInfraroja_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_ScenaAA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Nave_MeshAA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Explosion_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Colision_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_Sonido_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::NewProp_LuzInfraroja,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPO_In_Sujeto_Identificado_NoRegister, (int32)VTABLE_OFFSET(ANAVE_MAESTRA_FINAL_P, IPO_In_Sujeto_Identificado), false },
			{ Z_Construct_UClass_UPO_In_Observador_NoRegister, (int32)VTABLE_OFFSET(ANAVE_MAESTRA_FINAL_P, IPO_In_Observador), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANAVE_MAESTRA_FINAL_P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::ClassParams = {
		&ANAVE_MAESTRA_FINAL_P::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANAVE_MAESTRA_FINAL_P, 3153007884);
	template<> SHARING_PATTERNS_API UClass* StaticClass<ANAVE_MAESTRA_FINAL_P>()
	{
		return ANAVE_MAESTRA_FINAL_P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANAVE_MAESTRA_FINAL_P(Z_Construct_UClass_ANAVE_MAESTRA_FINAL_P, &ANAVE_MAESTRA_FINAL_P::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("ANAVE_MAESTRA_FINAL_P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANAVE_MAESTRA_FINAL_P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
