// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFRuntimeOBJ/Public/glTFRuntimeOBJAssetActorAsync.h"
#include "glTFRuntime/Public/glTFRuntimeParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeOBJAssetActorAsync() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GLTFRUNTIME_API UClass* Z_Construct_UClass_UglTFRuntimeAsset_NoRegister();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig();
	GLTFRUNTIMEOBJ_API UClass* Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync();
	GLTFRUNTIMEOBJ_API UClass* Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_NoRegister();
	UPackage* Z_Construct_UPackage__Script_glTFRuntimeOBJ();
// End Cross Module References
	DEFINE_FUNCTION(AglTFRuntimeOBJAssetActorAsync::execLoadStaticMeshAsync)
	{
		P_GET_UBOOL(Z_Param_bValid);
		P_GET_STRUCT_REF(FglTFRuntimeMeshLOD,Z_Param_Out_RuntimeLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadStaticMeshAsync(Z_Param_bValid,Z_Param_Out_RuntimeLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AglTFRuntimeOBJAssetActorAsync::execLoadObjectsAsync)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadObjectsAsync(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AglTFRuntimeOBJAssetActorAsync::execReceiveOnScenesLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveOnScenesLoaded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AglTFRuntimeOBJAssetActorAsync::execReceiveOnStaticMeshComponentCreated)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveOnStaticMeshComponentCreated_Implementation(Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	struct glTFRuntimeOBJAssetActorAsync_eventReceiveOnStaticMeshComponentCreated_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
	};
	static FName NAME_AglTFRuntimeOBJAssetActorAsync_ReceiveOnScenesLoaded = FName(TEXT("ReceiveOnScenesLoaded"));
	void AglTFRuntimeOBJAssetActorAsync::ReceiveOnScenesLoaded()
	{
		ProcessEvent(FindFunctionChecked(NAME_AglTFRuntimeOBJAssetActorAsync_ReceiveOnScenesLoaded),NULL);
	}
	static FName NAME_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated = FName(TEXT("ReceiveOnStaticMeshComponentCreated"));
	void AglTFRuntimeOBJAssetActorAsync::ReceiveOnStaticMeshComponentCreated(UStaticMeshComponent* StaticMeshComponent)
	{
		glTFRuntimeOBJAssetActorAsync_eventReceiveOnStaticMeshComponentCreated_Parms Parms;
		Parms.StaticMeshComponent=StaticMeshComponent;
		ProcessEvent(FindFunctionChecked(NAME_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated),&Parms);
	}
	void AglTFRuntimeOBJAssetActorAsync::StaticRegisterNativesAglTFRuntimeOBJAssetActorAsync()
	{
		UClass* Class = AglTFRuntimeOBJAssetActorAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadObjectsAsync", &AglTFRuntimeOBJAssetActorAsync::execLoadObjectsAsync },
			{ "LoadStaticMeshAsync", &AglTFRuntimeOBJAssetActorAsync::execLoadStaticMeshAsync },
			{ "ReceiveOnScenesLoaded", &AglTFRuntimeOBJAssetActorAsync::execReceiveOnScenesLoaded },
			{ "ReceiveOnStaticMeshComponentCreated", &AglTFRuntimeOBJAssetActorAsync::execReceiveOnStaticMeshComponentCreated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics
	{
		struct glTFRuntimeOBJAssetActorAsync_eventLoadObjectsAsync_Parms
		{
			TArray<FString> Names;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeOBJAssetActorAsync_eventLoadObjectsAsync_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::NewProp_Names_MetaData), Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::NewProp_Names_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActorAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync, nullptr, "LoadObjectsAsync", nullptr, nullptr, Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::glTFRuntimeOBJAssetActorAsync_eventLoadObjectsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::glTFRuntimeOBJAssetActorAsync_eventLoadObjectsAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics
	{
		struct glTFRuntimeOBJAssetActorAsync_eventLoadStaticMeshAsync_Parms
		{
			bool bValid;
			FglTFRuntimeMeshLOD RuntimeLOD;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[];
#endif
		static void NewProp_bValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_bValid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_bValid_SetBit(void* Obj)
	{
		((glTFRuntimeOBJAssetActorAsync_eventLoadStaticMeshAsync_Parms*)Obj)->bValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(glTFRuntimeOBJAssetActorAsync_eventLoadStaticMeshAsync_Parms), &Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_bValid_MetaData), Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_bValid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_RuntimeLOD_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_RuntimeLOD = { "RuntimeLOD", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeOBJAssetActorAsync_eventLoadStaticMeshAsync_Parms, RuntimeLOD), Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_RuntimeLOD_MetaData), Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_RuntimeLOD_MetaData) }; // 1968242049
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_bValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::NewProp_RuntimeLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActorAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync, nullptr, "LoadStaticMeshAsync", nullptr, nullptr, Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::glTFRuntimeOBJAssetActorAsync_eventLoadStaticMeshAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::glTFRuntimeOBJAssetActorAsync_eventLoadStaticMeshAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnScenesLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnScenesLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime|OBJ" },
		{ "DisplayName", "On Scenes Loaded" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActorAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnScenesLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync, nullptr, "ReceiveOnScenesLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnScenesLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnScenesLoaded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnScenesLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnScenesLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(glTFRuntimeOBJAssetActorAsync_eventReceiveOnStaticMeshComponentCreated_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::NewProp_StaticMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "glTFRuntime|OBJ" },
		{ "DisplayName", "On StaticMeshComponent Created" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActorAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync, nullptr, "ReceiveOnStaticMeshComponentCreated", nullptr, nullptr, Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers), sizeof(glTFRuntimeOBJAssetActorAsync_eventReceiveOnStaticMeshComponentCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::PropPointers) < 2048);
	static_assert(sizeof(glTFRuntimeOBJAssetActorAsync_eventReceiveOnStaticMeshComponentCreated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AglTFRuntimeOBJAssetActorAsync);
	UClass* Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_NoRegister()
	{
		return AglTFRuntimeOBJAssetActorAsync::StaticClass();
	}
	struct Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics
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
	UObject* (*const Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntimeOBJ,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadObjectsAsync, "LoadObjectsAsync" }, // 3512754643
		{ &Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_LoadStaticMeshAsync, "LoadStaticMeshAsync" }, // 878206954
		{ &Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnScenesLoaded, "ReceiveOnScenesLoaded" }, // 433597192
		{ &Z_Construct_UFunction_AglTFRuntimeOBJAssetActorAsync_ReceiveOnStaticMeshComponentCreated, "ReceiveOnStaticMeshComponentCreated" }, // 2603302567
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "glTFRuntimeOBJAssetActorAsync.h" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActorAsync.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "glTFRuntime|OBJ" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActorAsync.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeOBJAssetActorAsync, Asset), Z_Construct_UClass_UglTFRuntimeAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_Asset_MetaData), Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_Asset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_StaticMeshConfig_MetaData[] = {
		{ "Category", "glTFRuntime|OBJ" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActorAsync.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_StaticMeshConfig = { "StaticMeshConfig", nullptr, (EPropertyFlags)0x0011008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeOBJAssetActorAsync, StaticMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_StaticMeshConfig_MetaData), Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_StaticMeshConfig_MetaData) }; // 3636186698
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_AssetRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "glTFRuntime|OBJ" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/glTFRuntimeOBJAssetActorAsync.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_AssetRoot = { "AssetRoot", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AglTFRuntimeOBJAssetActorAsync, AssetRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_AssetRoot_MetaData), Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_AssetRoot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_StaticMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::NewProp_AssetRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AglTFRuntimeOBJAssetActorAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::ClassParams = {
		&AglTFRuntimeOBJAssetActorAsync::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync()
	{
		if (!Z_Registration_Info_UClass_AglTFRuntimeOBJAssetActorAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AglTFRuntimeOBJAssetActorAsync.OuterSingleton, Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AglTFRuntimeOBJAssetActorAsync.OuterSingleton;
	}
	template<> GLTFRUNTIMEOBJ_API UClass* StaticClass<AglTFRuntimeOBJAssetActorAsync>()
	{
		return AglTFRuntimeOBJAssetActorAsync::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AglTFRuntimeOBJAssetActorAsync);
	AglTFRuntimeOBJAssetActorAsync::~AglTFRuntimeOBJAssetActorAsync() {}
	struct Z_CompiledInDeferFile_FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActorAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActorAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AglTFRuntimeOBJAssetActorAsync, AglTFRuntimeOBJAssetActorAsync::StaticClass, TEXT("AglTFRuntimeOBJAssetActorAsync"), &Z_Registration_Info_UClass_AglTFRuntimeOBJAssetActorAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AglTFRuntimeOBJAssetActorAsync), 2983229816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActorAsync_h_1810371400(TEXT("/Script/glTFRuntimeOBJ"),
		Z_CompiledInDeferFile_FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActorAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActorAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
