#include "Skeleton.h"

Skeleton::Skeleton()
{
	name = "Skeleton";
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
	cout << "Skeleton : °ø°Ý " << endl;
}

void Skeleton::Describe()
{
	cout << "³ª´Â ½ºÄÌ·¹ÅæÀÌ´Ù." << endl;
}
