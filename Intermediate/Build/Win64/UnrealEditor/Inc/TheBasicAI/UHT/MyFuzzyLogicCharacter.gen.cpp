// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBasicAI/MyFuzzyLogicCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFuzzyLogicCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	THEBASICAI_API UClass* Z_Construct_UClass_AMyFuzzyLogicCharacter();
	THEBASICAI_API UClass* Z_Construct_UClass_AMyFuzzyLogicCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheBasicAI();
// End Cross Module References
	DEFINE_FUNCTION(AMyFuzzyLogicCharacter::execLineTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LineTrace();
		P_NATIVE_END;
	}
	void AMyFuzzyLogicCharacter::StaticRegisterNativesAMyFuzzyLogicCharacter()
	{
		UClass* Class = AMyFuzzyLogicCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LineTrace", &AMyFuzzyLogicCharacter::execLineTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyFuzzyLogicCharacter_LineTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyFuzzyLogicCharacter_LineTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyFuzzyLogicCharacter_LineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyFuzzyLogicCharacter, nullptr, "LineTrace", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyFuzzyLogicCharacter_LineTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyFuzzyLogicCharacter_LineTrace_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyFuzzyLogicCharacter_LineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyFuzzyLogicCharacter_LineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyFuzzyLogicCharacter);
	UClass* Z_Construct_UClass_AMyFuzzyLogicCharacter_NoRegister()
	{
		return AMyFuzzyLogicCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndForward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndRight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitForward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitRight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBasicAI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyFuzzyLogicCharacter_LineTrace, "LineTrace" }, // 1600294260
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyFuzzyLogicCharacter.h" },
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_Start_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xd0\x9d\xd0\xb0\xd1\x87\xd0\xb0\xd0\xbb\xd1\x8c\xd0\xbd\xd0\xb0\xd1\x8f \xd1\x82\xd0\xbe\xd1\x87\xd0\xba\xd0\xb0 \xd1\x82\xd1\x80\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8\n" },
#endif
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9d\xd0\xb0\xd1\x87\xd0\xb0\xd0\xbb\xd1\x8c\xd0\xbd\xd0\xb0\xd1\x8f \xd1\x82\xd0\xbe\xd1\x87\xd0\xba\xd0\xb0 \xd1\x82\xd1\x80\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFuzzyLogicCharacter, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_Start_MetaData), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_ForwardDirection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xd0\x9d\xd0\xb0\xd0\xbf\xd1\x80\xd0\xb0\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb5 \xd1\x82\xd1\x80\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8\n" },
#endif
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9d\xd0\xb0\xd0\xbf\xd1\x80\xd0\xb0\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xbd\xd0\xb8\xd0\xb5 \xd1\x82\xd1\x80\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_ForwardDirection = { "ForwardDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFuzzyLogicCharacter, ForwardDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_ForwardDirection_MetaData), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_ForwardDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_LeftDirection_MetaData[] = {
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_LeftDirection = { "LeftDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFuzzyLogicCharacter, LeftDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_LeftDirection_MetaData), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_LeftDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_RightDirection_MetaData[] = {
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_RightDirection = { "RightDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFuzzyLogicCharacter, RightDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_RightDirection_MetaData), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_RightDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndForward_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xd0\x9a\xd0\xbe\xd0\xbd\xd0\xb5\xd1\x87\xd0\xbd\xd1\x8b\xd0\xb5 \xd1\x82\xd0\xbe\xd1\x87\xd0\xba\xd0\xb8 \xd1\x82\xd1\x80\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8\n" },
#endif
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9a\xd0\xbe\xd0\xbd\xd0\xb5\xd1\x87\xd0\xbd\xd1\x8b\xd0\xb5 \xd1\x82\xd0\xbe\xd1\x87\xd0\xba\xd0\xb8 \xd1\x82\xd1\x80\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndForward = { "EndForward", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFuzzyLogicCharacter, EndForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndForward_MetaData), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndForward_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndRight_MetaData[] = {
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndRight = { "EndRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFuzzyLogicCharacter, EndRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndRight_MetaData), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndLeft_MetaData[] = {
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndLeft = { "EndLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFuzzyLogicCharacter, EndLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndLeft_MetaData), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitForward_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xd0\xa0\xd0\xb5\xd0\xb7\xd1\x83\xd0\xbb\xd1\x8c\xd1\x82\xd0\xb0\xd1\x82\xd1\x8b \xd1\x82\xd1\x80\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8\n" },
#endif
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa0\xd0\xb5\xd0\xb7\xd1\x83\xd0\xbb\xd1\x8c\xd1\x82\xd0\xb0\xd1\x82\xd1\x8b \xd1\x82\xd1\x80\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitForward = { "HitForward", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFuzzyLogicCharacter, HitForward), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitForward_MetaData), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitForward_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitRight_MetaData[] = {
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitRight = { "HitRight", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFuzzyLogicCharacter, HitRight), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitRight_MetaData), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitRight_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitLeft_MetaData[] = {
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitLeft = { "HitLeft", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFuzzyLogicCharacter, HitLeft), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitLeft_MetaData), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitLeft_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_TraceDistance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xd0\x94\xd0\xbb\xd0\xb8\xd0\xbd\xd0\xb0 \xd0\xbb\xd1\x83\xd1\x87\xd0\xb0 \xd1\x82\xd1\x80\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8\n" },
#endif
		{ "ModuleRelativePath", "MyFuzzyLogicCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x94\xd0\xbb\xd0\xb8\xd0\xbd\xd0\xb0 \xd0\xbb\xd1\x83\xd1\x87\xd0\xb0 \xd1\x82\xd1\x80\xd0\xb0\xd1\x81\xd1\x81\xd0\xb8\xd1\x80\xd0\xbe\xd0\xb2\xd0\xba\xd0\xb8" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFuzzyLogicCharacter, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_TraceDistance_MetaData), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_TraceDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_ForwardDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_LeftDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_RightDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_EndLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_HitLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::NewProp_TraceDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyFuzzyLogicCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::ClassParams = {
		&AMyFuzzyLogicCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyFuzzyLogicCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyFuzzyLogicCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyFuzzyLogicCharacter.OuterSingleton, Z_Construct_UClass_AMyFuzzyLogicCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyFuzzyLogicCharacter.OuterSingleton;
	}
	template<> THEBASICAI_API UClass* StaticClass<AMyFuzzyLogicCharacter>()
	{
		return AMyFuzzyLogicCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFuzzyLogicCharacter);
	AMyFuzzyLogicCharacter::~AMyFuzzyLogicCharacter() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_UE_Source_TheBasicAI_MyFuzzyLogicCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_UE_Source_TheBasicAI_MyFuzzyLogicCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyFuzzyLogicCharacter, AMyFuzzyLogicCharacter::StaticClass, TEXT("AMyFuzzyLogicCharacter"), &Z_Registration_Info_UClass_AMyFuzzyLogicCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyFuzzyLogicCharacter), 4163764137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_UE_Source_TheBasicAI_MyFuzzyLogicCharacter_h_1799154066(TEXT("/Script/TheBasicAI"),
		Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_UE_Source_TheBasicAI_MyFuzzyLogicCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_TheBasicAI_UE_Source_TheBasicAI_MyFuzzyLogicCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
