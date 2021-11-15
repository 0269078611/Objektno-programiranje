#include "OP_vectors.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void print_vector(std::vector<int>& v)
{
	for (int el : v)
		cout << el << " ";
	cout << endl;
}

void remove(vector<int> &vr)
{
	vector<int>::iterator it;
	int i;
	cin >> i;
	it = vr.begin() + i;
	vr.erase(it);
	cout << "Remove" << endl;
	print_vector(vr);
}


