#include "Quest.h"
#include <fstream>

FQuest::FQuest()
{








}

void FQuest::GetAnswer(string sPath)
{
	ifstream fFile(sPath);

	int iNumber;
	fFile >> iNumber;

	arrAnswer.resize(iNumber);

	for (int i = 0; i < iNumber; ++i)
	{
		fFile >> arrAnswer[i].sText;
		fFile >> arrAnswer[i].cRightAnswer;

	}


}