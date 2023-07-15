#pragma once

#include <vector>

using namespace std;


struct FObject;
struct FRect;
struct IEventable;

struct FInputControl : public FObject {

	FInputControl();

	void Event(IEventable* ptrObject);
};