#include <iostream>
#include "meetings.h"
#include "credits.h"

int main()
{
	Meetings s1(10, 111);

	for (size_t n = 0; n < s1.get_size(); n++)
	{
		std::cout << "First team: " << s1.get_meeting(n).get_first_name() << " | ";
		std::cout << "Second team: " << s1.get_meeting(n).get_second_name() << std::endl;
		std::cout << "THE WINNER IS: " << s1.get_meeting(n).winner_name() << "\n\n\n";
	}

	std::cout << "---------\r\nFinal WINNER is: " << s1.get_meeting(rand() % s1.get_size()).winner_name() << "\n";
	
	print_author();
}