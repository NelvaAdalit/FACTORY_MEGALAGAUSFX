// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FACTORY_MEGALAGAUSFX/FACTORY_MEGALAGAUSFXGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFACTORY_MEGALAGAUSFXGameMode() {}
// Cross Module References
	FACTORY_MEGALAGAUSFX_API UClass* Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode_NoRegister();
	FACTORY_MEGALAGAUSFX_API UClass* Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FACTORY_MEGALAGAUSFX();
// End Cross Module References
	void AFACTORY_MEGALAGAUSFXGameMode::StaticRegisterNativesAFACTORY_MEGALAGAUSFXGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode_NoRegister()
	{
		return AFACTORY_MEGALAGAUSFXGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FACTORY_MEGALAGAUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FACTORY_MEGALAGAUSFXGameMode.h" },
		{ "ModuleRelativePath", "FACTORY_MEGALAGAUSFXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFACTORY_MEGALAGAUSFXGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode_Statics::ClassParams = {
		&AFACTORY_MEGALAGAUSFXGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFACTORY_MEGALAGAUSFXGameMode, 1563686056);
	template<> FACTORY_MEGALAGAUSFX_API UClass* StaticClass<AFACTORY_MEGALAGAUSFXGameMode>()
	{
		return AFACTORY_MEGALAGAUSFXGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFACTORY_MEGALAGAUSFXGameMode(Z_Construct_UClass_AFACTORY_MEGALAGAUSFXGameMode, &AFACTORY_MEGALAGAUSFXGameMode::StaticClass, TEXT("/Script/FACTORY_MEGALAGAUSFX"), TEXT("AFACTORY_MEGALAGAUSFXGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFACTORY_MEGALAGAUSFXGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
