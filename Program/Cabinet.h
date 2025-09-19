#pragma once
#include "Furniture.h"
class Cabinet : public Furniture
{
public:
	Cabinet();
	~Cabinet();
public:
	virtual void Intercat() override;
};

