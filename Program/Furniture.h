#pragma once
class Furniture
{
protected:
	const char* name;
public:

	virtual ~Furniture();
public:
	virtual void Intercat() = 0;
};

