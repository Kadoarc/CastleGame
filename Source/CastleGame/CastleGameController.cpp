// Fill out your copyright notice in the Description page of Project Settings.


#include "CastleGameController.h"
#include "CastleGameCharacter.h"
#include "CastleGameGameStateBase.h"

ACastleGameController::ACastleGameController()
{

}

bool ACastleGameController::AddItemToInventoryByID(FName ID)
{
	ACastleGameGameStateBase* GameState = Cast< ACastleGameGameStateBase>(GetWorld()->GetGameState());
	UDataTable* ItemTable = GameState->GetItemDB();
	FInventoryItem* ItemToAdd = ItemTable->FindRow<FInventoryItem>(ID, "");

	if (ItemToAdd)
	{
		Inventory.Add(*ItemToAdd);
		ReloadInventory();
		return true;
	}
	return false;
}

void ACastleGameController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Interact", IE_Pressed, this, &ACastleGameController::Interact);
}

void ACastleGameController::Interact()
{
	if (CurrentInteractable)
	{
		CurrentInteractable->Interact(this);
	}
}