#include "Person.h"
#include <iostream>

Person::Person(const std::string& ln, const char* fn)
{
	this->lname = ln;
	strcpy_s(this->fname,sizeof(fname) ,fn);
}

void Person::show() const
{
	std::cout << fname << " " << lname << std::endl;

}
void Person::FormalShow() const
{
	std::cout << lname << " " << fname << std::endl;
}