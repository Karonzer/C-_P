#include "../Program/Slime.h"
#include "../Program/stdafx.h"
Slime::Slime()
{
	name = "Slime";
	health = 50;
	attack = 1;
	defense = 1;
}

Slime::~Slime()
{
	cout << "Slime 소멸자 호출" << endl;
}

void Slime::Stat()
{
	cout << "Slime : " << health << " : " << attack << " : " << defense << endl;
}
void Slime::Attack()
{
	cout << "Slime : 공격 " << endl;
}

void Slime::Describe()
{
	cout << "나는 슬라임이다." << endl;
}
