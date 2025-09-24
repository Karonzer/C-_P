#pragma once


template<typename T>
class Container
{
private:
private:
	int index;
	T* size;
	int maxSize;

public:
	Container(int _size);
	~Container();
public:
	void Push(T _data);
	int Get_MaxSize();
	int Get_CurrentSize();
	void Point();
	const T& operator[] (int _index);
};

