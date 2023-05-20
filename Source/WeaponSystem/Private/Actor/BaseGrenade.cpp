// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/BaseGrenade.h"

#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"


// Called when the game starts or when spawned
void ABaseGrenade::BeginPlay()
{
	Super::BeginPlay();

	RadialDamageEvent.Params = RadialDamageParams;
	State = EBaseGrenadeState::Ready;
	SphereComponentGrenadeRange->SetCollisionProfileName(TEXT("Trigger"));
	SphereComponentGrenadeRange->SetGenerateOverlapEvents(true);
	SphereComponentGrenadeRange->SetSphereRadius(RadialDamageEvent.Params.OuterRadius);	
}

void ABaseGrenade::OnRep_State() const
{
	OnExploded.Broadcast();
}

// Sets default values
ABaseGrenade::ABaseGrenade()
{
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));

	SphereComponent->SetupAttachment(RootComponent);
	StaticMeshComponent->SetupAttachment(SphereComponent);

	SphereComponentGrenadeRange = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponentGrenadeRange"));
	SphereComponentGrenadeRange->SetupAttachment(SphereComponent);
}

void ABaseGrenade::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABaseGrenade, State);
}

void ABaseGrenade::OnExplode()
{
	if(!ensureMsgf(GrenadeExplosionDelegate.IsBound(), TEXT("Delegate was not bound. Don't forget to call SetGrenadeExplosionDelegate()")))
		return;

	if(GrenadeExplosionDelegate.Execute(SphereComponentGrenadeRange, RadialDamageEvent, State, this))
	{
		OnRep_State();
	}
}


