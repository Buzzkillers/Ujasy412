#pragma once
#include <vector>

using namespace std;


struct Rect;
struct Object;

struct Display : public Object
{
	Display();



	void Out();
	void UpdataScreen(Rect fRect);



private:
	Rect fScreen;



};