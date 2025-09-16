#pragma once
#include "Core.h"
class Slime : public Unit
{
public:
	Slime();
	~Slime();
public:
	virtual void Stat() override;
	virtual void Attack() override;
};

