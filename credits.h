#include <string>
#include <iostream>

void print_author()
{
	std::string decoration = "***********************************\n";
	std::string my_date = "Code written: 31.01.20\n";
	std::string authors = "Autors: Jakub Jonczyk & Michal Kita\n";

	std::cout << "\n\n" << decoration << my_date << authors << decoration << "\n\n";
}