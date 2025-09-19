#pragma once
class Vecter2
{
private:
	int x;
	int y;
public:
	Vecter2(int _x, int _y);
public:
	//Vecter2 operator+(const Vecter2& _value);

	Vecter2 operator+(const Vecter2& _value);
	Vecter2 operator-(const Vecter2& _value);
	Vecter2 operator*(const Vecter2& _value);
	Vecter2 operator/(const Vecter2& _value);
public:
	void Print();
	int Get_X() { return x; }
	int Get_Y() { return y; }
};

