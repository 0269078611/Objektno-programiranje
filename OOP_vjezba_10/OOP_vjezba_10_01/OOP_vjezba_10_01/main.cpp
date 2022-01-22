#include "template.cpp"


int main()
{
	int arr[] = { 4,3,6,5,8 };
	int n = sizeof(arr) / sizeof(int);

	//sort_arr(arr, n);

	char arr2[] = { 'A','e','A','e','B','R','c' };
	int n2 = sizeof(arr2) / sizeof(char);

	sort_arr<char>(arr2, n2);
}