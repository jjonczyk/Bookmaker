#include "team.h"
#include<iostream>

Team::Team()
	:name(names[rand() % names.size()])
{}

std::string Team::get_name()
{
	return name;
}
