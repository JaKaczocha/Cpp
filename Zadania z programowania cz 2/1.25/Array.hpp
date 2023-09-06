#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "PersonalData.hpp"

class Array
{
public:
    Array(/* args */);
    ~Array();

    PersonalData& at(int index);

private:
    PersonalData array[10];
};



#endif