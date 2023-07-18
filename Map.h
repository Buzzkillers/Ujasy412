#pragma once

#include "Global.h"
#include "Object.h"
#include "Out.h"
#include <vector>
#include <set>
using namespace std;


struct FMap : public FObject, IOut
{
	FMap(FGlobal* _ptrGlobal);
	int iWeath = 0;

	FSprite Out();

	set<char> setWall;
	set<char> setPath;


	bool IsRightTurn(int dx, int dy);
};