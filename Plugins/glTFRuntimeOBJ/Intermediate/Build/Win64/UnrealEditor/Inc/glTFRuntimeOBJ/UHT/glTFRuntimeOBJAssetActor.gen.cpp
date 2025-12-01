// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFRuntimeOBJ/Public/glTFRuntimeOBJAssetActor.h"
#include "glTFRuntime/Public/glTFRuntimeParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeOBJAssetActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAsset_NoRegister();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig();
	GLTFRUNTIMEOBJ_API UClass* Z_Construct_UClass_AglTFRuntimeOBJAssetActor();
	GLTFRUNTIMEOBJ_API UClass* Z_Construct_UClass_AglTFRuntimeOBJAssetActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_glTFRuntimeOBJ();
// End Cross Module References
	DEFINE_FUNCTION(AglTFRuntimeOBJAssetActor::execReceiveOnScenesLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveOnScenesLoaded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AglTFRuntimeOBJAssetActor::execReceiveOnStaticMeshComponentCreated)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveOnStaticMeshComponentCreated_Implementation(Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	struct glTFRuntimeOBJAssetActor_eventReceiveOnStaticMeshComponentCreated_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
	};
	static FName NAME_AglTFRuntimeOBJAssetActor_ReceiveOnScenesLoaded = FName(TEXT("ReceiveOnScenesLoaded"));
	void AglTFRuntimeOBJAssetActor::ReceiveOnScenesLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_AglTFRuntimeOBJAssetActor_ReceiveOnScenesLoaded),NULL);
	}
	static FName NAME_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated = FName(TEXT("ReceiveOnStaticMeshComponentCreated"));
	void AglTFRuntimeOBJAssetActor::ReceiveOnStaticMeshComponentCreated(UStaticMeshComponent* StaticMeshComponent)
	{
		glTFRuntimeOBJAssetActor_eventReceiveOnStaticMeshComponentCreated_Parms Parms;
		Parms.StaticMeshComponent=StaticMeshComponent;
		ProcessEvent(FindFunctionChecked(NAME_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated),&Parms);
	}
	void AglTFRuntimeOBJAssetActor::StaticRegisterNativesAglTFRuntimeOBJAssetActor()
	{
		UClass* Class = AglTFRuntimeOBJAssetActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveOnScenesLoaded", &AglTFRuntimeOBJAssetActor::execReceiveOnScenesLoaded },
			{ "ReceiveOnStaticMeshComponentCreated", &AglTFRuntimeOBJAssetActor::execReceiveOnStaticMeshComponentCreated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnScenesLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnScenesLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime|OBJ" },
		{ "DisplayName", "On Scenes Loaded" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnScenesLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeOBJAssetActor, nullptr, "ReceiveOnScenesLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnScenesLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnScenesLoaded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnScenesLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnScenesLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeOBJAssetActor_eventReceiveOnStaticMeshComponentCreated_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime|OBJ" },
		{ "DisplayName", "On StaticMeshComponent Created" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeOBJAssetActor, nullptr, "ReceiveOnStaticMeshComponentCreated", nullptr, nullptr, Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers), sizeof(glTFRuntimeOBJAssetActor_eventReceiveOnStaticMeshComponentCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers) < 2048);
	static_assert(sizeof(glTFRuntimeOBJAssetActor_eventReceiveOnStaticMeshComponentCreated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AglTFRuntimeOBJAssetActor);
	UClass* Z_Construct_UClass_AglTFRuntimeOBJAssetActor_NoRegister()
	{
		return AglTFRuntimeOBJAssetActor::StaticClass();
	}
	struct Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetRoot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntimeOBJ,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnScenesLoaded, "ReceiveOnScenesLoaded" }, // 1379694387
		{ &Z_Construct_UFunction_AglTFRuntimeOBJAssetActor_ReceiveOnStaticMeshComponentCreated, "ReceiveOnStaticMeshComponentCreated" }, // 1152935444
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "glTFRuntimeOBJAssetActor.h" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "glTFRuntime|OBJ" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeOBJAssetActor, Asset), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_Asset_MetaData), Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_Asset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "Category", "glTFRuntime|OBJ" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0011008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeOBJAssetActor, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_StaticMeshConfig_MetaData) }; // 3636186698
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_AssetRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "glTFRuntime|OBJ" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_AssetRoot = { "AssetRoot", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeOBJAssetActor, AssetRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_AssetRoot_MetaData), Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_AssetRoot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_StaticMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::NewProp_AssetRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AglTFRuntimeOBJAssetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::ClassParams = {
		&AglTFRuntimeOBJAssetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AglTFRuntimeOBJAssetActor()
	{
		if (!Z_Registration_Info_UClass_AglTFRuntimeOBJAssetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AglTFRuntimeOBJAssetActor.OuterSingleton, Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AglTFRuntimeOBJAssetActor.OuterSingleton;
	}
	template<> GLTFRUNTIMEOBJ_API UClass* StaticClass<AglTFRuntimeOBJAssetActor>()
	{
		return AglTFRuntimeOBJAssetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AglTFRuntimeOBJAssetActor);
	AglTFRuntimeOBJAssetActor::~AglTFRuntimeOBJAssetActor() {}
	struct Z_CompiledInDeferFile_FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AglTFRuntimeOBJAssetActor, AglTFRuntimeOBJAssetActor::StaticClass, TEXT("AglTFRuntimeOBJAssetActor"), &Z_Registration_Info_UClass_AglTFRuntimeOBJAssetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AglTFRuntimeOBJAssetActor), 204776031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_4276150532(TEXT("/Script/glTFRuntimeOBJ"),
		Z_CompiledInDeferFile_FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
