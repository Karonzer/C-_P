#include "stdafx.h"
#include "Resource.h"

Resource::Resource()
{
	cout << "Resource 持失切" << endl;
}

Resource::~Resource()
{
	cout << "Resource 社瑚切" << endl;
}

void Resource::Share(shared_ptr<Resource> _date)
{
	pointer = _date;
}

void Resource::TEST()
{
}

