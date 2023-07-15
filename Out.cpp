#include "Out.h"
#include <istream>
#include <fstream>

void IOut::GetSprite(string sPath) {
	ifstream fFile(sPath);

	fFile >> fModel.iW >> fModel.iH;
	fModel.arrSprite.assign(fModel.iH, vector<char>(fModel.iW));
	for (int y = 0; y < fModel.iH; ++y) {
		for (int x = 0; x < fModel.iW; ++x) {
			fFile >> fModel.arrSprite[y][x];


		}
	}
}