#ifndef SEMAFOR_HPP
#define SEMAFOR_HPP

#include <vector>


class Semafor
{
public:
    Semafor();
    Semafor(unsigned int maxBorder);
    ~Semafor();

    bool book(int id);
    bool free(int id);
    bool state() const;
    void printReservation() const;
private:
    unsigned int status;
    unsigned int max;

    std::vector<int> IDs;
    
};

#endif
