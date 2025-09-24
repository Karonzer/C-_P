#include "stdafx.h"
#include "Container.h"

template<typename T>
inline Container<T>::Container(int _size)
{
	index = 0;
	size = new T[_size];
	maxSize = _size;
}

template<typename T>
inline Container<T>::~Container()
{
	delete[] size;
}

template<typename T>
inline void Container<T>::Push(T _data)
{
	if (index < maxSize)
	{
		size[index] = _data;
		index++;
	}
}

template<typename T>
inline int Container<T>::Get_MaxSize()
{
	return maxSize;
}

template<typename T>
inline int Container<T>::Get_CurrentSize()
{
	return index;
}

template<typename T>
inline void Container<T>::Point()
{
	for (int i = 0; i < index;i++)
	{
		cout << size[i] << endl;
	}
}

template<typename T>
inline const T& Container<T>::operator[](int _index)
{
	if (_index < maxSize)
	{
		return size[_index];
	}
}


template class Container<int>;
template class Container<float>;
template class Container<string>;