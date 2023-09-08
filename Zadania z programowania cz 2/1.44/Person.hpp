#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <vector>

class Person
{
    friend std::vector<Person> personVector(unsigned int n);
public:
    Person(std::string NAME, std::string LASTNAME);
    void enterData();
    void printData() const;
private:
    std::string name, lastname;

};

std::vector<Person> personVector(unsigned int n);

#endif