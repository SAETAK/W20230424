// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

#include "MyPlayerController.h"
#include "MyPawn.h"

//CDO 초기화
AMyGameModeBase::AMyGameModeBase()
{
	//클래스 이름 기록
	//CDO에 클래스 그르팀
	PlayerControllerClass = AMyPlayerController::StaticClass();
	DefaultPawnClass = AMyPawn::StaticClass();
}