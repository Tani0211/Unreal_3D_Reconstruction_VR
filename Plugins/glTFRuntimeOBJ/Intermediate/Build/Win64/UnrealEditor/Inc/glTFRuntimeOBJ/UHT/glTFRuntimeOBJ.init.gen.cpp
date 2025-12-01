// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFRuntimeOBJ_init() {}
	GLTFRUNTIMEOBJ_API UFunction* Z_Construct_UDelegateFunction_glTFRuntimeOBJ_glTFRuntimeOBJObjectNamesAsync__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_glTFRuntimeOBJ;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_glTFRuntimeOBJ()
	{
		if (!Z_Registration_Info_UPackage__Script_glTFRuntimeOBJ.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_glTFRuntimeOBJ_glTFRuntimeOBJObjectNamesAsync__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/glTFRuntimeOBJ",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6B616AED,
				0xF7C2A36F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_glTFRuntimeOBJ.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_glTFRuntimeOBJ.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_glTFRuntimeOBJ(Z_Construct_UPackage__Script_glTFRuntimeOBJ, TEXT("/Script/glTFRuntimeOBJ"), Z_Registration_Info_UPackage__Script_glTFRuntimeOBJ, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6B616AED, 0xF7C2A36F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
