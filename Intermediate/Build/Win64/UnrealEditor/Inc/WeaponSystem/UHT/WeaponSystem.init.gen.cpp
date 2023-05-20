// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSystem_init() {}
	WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature();
	WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnExploded__DelegateSignature();
	WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnNoMoreGrenadeDelegate__DelegateSignature();
	WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature();
	WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadNeededDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WeaponSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WeaponSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_WeaponSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystem_OnExploded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystem_OnNoMoreGrenadeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WeaponSystem_OnReloadNeededDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WeaponSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0AF2E4C1,
				0xFA47DC47,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WeaponSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WeaponSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WeaponSystem(Z_Construct_UPackage__Script_WeaponSystem, TEXT("/Script/WeaponSystem"), Z_Registration_Info_UPackage__Script_WeaponSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0AF2E4C1, 0xFA47DC47));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
