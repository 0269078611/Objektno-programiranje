#ifndef VECTOR_02_04_H
#define VECTOR_02_04_H

using namespace std;

struct MyVector
{
	int* arr;
	size_t size, capacity;

	void vector_new(int n);
	
	void vector_delete();

	void print_vector();

	void vector_push_back(int m);

	int& vector_front();

	int& vector_back();
	
	int vector_size();
	
	void vector_pop_back();
};

#endif