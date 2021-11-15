#include "OP_vectors.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void substring_count(string s, string sub)
{
	int i = 0;
	string::size_type pos = 0;
	while ((pos = s.find(sub, pos)) != std::string::npos)
	{
		++i;
		pos += sub.length();
	}
	cout << "Substring:" << i << endl;
}