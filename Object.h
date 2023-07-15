#pragma once
#include <vector>
using namespace std;

struct FObject {
	int ID;
};

struct FSprite {
	int iX, iY, iW, iH;

	vector<vector<char>> arrSprite;
};