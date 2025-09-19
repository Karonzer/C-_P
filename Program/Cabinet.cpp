#include "stdafx.h"
#include "Cabinet.h"

Cabinet::Cabinet()
{
	cout << "Cabinet 생성자" << endl;
}

Cabinet::~Cabinet()
{
	cout << "Cabinet 소멸자" << endl;
}

void Cabinet::Intercat()
{
	cout << "서랍장이다" << endl;
}
