#include "Vector_02_04.h"
#include <cstddef>
#include <iostream>

using namespace std;

void MyVector::vector_new(int n)
{
	capacity = n;
	size = 0;
	arr = new int[this->capacity];
}

void MyVector::vector_delete()
{
	delete[] arr;
	capacity = 0;
}

void MyVector::print_vector()
{
	for (size_t i = 0; i < vector_size(); ++i)
		cout << arr[i] << " ";
	cout << endl;
}

void MyVector::vector_push_back(int m)
{
	if (size >= capacity)
	{
		this->capacity = capacity * 2;
		int* temp = new int[capacity];
		for (int i = 0; i < capacity; i++)
			temp[i] = arr[i];
		delete[] arr;
		arr = temp;
	}

	arr[this->size] = m;
	size++;
}

int& MyVector::vector_front()
{
	return arr[0];
}

int& MyVector::vector_back()
{
	return arr[size - 1];
}

int MyVector::vector_size()
{
	return size;
}

void MyVector::vector_pop_back()
{
		size--;
}

