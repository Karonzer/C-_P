#pragma once
#include "Core.h"
class Skeleton : public Unit
{
public:
	Skeleton();
	virtual ~Skeleton() override;
public:
	virtual void Stat() override;
	virtual void Attack() override;
	virtual void Describe() override;
};

