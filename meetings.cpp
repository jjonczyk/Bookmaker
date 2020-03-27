#include "meetings.h"

Meetings::Meetings(unsigned int i, int seed)
{
	srand(seed);
	for (unsigned int n = 0; n < i; n++)
	{
		meetings.emplace(meetings.begin(), Meeting());
	}
}

Meeting& Meetings::get_meeting(unsigned int n)
{
	return meetings[n];
}

unsigned int Meetings::validate(unsigned int n)
{
	if (n < Meetings::meetings.size()) return n;
		else return meetings.size();
}

size_t Meetings::get_size()
{
	return meetings.size();
}