#include "Brojac.h"
#include "Zivotinje.h"

int main() {
	Tarantula *tarantula = new Tarantula;
	Zohar *zohar = new Zohar;
	Vrabac *vrabac = new Vrabac;
	Vrana *vrana = new Vrana;
	Brojac counter;

	counter.add(tarantula);
	counter.add(zohar);
	counter.add(vrabac);
	counter.add(vrana);

	cout<<counter.sum();

	delete tarantula;
	delete zohar;
	delete vrabac;
	
	return 0;
}