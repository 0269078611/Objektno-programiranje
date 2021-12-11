#include "gallows_controller.h"
#include "gallows_model.h"



void Controller::update_lives(Model& m, int update)
{
	m.set_lives(update-1);
}

bool Controller::check_if_game_is_over(Model& m)
{
	if (m.get_lines().compare(m.get_movie()) == 0)
	{
		m.set_game(true);
		cout << "You won";
	}
	else if(m.get_lives()==0)
	{
		m.set_game(true);
		cout << "You lost";
	}
	return m.get_game();
}

void Controller::user_entry(Model& m)
{
	string letters = m.get_guess();
	cout << "Guess a letter: \n";
	cin >> this->input;
	letters.push_back(input);
	letters.push_back(',');
	m.set_guess(letters);
}

void Controller::check_letters(Model& m, View v)
{
	user_entry(m);
	
	bool flag = false;

	string movie = m.get_movie();
	string guess = m.get_lines();
	string dup = m.get_guess();
	for (size_t i = 0; i < movie.length(); i++)
	{
		if (movie.at(i) == input)
		{
			guess[i] = input;
			flag = true;
		}
		
		m.set_lines(guess);
	}
	for (size_t i = 0; i < dup.length() - 2; i++)
	{
		if (dup.at(i) == input)
		{
			flag = true;
		}
	}
	
	if (flag == false)
	{
		update_lives(m, m.get_lives());
	}

	system("cls");
	
	v.display_used_letters(m);
	v.display_progress(m);
	v.display_gallows(m);
}

