#include "TVecteur.h"
#include <vector>

template<typename T>
inline TVecteur<T>::~TVecteur()
{
}

template<typename T>
inline void TVecteur<T>::Insert(int index, const T& value)
{
}

template<typename T>
inline void TVecteur<T>::Insert(int index, const TVecteur<T>& vector)
{
}

template<typename T>
inline void TVecteur<T>::PushBack(const T& value)
{
}

template<typename T>
inline void TVecteur<T>::Remove(int index)
{
}

template<typename T>
inline int TVecteur<T>::GetSize()
{
	return Size;
}

template<typename T>
inline int TVecteur<T>::GetCapacity()
{
	return Capacity;
}

template<typename T>
inline T* TVecteur<T>::GetItem(int index)
{
	if (index < Capacity) {
		return Values[index];
	}
	return NULL;
}