#pragma once

#include <vector>
#include "Object.h"
#include "Out.h"
using namespace std;


struct FObject;
struct FSprite;
struct IEventable;

struct FInputControl : public FObject {

	FInputControl();

	void Event(IEventable* ptrObject);

	int Click();

};