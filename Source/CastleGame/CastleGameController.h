// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "InventoryItem.h"
#include "GameFramework/PlayerController.h"
#include "CastleGameController.generated.h"

/**
 * 
 */
UCLASS()
class CASTLEGAME_API ACastleGameController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ACastleGameController();

	UFUNCTION(BlueprintImplementableEvent)
	void ReloadInventory();

	UFUNCTION(BlueprintCallable, Category = "Utils")
	bool AddItemToInventoryByID(FName ID);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class AInteractable* CurrentInteractable;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FInventoryItem> Inventory;

protected:
	void Interact();

	virtual void SetupInputComponent() override;
};
