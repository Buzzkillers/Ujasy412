#pragma once


struct FInputControl;
struct FPlayer;
struct FMap;
struct FMonster;
struct FDisplay;
struct FQuest;

struct FGlobal
{
	FGlobal();
	~FGlobal();


	int GetId();



	FInputControl* ptrInputControl;
	FPlayer* ptrPlayer;
	FMap* ptrMap;
	FMonster* ptrMonster;
	FDisplay* ptrDisplay;
	FQuest* ptrQuest;


	private:
	int iCurID = 0;


};
