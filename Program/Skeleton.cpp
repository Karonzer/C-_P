#include "../Program/Skeleton.h"
#include "../Program/stdafx.h"
Skeleton::Skeleton()
{
	name = "Skeleton";
	health = 100;
	attack = 5;
	defense = 1;
}

Skeleton::~Skeleton()
{
	cout << "Skeleton ¼Ò¸êÀÚ È£Ãâ" << endl;
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
