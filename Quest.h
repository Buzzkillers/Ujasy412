#pragma once
#include <string>
using namespace std;

struct Answer
{
	string sText;

	char cRightAnswer;

};



struct FQuest
{

	FQuest();

	Answer GetAnswer();



};