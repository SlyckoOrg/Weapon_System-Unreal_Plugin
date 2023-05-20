// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/WeaponComponent.h"

#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UWeaponComponent, EquippedWeapon);
	DOREPLIFETIME(UWeaponComponent, EquippedGrenade);
	DOREPLIFETIME(UWeaponComponent, MaxGrenadeAmount);
	DOREPLIFETIME(UWeaponComponent, CurrentGrenadeAmount);
	DOREPLIFETIME(UWeaponComponent, isGunEquipped);
	DOREPLIFETIME(UWeaponComponent, isGrenadeEquipped);
	
}


// Called every frame
void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWeaponComponent::EquipWeapon(ABaseGun* Weapon)
{
	if(EquippedWeapon != nullptr)
		GetWorld()->DestroyActor(Cast<AActor>(EquippedWeapon));
	isGunEquipped = true;
	EquippedWeapon = Weapon;
	OnEquipWeapon.Broadcast(Weapon);
}

ABaseGun* UWeaponComponent::AddWeapon(ABaseGun* Weapon)
{
	ABaseGun* replacedWeapon = {};
	switch (Weapon->WeaponType)
	{
	case EWeaponType::Primary :
		replacedWeapon = PrimaryWeapon;
		PrimaryWeapon = Weapon;
		break;
	case EWeaponType::Secondary :
		replacedWeapon = SecondaryWeapon;
		SecondaryWeapon = Weapon;
		break;
	case EWeaponType::Melee :
		replacedWeapon = MeleeWeapon;
		MeleeWeapon = Weapon;
		break;
	}

	EquipWeapon(Weapon);

	return replacedWeapon;
}

bool UWeaponComponent::Shoot()
{
	FHitResult HitResult;
	//Handle null delegate error : 
	if(!ensureMsgf(ShootLineTraceDelegate.IsBound(), TEXT("Delegate was not bound. Don't forget to call SetShootLineSweepDelegate()")))
		return false;
	
	if(EquippedWeapon->CurrentBulletInMagazine == 0)
	{
		OnReloadNeeded.Broadcast();
		return false;
	}
	
	EquippedWeapon->CurrentBulletInMagazine--;
	if(ShootLineTraceDelegate.Execute(EquippedWeapon->MaxBulletDistance, HitResult))
	{
		return true;		
	}
	return false;
}

void UWeaponComponent::Reload()
{
	if(EquippedWeapon == nullptr) return;
	//magazine is already full :  
	if(EquippedWeapon->CurrentBulletInMagazine == EquippedWeapon->MagazineCapacity) return;
	EquippedWeapon->Reload();
	OnReload.Broadcast(EquippedWeapon->bIsOneHanded);
}

void UWeaponComponent::Server_CharacterThrowGrenade_Implementation(UChildActorComponent* GrenadeRef)
{
	if(OnThrowGrenade.Execute(GrenadeRef))
	{
		CurrentGrenadeAmount--;
	}
}

bool UWeaponComponent::ThrowGrenade(UChildActorComponent* GrenadeREF)
{
	if(GetOwner() == nullptr) return false;

	if(!ensureMsgf(OnThrowGrenade.IsBound(), TEXT("Delegate was not bound. Don't forget to call SetShootLineSweepDelegate()")))
		return false;

	if(CurrentGrenadeAmount <= 0)
	{
		OnNoMoreGrenade.Broadcast();
		return false;
	}

	if(!GetOwner()->HasAuthority())
	{
		//Server rpc :
		Server_CharacterThrowGrenade(GrenadeREF);
		return true;
	}
	else
	{
		if(OnThrowGrenade.Execute(GrenadeREF))
		{
			CurrentGrenadeAmount--;
			return true;		
		}
	}
	return false;
}

