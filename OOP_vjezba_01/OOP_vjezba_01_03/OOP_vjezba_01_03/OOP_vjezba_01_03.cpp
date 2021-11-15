#include <iostream>
using namespace std;

void max_min(int* arr, int n, int* max, int* min)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < *min)
			*min = arr[i];
		if (arr[i] > *max)
			*max = arr[i];
	}
}

int main()
{
	int arr[] = { 45,67,8,33,2,3,-1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0], min = arr[0];

	max_min(arr, n, &max, &min);

	cout << "max " << max << endl;
	cout << "min " << min << endl;
}
