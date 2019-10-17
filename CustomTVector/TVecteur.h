#pragma once
template <typename T>
class TVecteur
{
private:
	T* Values;
	int Size;
	int Capacity;

	void Reserve();
	void Move(int start, int size)

public:
	// CTORS & DTORS
	TVecteur();
	TVecteur(TVecteur other);
	
	~TVecteur();

	// METHODS
	void Insert(int index, const T& value);
	void Insert(int index, const TVecteur<T>& vector);
	void PushBack(const T& value);
	void Remove(int index);
	// GETTERS
	int GetSize();
	int GetCapacity();
	T* GetItem(int index);

};
