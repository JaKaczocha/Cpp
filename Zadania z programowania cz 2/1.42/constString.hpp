#ifndef CONST_STRING_HPP
#define CONST_STRING_HPP

#include <string>

class ConstString
{
public:
    ConstString(std::string str);
    char at(int i);
private:
    std::string str; 
};

#endif