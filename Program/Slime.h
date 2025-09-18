#pragma once
#include "Core.h"
class Slime : public Unit
{
public:
	Slime();
	virtual ~Slime() override;
public:
	virtual void Stat() override;
	virtual void Attack() override;
	virtual void Describe() override;
};

