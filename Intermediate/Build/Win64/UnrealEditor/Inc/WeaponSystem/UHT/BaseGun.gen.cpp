// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/Actor/BaseGun.h"
#include "Engine/Classes/Engine/DamageEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGun() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_ABaseGun();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_ABaseGun_NoRegister();
	WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EWeaponType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
	static UEnum* EWeaponType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystem_EWeaponType, Z_Construct_UPackage__Script_WeaponSystem(), TEXT("EWeaponType"));
		}
		return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
	}
	template<> WEAPONSYSTEM_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	struct Z_Construct_UEnum_WeaponSystem_EWeaponType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeaponSystem_EWeaponType_Statics::Enumerators[] = {
		{ "EWeaponType::Primary", (int64)EWeaponType::Primary },
		{ "EWeaponType::Secondary", (int64)EWeaponType::Secondary },
		{ "EWeaponType::Melee", (int64)EWeaponType::Melee },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeaponSystem_EWeaponType_Statics::Enum_MetaDataParams[] = {
		{ "Melee.Name", "EWeaponType::Melee" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
		{ "Primary.Name", "EWeaponType::Primary" },
		{ "Secondary.Name", "EWeaponType::Secondary" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystem_EWeaponType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem,
		nullptr,
		"EWeaponType",
		"EWeaponType",
		Z_Construct_UEnum_WeaponSystem_EWeaponType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EWeaponType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeaponSystem_EWeaponType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EWeaponType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeaponSystem_EWeaponType()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_WeaponSystem_EWeaponType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
	}
	DEFINE_FUNCTION(ABaseGun::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	struct BaseGun_eventBP_FireFeedback_Parms
	{
		bool IsReloading;
		bool IsPrimaryShoot;
	};
	static FName NAME_ABaseGun_BP_FireFeedback = FName(TEXT("BP_FireFeedback"));
	void ABaseGun::BP_FireFeedback(bool IsReloading, bool IsPrimaryShoot)
	{
		BaseGun_eventBP_FireFeedback_Parms Parms;
		Parms.IsReloading=IsReloading ? true : false;
		Parms.IsPrimaryShoot=IsPrimaryShoot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseGun_BP_FireFeedback),&Parms);
	}
	void ABaseGun::StaticRegisterNativesABaseGun()
	{
		UClass* Class = ABaseGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reload", &ABaseGun::execReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics
	{
		static void NewProp_IsReloading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsReloading;
		static void NewProp_IsPrimaryShoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPrimaryShoot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::NewProp_IsReloading_SetBit(void* Obj)
	{
		((BaseGun_eventBP_FireFeedback_Parms*)Obj)->IsReloading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::NewProp_IsReloading = { "IsReloading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseGun_eventBP_FireFeedback_Parms), &Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::NewProp_IsReloading_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::NewProp_IsPrimaryShoot_SetBit(void* Obj)
	{
		((BaseGun_eventBP_FireFeedback_Parms*)Obj)->IsPrimaryShoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::NewProp_IsPrimaryShoot = { "IsPrimaryShoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseGun_eventBP_FireFeedback_Parms), &Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::NewProp_IsPrimaryShoot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::NewProp_IsReloading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::NewProp_IsPrimaryShoot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGun, nullptr, "BP_FireFeedback", nullptr, nullptr, sizeof(BaseGun_eventBP_FireFeedback_Parms), Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGun_BP_FireFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseGun_BP_FireFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseGun_Reload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseGun_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseGun_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseGun, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseGun_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseGun_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseGun_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseGun_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGun);
	UClass* Z_Construct_UClass_ABaseGun_NoRegister()
	{
		return ABaseGun::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBulletDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBulletDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagazineCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MagazineCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBulletInMagazine_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentBulletInMagazine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOneHanded_MetaData[];
#endif
		static void NewProp_bIsOneHanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneHanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GunName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointDamageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointDamageEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseGun_BP_FireFeedback, "BP_FireFeedback" }, // 1576635587
		{ &Z_Construct_UFunction_ABaseGun_Reload, "Reload" }, // 2301397680
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/BaseGun.h" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Skeletal Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGun, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "GunDetails" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGun, Damage), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_MaxBulletDistance_MetaData[] = {
		{ "Category", "GunDetails" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_MaxBulletDistance = { "MaxBulletDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGun, MaxBulletDistance), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_MaxBulletDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_MaxBulletDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "GunDetails" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGun, FireRate), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_MagazineCapacity_MetaData[] = {
		{ "Category", "GunDetails" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_MagazineCapacity = { "MagazineCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGun, MagazineCapacity), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_MagazineCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_MagazineCapacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_CurrentBulletInMagazine_MetaData[] = {
		{ "Category", "GunDetails" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_CurrentBulletInMagazine = { "CurrentBulletInMagazine", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGun, CurrentBulletInMagazine), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_CurrentBulletInMagazine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_CurrentBulletInMagazine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_bIsOneHanded_MetaData[] = {
		{ "Category", "GunDetails" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	void Z_Construct_UClass_ABaseGun_Statics::NewProp_bIsOneHanded_SetBit(void* Obj)
	{
		((ABaseGun*)Obj)->bIsOneHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_bIsOneHanded = { "bIsOneHanded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABaseGun), &Z_Construct_UClass_ABaseGun_Statics::NewProp_bIsOneHanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_bIsOneHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_bIsOneHanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_GunName_MetaData[] = {
		{ "Category", "GunDetails" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_GunName = { "GunName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGun, GunName), METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_GunName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_GunName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "GunDetails" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGun, WeaponType), Z_Construct_UEnum_WeaponSystem_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_WeaponType_MetaData)) }; // 971955003
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_PointDamageEvent_MetaData[] = {
		{ "Category", "GunDetails" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_PointDamageEvent = { "PointDamageEvent", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGun, PointDamageEvent), Z_Construct_UScriptStruct_FPointDamageEvent, METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_PointDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_PointDamageEvent_MetaData)) }; // 4197865239
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGun_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "GunDetails" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/BaseGun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGun_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGun, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::NewProp_AudioComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_MaxBulletDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_MagazineCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_CurrentBulletInMagazine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_bIsOneHanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_GunName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_WeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_WeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_PointDamageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGun_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGun_Statics::ClassParams = {
		&ABaseGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGun()
	{
		if (!Z_Registration_Info_UClass_ABaseGun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGun.OuterSingleton, Z_Construct_UClass_ABaseGun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseGun.OuterSingleton;
	}
	template<> WEAPONSYSTEM_API UClass* StaticClass<ABaseGun>()
	{
		return ABaseGun::StaticClass();
	}

	void ABaseGun::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Damage(TEXT("Damage"));

		const bool bIsValid = true
			&& Name_Damage == ClassReps[(int32)ENetFields_Private::Damage].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABaseGun"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGun);
	ABaseGun::~ABaseGun() {}
	struct Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_Statics::EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 971955003U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGun, ABaseGun::StaticClass, TEXT("ABaseGun"), &Z_Registration_Info_UClass_ABaseGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGun), 1302917329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_32109065(TEXT("/Script/WeaponSystem"),
		Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Actor_BaseGun_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
