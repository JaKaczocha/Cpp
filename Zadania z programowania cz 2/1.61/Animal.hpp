#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
public:
    std::string name, species;
};

class Lynx : public Animal
{
public:
    Lynx() {species = "Lynx";};
    double length, width;
};

class Eagle : public Animal 
{
public:
    Eagle() {species = "Eagle";};
    std::string wingLength, wingSpan;
};

class Viper: public Animal
{
public:
    Viper() {species = "Viper";}; 
    double length;
};

#endif