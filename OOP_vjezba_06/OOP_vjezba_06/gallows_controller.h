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
#include "gallows_model.h"
#include "gallows_view.h"
using namespace std;


class Controller
{
	Model m;
	View v;
	char input;

public:
	void user_entry(Model&);
	void check_letters(Model&, View);
	void update_lives(Model&, int);
	bool check_if_game_is_over(Model&);
};