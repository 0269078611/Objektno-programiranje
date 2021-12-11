#include "OOP_vjezba_05_01.h"


int main()
{
	int min, max;

	point coordinate, rand_coordinate;

	coordinate.set_point(3, 5, -3);

	cout << "Max: ";
	cin >> max;
	cout << "Min: ";
	cin >> min;

	rand_coordinate.set_random(max, min);

	cout << coordinate.get_x() << ", " << coordinate.get_y() << ", " << coordinate.get_z() << endl;
	cout << rand_coordinate.get_x() << ", " << rand_coordinate.get_y() << ", " << rand_coordinate.get_z() << endl;

	cout << "2D distance: " << coordinate.distance_2D(rand_coordinate.get_x(), rand_coordinate.get_y()) << endl;
	cout << "3D distance: " << coordinate.distance_3D(rand_coordinate.get_x(), rand_coordinate.get_y(), rand_coordinate.get_z()) << endl;

}