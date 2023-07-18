#include "InputControl.h"
#include "Object.h"
#include "Out.h"
#include "Player.h"
#include "Map.h"
#include <iostream>
#include <conio.h>
using namespace std;


FInputControl::FInputControl(FGlobal* _ptrGlobal)
{
	this->ptrGlobal = _ptrGlobal;
}

void FInputControl::Event(IEventable* ptrObject)
{
}

void FInputControl::GetShift(int& x, int& y)
{
	x = 0;
	y = 0;
	while (true)
		{
			char chButton = _getch();
			if (chButton == 'w' || chButton == 'W')
				{
					y = -ptrGlobal->ptrPlayer->iSpeedY;
					x = 0;
					return;
				}
			if (chButton == 's' || chButton == 'S')
				{
					y = ptrGlobal->ptrPlayer->iSpeedY;
					x = 0;
					return;
				}
			if (chButton == 'a' || chButton == 'A')
				{
					y = 0;
					x = -ptrGlobal->ptrPlayer->iSpeedX;
					return;
				}
			if (chButton == 'd' || chButton == 'D')
				{
					y = 0;
					x = ptrGlobal->ptrPlayer->iSpeedX;
					return;
				}
			if (chButton == 27)
				{
					exit(0);
				}

		}
}

bool FInputControl::Click()
{
	int x, y;

	do
	{
	GetShift(x, y);
	}
	while (!ptrGlobal->ptrMap->IsRightTurn(x, y));

	ptrGlobal->ptrPlayer->fModel.iX += x;
	ptrGlobal->ptrPlayer->fModel.iY += y;



	return true;
}