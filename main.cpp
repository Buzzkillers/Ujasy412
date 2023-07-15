#include <iostream>
#include "Player.h"
using namespace std;

FPlayer fPlayer;


int main() {
	std::cout << "Hello World!\n";
	std::cout << "1!\n";
	std::cout << "2!\n";
	std::cout << "3!\n"
			  << endl;

	fPlayer.GetSprite("./Player.txt");
}