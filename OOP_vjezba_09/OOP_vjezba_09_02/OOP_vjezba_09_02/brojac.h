#pragma once
#include <iostream>
#include <vector>
#include "zivotinje.h"
class Brojac
{
	vector<Zivotinja*> animals = {};
	int num_legs=0;
public:
	void add(Zivotinja* A);
	int sum();
};