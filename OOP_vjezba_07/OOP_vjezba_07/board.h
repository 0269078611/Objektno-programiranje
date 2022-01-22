#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include "point.h"

class Board
{
	int row;
	int col;
	char **matrix;

public:
	Board()
	{
		col = 0;
		row = 0;
		matrix = 0;
	}
	
	Board(int r, int c)
	{
		col = c;
		row = r;
		matrix = new char*[col];
		for (size_t i = 0; i < col; i++)
		{
			matrix[i] = new char[row];
		}
		draw_board();
	}

	~Board()
	{
		for (size_t i = 0; i < col; i++)
		{
			delete[] matrix[i];
		}
		delete[] matrix;
	}

	void draw_board();
	
	void draw_char(Point, char);
	void draw_up_line(Point, char);
	void draw_line(Point, Point, char);
	void display();
};
