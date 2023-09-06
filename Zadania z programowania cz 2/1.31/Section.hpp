#ifndef SECTION_CPP
#define SECTION_CPP

#include <iostream>

class Section
{

public:
    Section(/* args */);
    ~Section();

    void enterCoordinates();
    void printCoordinates() const;
    bool intersect(const Section& s) const;

private:
    double x1, y1;
    double x2, y2;
};

inline void Section::printCoordinates() const
{
    std::cout << "[ " << x1 << ", " << y1 << " ]   ---   [ " << x2 << ", " << y2 << " ]" << std::endl;
}

#endif