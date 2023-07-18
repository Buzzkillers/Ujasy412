#include "Out.h"
#include <istream>
#include <fstream>
#include <iomanip>

void IOut::GetSprite(string sPath)
{
	ifstream fFile(sPath);

	fFile >> fModel.iX >> fModel.iY >> fModel.iW >> fModel.iH;
	fFile.ignore();
	fModel.arrSprite.assign(fModel.iH, vector<char>(fModel.iW));
	for (int y = 0; y < fModel.iH; ++y)
		{
			for (int x = 0; x < fModel.iW; ++x)
				{
					fFile >> std::noskipws >> fModel.arrSprite[y][x];
				}
			fFile.ignore();
		}
}
