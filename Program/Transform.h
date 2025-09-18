#pragma once
class Transform
{
private:
	float x;
	float y;
	float z;
public:
	Transform();
	~Transform();
public:
	void Rotate(int _x);
	void Rotate(float _x);
	void Rotate(float _x, float _y);
	void Rotate(float _x, float _y, float _z);
};

