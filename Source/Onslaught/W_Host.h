// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "W_Host.generated.h"

/**
 * 
 */
UCLASS()
class ONSLAUGHT_API UW_Host : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct();

private:

	UPROPERTY(meta = (BindWidget))
	UButton* Bt_Host;
	UPROPERTY(meta = (BindWidget))
	UButton* Bt_Join;

public:

	UFUNCTION()
	void CreateSession();

	UFUNCTION()
	void FindSession();


};
