#include "../Program/stdafx.h"
#include <stack>
#include <queue>
int main()
{
#pragma region 컨테이너 어댑터
	// 기존 컨테이너의 인테페이스를 제한하여 만든 기능이
	// 제한 되거나 변경된 컨테이너입니다.

#pragma region 스택 컨테이너
	//stack<int> stack;

	//stack.push(10);
	//stack.push(20);
	//stack.push(30);
	//stack.push(40);
	//stack.push(50);

	//cout << "size : " << stack.size() << endl;
	////for (int i = 0; i < size;i++)
	////{
	////	cout << stack.top() << endl;
	////	stack.pop();
	////}

	//while (!stack.empty())
	//{
	//	cout << stack.top() << endl;
	//	stack.pop();
	//}


	//cout << "size : " << stack.size() << endl;
#pragma endregion

#pragma region 큐 컨테이너
	//queue<int> queue;

	//queue.push(10);
	//queue.push(20);
	//queue.push(30);
	//queue.push(40);
	//queue.push(50);

	//cout << "size : " << queue.size() << endl;

	//int size = queue.size();
	//for (int i = 0; i < size;i++)
	//{
	//	cout << queue.front() << endl;
	//	queue.pop();
	//}

#pragma endregion
#pragma region 프라이어리 큐 컨테이너

	//priority_queue<int> qu;
	//qu.push(12);
	//qu.push(1);
	//qu.push(82);
	//qu.push(56);
	//qu.push(5);
	//qu.push(77);
	//qu.push(23);
	//qu.push(47);
	//qu.push(22);
	//qu.push(8);

	//while (!qu.empty())
	//{
	//	cout << qu.top() << endl;
	//	qu.pop();
	//}


#pragma endregion

#pragma endregion
	return 0;
}