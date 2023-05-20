// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/Component/WeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_ABaseGrenade_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_ABaseGun_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponComponent();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
	WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature();
	WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnNoMoreGrenadeDelegate__DelegateSignature();
	WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature();
	WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadNeededDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystem_eventOnEquipWeaponDelegate_Parms
		{
			ABaseGun* Weapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WeaponSystem_eventOnEquipWeaponDelegate_Parms, Weapon), Z_Construct_UClass_ABaseGun_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// USTRUCT(BlueprintType)\n// struct FBaseWeaponStruct: public FTableRowBase\n// {\n// \x09GENERATED_BODY()\n// \x09\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n// \x09""FName Name;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n// \x09""FText Description;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n// \x09TObjectPtr<ABaseGun> Gun;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n// \x09""EWeaponType WeaponType;\n// \x09\n//\n// \x09void operator =(const FBaseWeaponStruct& FWS2)\n// \x09{\n// \x09\x09this->Name = FWS2.Name;\n// \x09\x09this->Description = FWS2.Description;\n// \x09\x09this->Gun = FWS2.Gun;\n// \x09}\n//\n// };\n" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FBaseWeaponStruct: public FTableRowBase\n{\n      GENERATED_BODY()\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite)\n      FName Name;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite)\n      FText Description;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite)\n      TObjectPtr<ABaseGun> Gun;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite)\n      EWeaponType WeaponType;\n\n\n      void operator =(const FBaseWeaponStruct& FWS2)\n      {\n              this->Name = FWS2.Name;\n              this->Description = FWS2.Description;\n              this->Gun = FWS2.Gun;\n      }\n\n};" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnEquipWeaponDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics::_Script_WeaponSystem_eventOnEquipWeaponDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystem_OnReloadNeededDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystem_OnReloadNeededDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnReloadNeededDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnReloadNeededDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadNeededDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadNeededDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadNeededDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnReloadNeededDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics
	{
		struct _Script_WeaponSystem_eventOnReloadDelegate_Parms
		{
			bool bIsOneHanded;
		};
		static void NewProp_bIsOneHanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneHanded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::NewProp_bIsOneHanded_SetBit(void* Obj)
	{
		((_Script_WeaponSystem_eventOnReloadDelegate_Parms*)Obj)->bIsOneHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::NewProp_bIsOneHanded = { "bIsOneHanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_WeaponSystem_eventOnReloadDelegate_Parms), &Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::NewProp_bIsOneHanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::NewProp_bIsOneHanded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnReloadDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::_Script_WeaponSystem_eventOnReloadDelegate_Parms), Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_WeaponSystem_OnNoMoreGrenadeDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeaponSystem_OnNoMoreGrenadeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnNoMoreGrenadeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnNoMoreGrenadeDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeaponSystem_OnNoMoreGrenadeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnNoMoreGrenadeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnNoMoreGrenadeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnNoMoreGrenadeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWeaponComponent::execThrowGrenade)
	{
		P_GET_OBJECT(UChildActorComponent,Z_Param_GrenadeREF);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ThrowGrenade(Z_Param_GrenadeREF);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponComponent::execServer_CharacterThrowGrenade)
	{
		P_GET_OBJECT(UChildActorComponent,Z_Param_GrenadeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_CharacterThrowGrenade_Implementation(Z_Param_GrenadeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponComponent::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponComponent::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Shoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponComponent::execAddWeapon)
	{
		P_GET_OBJECT(ABaseGun,Z_Param_Weapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABaseGun**)Z_Param__Result=P_THIS->AddWeapon(Z_Param_Weapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponComponent::execEquipWeapon)
	{
		P_GET_OBJECT(ABaseGun,Z_Param_Weapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipWeapon(Z_Param_Weapon);
		P_NATIVE_END;
	}
	struct WeaponComponent_eventServer_CharacterThrowGrenade_Parms
	{
		UChildActorComponent* GrenadeRef;
	};
	static FName NAME_UWeaponComponent_Server_CharacterThrowGrenade = FName(TEXT("Server_CharacterThrowGrenade"));
	void UWeaponComponent::Server_CharacterThrowGrenade(UChildActorComponent* GrenadeRef)
	{
		WeaponComponent_eventServer_CharacterThrowGrenade_Parms Parms;
		Parms.GrenadeRef=GrenadeRef;
		ProcessEvent(FindFunctionChecked(NAME_UWeaponComponent_Server_CharacterThrowGrenade),&Parms);
	}
	void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
	{
		UClass* Class = UWeaponComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWeapon", &UWeaponComponent::execAddWeapon },
			{ "EquipWeapon", &UWeaponComponent::execEquipWeapon },
			{ "Reload", &UWeaponComponent::execReload },
			{ "Server_CharacterThrowGrenade", &UWeaponComponent::execServer_CharacterThrowGrenade },
			{ "Shoot", &UWeaponComponent::execShoot },
			{ "ThrowGrenade", &UWeaponComponent::execThrowGrenade },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics
	{
		struct WeaponComponent_eventAddWeapon_Parms
		{
			ABaseGun* Weapon;
			ABaseGun* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponComponent_eventAddWeapon_Parms, Weapon), Z_Construct_UClass_ABaseGun_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponComponent_eventAddWeapon_Parms, ReturnValue), Z_Construct_UClass_ABaseGun_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**Set the weapon passed as parameter as the primary, secondary or melee weapon of the character. Return the weapon replaced if any*/" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
		{ "ToolTip", "Set the weapon passed as parameter as the primary, secondary or melee weapon of the character. Return the weapon replaced if any" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "AddWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::WeaponComponent_eventAddWeapon_Parms), Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_AddWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_AddWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics
	{
		struct WeaponComponent_eventEquipWeapon_Parms
		{
			ABaseGun* Weapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponComponent_eventEquipWeapon_Parms, Weapon), Z_Construct_UClass_ABaseGun_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**Equip weapon passed in parameter*/" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
		{ "ToolTip", "Equip weapon passed in parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "EquipWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::WeaponComponent_eventEquipWeapon_Parms), Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_EquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_EquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponComponent_Reload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::NewProp_GrenadeRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::NewProp_GrenadeRef = { "GrenadeRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponComponent_eventServer_CharacterThrowGrenade_Parms, GrenadeRef), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::NewProp_GrenadeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::NewProp_GrenadeRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::NewProp_GrenadeRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "Server_CharacterThrowGrenade", nullptr, nullptr, sizeof(WeaponComponent_eventServer_CharacterThrowGrenade_Parms), Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponComponent_Shoot_Statics
	{
		struct WeaponComponent_eventShoot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponComponent_eventShoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WeaponComponent_eventShoot_Parms), &Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "Shoot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::WeaponComponent_eventShoot_Parms), Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics
	{
		struct WeaponComponent_eventThrowGrenade_Parms
		{
			UChildActorComponent* GrenadeREF;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeREF_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeREF;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::NewProp_GrenadeREF_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::NewProp_GrenadeREF = { "GrenadeREF", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeaponComponent_eventThrowGrenade_Parms, GrenadeREF), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::NewProp_GrenadeREF_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::NewProp_GrenadeREF_MetaData)) };
	void Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponComponent_eventThrowGrenade_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WeaponComponent_eventThrowGrenade_Parms), &Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::NewProp_GrenadeREF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "ThrowGrenade", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::WeaponComponent_eventThrowGrenade_Parms), Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponComponent_ThrowGrenade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_ThrowGrenade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponComponent);
	UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
	{
		return UWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedGrenade_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedGrenade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGrenadeAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGrenadeAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGrenadeAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGrenadeAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isGunEquipped_MetaData[];
#endif
		static void NewProp_isGunEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isGunEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isGrenadeEquipped_MetaData[];
#endif
		static void NewProp_isGrenadeEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isGrenadeEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReloadNeeded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadNeeded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReload_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNoMoreGrenade_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNoMoreGrenade;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponComponent_AddWeapon, "AddWeapon" }, // 1311568949
		{ &Z_Construct_UFunction_UWeaponComponent_EquipWeapon, "EquipWeapon" }, // 2751356827
		{ &Z_Construct_UFunction_UWeaponComponent_Reload, "Reload" }, // 1628727794
		{ &Z_Construct_UFunction_UWeaponComponent_Server_CharacterThrowGrenade, "Server_CharacterThrowGrenade" }, // 13304081
		{ &Z_Construct_UFunction_UWeaponComponent_Shoot, "Shoot" }, // 2158748263
		{ &Z_Construct_UFunction_UWeaponComponent_ThrowGrenade, "ThrowGrenade" }, // 1775892419
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/WeaponComponent.h" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, EquippedWeapon), Z_Construct_UClass_ABaseGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PrimaryWeapon_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PrimaryWeapon = { "PrimaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, PrimaryWeapon), Z_Construct_UClass_ABaseGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PrimaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PrimaryWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_SecondaryWeapon_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_SecondaryWeapon = { "SecondaryWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, SecondaryWeapon), Z_Construct_UClass_ABaseGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_SecondaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_SecondaryWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_MeleeWeapon_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_MeleeWeapon = { "MeleeWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, MeleeWeapon), Z_Construct_UClass_ABaseGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_MeleeWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_MeleeWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippedGrenade_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippedGrenade = { "EquippedGrenade", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, EquippedGrenade), Z_Construct_UClass_ABaseGrenade_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippedGrenade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippedGrenade_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_MaxGrenadeAmount_MetaData[] = {
		{ "Category", "Grenade" },
		{ "Comment", "//Replicated attributes : \n" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
		{ "ToolTip", "Replicated attributes :" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_MaxGrenadeAmount = { "MaxGrenadeAmount", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, MaxGrenadeAmount), METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_MaxGrenadeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_MaxGrenadeAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentGrenadeAmount_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentGrenadeAmount = { "CurrentGrenadeAmount", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, CurrentGrenadeAmount), METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentGrenadeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentGrenadeAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGunEquipped_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGunEquipped_SetBit(void* Obj)
	{
		((UWeaponComponent*)Obj)->isGunEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGunEquipped = { "isGunEquipped", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWeaponComponent), &Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGunEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGunEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGunEquipped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGrenadeEquipped_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGrenadeEquipped_SetBit(void* Obj)
	{
		((UWeaponComponent*)Obj)->isGrenadeEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGrenadeEquipped = { "isGrenadeEquipped", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWeaponComponent), &Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGrenadeEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGrenadeEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGrenadeEquipped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnEquipWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnEquipWeapon = { "OnEquipWeapon", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, OnEquipWeapon), Z_Construct_UDelegateFunction_WeaponSystem_OnEquipWeaponDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnEquipWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnEquipWeapon_MetaData)) }; // 3053904149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnReloadNeeded_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnReloadNeeded = { "OnReloadNeeded", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, OnReloadNeeded), Z_Construct_UDelegateFunction_WeaponSystem_OnReloadNeededDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnReloadNeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnReloadNeeded_MetaData)) }; // 225780987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnReload_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnReload = { "OnReload", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, OnReload), Z_Construct_UDelegateFunction_WeaponSystem_OnReloadDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnReload_MetaData)) }; // 2376144221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnNoMoreGrenade_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "Public/Component/WeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnNoMoreGrenade = { "OnNoMoreGrenade", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeaponComponent, OnNoMoreGrenade), Z_Construct_UDelegateFunction_WeaponSystem_OnNoMoreGrenadeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnNoMoreGrenade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnNoMoreGrenade_MetaData)) }; // 1990372467
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_PrimaryWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_SecondaryWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_MeleeWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_EquippedGrenade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_MaxGrenadeAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentGrenadeAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGunEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_isGrenadeEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnEquipWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnReloadNeeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnNoMoreGrenade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponent_Statics::ClassParams = {
		&UWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponComponent()
	{
		if (!Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton, Z_Construct_UClass_UWeaponComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton;
	}
	template<> WEAPONSYSTEM_API UClass* StaticClass<UWeaponComponent>()
	{
		return UWeaponComponent::StaticClass();
	}

	void UWeaponComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquippedWeapon(TEXT("EquippedWeapon"));
		static const FName Name_EquippedGrenade(TEXT("EquippedGrenade"));
		static const FName Name_MaxGrenadeAmount(TEXT("MaxGrenadeAmount"));
		static const FName Name_CurrentGrenadeAmount(TEXT("CurrentGrenadeAmount"));
		static const FName Name_isGunEquipped(TEXT("isGunEquipped"));
		static const FName Name_isGrenadeEquipped(TEXT("isGrenadeEquipped"));

		const bool bIsValid = true
			&& Name_EquippedWeapon == ClassReps[(int32)ENetFields_Private::EquippedWeapon].Property->GetFName()
			&& Name_EquippedGrenade == ClassReps[(int32)ENetFields_Private::EquippedGrenade].Property->GetFName()
			&& Name_MaxGrenadeAmount == ClassReps[(int32)ENetFields_Private::MaxGrenadeAmount].Property->GetFName()
			&& Name_CurrentGrenadeAmount == ClassReps[(int32)ENetFields_Private::CurrentGrenadeAmount].Property->GetFName()
			&& Name_isGunEquipped == ClassReps[(int32)ENetFields_Private::isGunEquipped].Property->GetFName()
			&& Name_isGrenadeEquipped == ClassReps[(int32)ENetFields_Private::isGrenadeEquipped].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWeaponComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
	UWeaponComponent::~UWeaponComponent() {}
	struct Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponComponent, UWeaponComponent::StaticClass, TEXT("UWeaponComponent"), &Z_Registration_Info_UClass_UWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponent), 3220604367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_3158647582(TEXT("/Script/WeaponSystem"),
		Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
