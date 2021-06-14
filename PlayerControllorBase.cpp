// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllorBase.h"

void APlayerControllorBase::SetPlayerEnabledState(bool SetPlayerEnabled)
{
    if (SetPlayerEnabled)
    {
        GetPawn()->EnableInput(this);
    }
    else
    {
        GetPawn()->DisableInput(this);
    }
    bShowMouseCursor = SetPlayerEnabled;
}
