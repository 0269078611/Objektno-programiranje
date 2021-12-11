#include "OOP_vjezba_05_01.h"

void point::set_point(double a, double b, double c)
{
	this->x = a;
	this->y = b;
	this->z = c;
}

void point::set_random(int max, int min)
{
	double range = max - min;
	srand(time(NULL));
	x = min + (double)rand() / (double)RAND_MAX*range;
	y = min + (double)rand() / (double)RAND_MAX*range;
	z = min + (double)rand() / (double)RAND_MAX*range;
}

double point::get_x()
{
	return x;
}

double point::get_y()
{
	return y;
}

double point::get_z()
{
	return z;
}

double point::distance_2D(double a, double b)
{
	return sqrt(pow(a - x, 2) + pow(b - y, 2));
}

double point::distance_3D(double a, double b, double c)
{
	return sqrt(pow(a - x, 2) + pow(b - y, 2) + pow(c - z, 2));
}
