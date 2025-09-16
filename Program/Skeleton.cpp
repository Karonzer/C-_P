#include "Skeleton.h"

Skeleton::Skeleton()
{
	health = 100;
	attack = 5;
	defense = 1;
}

Skeleton::~Skeleton()
{
}

void Skeleton::Stat()
{
	cout << "Skeleton : " << health << " : " << attack << " : " << defense << endl;
}

void Skeleton::Attack()
{
	cout << "Skeleton : АјАн " << endl;
}
