#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include <vector>

static const std::vector<std::string> names { "Simple Guy", "Ultimate Winner", "Tough Opponent",
											"Mysterious Person", "No Name" "Dark Horse" };

class Team
{
public:
	Team();
	std::string get_name();
private:
	std::string name;
};


#endif // TEAM_H
