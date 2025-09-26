#pragma once
#include <memory.h>
class Character
{
private:
	weak_ptr<Character> partner;
public:
	Character();
	~Character();
public:
	void Partner(shared_ptr<Character>& _partner);
	void TSET(const weak_ptr<Character> &_partner);
};

