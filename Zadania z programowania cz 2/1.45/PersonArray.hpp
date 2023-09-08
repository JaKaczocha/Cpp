#ifndef PERSON_ARRAY_HPP
#define PERSON_ARRAY_HPP

#include "Person.hpp"
#include <string>

class PersonArray
{
public:
    PersonArray(unsigned int SIZE, std::string NAME, std::string LASTNAME);
    ~PersonArray();

    Person& at(unsigned int index);
private:
    int size;
    Person** array;
};

#endif
