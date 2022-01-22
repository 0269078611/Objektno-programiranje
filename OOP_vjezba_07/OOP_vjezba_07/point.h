#pragma once

class Point
{
	double x, y;
public:
	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
	}
	double get_x() { return this->x; };
	double get_y() { return this->y; };
};