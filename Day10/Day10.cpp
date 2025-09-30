#include "../Program/stdafx.h"
#include <vector>
#include <list>
#include <deque>
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
	//list<int> dateList;

	//dateList.push_back(10);
	//dateList.push_back(20);
	//dateList.push_back(30);
	//dateList.push_back(40);
	//dateList.push_back(50);
	//cout << dateList.size() << endl;

	//list<int>::iterator itr;

	//for(itr = dateList.begin(); itr != dateList.end(); itr++)
	//{
	//	cout << *itr << endl;
	//}

	//for(auto iter = dateList.begin(); iter != dateList.end(); iter++)
	//{
	//	cout << *iter << endl;
	//}

	//for (int ptr : dateList) {

	//	printf("%d\n", ptr);
	//}

	//for (const int& ptr : dateList)
	//{
	//	cout << ptr << endl;
	//}


	//dateList.assign(3, 5);
	//cout << dateList.size() << endl;



#pragma endregion

#pragma region deque 컨테이너

	//deque<int> deque;

	//deque.push_back(1);
	//deque.push_front(2);
	//deque.push_back(3);
	//deque.push_front(4);
	//deque.push_back(5);
	//deque.push_front(6);

	//cout << "size : " << deque.size() << endl;
	//int index = 0;
	//cin >> index;

	////cout << deque.at(index) << endl;

	//cout << deque[index] << endl;

	//cout << "size : " << deque.size() << endl;
	//for (const int& ptr : deque)
	//{
	//	cout << ptr << endl;
	//}

	//deque.assign(3, 7);
	//cout << "size : " << deque.size() << endl;
	//for (const int& ptr : deque)
	//{
	//	cout << ptr << endl;
	//}

	//for (int i = 0; i < deque.size();i++)
	//{
	//	cout << deque[i] << endl;
	//}

	//for (int i = 0; i < deque.size();i++)
	//{
	//	cout << deque.at(i) << endl;
	//}



#pragma endregion

#pragma region stirng

	string name = "Hello World";
	cout << name << endl;
#pragma endregion

#pragma region
#pragma endregion
	return 0;
}