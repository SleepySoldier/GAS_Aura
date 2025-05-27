// Copyright SleepySoldier

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "UI/WidgetController/AuraOverlayWidgetController.h"
#include "AbilitySystem/Data/CharacterClassInfo.h"
#include "AuraEnemy.generated.h"

class UWidgetComponent;
/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	
	AAuraEnemy();
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	
	/* Combat Interface*/
	virtual int32 GetPlayerLevel() override;
	virtual void Die() override;

	/* EndCombatInterface*/

	UPROPERTY(BlueprintAssignable)	
	FOnAttributeChangedSignature OnHealthChanged;
	UPROPERTY(BlueprintAssignable)	
	FOnAttributeChangedSignature OnMaxHealthChanged;

	void HitReactTagChanged(const FGameplayTag CallbackTag, int32 NewCount);

	UPROPERTY(BlueprintReadOnly, Category = "Combat")
	bool bHitReacting = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	float BaseWalkSpeed = 300.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	float LifeSpan = 5; 
protected:

	virtual void BeginPlay() override;

	/*Debug*/
	UPROPERTY(BlueprintReadOnly)
	bool bHighlighted = false;
	/*Debug*/

	virtual void InitAbilityActorInfo() override;
	virtual void InitializeDefaultAttributes() const override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	int32 Level = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	ECharacterClass CharacterClass = ECharacterClass::Warrior;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UWidgetComponent> HealthBar;


private:


};
