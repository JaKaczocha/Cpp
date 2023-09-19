#include "writing.hpp"
#include <string.h>

#include <iostream>
writing::writing()
{
    str = new char[5];
    str[0] = '\0';
}

writing::writing(const writing &cpy)
{
    str = new char [cpy.lenght()];
    str[0] = '\0';
    strcpy(str, cpy.getStr());
}

writing::writing(const char array[])
{
    
    str = new char[strlen(array)];
    str[0] = '\0';
    strcpy(str, array);
}

writing::~writing()
{
    delete[] str;
}

void writing::add(const writing wr) 
{
    char* tmp = new char[wr.lenght() + this->lenght()];
    tmp[0] = '\0';
    strcat(tmp, this->str);
    strcat(tmp, wr.getStr());
    delete this->str;
    this->str = tmp;
}

void writing::add(const char array[])
{
    
    char* tmp = new char[strlen(array) + this->lenght()];
    tmp[0] = '\0';
    
    strcat(tmp, this->str);
    strcat(tmp, array);
    
    delete this->str;
    this->str = tmp;
}

int writing::lenght() const
{
    return strlen(str);
}

const char* writing::getStr() const
{
    return this->str;
}
