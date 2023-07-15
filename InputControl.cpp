#include "InputControl.h"
#include <iostream>
using namespace std;


FInputControl::FInputControl() {
}

void FInputControl::Event(IEventable* ptrObject) {
}

int FInputControl::Click() {
	cout << "Hello World!";
	int iMove;
	char chButton = getchar();
	switch (chButton) {
	case 'W':
		iMove = 1;
		cout << iMove;
		break;
	case 'S':
		iMove = -1;
	case 'A':
		iMove = 2;
	case 'D':
		iMove = -2;
	default:
		iMove = 0;
	}
	return 0;
}
