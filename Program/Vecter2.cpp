#include "stdafx.h"
#include "Vecter2.h"

Vecter2::Vecter2(int _x, int _y)
{
	x = _x;
	y = _y;
}

const int& Vecter2::X()
{
	return x;
}

const int& Vecter2::Y()
{
	return y;
}

const Vecter2& Vecter2::operator+(const Vecter2& _value)
{
	return Vecter2(x + _value.x, y + _value.y);
}



const Vecter2& Vecter2::operator-(const Vecter2& _value)
{
	return Vecter2(x - _value.x, y - _value.y);
}

const Vecter2& Vecter2::operator*(const Vecter2& _value)
{
	return Vecter2(x * _value.x, y * _value.y);
}

const Vecter2& Vecter2::operator/(const Vecter2& _value)
{
	return Vecter2(x / _value.x, y / _value.y);
}

const Vecter2& Vecter2::operator++()
{
	++x;
	++y;
	return *this;
}

const Vecter2& Vecter2::operator--()
{
	--x;
	--y;
	return *this;
}

 const Vecter2& Vecter2::operator++(int)
{
	Vecter2 temp = *this;
	this->x++;
	this->y++;
	return temp;
}

 //const Vecter2& Vecter2::operator--(int)
 //{
	// Vecter2 temp(x,y);
	// this->x--;
	// this->y--;

	// return temp;
 //}

 const Vecter2& Vecter2::operator--(int)
 {
	 Vecter2 temp = *this;
	 this->x--;
	 this->y--;
	 return temp;
 }




void Vecter2::Print()
{
	cout << "x : " << x << " y : " << y << endl;
}
