#include "zivotinje.h"
#include "brojac.h"

void Brojac::add(Zivotinja* A)
{
	animals.push_back(A);
	cout << A->species() << endl;
}

int Brojac::sum()
{
	for (auto A : animals)
	{
		num_legs += A->num_legs();
	}
	return this->num_legs;
}