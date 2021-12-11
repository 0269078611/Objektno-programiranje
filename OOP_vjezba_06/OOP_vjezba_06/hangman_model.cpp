#include "gallows_model.h"
#include "gallows_controller.h"
using namespace std;

void Model::get_file()
{
	ifstream fp("movie.txt");
	vector<string> v;

	srand(time(NULL));

	char chars[] = "-'!.?():";
	
	while (getline(fp, movie)) 
	{
		v.push_back(movie);
		int randomLine = rand() % v.size();
		movie = v.at(randomLine);
	}
	for (size_t i = 0; i < strlen(chars); ++i)
	{
		movie.erase(remove(movie.begin(), movie.end(), chars[i]), movie.end());
	}
	for (size_t i = 0; i < movie.size(); i++)
	{
		movie.at(i)=tolower(movie.at(i));
	}
	guess_movie();
}

void Model::guess_movie()
{
	for (int i = 0; i < movie.size(); i++)
	{
		if (movie[i] != ' ')
		{
		    lines.push_back('_');
		}
		else
		{
			lines.push_back(' ');
		}
	}
}

