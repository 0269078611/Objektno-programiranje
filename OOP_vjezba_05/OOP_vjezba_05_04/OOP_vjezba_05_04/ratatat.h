#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


using namespace std;

class point {
private:
	double x, y, z;

public:
	point() {
		x = 0;
		y = 0;
		z = 0;
	}
	point(double, double, double);
	void set_point(double x = 0, double y = 0, double z = 0);
	void set_random(int max, int min);
	void print_coords();
	double get_x() { return this->x; };
	double get_y() { return this->y; };
	double get_z() { return this->z; };
	void set_x(double x) { this->x = x; };
	void set_y(double y) { this->y = y; };
	void set_z(double z) { this->z = z; };
};

class target {
private:
	point top, bot;
	bool hit = false;

public:
	target() {};
	target(point, point);
	target *generate_target(int n, int max, int min);
	void print_position();
	bool check();
	point getTop() { return this->top; };
	point getBot() { return this->bot; };
	void set_is_hit(bool);
	void generate_target(int max, int min);
};

class gun {
private:
	point gunPos;
	point gunor;
	int mag_capacity = 6;
	int ammo = mag_capacity;

public:
	gun() {};
	gun(point a, point b);
	bool shoot();
	int ammo_check();
	void reload();
	void set_point(point a);
	point get_point() { return this->gunPos; };
	point get_ori() { return this->gunor; };
	bool collision(point shooter, point bullet, target target);
};

int hit_counter(vector<target>, int);