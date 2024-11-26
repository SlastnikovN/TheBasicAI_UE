// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBasicAI/MyBTAIMoveTo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTAIMoveTo() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	THEBASICAI_API UClass* Z_Construct_UClass_UMyBTAIMoveTo();
	THEBASICAI_API UClass* Z_Construct_UClass_UMyBTAIMoveTo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheBasicAI();
// End Cross Module References
	void UMyBTAIMoveTo::StaticRegisterNativesUMyBTAIMoveTo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTAIMoveTo);
	UClass* Z_Construct_UClass_UMyBTAIMoveTo_NoRegister()
	{
		return UMyBTAIMoveTo::StaticClass();
	}
	struct Z_Construct_UClass_UMyBTAIMoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBTAIMoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBasicAI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTAIMoveTo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTAIMoveTo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyBTAIMoveTo.h" },
		{ "ModuleRelativePath", "MyBTAIMoveTo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTAIMoveTo_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyBTAIMoveTo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyBTAIMoveTo_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTAIMoveTo, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTAIMoveTo_Statics::NewProp_MoveSpeed_MetaData), Z_Construct_UClass_UMyBTAIMoveTo_Statics::NewProp_MoveSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBTAIMoveTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTAIMoveTo_Statics::NewProp_MoveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBTAIMoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTAIMoveTo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTAIMoveTo_Statics::ClassParams = {
		&UMyBTAIMoveTo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyBTAIMoveTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTAIMoveTo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTAIMoveTo_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTAIMoveTo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTAIMoveTo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyBTAIMoveTo()
	{
		if (!Z_Registration_Info_UClass_UMyBTAIMoveTo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTAIMoveTo.OuterSingleton, Z_Construct_UClass_UMyBTAIMoveTo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyBTAIMoveTo.OuterSingleton;
	}
	template<> THEBASICAI_API UClass* StaticClass<UMyBTAIMoveTo>()
	{
		return UMyBTAIMoveTo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTAIMoveTo);
	UMyBTAIMoveTo::~UMyBTAIMoveTo() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_Source_TheBasicAI_MyBTAIMoveTo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_Source_TheBasicAI_MyBTAIMoveTo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTAIMoveTo, UMyBTAIMoveTo::StaticClass, TEXT("UMyBTAIMoveTo"), &Z_Registration_Info_UClass_UMyBTAIMoveTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTAIMoveTo), 686565731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_Source_TheBasicAI_MyBTAIMoveTo_h_3192868374(TEXT("/Script/TheBasicAI"),
		Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_Source_TheBasicAI_MyBTAIMoveTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_Source_TheBasicAI_MyBTAIMoveTo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
