// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STR_StrongStyle_v2/CharBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharBase() {}
// Cross Module References
	STR_STRONGSTYLE_V2_API UClass* Z_Construct_UClass_ACharBase_NoRegister();
	STR_STRONGSTYLE_V2_API UClass* Z_Construct_UClass_ACharBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_STR_StrongStyle_v2();
// End Cross Module References
	void ACharBase::StaticRegisterNativesACharBase()
	{
	}
	UClass* Z_Construct_UClass_ACharBase_NoRegister()
	{
		return ACharBase::StaticClass();
	}
	struct Z_Construct_UClass_ACharBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_STR_StrongStyle_v2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharBase.h" },
		{ "ModuleRelativePath", "CharBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharBase_Statics::ClassParams = {
		&ACharBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACharBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACharBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharBase, 2188724547);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharBase(Z_Construct_UClass_ACharBase, &ACharBase::StaticClass, TEXT("/Script/STR_StrongStyle_v2"), TEXT("ACharBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
