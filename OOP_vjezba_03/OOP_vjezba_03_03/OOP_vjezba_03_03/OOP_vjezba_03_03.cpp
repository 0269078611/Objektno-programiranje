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

void sorting(vector<int> &vs)
{
	int sum = 0;
	for (unsigned int i = 0; i < vs.size(); i++)
	{

		for (unsigned int j = i + 1; j < vs.size(); j++)
		{
			if (vs[j] < vs[i])
			{
				int temp = vs[i];
				vs[i] = vs[j];
				vs[j] = temp;
			}
		}
		sum += vs[i];
	}
	vs.push_back(sum);
	vs.insert(vs.begin(), 0);
	cout << "Sort" << endl;
	print_vector(vs);
}




