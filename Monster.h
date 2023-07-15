#pragma once

#include <vector>

using namespace std;


struct FObject;
struct FRect;
struct IOut;

struct FMonster : public FObject, IOut
{

	FMonster();

	FRect Out();


};