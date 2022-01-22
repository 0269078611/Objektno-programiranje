#include <iostream>
#include <string>

using namespace std;
template <class temp>
class stack {
	int size;
	int pos;
	temp* s;

public:
	stack() { pos = -1; size = 8; s = new temp[size]; }
	void push(temp a);
	void pop();
	bool is_empty();
	void print();
};

template <class temp>
void stack<temp>::pop() { pos--; }

template <class temp>
void stack<temp>::print() 
{
	for (auto i = 0; i <= pos; i++)
		cout << s[i] << endl;
}

template<class temp>
void stack<temp>::push(temp a)
{
	if (pos == size - 1)
	{
		cout << "full" << endl;
	}
	pos++;
	s[pos] = a;
}

template <typename temp>
bool stack<temp>::is_empty()
{
	if (pos == -1)
	{
		return true;
	}
	return false;
}
