#pragma once
class Unit
{
protected:
	int health;
	int attack;
	int defense;
	const char* name;

public:
	virtual ~Unit();
public:
	virtual void Stat() = 0;
	virtual void Attack() = 0;

	void State();
	virtual void Describe() = 0;
};

