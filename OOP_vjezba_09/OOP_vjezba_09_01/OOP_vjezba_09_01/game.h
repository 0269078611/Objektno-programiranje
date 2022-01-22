#pragma once
#include "Players.h"
#include "HumanPlayers.h"
#include "ComputerPlayers.h"
#include <iostream>
#include <vector>

class Game
{
	int num_players;
	int num_bots;
	int total_points;
	int sum;
	bool game_state;

public:
	Game()
	{
		num_players = 0;
		num_bots = 0;
		total_points = 0;
		sum = 0;
		game_state = false;
	}

	void pick(std::vector<HumanPlayer> &humans, std::vector<ComputerPlayer> &bots);
	void check(std::vector<HumanPlayer> &humans, std::vector<ComputerPlayer> &bots);
	void start();
	void set_num_players(const int num) {num_players = num;};
	void set_num_bots(const int num) {num_bots = num; };
	void set_game_state(const bool flag) {game_state = flag; };
	void set_total(const int num) { total_points = num; };
	void set_sum(int num) { sum = num; };
	int get_sum() { return sum; };

	int get_num_players() { return num_players;};
	int get_num_bots() { return num_bots;};
	bool get_game_state() { return game_state;};
	int get_points() { return total_points; };
};
