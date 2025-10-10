#include "../Program/stdafx.h"
#include <vector>
#include <list>
#include <deque>
int main()
{

#pragma region 반복자
	// 컨테이너 안의 요소들을 탐색하기 위한 인터페이스

	vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	vector<int>::iterator itr;
	for (itr = vec.begin(); itr != vec.end(); itr++)
	{
		cout << *itr << endl;
	}





#pragma endregion

	return 0;
}