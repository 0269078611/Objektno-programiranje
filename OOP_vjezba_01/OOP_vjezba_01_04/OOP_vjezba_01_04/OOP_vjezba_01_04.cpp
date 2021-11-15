#include <iostream>
using namespace std;

void rec_max_min(int* arr, int n, int* max, int* min)
{
	if (n >= 1)
	{
		if (arr[n] < *min)
			*min = arr[n];
		if (arr[n] > *max)
			*max = arr[n];
		rec_max_min(arr, n - 1, max, min);
	}

}

int main()
{
	int arr[] = { 45,67,8,33,2,3,-1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0], min = arr[0];

	rec_max_min(arr, n, &max, &min);

	cout << "max " << max << endl;
	cout << "min " << min << endl;
}