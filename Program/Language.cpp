#include "stdafx.h"
#include "Language.h"

void Language::Initialize(const char* _name)
{
	name = _name;
}

char Language::Get_Name()
{
	return *name;
}
