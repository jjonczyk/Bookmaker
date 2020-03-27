#ifndef MEETING_H
#define MEETING_H
#include "team.h"

class Meeting
{
public:
	Meeting();

	const std::string winner_name();
	const std::string get_first_name();
	const std::string get_second_name();

private:
	Team& winner();
	Team t1, t2;
};

#endif // MEETING_H
