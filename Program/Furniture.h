#pragma once
class Furniture
{
private:
	const char* name;
public:
	virtual ~Furniture() = 0;
public:
	virtual void Intercat() = 0;
};

