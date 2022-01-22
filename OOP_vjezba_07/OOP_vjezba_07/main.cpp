#include "board.h"

using namespace std;

int main()
{
	Board b(20, 10);
	Point p1(2, 2), p2(8, 8), p3(2, 8), p4(16, 8);
	
	b.draw_char(p1, 'v');
	b.draw_up_line(p2, 'c');
	b.draw_line(p1, p2, 'x');
	b.draw_line(p3, p4, 'x');
	b.display();
}