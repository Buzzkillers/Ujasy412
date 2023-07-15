#pragma once

#include <vector>
#include "Object.h"
#include "Out.h"
using namespace std;


struct FObject;
struct FRect;
struct IOut;



struct FMap : public FObject, IOut
{
	FMap();
	int iWeath = 0;

	FSprite Out();

	FSprite fModel;

};