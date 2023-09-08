#ifndef ID_HPP
#define ID_HPP

#include <iostream>

class Id
{
public:
    Id(/* args */);
    ~Id();
    size_t getId();
private:
    static size_t id;
};

Id::Id(/* args */)
{
}

Id::~Id()
{
}
inline size_t Id::getId()
{
    return id++;
}

#endif