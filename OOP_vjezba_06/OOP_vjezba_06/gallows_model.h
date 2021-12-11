#pragma once
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <cstring>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Model
{
	string movie;
	string lines;
	string guess;
	int lives = 8;
	bool inGame = false;

public:

	void get_file();
	void guess_movie();
	void set_movie(string x) { this->movie = x; };
	void set_lines(string x) { this->lines = x; };
	void set_guess(string x) { this->guess = x; };
	void set_lives(int x) { this->lives = x; };
	string get_movie() { return this->movie; };
	string get_lines() { return this->lines; };
	string get_guess() { return this->guess; };
	int get_lives() { return this->lives; };
	void set_game(bool state) { inGame = state; };
	bool get_game() { return this->inGame; };
};
