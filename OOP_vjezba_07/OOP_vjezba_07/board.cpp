#include "board.h"
using namespace std;

void Board::draw_board() 
{
	for (size_t i = 0; i < col; i++)
	{
		for (size_t j = 0; j < row; j++) 
		{
			if (i == 0 || i == col - 1 || j == 0 || j == row - 1) 
			{
				matrix[i][j] = 'O';
			}
			else 
			{
				matrix[i][j] = ' ';
			}
		}
	}
}

void Board::draw_char(Point p, char ch)
{
	int x = round(p.get_x());
	int y = round(p.get_y());

	matrix[x][y] = ch;
}

void Board::draw_up_line(Point p, char ch)
{
	int x = round(p.get_x());
	int y = round(p.get_y());

	for (size_t i = 1; i < y; i++)
	{
		matrix[i][x] = ch;
	}
}

void Board::draw_line(Point p1, Point p2, char ch)
{
	int x1 = round(p1.get_x());
	int y1 = round(p1.get_y());
	int x2 = round(p2.get_x());
	int y2 = round(p2.get_y());
	int p;
	
	if (abs(y2 - y1) > abs(x2 - x1))
	{
		swap(x1, x2);
		swap(y1, y2);
	}

	if (x1 > x2)
	{
		swap(x1, x2);
		swap(y1, y2);
	}

	int dx = 2*(x2 - x1);
	int dy = abs(2*(y2 - y1));
	int error = dx / 2;
	int ystep = (y1 < y2) ? 1 : -1;
	int y = y1;
	int max = x2;

	for (size_t x = x1; x <= max; x++)
	{
		if (abs(y2 - y1) > abs(x2 - x1))
		{
			matrix[x][y] = ch;
		}
		else
		{
			matrix[y][x] = ch;
		}
		error -= dy;
		if (error < 0)
		{
			y += ystep;
			error += dx;
		}
	}

}

void Board::display() 
{
	for (size_t i = 0; i < col; i++) 
	{
		for (size_t j = 0; j < row; j++) 
		{
			cout << matrix[i][j];
		}
		cout << "\n";
	}
}

