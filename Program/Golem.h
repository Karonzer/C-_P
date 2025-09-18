#pragma once
#include "Core.h"
class Golem : public Unit
{
public:
	Golem();
	virtual ~Golem() override;
public:
	virtual void Stat() override;
	virtual void Attack() override;
	virtual void Describe() override;
};

