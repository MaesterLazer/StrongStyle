// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STR_StrongStyle_v2/CharBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharBP() {}
// Cross Module References
	STR_STRONGSTYLE_V2_API UClass* Z_Construct_UClass_ACharBP_NoRegister();
	STR_STRONGSTYLE_V2_API UClass* Z_Construct_UClass_ACharBP();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_STR_StrongStyle_v2();
// End Cross Module References
	void ACharBP::StaticRegisterNativesACharBP()
	{
	}
	UClass* Z_Construct_UClass_ACharBP_NoRegister()
	{
		return ACharBP::StaticClass();
	}
	struct Z_Construct_UClass_ACharBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_STR_StrongStyle_v2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharBP_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharBP.h" },
		{ "ModuleRelativePath", "CharBP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharBP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharBP_Statics::ClassParams = {
		&ACharBP::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACharBP_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACharBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharBP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharBP, 1554325489);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharBP(Z_Construct_UClass_ACharBP, &ACharBP::StaticClass, TEXT("/Script/STR_StrongStyle_v2"), TEXT("ACharBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
