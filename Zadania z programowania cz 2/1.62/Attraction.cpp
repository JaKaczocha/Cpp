#include "Attraction.hpp"

void CableCars::init(std::string dep, std::string arriv,std::string name,std::string description) 
{
    departureTime = dep;
    arrivalTime = arriv;
    this->name = name;
    this->description = description;
}

void Castle::init(std::string visit,std::string name,std::string description) 
{
    visitTime = visit;
    this->name = name;
    this->description = description;
}

void Movie::init(std::string dur, std::string tit,std::string name,std::string description) 
{
    duration = dur;
    title = tit;
    this->name = name;
    this->description = description;
}
