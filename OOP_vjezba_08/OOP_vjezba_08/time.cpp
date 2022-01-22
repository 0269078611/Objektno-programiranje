#include "time.h"

using namespace std;

ostream& operator<<(ostream& os, const timer& other)
{
	os << other.h << ":" << other.m << ":" << other.s << endl;

	return os;
}

timer& timer::operator+=(const timer& other)
{
	s += other.s;
	if (s > 59)
	{
		s = s - 60;
		m++;
	}
	
	m += other.m;
	if (m > 59) {
		m = m - 60;
		h++;
	}
	h += other.h;
	
	return *this;
}

timer timer::operator-(const timer& other)
{
	timer diff;
	diff.s = s - other.s;
	diff.m = m - other.m;
	diff.h = h - other.h;

	return diff;
}

timer& timer::operator/=(const int v_size)
{
	double sum = (h * 60 + m) * 60 + s;
	sum /= v_size;

	m = (int)sum / 60;
	h = m / 60;
	m = m % 60;
	s = (int)sum % 60;
	return *this;
}

bool timer::operator<(const timer& other)
{
	if (h < other.h)
	{
		return true;
	}
	else if (h > other.h)
	{
		return false;
	}
	else
	{
		if (m < other.m)
		{
			return true;
		}
		else if (m > other.m)
		{
			return false;
		}
		else
		{
			if (s < other.s)
			{
				return true;
			}
			else
			{
				return false;
			}

		}
	}
}

timer::operator double() 
{
	return (((h * 60) + m) * 60 + s);
}