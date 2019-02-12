// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STR_StrongStyle_v2/Public/AI_MoveTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_MoveTo() {}
// Cross Module References
	STR_STRONGSTYLE_V2_API UClass* Z_Construct_UClass_AAI_MoveTo_NoRegister();
	STR_STRONGSTYLE_V2_API UClass* Z_Construct_UClass_AAI_MoveTo();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_STR_StrongStyle_v2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AAI_MoveTo::StaticRegisterNativesAAI_MoveTo()
	{
	}
	UClass* Z_Construct_UClass_AAI_MoveTo_NoRegister()
	{
		return AAI_MoveTo::StaticClass();
	}
	struct Z_Construct_UClass_AAI_MoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hoopLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hoopLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_MoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_STR_StrongStyle_v2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_MoveTo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_MoveTo.h" },
		{ "ModuleRelativePath", "Public/AI_MoveTo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_MoveTo_Statics::NewProp_hoopLocation_MetaData[] = {
		{ "Category", "AI_MoveTo" },
		{ "ModuleRelativePath", "Public/AI_MoveTo.h" },
		{ "ToolTip", "Sets default values for this pawn's properties" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAI_MoveTo_Statics::NewProp_hoopLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "hoopLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAI_MoveTo, hoopLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAI_MoveTo_Statics::NewProp_hoopLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_MoveTo_Statics::NewProp_hoopLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_MoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_MoveTo_Statics::NewProp_hoopLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_MoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_MoveTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_MoveTo_Statics::ClassParams = {
		&AAI_MoveTo::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AAI_MoveTo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAI_MoveTo_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAI_MoveTo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAI_MoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_MoveTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_MoveTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_MoveTo, 3145794942);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_MoveTo(Z_Construct_UClass_AAI_MoveTo, &AAI_MoveTo::StaticClass, TEXT("/Script/STR_StrongStyle_v2"), TEXT("AAI_MoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_MoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
