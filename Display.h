#pragma once
#include <vector>

using namespace std;


struct FRect;
struct FObject;

struct FDisplay : public FObject
{
	FDisplay();



	void Out();
	void UpdataScreen(FRect fRect);



private:
	FRect fScreen;



};