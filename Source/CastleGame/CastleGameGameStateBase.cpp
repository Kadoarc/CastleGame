// Fill out your copyright notice in the Description page of Project Settings.


#include "CastleGameGameStateBase.h"

ACastleGameGameStateBase::ACastleGameGameStateBase()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> BP_ItemDB(TEXT("DataTable'/Game/Data/ItemDB.ItemDB'"));
	ItemDB = BP_ItemDB.Object;
}

UDataTable* ACastleGameGameStateBase::GetItemDB() const
{
	return ItemDB;
}