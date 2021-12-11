#include "ratatat.h"

int main()
{
	gun revolver;

	revolver.set_point(3, 5);

	revolver.shoot();
	revolver.shoot();
	revolver.shoot();
	revolver.shoot();
	revolver.shoot();
	revolver.shoot();
	revolver.shoot();
	cout << revolver.ammo_check() << endl;
	revolver.reload();
	cout << revolver.ammo_check() << endl;
	cout << revolver.get_x() << ", " << revolver.get_y() << endl;
}