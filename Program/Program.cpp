#include "stdafx.h"
#include <vector>
#include <list>
int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며 특별한 제약이나 규칭이 없는 컨테이입니다,
#pragma region vector
	

	/*vector<int> vector;
	vector.reserve(20);

	vector.push_back(10);



	vector.push_back(20);
	vector.push_back(30);


	vector.push_back(40);
	vector.push_back(50);


	cout << vector.capacity() << endl;

	cout << "vector size : " << vector.size() << endl;
	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << endl;
	}



	vector.pop_back();

	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << endl;
	}*/

#pragma endregion

#pragma region 리스트 컨테이너
	list<int> dateList;

	dateList.push_back(10);
	dateList.push_back(20);
	dateList.push_back(30);
	dateList.push_back(40);
	dateList.push_back(50);

	list<int>::iterator itr;
	for(itr = dateList.begin(); itr != dateList.end(); itr++)
	{
		cout << *itr << endl;
	}

	//for(auto iter = dateList.begin(); iter != dateList.end(); iter++)
	//{
	//	cout << *iter << endl;
	//}

	for (int ptr : dateList) {

		printf("%d\n", ptr);
	}




#pragma endregion
#pragma endregion

	return 0;
}