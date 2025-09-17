#include "Golem.h"

Golem::Golem()
{
	name = "Golem";
	health = 250;
	attack = 10;
	defense = 5;
}

Golem::~Golem()
{
}

void Golem::Stat()
{
	cout << "Golem : " << health << " : " << attack << " : " << defense << endl;
}
void Golem::Attack()
{
	cout << "Golem : °ø°Ý " << endl;
}

void Golem::Describe()
{
	cout << "³ª´Â °ñ·½ÀÌ´Ù." << endl;
}
