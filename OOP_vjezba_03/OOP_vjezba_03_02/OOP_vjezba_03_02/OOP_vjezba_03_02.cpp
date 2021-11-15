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

void insert1(vector<int> &v1, int a)
{
	int num;
	for (int i = 0; i < a; i++)
	{
		cout << "Unesite broj:" << endl;
		cin >> num;
		v1.push_back(num);
	}
	print_vector(v1);
	cout << "\nKraj insert1" << endl;
}

void insert2(vector<int> &v2, int min, int max)
{
	int num;
	cout << "Unesite broj:" << endl;
	cin >> num;
	v2.push_back(num);
	while (max > num && min < num)
	{
		cout << "Unesite broj:" << endl;
		cin >> num;
		v2.push_back(num);
	}
	print_vector(v2);
	cout << "\nKraj insert2" << endl;
}

void vect3(vector<int> &v1, vector<int> &v2)
{
	vector<int> v3;
	int counter = 0;
	for (unsigned int i = 0; i < v1.size(); i++)
	{
		for (unsigned int j = 0; j < v2.size(); j++)
		{
			if (v1[i] != v2[j])
			{
				counter++;
			}
		}
		if (counter == v2.size())
		{
			v3.push_back(v1[i]);
		}
		counter = 0;
	}
	cout << "New vector" << endl;
	print_vector(v3);
}



