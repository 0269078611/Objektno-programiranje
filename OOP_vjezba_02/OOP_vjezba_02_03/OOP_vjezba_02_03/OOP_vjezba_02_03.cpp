#include <iostream>
#include <cmath>


using namespace std;

struct rectangle
{
	int x1, y1;
	int x2, y2;
};

struct circle
{
	int r;
	int x, y;
};

int intersection(const rectangle re, const circle c)
{

	int w = abs(re.x2 - re.x1);
	int h = abs(re.y2 - re.y1);
	int circle_distanceY = abs(c.y - re.y1);
	int circle_distanceX = abs(c.x - re.x1);
	int corner;



	if (circle_distanceX > w / 2 + c.r)
	{
		return 0;
	}
	if (circle_distanceY > h / 2 + c.r)
	{
		return 0;
	}
	if (circle_distanceX <= w / 2)
	{
		return 1;
	}
	if (circle_distanceY <= h / 2)
	{
		return 1;
	}

	corner = (circle_distanceX - w / 2) ^ 2 + (circle_distanceY - h / 2) ^ 2;

	return (corner <= (c.r ^ 2));
}


int main()
{
	circle c;
	rectangle* arr;

	cout << "Unesite tocke kruznice i radijus: " << endl;
	cin >> c.x >> c.y >> c.r;

	int n;
	int counter = 0;

	cout << "Unesite velicinu niza: ";
	cin >> n;

	arr = new rectangle[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Unesite tocke pravokutnika:" << endl;
		cin >> arr[i].x1 >> arr[i].y1 >> arr[i].x2 >> arr[i].y2;
		if (intersection(arr[i], c))
		{
			counter++;
		}
	}

	cout << "Broj pravokutnika koji se sijeku\n" << counter << endl;

	delete[] arr;

}