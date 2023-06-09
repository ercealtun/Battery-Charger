// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Time2Pick/Public/Time2Pick_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTime2Pick_GameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	TIME2PICK_API UClass* Z_Construct_UClass_ATime2Pick_GameMode();
	TIME2PICK_API UClass* Z_Construct_UClass_ATime2Pick_GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Time2Pick();
// End Cross Module References
	void ATime2Pick_GameMode::StaticRegisterNativesATime2Pick_GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATime2Pick_GameMode);
	UClass* Z_Construct_UClass_ATime2Pick_GameMode_NoRegister()
	{
		return ATime2Pick_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATime2Pick_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRecharge_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerRecharge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnXMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnXMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnXMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnXMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnYMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnYMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnYMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnYMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATime2Pick_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Time2Pick,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATime2Pick_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Time2Pick_GameMode.h" },
		{ "ModuleRelativePath", "Public/Time2Pick_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_PlayerRecharge_MetaData[] = {
		{ "Category", "Time2Pick_GameMode" },
		{ "ModuleRelativePath", "Public/Time2Pick_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_PlayerRecharge = { "PlayerRecharge", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATime2Pick_GameMode, PlayerRecharge), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_PlayerRecharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_PlayerRecharge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnXMin_MetaData[] = {
		{ "Category", "Time2Pick_GameMode" },
		{ "ModuleRelativePath", "Public/Time2Pick_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnXMin = { "SpawnXMin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATime2Pick_GameMode, SpawnXMin), METADATA_PARAMS(Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnXMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnXMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnXMax_MetaData[] = {
		{ "Category", "Time2Pick_GameMode" },
		{ "ModuleRelativePath", "Public/Time2Pick_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnXMax = { "SpawnXMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATime2Pick_GameMode, SpawnXMax), METADATA_PARAMS(Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnXMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnXMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnYMin_MetaData[] = {
		{ "Category", "Time2Pick_GameMode" },
		{ "ModuleRelativePath", "Public/Time2Pick_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnYMin = { "SpawnYMin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATime2Pick_GameMode, SpawnYMin), METADATA_PARAMS(Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnYMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnYMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnYMax_MetaData[] = {
		{ "Category", "Time2Pick_GameMode" },
		{ "ModuleRelativePath", "Public/Time2Pick_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnYMax = { "SpawnYMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATime2Pick_GameMode, SpawnYMax), METADATA_PARAMS(Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnYMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnYMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATime2Pick_GameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_PlayerRecharge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnXMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnXMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnYMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATime2Pick_GameMode_Statics::NewProp_SpawnYMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATime2Pick_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATime2Pick_GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATime2Pick_GameMode_Statics::ClassParams = {
		&ATime2Pick_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATime2Pick_GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATime2Pick_GameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATime2Pick_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATime2Pick_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATime2Pick_GameMode()
	{
		if (!Z_Registration_Info_UClass_ATime2Pick_GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATime2Pick_GameMode.OuterSingleton, Z_Construct_UClass_ATime2Pick_GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATime2Pick_GameMode.OuterSingleton;
	}
	template<> TIME2PICK_API UClass* StaticClass<ATime2Pick_GameMode>()
	{
		return ATime2Pick_GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATime2Pick_GameMode);
	ATime2Pick_GameMode::~ATime2Pick_GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_ercea_OneDrive_Belgeler_GitHub_Unreal_Engine_Time2Pick_Time2Pick_Source_Time2Pick_Public_Time2Pick_GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ercea_OneDrive_Belgeler_GitHub_Unreal_Engine_Time2Pick_Time2Pick_Source_Time2Pick_Public_Time2Pick_GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATime2Pick_GameMode, ATime2Pick_GameMode::StaticClass, TEXT("ATime2Pick_GameMode"), &Z_Registration_Info_UClass_ATime2Pick_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATime2Pick_GameMode), 1851964719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ercea_OneDrive_Belgeler_GitHub_Unreal_Engine_Time2Pick_Time2Pick_Source_Time2Pick_Public_Time2Pick_GameMode_h_502595105(TEXT("/Script/Time2Pick"),
		Z_CompiledInDeferFile_FID_Users_ercea_OneDrive_Belgeler_GitHub_Unreal_Engine_Time2Pick_Time2Pick_Source_Time2Pick_Public_Time2Pick_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ercea_OneDrive_Belgeler_GitHub_Unreal_Engine_Time2Pick_Time2Pick_Source_Time2Pick_Public_Time2Pick_GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
