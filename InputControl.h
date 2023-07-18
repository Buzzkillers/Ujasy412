#pragma once

#include <vector>
#include "Global.h"
#include "Object.h"
#include "Out.h"
using namespace std;

struct FObject;
struct FSprite;
struct IEventable;

struct FInputControl : public FObject
{
	FInputControl(FGlobal* ptrGlobal);

	void Event(IEventable* ptrObject);

	void GetShift(int& x, int& y);

	bool Click();

};