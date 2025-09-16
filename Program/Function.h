#pragma once
#include "Consumable.h"

class Function : public Consumable
{
protected:
	int stamina;

public:
	Function();
	~Function();

};

