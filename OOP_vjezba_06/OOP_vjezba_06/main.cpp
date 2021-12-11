#include "gallows_model.h"
#include "gallows_controller.h"
#include "gallows_view.h"
int main()
{
	Model m;
	Controller c;
	View v;
	m.get_file();


	v.display_progress(m);
	v.display_gallows(m);
	
	while (c.check_if_game_is_over(m)!=true)
	{
		c.check_letters(m, v);
	}

	return 0;
}