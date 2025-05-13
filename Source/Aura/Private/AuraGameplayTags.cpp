// Copyright SleepySoldier


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

// delcare static variables
FAuraGameplayTags FAuraGameplayTags::GameplayTags;

// declare GameplayTags to be accessbile from source.
void FAuraGameplayTags::InititalizeNativeGameplayTags()
{
	/* Vital Attribute Tags */
	GameplayTags.Attributes_Vital_Health = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Vital.Health"), 
		FString("Current amount of available Health."));

	GameplayTags.Attributes_Vital_Mana = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Vital.Mana"), 
		FString("Current amount of available Mana"));

	/* Primary Attribute Tags */
	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Strength"), 
		FString("Increase damage of melee attacks."));

	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Intelligence"), 
		FString("Increase damage of magical attacks, also increase MaxMana"));

	GameplayTags.Attributes_Primary_Resilliance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Resilliance"), 
		FString("Improve damage resistance. Increase Armor and Armor Penetration."));

	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Vigor"), 
		FString("Increase Max HP."));


	/* Secondary Attribute Tags */
	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.Armor"), 
		FString("Reduces damage taken, also Improves block chance"));

	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.ArmorPenetration"), 
		FString("Reduce damage negated by enemy, also Improves Critical Hit Chance."));

	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.BlockChance"), 
		FString("Chance to recieve less damage."));

	GameplayTags.Attributes_Secondary_CriticalHitChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.CriticalHitChance"), 
		FString("Odds to inflict  additional damage."));

	GameplayTags.Attributes_Secondary_CriticalHitDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.CriticalHitDamage"), 
		FString("Increases damage dealt when dealing a critical hit."));

	GameplayTags.Attributes_Secondary_CriticalHitResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.CriticalHitResistance"), 
		FString("Reduces chance to recieve a critical hit."));

	GameplayTags.Attributes_Secondary_HealthRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.HealthRegeneration"), 
FString("Rate at which Health regenerates over time."));

	GameplayTags.Attributes_Secondary_ManaRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.ManaRegeneration"), 
		FString("Rate at which Mana regenerates over time."));

	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.MaxHealth"), 
		FString("Increase max available Hit Points."));

	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.MaxMana"), 
		FString("Increase max available Mana."));

}
