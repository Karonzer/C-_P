#include "Slime.h"

Slime::Slime()
{
	name = "Slime";
	health = 50;
	attack = 1;
	defense = 1;
}

Slime::~Slime()
{
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
