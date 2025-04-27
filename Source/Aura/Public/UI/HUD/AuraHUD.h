// Copyright SleepySoldier

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AuraHUD.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;
class UAuraOverlayWidgetController;
class UAuraUserWidget;

struct FWidgetControllerParams;
/**
 * 
 */
UCLASS()
class AURA_API AAuraHUD : public AHUD
{
	GENERATED_BODY()

public:


	UPROPERTY()
	TObjectPtr<UAuraUserWidget> OverlayWidget;

	UAuraOverlayWidgetController* GetAuraOverlayWidgetController(const FWidgetControllerParams& WidgetControllerParams);

	void InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS);


	
private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> OverlayWidgetClass;
	
	UPROPERTY()
	TObjectPtr<UAuraOverlayWidgetController> OverlayWidgetController;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAuraOverlayWidgetController> OverlayWidgetControllerClass;

	
};
