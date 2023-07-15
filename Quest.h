#pragma once
#include <string>
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

	FAnswer GetAnswer();



};