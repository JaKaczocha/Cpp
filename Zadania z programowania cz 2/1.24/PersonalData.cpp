#include "PersonalData.hpp"

#include <iostream>

PersonalData::PersonalData(/* args */)
{
}

PersonalData::~PersonalData()
{
}

void PersonalData::printAllData() const
{
    std::cout << "address: " << address << "\n";
    std::cout << "name: " << name << "\n";
    std::cout << "lastname: " << lastname << "\n";
}


