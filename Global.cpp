#include "Global.h"


#include "InputControl.h"
#include "Player.h"
#include "Map.h"
#include "Monster.h"
#include "Display.h"
#include "Quest.h"

#include <fstream>



FGlobal::FGlobal()
{
	ptrInputControl = new FInputControl(this);
	ptrPlayer = new FPlayer(this);
	ptrMap = new FMap(this);
	ptrMonster = new FMonster(this);
	ptrDisplay = new FDisplay(this);
	ptrQuest = new FQuest(this);

	
	ifstream fFile("./Content/Config.txt");
	fFile >> ptrDisplay->fScreen.iW >> ptrDisplay->fScreen.iH >> ptrDisplay->fScreen.iX >> ptrDisplay->fScreen.iY;
	fFile >> ptrPlayer->iSpeedX >> ptrPlayer->iSpeedY;
	fFile >> ptrMonster->iSpeedX >> ptrMonster->iSpeedY;
	fFile.ignore();

	string sLine;
	getline(fFile, sLine);
	for (const auto& it : sLine)
		ptrMap->setWall.insert(it);

	getline(fFile, sLine);
	for (const auto& it : sLine)
		ptrMap->setPath.insert(it);

	fFile >> std::noskipws >> ptrDisplay->chVoid;

	ptrDisplay->fScreen.arrSprite.assign(ptrDisplay->fScreen.iH, vector<char>(ptrDisplay->fScreen.iW, ptrDisplay->chVoid));

}


FGlobal::~FGlobal()
{
	delete ptrQuest;
	delete ptrDisplay;
	delete ptrMonster;
	delete ptrMap;
	delete ptrPlayer;
	delete ptrInputControl;
}

int FGlobal::GetId()
{
	++iCurID;
	return iCurID;
}