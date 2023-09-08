#include "constString.hpp"

ConstString::ConstString(std::string str)
{
    this->str = str;
}

char ConstString::at(int i)
{
    return i < str.size() ? str[i] : '\0';
}