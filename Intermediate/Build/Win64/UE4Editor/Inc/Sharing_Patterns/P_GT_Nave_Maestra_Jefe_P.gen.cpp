// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/P_GT_Nave_Maestra_Jefe_P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_GT_Nave_Maestra_Jefe_P() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
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
	void AP_GT_Nave_Maestra_Jefe_P::StaticRegisterNativesAP_GT_Nave_Maestra_Jefe_P()
	{
	}
	UClass* Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_NoRegister()
	{
		return AP_GT_Nave_Maestra_Jefe_P::StaticClass();
	}
	struct Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scena_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scena;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nave_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nave_Mesh;
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
	UObject* (*const Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "P_GT_Nave_Maestra_Jefe_P.h" },
		{ "ModuleRelativePath", "P_GT_Nave_Maestra_Jefe_P.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Scena_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente raiz que controlara los demas componentes ~~\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "P_GT_Nave_Maestra_Jefe_P.h" },
		{ "ToolTip", "~~ Componente raiz que controlara los demas componentes ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Scena = { "Scena", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AP_GT_Nave_Maestra_Jefe_P, Scena), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Scena_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Scena_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Nave_Mesh_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Conponente de Malla para la nave ~~\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "P_GT_Nave_Maestra_Jefe_P.h" },
		{ "ToolTip", "~~ Conponente de Malla para la nave ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Nave_Mesh = { "Nave_Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AP_GT_Nave_Maestra_Jefe_P, Nave_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Nave_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Nave_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Explosion_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Explosion ~~\n" },
		{ "ModuleRelativePath", "P_GT_Nave_Maestra_Jefe_P.h" },
		{ "ToolTip", "~~ Componente de Explosion ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Explosion_Nave = { "Explosion_Nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AP_GT_Nave_Maestra_Jefe_P, Explosion_Nave), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Explosion_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Explosion_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Colision_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Colsion : tipo caja ~~\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "P_GT_Nave_Maestra_Jefe_P.h" },
		{ "ToolTip", "~~ Componente de Colsion : tipo caja ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Colision_Nave = { "Colision_Nave", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AP_GT_Nave_Maestra_Jefe_P, Colision_Nave), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Colision_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Colision_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Sonido_Nave_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Sonido ~~\n" },
		{ "ModuleRelativePath", "P_GT_Nave_Maestra_Jefe_P.h" },
		{ "ToolTip", "~~ Componente de Sonido ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Sonido_Nave = { "Sonido_Nave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AP_GT_Nave_Maestra_Jefe_P, Sonido_Nave), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Sonido_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Sonido_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_LuzInfraroja_MetaData[] = {
		{ "Category", "P_GT_Nave_Maestra_Jefe_P" },
		{ "ModuleRelativePath", "P_GT_Nave_Maestra_Jefe_P.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_LuzInfraroja = { "LuzInfraroja", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AP_GT_Nave_Maestra_Jefe_P, LuzInfraroja), Z_Construct_UClass_APO_Luz_Infraroja_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_LuzInfraroja_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_LuzInfraroja_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Scena,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Nave_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Explosion_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Colision_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_Sonido_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::NewProp_LuzInfraroja,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPO_In_Sujeto_Identificado_NoRegister, (int32)VTABLE_OFFSET(AP_GT_Nave_Maestra_Jefe_P, IPO_In_Sujeto_Identificado), false },
			{ Z_Construct_UClass_UPO_In_Observador_NoRegister, (int32)VTABLE_OFFSET(AP_GT_Nave_Maestra_Jefe_P, IPO_In_Observador), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_GT_Nave_Maestra_Jefe_P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::ClassParams = {
		&AP_GT_Nave_Maestra_Jefe_P::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_GT_Nave_Maestra_Jefe_P, 4028285029);
	template<> SHARING_PATTERNS_API UClass* StaticClass<AP_GT_Nave_Maestra_Jefe_P>()
	{
		return AP_GT_Nave_Maestra_Jefe_P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_GT_Nave_Maestra_Jefe_P(Z_Construct_UClass_AP_GT_Nave_Maestra_Jefe_P, &AP_GT_Nave_Maestra_Jefe_P::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("AP_GT_Nave_Maestra_Jefe_P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_GT_Nave_Maestra_Jefe_P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
