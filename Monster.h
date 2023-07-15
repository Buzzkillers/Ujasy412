#pragma once

#include <vector>
#include "Object.h"
#include "Out.h"
using namespace std;


struct FObject;
struct FSprite;
struct IOut;

struct FMonster : public FObject, IOut {

	FMonster();

	FSprite Out();
};