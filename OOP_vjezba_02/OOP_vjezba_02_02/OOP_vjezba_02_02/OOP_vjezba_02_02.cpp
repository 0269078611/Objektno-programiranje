#include <iostream>
using namespace std;

int& element(int* arr, int i)
{
	return arr[i];
}

int main()
{
	int arr[] = { 1,4,55,7,4,8 };
	int i;
	cout << "Unesite poziciju elementa: " << endl;
	cin >> i;

	cout << "lvalue+1 " << element(arr, i) + 1 << endl;
}