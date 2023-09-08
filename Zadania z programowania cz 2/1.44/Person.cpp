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

std::vector<Person> personVector(unsigned int n)
{
    std::vector<Person> vec;
    vec.reserve(n);  
    
    for (unsigned int i = 0; i < n; ++i)
    {
        vec.emplace_back("Jan", "Kowalski");
    }
    
    return vec;
}
