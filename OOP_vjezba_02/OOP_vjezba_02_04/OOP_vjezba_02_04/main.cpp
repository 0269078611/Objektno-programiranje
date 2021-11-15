#include "Vector_02_04.h"
#include <cstddef>
#include <iostream>

using namespace std;

int main()
{
	MyVector mv;
	int n;
	cout << "Unesi velicinu niza: " << endl;
	cin >> n;
	mv.vector_new(n);

	int m;
	cout << "Unesi element: " << endl;
	while (cin >> m)
		mv.vector_push_back(m);

	cout << "first element " << mv.vector_front() << endl;
	cout << "last element " << mv.vector_back() << endl;
	mv.print_vector();

	cout << "removing last element" << endl;
	mv.vector_pop_back();
	mv.print_vector();

	cout << "size " << mv.vector_size() << endl;
	cout << "capacity " << mv.capacity << endl;

	mv.vector_delete();
}
