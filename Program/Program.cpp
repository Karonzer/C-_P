#include <iostream>
using namespace std;

int packet = 200; // 전역 변수

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

	int packet = 100; // 지역 변수

	cout << "packet 지역 변수의 값  : " << packet << endl; // 지역 변수

	cout << "packet 전역 변수의 값  : " << ::packet << endl; // 지역 변수

	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수/
	// 선언 되었을 때 가장 가까운 범위에 선언되는 번수의 이름은
	// 사용하는 범위 규칙이  존재하기 때문에 전역 변수가 호출되지 않습니다.


#pragma endregion
}


