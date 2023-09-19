#ifndef FURNITURE_HPP
#define FURNITURE_HPP

#include <string>

class Furniture
{
public:
    std::string producer, collection;
};

class Chair : public Furniture
{
public:
    std::string upholstery;
};

class Table : public Furniture
{
public: 
    double width, length;
};

class Cabinet 
{
public:
    double width, height, depth;
};
#endif