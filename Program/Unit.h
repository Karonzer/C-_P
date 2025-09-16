#pragma once
class Unit
{
protected:
	int health;
	int attack;
	int defense;
public:
	virtual void Stat() = 0;
	virtual void Attack() = 0;

	void State();

};

