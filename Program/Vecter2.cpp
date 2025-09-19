#include "stdafx.h"
#include "Vecter2.h"

Vecter2::Vecter2(int _x, int _y)
{
	x = _x;
	y = _y;
}

Vecter2 Vecter2::operator+(const Vecter2& _value)
{
	return Vecter2(x + _value.x, y + _value.y);
}

Vecter2 Vecter2::operator-(const Vecter2& _value)
{
	return Vecter2(x - _value.x, y - _value.y);
}

Vecter2 Vecter2::operator*(const Vecter2& _value)
{
	return Vecter2(x * _value.x, y * _value.y);
}

Vecter2 Vecter2::operator/(const Vecter2& _value)
{
	return Vecter2(x / _value.x, y / _value.y);
}



void Vecter2::Print()
{
	cout << "x : " << x << " y : " << y << endl;
}
