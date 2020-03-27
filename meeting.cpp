#include "meeting.h"

Meeting::Meeting()
{
	while (t1.get_name() == t2.get_name())
		t2 = Team();
}

Team& Meeting::winner()
{
	return (rand() % 1) ? Meeting::t1 : Meeting::t2;
}

const std::string Meeting::winner_name() 
{
	return winner().get_name();
}

const std::string Meeting::get_second_name()
{
	return Meeting::t2.get_name();
}


const std::string Meeting::get_first_name()
{
	return Meeting::t1.get_name();
}
