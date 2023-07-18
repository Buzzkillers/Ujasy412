#include <iostream>
#include <fstream>
#include "Global.h"
#include "Display.h"
#include "Map.h"
#include "Player.h"
#include "Monster.h"
#include "InputControl.h"
namespace win
{
#include <windows.h>
	typedef byte cs_byte;
};
#include <conio.h>
/// <summary>
/// int iNameSpare
/// Object fName
/// double dName
/// bool bIsEmpty
/// vector<int> arrName
/// * ptrName
/// map<>  mapName
/// </summary>



int main() 
{
	FGlobal fGlobal;

	ifstream in("./Content/MnstBoss.txt");
	string in_s;

	while (getline(in, in_s))
	{
		cout << in_s;
		cout << "\n";
	}

	char chButton = _getch();
	system("cls");

	while (true)
	{
		win::HANDLE hCon;
		win::COORD cPos;
		hCon = win::GetStdHandle(-11);
		cPos.Y = 0;
		cPos.X = 0;
		win::SetConsoleCursorPosition(hCon, cPos);

		fGlobal.ptrDisplay->Clear();
		fGlobal.ptrDisplay->UpdataScreen(fGlobal.ptrMap->fModel);
		fGlobal.ptrDisplay->UpdataScreen(fGlobal.ptrMonster->fModel);
		fGlobal.ptrDisplay->UpdataScreen(fGlobal.ptrPlayer->fModel);
		
		fGlobal.ptrDisplay->Out();

		fGlobal.ptrInputControl->Click();
	}


}