#include "game.h"
#include "Players.h"
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Game::check(vector<HumanPlayer> &humans, vector<ComputerPlayer> &bots) 
{
	int counter=1;
	for (auto bot : bots) 
	{
		cout << counter << " bot: " << bot.get_points() << endl;
		
		if (bot.get_points() >= total_points) 
		{
			cout << "Bot" << counter << "won!" << endl;
			bot.set_winner(true);
			game_state = true;
			break;
		}
		counter++;
	}

	counter = 1;
	for (auto person : humans) 
	{
		cout << counter << " player: " << person.get_points() << endl;
		
		if (person.get_points() >= total_points) 
		{
			cout << "Player " << counter << "won!" << endl;
			person.set_winner(true);
			game_state = true;
			break;
		}
		counter++;
	}
}

void Game::pick(vector<HumanPlayer> &humans, vector<ComputerPlayer> &bots) 
{
	srand(time((NULL)));
	int pick = (num_bots + num_players) * 8;
	vector<int> coin_pick = {};
	for (size_t i = 0; i < pick; i++)
	{
		coin_pick.push_back(i);
	}
	
	ComputerPlayer p;
	
	int temp;

	for (int i = 0; i < humans.size(); i++) 
	{
		cout << "Player "<< i+1 <<" guess total.\n";
		cin >> temp;
		

		if (temp == sum) 
		{
			humans[i].set_points(humans[i].get_points() + 1);
		}
	}

	
	for (int i = 0; i < bots.size(); i++) 
	{
		cout << "Bot " << i+1 << " guess total.\n";
		temp = coin_pick[rand() % coin_pick.size()];
		cout << temp<<endl;
		

		if (temp == sum) 
		{
			bots[i].set_points(bots[i].get_points() + 1);
		}
	}
}

void Game::start()
{
	srand(time(NULL));
	vector<HumanPlayer> humans;
	vector<ComputerPlayer> bots;

	cout << "Number of players: ";
	cin >> num_players;

	cout << "Number of bots: ";
	cin >> num_bots;

	cout << "Points to win: ";
	cin >> total_points;

	cout << endl;

	for (int i = 0; i < num_bots; i++) {
		ComputerPlayer CPlayer;
		bots.push_back(CPlayer);
	}
	for (int i = 0; i < num_players; i++) {
		HumanPlayer HPlayer;
		humans.push_back(HPlayer);
	}

	while (!get_game_state()) {
		for (auto it : bots) 
		{
			sum+=it.CP_pick();
		}
		for (auto it : humans) 
		{
			sum+=it.HP_pick();
		}
		pick(humans, bots);
		check(humans, bots);
		sum = 0;
	}
}
