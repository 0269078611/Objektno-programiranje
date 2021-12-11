#include "gallows_model.h"
#include "gallows_view.h"

void View::display_progress(Model m)
{
	cout << m.get_lines()<<"\n";
}
void View::display_used_letters(Model m)
{
	cout << m.get_guess() << "\n";
}

void View::display_gallows(Model m)
{
	if (m.get_lives() == 8)
	{
		cout << "   _____________  " << endl;
		cout << "  |    /    |     " << endl;
		cout << "  |   /     |     " << endl;
		cout << "  |  /      |     " << endl;
		cout << "  | /             " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "__|___            " << endl;

	}
	
	if (m.get_lives() == 7)
	{
		cout << "   _____________  " << endl;
		cout << "  |    /    |     " << endl;
		cout << "  |   /     |     " << endl;
		cout << "  |  /      |     " << endl;
		cout << "  | /       O     " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "__|___            " << endl;
	}
	
	if (m.get_lives() == 6)
	{
		cout << "   _____________  " << endl;
		cout << "  |    /    |     " << endl;
		cout << "  |   /     |     " << endl;
		cout << "  |  /      |     " << endl;
		cout << "  | /       O     " << endl;
		cout << "  |         |     " << endl;
		cout << "  |         |     " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "__|___            " << endl;
	}

	if (m.get_lives() == 5)
	{
		cout << "   _____________  " << endl;
		cout << "  |    /    |     " << endl;
		cout << "  |   /     |     " << endl;
		cout << "  |  /      |     " << endl;
		cout << "  | /       O     " << endl;
		cout << "  |         | \\  " << endl;
		cout << "  |         |     " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "__|___            " << endl;
	}
	
	if (m.get_lives() == 4)
	{
		cout << "   _____________  " << endl;
		cout << "  |    /    |     " << endl;
		cout << "  |   /     |     " << endl;
		cout << "  |  /      |     " << endl;
		cout << "  | /       O     " << endl;
		cout << "  |       / | \\   " << endl;
		cout << "  |         |     " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "__|___            " << endl;
	}
	
	if (m.get_lives() == 3)
	{
		cout << "   _____________  " << endl;
		cout << "  |    /    |     " << endl;
		cout << "  |   /     |     " << endl;
		cout << "  |  /      |     " << endl;
		cout << "  | /       O     " << endl;
		cout << "  |       / | \\   " << endl;
		cout << "  |         |     " << endl;
		cout << "  |          \\    " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "__|___            " << endl;
	}
	
	if (m.get_lives() == 2)
	{
		cout << "   _____________  " << endl;
		cout << "  |    /    |     " << endl;
		cout << "  |   /     |     " << endl;
		cout << "  |  /      |     " << endl;
		cout << "  | /       O     " << endl;
		cout << "  |       / | \\   " << endl;
		cout << "  |         |     " << endl;
		cout << "  |          \\    " << endl;
		cout << "  |           \\   " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "__|___            " << endl;
	}

	if (m.get_lives() == 1)
	{
		cout << "   _____________  " << endl;
		cout << "  |    /    |     " << endl;
		cout << "  |   /     |     " << endl;
		cout << "  |  /      |     " << endl;
		cout << "  | /       O     " << endl;
		cout << "  |       / | \\   " << endl;
		cout << "  |         |     " << endl;
		cout << "  |        / \\    " << endl;
		cout << "  |           \\   " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "__|___            " << endl;
	}

	if (m.get_lives() == 0)
	{
		cout << "   _____________  " << endl;
		cout << "  |    /    |     " << endl;
		cout << "  |   /     |     " << endl;
		cout << "  |  /      |     " << endl;
		cout << "  | /       O     " << endl;
		cout << "  |       / | \\   " << endl;
		cout << "  |         |     " << endl;
		cout << "  |        / \\    " << endl;
		cout << "  |       /   \\   " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "  |               " << endl;
		cout << "__|___            " << endl;
	}
}
