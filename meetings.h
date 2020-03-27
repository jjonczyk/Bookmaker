#ifndef MEETINGS_H
#define MEETINGS_H

#include "meeting.h"

class Meetings
{
public:
	Meetings(unsigned int i, int seed);

	Meeting& get_meeting(unsigned int n);
	size_t get_size();

private:
	std::vector <Meeting> meetings;
	unsigned int validate(unsigned int n);
};

#endif // MEETINGS_H
