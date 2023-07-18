#pragma once
#include <vector>
using namespace std;

struct FGlobal;


struct FObject
{
	int ID;

	FGlobal* ptrGlobal;
};

struct FSprite
{
	int iX = 0, iY = 0, iW = 0, iH = 0;

	vector<vector<char>> arrSprite;
};
