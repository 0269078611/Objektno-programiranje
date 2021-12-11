#pragma once
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std;

class point
{
private:
	double x, y, z;
public:
	void set_point(double x = 0, double y = 0, double z = 0);
	void set_random(int max, int min);
	double get_x();
	double get_y();
	double get_z();
	double distance_2D(double a, double b);
	double distance_3D(double a, double b, double c);
};
