#include "Map.h"

#include "Object.h"
#include "Out.h"

#include <string>
#include <fstream>
#include "Player.h"
using namespace std;

FMap::FMap(FGlobal* _ptrGlobal) 
{
	this->ptrGlobal = _ptrGlobal;

	GetSprite("./Content/Map.txt");
}

FSprite FMap::Out()
{
	FSprite fOut = fModel;
	if (iWeath == 1)
		{

			int h = fModel.iH;
			int w = fModel.iW;

			for (int y = 0; y < h; ++y)
				{
					for (int x = 0; x < w; ++x)
						{
							char& ch = fModel.arrSprite[y][x];


							if (ch == '#')
								ch = '0';
						}
				}
		}



	return fOut;
}

bool FMap::IsRightTurn(int dx, int dy)
{
	int nx = ptrGlobal->ptrPlayer->fModel.iX + dx;
	int ny = ptrGlobal->ptrPlayer->fModel.iY + dy;
	if (nx < 0)
		return false;
	if (ny < 0)
		return false;
	if (nx + ptrGlobal->ptrPlayer->fModel.iW >= fModel.iW)
		return false;
	if (ny + ptrGlobal->ptrPlayer->fModel.iH >= fModel.iH)
		return false;
	
	for (int y = ny; y < ptrGlobal->ptrPlayer->fModel.iH + ny; ++y)
		{
		for (int x = nx; x < ptrGlobal->ptrPlayer->fModel.iW + nx; ++x)
		{
			
			if (setWall.count(fModel.arrSprite[y][x]))
				return false;
		}
	}



	return true;
}
