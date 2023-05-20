// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actor/BaseGrenade.h"
#include "Actor/BaseGun.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "WeaponComponent.generated.h"



// USTRUCT(BlueprintType)
// struct FBaseWeaponStruct: public FTableRowBase
// {
// 	GENERATED_BODY()
// 	
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	FName Name;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	FText Description;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	TObjectPtr<ABaseGun> Gun;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	EWeaponType WeaponType;
// 	
//
// 	void operator =(const FBaseWeaponStruct& FWS2)
// 	{
// 		this->Name = FWS2.Name;
// 		this->Description = FWS2.Description;
// 		this->Gun = FWS2.Gun;
// 	}
//
// };

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipWeaponDelegate, ABaseGun*, Weapon);
DECLARE_DELEGATE_RetVal_TwoParams(bool, FShootLineTraceDelegate, float /*Interaction distance*/, FHitResult& /*Result*/)
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReloadNeededDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReloadDelegate, bool, bIsOneHanded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNoMoreGrenadeDelegate);
DECLARE_DELEGATE_RetVal_OneParam(bool, FOnThrowGrenadeDelegate, UChildActorComponent*/*Grenade*/);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEM_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

//ATTRIBUTES:
public:
	// Sets default values for this component's properties
	UWeaponComponent();

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ABaseGun* EquippedWeapon = {};
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ABaseGun* PrimaryWeapon = {};
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ABaseGun* SecondaryWeapon = {};
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ABaseGun* MeleeWeapon = {};

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ABaseGrenade* EquippedGrenade;

	//Replicated attributes : 
	UPROPERTY(Replicated, BlueprintReadWrite,EditAnywhere, Category="Grenade")
	int32 MaxGrenadeAmount = 5;

	UPROPERTY(Replicated, BlueprintReadWrite,EditAnywhere, Category="Grenade")
	int32 CurrentGrenadeAmount;

	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere, Category="Weapon")
	bool isGunEquipped = false;
	
	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere, Category="Grenade")
	bool isGrenadeEquipped = false;

//FUNCTIONS :
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;


public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	/**Equip weapon passed in parameter*/
	UFUNCTION(BlueprintCallable)
	void EquipWeapon(ABaseGun* Weapon);

	/**Set the weapon passed as parameter as the primary, secondary or melee weapon of the character. Return the weapon replaced if any*/
	UFUNCTION(BlueprintCallable)
	ABaseGun* AddWeapon(ABaseGun* Weapon);

	UFUNCTION(BlueprintCallable)
	bool Shoot();

	UFUNCTION(BlueprintCallable)
	void Reload();

	UFUNCTION(Server, Reliable)
	void Server_CharacterThrowGrenade(UChildActorComponent* GrenadeRef);
	
	UFUNCTION(BlueprintCallable)
	bool ThrowGrenade(UChildActorComponent* GrenadeREF);

//DECLARE DELEGATES HERE :
protected:

	UPROPERTY(BlueprintAssignable, Category="Weapon")
	FOnEquipWeaponDelegate OnEquipWeapon;
	
	UPROPERTY(BlueprintAssignable, Category="Weapon")
	FOnReloadNeededDelegate OnReloadNeeded;

	UPROPERTY(BlueprintAssignable, Category="Weapon")
	FOnReloadDelegate OnReload;
	
	UPROPERTY(BlueprintAssignable, Category="Grenade")
	FOnNoMoreGrenadeDelegate OnNoMoreGrenade;
	
	FOnThrowGrenadeDelegate OnThrowGrenade;
	
	FShootLineTraceDelegate ShootLineTraceDelegate;
	
public :
	void SetShootLineSweepDelegate(FShootLineTraceDelegate Delegate)
	{
		ShootLineTraceDelegate = Delegate;
	}

	void SetOnThrowGrenadeDelegate(FOnThrowGrenadeDelegate Delegate)
	{
		OnThrowGrenade = Delegate;
	}
};
