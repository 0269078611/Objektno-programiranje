#include "OP_vectors.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void print_string(std::vector<string> &v)
{
	for (string el : v)
		cout << el << " ";
	cout << endl;
}

void reverse(vector<string> &all)
{
	for (unsigned int i = 0; i < all.size(); i++)
	{
		reverse(all[i].begin(), all[i].end());
	}
	sort(all.begin(), all.end());
	print_string(all);
}
