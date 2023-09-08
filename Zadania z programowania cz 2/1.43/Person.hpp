#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
public:
    Person(std::string NAME, std::string LASTNAME);
    void enterData();
    void printData() const;
private:
    std::string name, lastname;

};

#endif