// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "glTFRuntimeOBJAssetActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef GLTFRUNTIMEOBJ_glTFRuntimeOBJAssetActor_generated_h
#error "glTFRuntimeOBJAssetActor.generated.h already included, missing '#pragma once' in glTFRuntimeOBJAssetActor.h"
#endif
#define GLTFRUNTIMEOBJ_glTFRuntimeOBJAssetActor_generated_h

#define FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_SPARSE_DATA
#define FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveOnScenesLoaded_Implementation(); \
	virtual void ReceiveOnStaticMeshComponentCreated_Implementation(UStaticMeshComponent* StaticMeshComponent); \
 \
	DECLARE_FUNCTION(execReceiveOnScenesLoaded); \
	DECLARE_FUNCTION(execReceiveOnStaticMeshComponentCreated);


#define FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_ACCESSORS
#define FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_CALLBACK_WRAPPERS
#define FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAglTFRuntimeOBJAssetActor(); \
	friend struct Z_Construct_UClass_AglTFRuntimeOBJAssetActor_Statics; \
public: \
	DECLARE_CLASS(AglTFRuntimeOBJAssetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/glTFRuntimeOBJ"), NO_API) \
	DECLARE_SERIALIZER(AglTFRuntimeOBJAssetActor)


#define FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AglTFRuntimeOBJAssetActor(AglTFRuntimeOBJAssetActor&&); \
	NO_API AglTFRuntimeOBJAssetActor(const AglTFRuntimeOBJAssetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AglTFRuntimeOBJAssetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AglTFRuntimeOBJAssetActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AglTFRuntimeOBJAssetActor) \
	NO_API virtual ~AglTFRuntimeOBJAssetActor();


#define FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_10_PROLOG
#define FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_SPARSE_DATA \
	FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_ACCESSORS \
	FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_CALLBACK_WRAPPERS \
	FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLTFRUNTIMEOBJ_API UClass* StaticClass<class AglTFRuntimeOBJAssetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_MyProject_ArtGallTry1_Plugins_glTFRuntimeOBJ_Source_glTFRuntimeOBJ_Public_glTFRuntimeOBJAssetActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
