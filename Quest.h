#pragma once
#include <string>

#include "Global.h"

#include "Object.h"
using namespace std;


struct FObject;

struct FAnswer
{
	string sText;

	char cRightAnswer;
};



struct FQuest : public FObject
{

	FQuest(FGlobal* ptrGlobal);

	void GetAnswer(string sPath);

	vector<FAnswer> arrAnswer;
};