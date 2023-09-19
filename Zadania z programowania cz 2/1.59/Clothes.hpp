#ifndef CLOTHES_HPP
#define CLOTHES_HPP

#include <string>

class Clothes
{
public: 
    std::string material, color;
};

class Pants : public Clothes
{
public: 
    double length, inWaist;
};

class Shirt : public Clothes
{
public: 
    double length, inChest;
};

class Hat : public Clothes
{
public: 
    double circuit;
};

#endif