#include "Player.h"


FPlayer::FPlayer(FGlobal* _ptrGlobal) 
{
	this->ptrGlobal = _ptrGlobal;
	GetSprite("./Content/Player.txt");
}

FSprite FPlayer::Out()
{
	return fModel;
}