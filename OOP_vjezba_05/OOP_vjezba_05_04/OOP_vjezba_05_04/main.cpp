#include "ratatat.h"
using namespace std;

int main() {
	srand(time(NULL));
	vector<target> targets;
	point pos;
	point ori;
	pos.set_random(5, 10);
	pos.print_coords();
	cout << "\n";
	ori.set_random(2, 10);
	ori.print_coords();
	gun revolver(pos, ori);
	
	int hits = 0;

	int n = 10;
	int max = 10;
	int min = 5;
	for (int i = 0; i < n; i++)
	{
		target temp;

		temp.generate_target(max, min);
		temp.print_position();
		point top = temp.getTop();
		point bot = temp.getBot();

		if (revolver.shoot())
		{
			if (revolver.collision(pos, ori, temp))
			{
				temp.set_is_hit(true);
				hits++;
			}
		}
		else
		{
			revolver.reload();
		}
		targets.push_back(temp);
	}
	
	cout << hit_counter(targets, n);
	return 0;
}