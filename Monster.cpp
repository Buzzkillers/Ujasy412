#include "Monster.h"


FMonster::FMonster(FGlobal* _ptrGlobal) 
{
	this->ptrGlobal = _ptrGlobal;
	GetSprite("./Content/Mnstr.txt");
}

FSprite FMonster::Out()
{
	return fModel;
}