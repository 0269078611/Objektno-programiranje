#include "ratatat.h"

void target::print_position()
{
	cout << "Top: " << endl;
	top.print_coords();
	cout << "\nBot: " << endl;
	bot.print_coords();
}
bool target::check()
{
	return this->hit;
}

void target::set_is_hit(bool is_hit)
{
	this->hit = is_hit;
}

void point::print_coords()
{
	cout << x << ", " << y << ", " << z;
}
void point::set_random(int max, int min)
{
	double range = max - min;
	srand(time(NULL));
	x = min + (double)rand() / (double)RAND_MAX*range;
	y = min + (double)rand() / (double)RAND_MAX*range;
	z = min + (double)rand() / (double)RAND_MAX*range;
}

target* target::generate_target(int n, int max, int min)
{
	target* cuboid = new target[n];
	for (int i = 0; i < n; i++)
	{
		cuboid[i].top.set_random(max, min);
		cuboid[i].bot.set_random(max, min);
	}
	return cuboid;
}

