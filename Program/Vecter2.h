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

	const int& X();
	const int& Y();

	const Vecter2 & operator+(const Vecter2& _value);
	const Vecter2 & operator-(const Vecter2& _value);
	const Vecter2 & operator*(const Vecter2& _value);
	const Vecter2 & operator/(const Vecter2& _value);
	const Vecter2 & operator++();
	const Vecter2& operator--();
	const Vecter2& operator++(int);

	const Vecter2& operator--(int);
public:
	void Print();
	int Get_X() { return x; }
	int Get_Y() { return y; }
};

