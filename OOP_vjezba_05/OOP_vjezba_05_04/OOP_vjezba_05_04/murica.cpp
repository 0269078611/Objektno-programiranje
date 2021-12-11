#include "ratatat.h"
#include <random>

point::point(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void point::print_coords() 
{ 
	std::cout << x << ", " << y << ", " << z; 
}

void point::set_random(int max, int min) 
{
	double range = max - min;

	x = min + (double)rand() / (double)RAND_MAX*range;
	y = min + (double)rand() / (double)RAND_MAX*range;
    z = min + (double)rand() / (double)RAND_MAX*range;
}

target::target(point top, point bot) 
{
	this->top = top;
	this->bot = bot;
}

bool target::check() 
{ 
	return this->hit; 
}

void target::set_is_hit(bool is_hit) 
{ 
	this->hit=is_hit;
}

void target::print_position() {
	cout << "\nTop: " << endl;
	top.print_coords();
	cout << "\nBot: " << endl;
	bot.print_coords();
}

void target::generate_target(int max, int min)
{
	top.set_random(max, min);
	bot.set_random(max, min);
}

target *target::generate_target(int n, int max, int min) {
	target *cuboid = new target[n];
	for (int i = 0; i < n; i++) 
	{
		cuboid[i].top.set_random(max, min);
		cuboid[i].bot.set_random(max, min);
	}
	return cuboid;
}

gun::gun(point a, point b) 
{
	this->gunPos.set_x(a.get_x());
	this->gunPos.set_y(a.get_y());
	this->gunPos.set_z(a.get_z());
}

void gun::set_point(point a) 
{
	this->gunPos.set_x(a.get_x());
	this->gunPos.set_y(a.get_y());
	this->gunPos.set_z(a.get_z());
}

void gun::reload() 
{ 
	ammo = mag_capacity; 
}

int gun::ammo_check() 
{ 
	return ammo; 
}

bool gun::shoot()
{
	if (ammo > 0)
	{
		cout << "\npew, pew" << endl;
		ammo--;
		return true;
	}
	else
	{
		cout << "\nOut of ammo" << endl;
		return false;
	}
}

bool gun::collision(point shooter, point bullet, target target) 
{
	
	if (shooter.get_z() >= target.getBot().get_z() && shooter.get_z() <= target.getTop().get_z())
	{
		double x1 = target.getBot().get_x();
		double y1 = target.getBot().get_y();
		double x2 = target.getTop().get_x();
		double y2 = target.getTop().get_y();

		double x3 = shooter.get_x();
		double y3 = shooter.get_y();
		double x4 = bullet.get_x();
		double y4 = bullet.get_y();

		double den = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
		if (den == 0) {
			return false;
		}

		double t = ((x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4)) / den;
		double u = -((x1 - x2) * (y1 - y3) - (y1 - y2) * (x1 - x3)) / den;

		if (t > 0 && t < 1 && u > 0)
			return true;
		else
			return false;
		return true;
	}
	else
	{
		cout << target.getBot().get_z() << endl;
		cout << target.getTop().get_z() << endl;
		cout << shooter.get_z() << endl;
		return false;
	}
		
}

int hit_counter(vector<target> v, int n)
{
	int counter = 0;

	for (int i = 0; i < n; i++)
	{
		if (v[i].check())
			counter++;
	}
	return counter;
}