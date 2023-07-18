#pragma once
#include "Object.h"
#include <vector>

using namespace std;

struct FSprite;

struct FDisplay : public FObject
{
	FDisplay(FGlobal* _ptrGlobal);



	void Out();
	void Clear();
	void UpdataScreen(FSprite& fRect);

	char chVoid;

	FSprite fScreen;
};