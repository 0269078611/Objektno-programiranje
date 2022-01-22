#pragma once
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class timer
{
	int h, m;
	double s;
public:

	timer()
	{
		h = 0;
		m = 0;
		s = 0;
	}

	timer(int hours, int minutes, double seconds)
	{
		h = hours;
		m = minutes;
		s = seconds;
	}
	
	timer& operator/=(const int);
	timer& operator+=(const timer&);
	bool operator<(const timer&);
	timer operator-(const timer&);
	friend ostream& operator<<(ostream&, const timer&);
	operator double();
};

class penalty
{
	int pen=0;
public:
	
	penalty(int x) : pen(x){}

	timer operator()(timer& other)
	{
		timer tmp(0, 0, pen);
		other += tmp;
		return other;
	}
	
};