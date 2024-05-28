// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sharing_Patterns/Proyectil_Esfera_Energia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectil_Esfera_Energia() {}
// Cross Module References
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AProyectil_Esfera_Energia_NoRegister();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AProyectil_Esfera_Energia();
	SHARING_PATTERNS_API UClass* Z_Construct_UClass_AProyectil_P();
	UPackage* Z_Construct_UPackage__Script_Sharing_Patterns();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void AProyectil_Esfera_Energia::StaticRegisterNativesAProyectil_Esfera_Energia()
	{
	}
	UClass* Z_Construct_UClass_AProyectil_Esfera_Energia_NoRegister()
	{
		return AProyectil_Esfera_Energia::StaticClass();
	}
	struct Z_Construct_UClass_AProyectil_Esfera_Energia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectil_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Projectil_Movement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProyectil_P,
		(UObject* (*)())Z_Construct_UPackage__Script_Sharing_Patterns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Proyectil_Esfera_Energia.h" },
		{ "ModuleRelativePath", "Proyectil_Esfera_Energia.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::NewProp_Projectil_Movement_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "//Componente de Movimiento para el proyectil\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Proyectil_Esfera_Energia.h" },
		{ "ToolTip", "Componente de Movimiento para el proyectil" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::NewProp_Projectil_Movement = { "Projectil_Movement", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectil_Esfera_Energia, Projectil_Movement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::NewProp_Projectil_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::NewProp_Projectil_Movement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::NewProp_Projectil_Movement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectil_Esfera_Energia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::ClassParams = {
		&AProyectil_Esfera_Energia::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectil_Esfera_Energia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectil_Esfera_Energia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectil_Esfera_Energia, 4189794757);
	template<> SHARING_PATTERNS_API UClass* StaticClass<AProyectil_Esfera_Energia>()
	{
		return AProyectil_Esfera_Energia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectil_Esfera_Energia(Z_Construct_UClass_AProyectil_Esfera_Energia, &AProyectil_Esfera_Energia::StaticClass, TEXT("/Script/Sharing_Patterns"), TEXT("AProyectil_Esfera_Energia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectil_Esfera_Energia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
