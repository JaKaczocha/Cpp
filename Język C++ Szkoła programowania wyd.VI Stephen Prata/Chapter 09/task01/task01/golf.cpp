#include "golf.h"
#include <iostream>


void Golf::showgolf()
{
	std::cout << fullname << " handicam = " << handicap << std::endl;
}


void Golf::setHandicap(int hc)
{
	handicap = hc;
}

Golf::Golf(const char* name, int hc)
{
	strcpy_s(fullname, sizeof fullname,name);
	handicap = hc;
}

void Golf::setgolf()
{
	std::cout << "enter full name: ";
	std::cin >> fullname;
	std::cout << "enter handicap: ";
	std::cin >> handicap;
}