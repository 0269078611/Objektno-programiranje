#include "ComputerPlayers.h"
#include "game.h"
#include <iostream>
using namespace std;

int ComputerPlayer::CP_pick() 
{
	
	int num_coin;
	Game g;
	vector<int> v = { 0,1,2,3,5,7,8 };

	int random = rand() % v.size();
	num_coin = v[random];
	cout << "\nBot chose " << num_coin <<endl;
	set_choice(num_coin);
	return num_coin;
}