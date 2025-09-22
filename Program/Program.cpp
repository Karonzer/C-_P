#include "stdafx.h"

//template<typename T>
//bool Same(T a, T b);

template<typename T>
bool Same(T _a, T _b)
{
	return _a == _b;
}

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고 , 하나의 값이 여러 다른 데이터
	// 형식을 가질 수 있는 기술에 중점을 두어 재사용성르 높일 수 
	// 있는 기능입니다.

	bool check = Same<int>(10, 10);

	cout << check << endl;
	cout << Same(10.1f, 10.1f) << endl;
	cout << Same(10.1, 10.1) << endl;
	cout << Same('A', 'A') << endl;
#pragma endregion
	return 0;
}

//template<typename T>
//bool Same(T a, T b)
//{
//	return a == b;
//}
//
//template<typename T>
//T Add(T a, T b)
//{
//	return a + b;
//}
//
//

