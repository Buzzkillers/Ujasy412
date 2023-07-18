#pragma once

#include "Object.h"
#include <string>

using namespace std;

struct IOut
{
	virtual FSprite Out() = 0;

	void GetSprite(string sPath);


	FSprite fModel;
};