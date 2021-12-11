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
	point() {
		x = 0;
		y = 0;
		z = 0;
	}
	void set_point(double x=0, double y=0, double z=0);
	void set_random(int max, int min);
	void print_coords();
	double get_x();
	double get_y();
	double get_z();
	double distance_2D(double a, double b);
	double distance_3D(double a, double b, double c);
};

class target
{
private:
	point top, bot;
	bool hit = false;
public:
	target* generate_target(int n, int max, int min);
	void print_position();
	bool check();
	void set_is_hit(bool hit);
};