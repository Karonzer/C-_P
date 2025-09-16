#pragma once
#include "Core.h"
class Golem : public Unit
{
public:
	Golem();
	~Golem();
public:
	virtual void Stat() override;
	virtual void Attack() override;
};

