#pragma once
#include <string>
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

	FQuest();

	void GetAnswer(string sPath);

	vector<FAnswer> arrAnswer;



};