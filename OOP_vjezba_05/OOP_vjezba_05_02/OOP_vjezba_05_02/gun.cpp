#include "ratatat.h"

void gun::set_point(double a, double b)
{
	this->x = a;
	this->y = b;
}

double gun::get_x()
{
	return x;
}

double gun::get_y()
{
	return y;
}

void gun::reload()
{
	ammo = mag_capacity;
}

int gun::ammo_check()
{
	return ammo;
}

void gun::shoot()
{
	if (ammo>0)
	{
		cout << "pew, pew" << endl;
		ammo--;
	}
	else
	{
		cout << "Out of ammo" << endl;
		return;
	}

}