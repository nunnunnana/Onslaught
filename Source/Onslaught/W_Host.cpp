// Fill out your copyright notice in the Description page of Project Settings.


#include "W_Host.h"

void UW_Host::NativeConstruct()
{
	Super::NativeConstruct();

	// ��ư Ŭ���� ȣ��� ��������Ʈ�� �Լ��� ���
	Bt_Host->OnClicked.AddDynamic(this, &UW_Host::CreateSession);
	Bt_Join->OnClicked.AddDynamic(this, &UW_Host::FindSession);
}

// ������ ComboBox�� �´� �˰��� ����
void UW_Host::CreateSession()
{

}

void UW_Host::FindSession()
{

}