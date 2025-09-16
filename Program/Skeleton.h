#pragma once
#include "Core.h"
class Skeleton : public Unit
{
public:
	Skeleton();
	~Skeleton();
public:
	virtual void Stat() override;
	virtual void Attack() override;
};

