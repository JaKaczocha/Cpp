#include "Plorg.h"
#include <iostream>

Plorg::Plorg(const char* name)
{
	strcpy_s(this->name, sizeof(this->name), name);
	
}
void Plorg::setFullness(int fullness)
{
	this->fullness = fullness;
}
void Plorg::show()
{
	std::cout << "Name: " << this->name << "   Fullness: " << this->fullness << std::endl;
}