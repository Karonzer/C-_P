
//#include "Core.h"
#include"../Program/Transform.h"
#include "../Program/stdafx.h"

//Unit* InitializeUnitDescribe();

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

	//Golem golem;
	//golem.Describe();

	//Skeleton skeleton;
	//skeleton.Describe();

	//Slime slime;
	//slime.Describe();

	//Unit* unitGolem = new Golem();
	//unitGolem->Describe();

	//Unit* unitSkeleton = new Skeleton();
	//unitSkeleton->Describe();

	//Unit* unitSlime = new Slime();
	//unitSlime->Describe();

	//Unit* unit = nullptr;
	//unit = InitializeUnitDescribe();
	//if (unit != nullptr)
	//{
	//	unit->Describe();
	//}
	//delete unit;
	// 다형성은 컴파인 시점에 함수와 속성이 결정되는 정적 바인디을 하지 않고, 실행 시간에 함수와
	// 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.

#pragma region 가상함수
	// 실행 시간에 상위 클래스에 대한 참조된 하위 클래스에 재정의된 함수를 호출하는 함수


	// 가상 함수의 경우 함수 테이블을 사용하여 호출되는 함수를 실행 시간에 결정하여,
	//정적으로 선언된 함수는 가상 함수로 선언할 수 없습니다

	// 가상 함수는 한 개 이상의 가상 함수를 포함하는
	// 있을 때 객체 주소에 가상 함수 테이블을 추가합니다.
#pragma endregion

#pragma region 오버로딩
	// 같은 이름의 함수를 매개 변수의 자료형과 매개	변수의 개수
	// 구분하여 여려 개의 선언할 수 있는 기능입니다.

	// 함수의 오버로딩의 경우 함수의 매개 변수의 전달하는 인수의 
	// 형태를 보고 호출하므로, 반환형으로 함수의 오버로딩을 생성할 수 없습니다.

	//Transform rot;
	//rot.Rotate(1);
	//rot.Rotate(1.0f);
	//rot.Rotate(1.0f, 2.0f);
	//rot.Rotate(1.0f, 2.0f, 3.0f);

#pragma endregion
	return 0;
}


//Unit* InitializeUnitDescribe()
//{
//	cout << "0~2까지 입력해줄세요." << endl;
//	int input;
//	cin >> input;
//	switch (input)
//	{
//	case 0:
//		return new Slime();
//	case 1:
//		return new Skeleton();
//	case 2:
//		return new Golem();
//	default:
//		cout << "잘못된 입력입니다 다시 입력해줄세요." << endl;
//		InitializeUnitDescribe();
//		break;
//	}
//}
