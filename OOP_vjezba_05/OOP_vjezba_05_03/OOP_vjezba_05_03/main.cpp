#include "ratatat.h"

int main()
{
	int n;
	int max = 10, min = 2;
	cout << "Number of targets: ";
	cin >> n;
	target m;
	target* array = m.generate_target(n, max, min);
	for (int i = 0; i < n; i++)
	{
		array[i].print_position();
		cout << "\n";
	}

}