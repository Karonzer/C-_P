#include "stdafx.h"
#include "Material.h"

Material::Material(const char* _name)
{
	name = _name;
	cout << "Material 持失切" << endl;

}

Material::~Material()
{
	cout << "Material 社瑚切" << endl;

}
