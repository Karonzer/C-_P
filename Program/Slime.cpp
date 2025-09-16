#include "Slime.h"

Slime::Slime()
{
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
	cout << "Slime : АјАн " << endl;
}