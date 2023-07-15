#include "Map.h"
#include <string>
#include <fstream>
using namespace std;

FMap::FMap()
{

}

FSprite FMap::Out() 
{
	FSprite fOut = fModel;
	if (iWeath == 1) {

		int h = fModel.iH;
		int w = fModel.iW;

		for (int y = 0; y < h; ++y) {
			for (int x = 0; x < w; ++x) {
				char& ch = fModel.arrSprite[y][x];


				if (ch == '#')
					ch = '☆';
			}
		}

	}



	return fOut;
}
