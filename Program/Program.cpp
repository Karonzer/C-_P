#include <iostream>
using namespace std;

//int packet = 200; // 전역 변수


void Swap(int& _x, int& _y)
{
	int temp = _x;
	_x = _y;
	_y = temp;
}


void Swap2(int* _x, int* _y)
{
	int temp = *_x;
	*_x = *_y;
	*_y = temp;
}


int main()
{
#pragma region 스트림
	//  시간의 흐름에 따라 연속족으로 발생하는 데이터의 흐름

	//int num;
	//cin >> num;

	//for (int i = 1; i <= num; i++)
	//{
	//	cout << "Play Station " << i << endl;
	//}
	////cin >> num;

	//cout << "Play Station " << num << endl;

	//printf("sreies : %d\n", num);

	// 스트림은 운영 체제에 의해 생성되며, 스트림 자체는 버퍼라는 
	// 임시 메모리 공간이 존재합니다



#pragma endregion

#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는데 
	// 사용하는 연산자 입니다.

	//int packet = 100; // 지역 변수

	//cout << "packet 지역 변수의 값  : " << packet << endl; // 지역 변수

	//cout << "packet 전역 변수의 값  : " << ::packet << endl; // 지역 변수

	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수/
	// 선언 되었을 때 가장 가까운 범위에 선언되는 번수의 이름은
	// 사용하는 범위 규칙이  존재하기 때문에 전역 변수가 호출되지 않습니다.


#pragma endregion

#pragma region 참조자
	// 하나의 변수에 또 다른 이름을 지정하는 지정자입니다.
	//int x = 10;
	//int y = 20;

	//cout << "x : " << x << endl;
	//cout << "y : " << y << endl;

	//Swap(x, y);
	//cout << "Swap(x, y)" << endl;
	//cout << "x : " << x << endl;
	//cout << "y : " << y << endl;

	//Swap2(&x, &y);
	//cout << "Swap2(&x, y)" << endl;
	//cout << "x : " << x << endl;
	//cout << "y : " << y << endl;
#pragma endregion

#pragma region 동적할당

	//int num = 1;
	//int* ptr = new int;
	//*ptr = 10;

	//cout << "*ptr : " << *ptr << endl;

	//delete ptr;

	int* pointer = new int[5];
	for (int i = 0; i < 5;i++)
	{
		pointer[i] = (i + 1) * 10;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "pointer[" << i << "] : " << pointer[i] << endl;
	}

	delete[] pointer;

#pragma endregion
}

