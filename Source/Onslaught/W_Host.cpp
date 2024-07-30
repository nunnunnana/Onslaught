// Fill out your copyright notice in the Description page of Project Settings.


#include "W_Host.h"

void UW_Host::NativeConstruct()
{
	Super::NativeConstruct();

	// 버튼 클릭시 호출될 델리게이트에 함수를 등록
	Bt_Host->OnClicked.AddDynamic(this, &UW_Host::CreateSession);
	Bt_Join->OnClicked.AddDynamic(this, &UW_Host::FindSession);
}

// 선택한 ComboBox에 맞는 알고리즘 실행
void UW_Host::CreateSession()
{

}

void UW_Host::FindSession()
{

}