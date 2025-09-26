#include "stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "Character »ı¼ºÀÚ" << endl;
}

Character::~Character()
{
	cout << "Character ¼Ò¸êÀÚ" << endl;
	cout <<"Character ¼Ò¸êÀÚ partner ÂüÁ¶ : " << partner.use_count() << endl;
}

void Character::Partner(shared_ptr<Character>& _partner)
{
	partner = _partner;
}

void Character::TSET(const weak_ptr<Character> &_partner)
{
	partner = _partner;
}
