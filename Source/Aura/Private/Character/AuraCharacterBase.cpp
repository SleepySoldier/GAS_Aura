// Copyright SleepySoldier.


#include "Character/AuraCharacterBase.h"
#include "AbilitySystemComponent.h"

AAuraCharacterBase::AAuraCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	GetMesh()->SetWorldLocationAndRotation(FVector(0.f,0.f, -90.f), FRotator(0.f,-90.f, 0.f));
}

UAbilitySystemComponent* AAuraCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAuraCharacterBase::InitAbilityActorInfo()
{
}

void AAuraCharacterBase::InitializePrimaryAttributes() const 
{
	check(IsValid(GetAbilitySystemComponent()));
	check(DefaultPrimaryAttribute);
	const FGameplayEffectContextHandle ECHandle = GetAbilitySystemComponent()->MakeEffectContext();
	const FGameplayEffectSpecHandle ESHandle = GetAbilitySystemComponent()->MakeOutgoingSpec(DefaultPrimaryAttribute, 1.f, ECHandle);
	GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*ESHandle.Data.Get(), GetAbilitySystemComponent());
}


