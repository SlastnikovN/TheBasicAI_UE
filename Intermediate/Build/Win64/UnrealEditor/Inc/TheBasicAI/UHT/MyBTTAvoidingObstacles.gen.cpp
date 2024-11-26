// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBasicAI/MyBTTAvoidingObstacles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTAvoidingObstacles() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	THEBASICAI_API UClass* Z_Construct_UClass_UMyBTTAvoidingObstacles();
	THEBASICAI_API UClass* Z_Construct_UClass_UMyBTTAvoidingObstacles_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheBasicAI();
// End Cross Module References
	void UMyBTTAvoidingObstacles::StaticRegisterNativesUMyBTTAvoidingObstacles()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTAvoidingObstacles);
	UClass* Z_Construct_UClass_UMyBTTAvoidingObstacles_NoRegister()
	{
		return UMyBTTAvoidingObstacles::StaticClass();
	}
	struct Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitForward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetRotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitForward_MetaData[];
#endif
		static void NewProp_bHitForward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitRight_MetaData[];
#endif
		static void NewProp_bHitRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitLeft_MetaData[];
#endif
		static void NewProp_bHitLeft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBasicAI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyBTTAvoidingObstacles.h" },
		{ "ModuleRelativePath", "MyBTTAvoidingObstacles.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitForward_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xd0\x94\xd0\xb8\xd1\x81\xd1\x82\xd0\xb0\xd0\xbd\xd1\x86\xd0\xb8\xd1\x8f \xd1\x81\xd1\x82\xd0\xbe\xd0\xbb\xd0\xba\xd0\xbd\xd0\xbe\xd0\xb2\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f \xd0\xbb\xd1\x83\xd1\x87\xd0\xb0\n" },
#endif
		{ "ModuleRelativePath", "MyBTTAvoidingObstacles.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x94\xd0\xb8\xd1\x81\xd1\x82\xd0\xb0\xd0\xbd\xd1\x86\xd0\xb8\xd1\x8f \xd1\x81\xd1\x82\xd0\xbe\xd0\xbb\xd0\xba\xd0\xbd\xd0\xbe\xd0\xb2\xd0\xb5\xd0\xbd\xd0\xb8\xd1\x8f \xd0\xbb\xd1\x83\xd1\x87\xd0\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitForward = { "HitForward", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTAvoidingObstacles, HitForward), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitForward_MetaData), Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitForward_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitRight_MetaData[] = {
		{ "ModuleRelativePath", "MyBTTAvoidingObstacles.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitRight = { "HitRight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTAvoidingObstacles, HitRight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitRight_MetaData), Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitLeft_MetaData[] = {
		{ "ModuleRelativePath", "MyBTTAvoidingObstacles.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitLeft = { "HitLeft", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTAvoidingObstacles, HitLeft), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitLeft_MetaData), Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_TargetRotationAngle_MetaData[] = {
		{ "ModuleRelativePath", "MyBTTAvoidingObstacles.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_TargetRotationAngle = { "TargetRotationAngle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyBTTAvoidingObstacles, TargetRotationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_TargetRotationAngle_MetaData), Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_TargetRotationAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitForward_MetaData[] = {
		{ "ModuleRelativePath", "MyBTTAvoidingObstacles.h" },
	};
#endif
	void Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitForward_SetBit(void* Obj)
	{
		((UMyBTTAvoidingObstacles*)Obj)->bHitForward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitForward = { "bHitForward", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyBTTAvoidingObstacles), &Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitForward_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitForward_MetaData), Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitForward_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitRight_MetaData[] = {
		{ "ModuleRelativePath", "MyBTTAvoidingObstacles.h" },
	};
#endif
	void Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitRight_SetBit(void* Obj)
	{
		((UMyBTTAvoidingObstacles*)Obj)->bHitRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitRight = { "bHitRight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyBTTAvoidingObstacles), &Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitRight_MetaData), Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitLeft_MetaData[] = {
		{ "ModuleRelativePath", "MyBTTAvoidingObstacles.h" },
	};
#endif
	void Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitLeft_SetBit(void* Obj)
	{
		((UMyBTTAvoidingObstacles*)Obj)->bHitLeft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitLeft = { "bHitLeft", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyBTTAvoidingObstacles), &Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitLeft_MetaData), Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitLeft_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_HitLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_TargetRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::NewProp_bHitLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTAvoidingObstacles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::ClassParams = {
		&UMyBTTAvoidingObstacles::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyBTTAvoidingObstacles()
	{
		if (!Z_Registration_Info_UClass_UMyBTTAvoidingObstacles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTAvoidingObstacles.OuterSingleton, Z_Construct_UClass_UMyBTTAvoidingObstacles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyBTTAvoidingObstacles.OuterSingleton;
	}
	template<> THEBASICAI_API UClass* StaticClass<UMyBTTAvoidingObstacles>()
	{
		return UMyBTTAvoidingObstacles::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTAvoidingObstacles);
	UMyBTTAvoidingObstacles::~UMyBTTAvoidingObstacles() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_Source_TheBasicAI_MyBTTAvoidingObstacles_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_Source_TheBasicAI_MyBTTAvoidingObstacles_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTAvoidingObstacles, UMyBTTAvoidingObstacles::StaticClass, TEXT("UMyBTTAvoidingObstacles"), &Z_Registration_Info_UClass_UMyBTTAvoidingObstacles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTAvoidingObstacles), 4293680571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_Source_TheBasicAI_MyBTTAvoidingObstacles_h_3942432016(TEXT("/Script/TheBasicAI"),
		Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_Source_TheBasicAI_MyBTTAvoidingObstacles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_Source_TheBasicAI_MyBTTAvoidingObstacles_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
