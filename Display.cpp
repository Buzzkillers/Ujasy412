#include "Display.h"
#include "Global.h"
#include"Player.h"

#include <iomanip>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

FDisplay::FDisplay(FGlobal* _ptrGlobal) 
{
	this->ptrGlobal = _ptrGlobal;
	this->ID = _ptrGlobal->GetId();	
}

void FDisplay::Out()
{

	for (auto& str : fScreen.arrSprite)
	{
		for (auto& ch : str)
		{
			cout << ch;
		}
		cout << "\n";
	}



}
void FDisplay::Clear()
{

	for (auto& str : fScreen.arrSprite)
	{
		for (auto& ch : str)
		{
			ch = chVoid;
		}
	}
}
void FDisplay::UpdataScreen(FSprite& fRect)
{
	int iPlayerX = ptrGlobal->ptrPlayer->fModel.iX;
	int iPlayerY = ptrGlobal->ptrPlayer->fModel.iY;

	int iYPosL = max(iPlayerY + fScreen.iY - fRect.iY, 0);
	int iYPosR = min(iPlayerY + fScreen.iY - fRect.iY + fScreen.iH, fRect.iH);


	int iXPosL = max(iPlayerX + fScreen.iX - fRect.iX, 0);
	int iXPosR = min(iPlayerX + fScreen.iX - fRect.iX + fScreen.iW, fRect.iW);

	for (int y = iYPosL; y < iYPosR; y++)
	{
		int Y = y + fRect.iY;

		for (int x = iXPosL; x < iXPosR; x++)
		{
			if (fRect.arrSprite[y][x] == ' ')
				continue;

			int X = x + fRect.iX;
			
			int iActY = Y - (iPlayerY + fScreen.iY);
			int iActX = X - (iPlayerX + fScreen.iX);

			fScreen.arrSprite[iActY][iActX] = fRect.arrSprite[y][x];


		}
	}

	/*
	for (int y = std::max((iPlayerY + fScreen.iY) - fRect.iY, 0);
		 y < max(fRect.iH, (iPlayerY + fScreen.iY + fScreen.iH) - fRect.iY);
		y++)
	{
		int Y = y + fRect.iY;

		for (int x = std::max( (iPlayerX + fScreen.iX) - fRect.iX, 0);
			 x < max(fRect.iW, (iPlayerX + fScreen.iX + fScreen.iW) - fRect.iX );
			 x++)
		{
			if (fRect.arrSprite[y][x] == ' ')
				continue;

			int X = x + fRect.iX;
			
			int iActY = Y - (iPlayerY + fScreen.iY);
			int iActX = X - (iPlayerX + fScreen.iX);

			fScreen.arrSprite[iActY][iActX] = fRect.arrSprite[y][x];


		}
	}*/






}