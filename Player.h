#pragma once
#include "Global.h"

#include "Object.h"
#include "Out.h"
#include <vector>

using namespace std;


struct FObject;
struct FSprite;
struct IOut;

struct FPlayer : public FObject, IOut
{
	FPlayer(FGlobal* ptrGlobal);

	FSprite Out();

	
	int iSpeedX;
	int iSpeedY;
};