#include "../Program/stdafx.h"
#include "../Program/Vecter2.h"

int main()
{
#pragma region 캡슐화, 연산자 오버로딩
	// 객체의 속성과 기능을 하나의 단위 합친 다음
	// 외부에서 필요한 정보만 접근 할 수 있도록 제한하는 기능입니다.

	Vecter2 v1(2, 2);
	//Vecter2 v2(2, 2);

	//Vecter2 dir = v1 + v2;
	//dir.Print();

	//Vecter2 sub = v1 - v2;
	//sub.Print();

	//Vecter2 mul = v1 * v2;
	//mul.Print();

	//Vecter2 div = v1 / v2;
	//div.Print();

	++v1;
	v1.Print();



	Vecter2 postion = v1++;
	cout << "postion : " << postion.X() << endl;
	cout << "postion : " << postion.Y() << endl;

	cout << "v1 : " << v1.X() << endl;
	cout << "v1 : " << v1.Y() << endl;
#pragma endregion
	return 0;
}



