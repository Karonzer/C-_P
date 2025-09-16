#include <iostream>
#include "Core.h"

using namespace std;

int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을
	// 서로 다른 방법으로 처리할 수 있는 기능입니다.


	//Unit* unit1 = new Golem();
	//unit1->Stat();
	//unit1->Attack();

	//Unit* unit2 = new Skeleton();
	//unit2->Stat();
	//unit2->Attack();

	//Unit* unit3 = new Slime();
	//unit3->Stat();
	//unit3->Attack();
	
	Golem golem;
	golem.State();

	Skeleton skeleton;
	skeleton.State();

	Slime slime;
	slime.State();

	// 다형성은 컴파인 시점에 함수와 속성이 결정되는 정적 바인디을 하지 않고, 실행 시간에 함수와
	// 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.

#pragma endregion
	return 0;
}