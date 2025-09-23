#include "stdafx.h"
#include "Language.h"
#include <string>
template<typename T>
bool Same(T _a, T _b)
{
	return _a == _b;
}

template<>
bool Same<Language>(Language _left, Language _right)
{
	return _left.Get_Name() == _right.Get_Name();
}

template<typename T>
class Container
{
private:
	int index;
	T* size;
	int maxSize;
public:
	Container(int _size)
	{
		index = 0;
		size = new T[_size];
		maxSize = _size;
	}

	~Container()
	{
		delete[] size;
	}
public:
	void Push(T _data)
	{
		if (index < maxSize)
		{
			size[index] = _data;
			index++;
		}
	}

	int Get_MaxSize()
	{
		return maxSize;
	}

	int Get_CurrentSize()
	{
		return index;
	}

	void Point()
	{
		for (int i = 0; i < index;i++)
		{
			cout << size[i] << endl;
		}
	}
};


int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고 , 하나의 값이 여러 다른 데이터
	// 형식을 가질 수 있는 기술에 중점을 두어 재사용성르 높일 수 
	// 있는 기능입니다.

	//bool check = Same<int>(10, 10);

	//cout << check << endl;
	//cout << Same(10.1f, 10.1f) << endl;
	//cout << Same(10.1, 10.1) << endl;
	//cout << Same('A', 'A') << endl;
#pragma endregion

#pragma region 템플릿 특수화
	
	//Language eng;
	//eng.Initialize("eng");
	//Language kor;
	//kor.Initialize("eng");

	//cout << Same<Language>(eng, kor) << endl;

	Container<int> list(10);
	for (int i = 0; i < list.Get_MaxSize();i++)
	{
		int index = i;
		list.Push(index);
	}
	list.Point();

	Container<float> floatList(10);
	for (int i = 0; i < floatList.Get_MaxSize();i++)
	{
		float index = i + 0.1f;
		floatList.Push(index);
	}
	floatList.Point();

	Container<string> charList(10);
	string text = "가";
	for (int i = 0; i < charList.Get_MaxSize();i++)
	{
		text += "가";
		charList.Push(text);
	}
	charList.Point();

#pragma endregion
	return 0;
}

