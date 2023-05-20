// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/WeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseGun;
class UChildActorComponent;
#ifdef WEAPONSYSTEM_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define WEAPONSYSTEM_WeaponComponent_generated_h

#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_41_DELEGATE \
struct _Script_WeaponSystem_eventOnEquipWeaponDelegate_Parms \
{ \
	ABaseGun* Weapon; \
}; \
static inline void FOnEquipWeaponDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEquipWeaponDelegate, ABaseGun* Weapon) \
{ \
	_Script_WeaponSystem_eventOnEquipWeaponDelegate_Parms Parms; \
	Parms.Weapon=Weapon; \
	OnEquipWeaponDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_43_DELEGATE \
static inline void FOnReloadNeededDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnReloadNeededDelegate) \
{ \
	OnReloadNeededDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_44_DELEGATE \
struct _Script_WeaponSystem_eventOnReloadDelegate_Parms \
{ \
	bool bIsOneHanded; \
}; \
static inline void FOnReloadDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnReloadDelegate, bool bIsOneHanded) \
{ \
	_Script_WeaponSystem_eventOnReloadDelegate_Parms Parms; \
	Parms.bIsOneHanded=bIsOneHanded ? true : false; \
	OnReloadDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_45_DELEGATE \
static inline void FOnNoMoreGrenadeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNoMoreGrenadeDelegate) \
{ \
	OnNoMoreGrenadeDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_SPARSE_DATA
#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_RPC_WRAPPERS \
	virtual void Server_CharacterThrowGrenade_Implementation(UChildActorComponent* GrenadeRef); \
 \
	DECLARE_FUNCTION(execThrowGrenade); \
	DECLARE_FUNCTION(execServer_CharacterThrowGrenade); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execAddWeapon); \
	DECLARE_FUNCTION(execEquipWeapon);


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_CharacterThrowGrenade_Implementation(UChildActorComponent* GrenadeRef); \
 \
	DECLARE_FUNCTION(execThrowGrenade); \
	DECLARE_FUNCTION(execServer_CharacterThrowGrenade); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execAddWeapon); \
	DECLARE_FUNCTION(execEquipWeapon);


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_ACCESSORS
#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_CALLBACK_WRAPPERS
#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		EquippedGrenade, \
		MaxGrenadeAmount, \
		CurrentGrenadeAmount, \
		isGunEquipped, \
		isGrenadeEquipped, \
		NETFIELD_REP_END=isGrenadeEquipped	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		EquippedGrenade, \
		MaxGrenadeAmount, \
		CurrentGrenadeAmount, \
		isGunEquipped, \
		isGrenadeEquipped, \
		NETFIELD_REP_END=isGrenadeEquipped	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public: \
	NO_API virtual ~UWeaponComponent();


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponent) \
	NO_API virtual ~UWeaponComponent();


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_48_PROLOG
#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_SPARSE_DATA \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_RPC_WRAPPERS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_ACCESSORS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_CALLBACK_WRAPPERS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_INCLASS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_SPARSE_DATA \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_ACCESSORS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_CALLBACK_WRAPPERS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEM_API UClass* StaticClass<class UWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projet8inf916_Plugins_WeaponSystem_Source_WeaponSystem_Public_Component_WeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
