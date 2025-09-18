#include "../Program/Transform.h"
#include "../Program/stdafx.h"

Transform::Transform()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;

	cout << "Transform 생성  x : " << x << " y : " << y << " z : " << z << endl;
}

Transform::~Transform()
{
	cout << "Transform 소멸자 호출" << endl;
}

void Transform::Rotate(int _x)
{
	x += (float)_x;

	cout << "Rotate(int _x) x : " << x << " y : " << y << " z : " << z << endl;
}

void Transform::Rotate(float _x)
{
	x += _x;

	cout << "Rotate(float _x) x : " << x << " y : " << y << " z : " << z << endl;
}

void Transform::Rotate(float _x, float _y)
{
	x += _x;
	y += _y;

	cout << "Rotate(float _x, float _y) x : " << x << " y : " << y << " z : " << z << endl;
}

void Transform::Rotate(float _x, float _y, float _z)
{
	x += _x;
	y += _y;
	z += _z;

	cout << "Rotate(float _x, float _y, float _z) x : " << x << " y : " << y << " z : " << z << endl;
}
