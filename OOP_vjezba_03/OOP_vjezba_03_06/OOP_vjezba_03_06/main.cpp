#include "OP_vectors.hpp"

int main()
{
	vector<string> all;
	string s1, s2;
	cout << "Prvi string:" << endl;
	cin >> s1;
	all.push_back(s1);
	cout << "Prvi string:" << endl;
	cin >> s2;
	all.push_back(s2);
	reverse(all);
}
