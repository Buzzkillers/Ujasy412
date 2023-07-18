#pragma once

#include <vector>
#include "Global.h"

#include "Object.h"
#include "Out.h"
using namespace std;


struct FObject;
struct FSprite;
struct IOut;

struct FMonster : public FObject, IOut
{

	FMonster(FGlobal* ptrGlobal);

	FSprite Out();

	int iSpeedX;
	int iSpeedY;
};