#include <iostream>

using namespace std;

template <typename temp>
void sort_arr(temp *arr, int n)
{
	int tmp;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n - 1; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

template <typename temp>

void sort_arr(char *arr, int n)
{
	char tmp;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n - 1; j++)
		{
			if (tolower(arr[i]) < tolower(arr[j]))
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}