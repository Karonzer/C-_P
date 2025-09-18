#include "../Program/Unit.h"
#include "../Program/stdafx.h"

void Unit::State()
{
	cout << "Name : " << name << " " << "Health : " << health << " Attack : " << attack << " Defense : " << defense << endl;
}

Unit::~Unit()
{
	cout << "Unit ¼Ò¸êÀÚ È£Ãâ" << endl;
}


