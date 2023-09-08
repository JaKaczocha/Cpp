#include "Person.hpp"

#include <iostream>

Person::Person(std::string NAME, std::string LASTNAME) : name(NAME), lastname(LASTNAME)
{

}

void Person::enterData()
{
    std::cout << "enter name: ";
    std::cin >> name;
    std::cout << "enter lastname: ";
    std::cin >> lastname;
}

void Person::printData() const
{
    std::cout << "name: " << name << "   lastname: " << lastname << std::endl;
}
