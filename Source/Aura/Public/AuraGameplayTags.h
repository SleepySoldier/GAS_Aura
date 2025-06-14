// Copyright SleepySoldier

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * AuraGameplayTags
 * 
 * Singleton containing native GameplayTags can always get with the Get() function.
 */
struct FAuraGameplayTags
{
public:
	//Static variables and functions can be declared without calling the header. Sounds similar to Function library.

	//Static getter to return this class.
	static const FAuraGameplayTags& Get() { return GameplayTags; }

	static void InititalizeNativeGameplayTags();
	/* Vital Attribute Tags */
	FGameplayTag Attributes_Vital_Health;
	FGameplayTag Attributes_Vital_Mana;

	/* Primary Attribute Tags */

	FGameplayTag Attributes_Primary_Strength;
	FGameplayTag Attributes_Primary_Intelligence;
	FGameplayTag Attributes_Primary_Resilience;
	FGameplayTag Attributes_Primary_Vigor;

	/* Secondary Attribute Tags */

	FGameplayTag Attributes_Secondary_Armor;
	FGameplayTag Attributes_Secondary_ArmorPenetration;
	FGameplayTag Attributes_Secondary_BlockChance;
	FGameplayTag Attributes_Secondary_CriticalHitChance;
	FGameplayTag Attributes_Secondary_CriticalHitDamage;
	FGameplayTag Attributes_Secondary_CriticalHitResistance;
	FGameplayTag Attributes_Secondary_HealthRegeneration;
	FGameplayTag Attributes_Secondary_ManaRegeneration;
	FGameplayTag Attributes_Secondary_MaxHealth;
	FGameplayTag Attributes_Secondary_MaxMana;


	/* Input Tags */
	FGameplayTag InputTag_LMB;
	FGameplayTag InputTag_RMB;
	FGameplayTag InputTag_1;
	FGameplayTag InputTag_2;
	FGameplayTag InputTag_3;
	FGameplayTag InputTag_4;


	FGameplayTag Damage;
	FGameplayTag Damage_Fire;

	TArray<FGameplayTag> DamageTypes;

	FGameplayTag Effects_HitReact;
	

protected:

private:



	static FAuraGameplayTags GameplayTags;

};
