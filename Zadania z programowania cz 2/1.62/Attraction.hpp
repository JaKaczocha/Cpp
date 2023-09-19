#ifndef ATTRACTION_HPP
#define ATTRACTION_HPP

#include <string>

class Attraction
{
public:
    double getPrice() const {return price;};
    std::string getName() const{return name;};
    std::string getDescription() const {return description;};

protected:
    double price;
    std::string name, description;

};

class CableCars : public Attraction
{
public:
    void init(std::string dep, std::string arriv,std::string name,std::string description);
    std::string getDeparture() const{return departureTime;};
    std::string getArrival() const{return arrivalTime;};
private:
    std::string departureTime,arrivalTime;
};

class Castle : public Attraction
{
public:
    void init(std::string visit,std::string name,std::string description);
    std::string getVisitTime() const {return visitTime;};
private:
    std::string visitTime;
};

class Movie : public Attraction
{
public: 
    void init(std::string dur, std::string tit,std::string name,std::string description);
    std::string getDuration() const{return duration;};
    std::string getTitle() const{return title;};
private:
    std::string duration, title;
};
#endif