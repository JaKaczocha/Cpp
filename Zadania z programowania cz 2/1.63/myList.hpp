#ifndef LIST_HPP
#define LIST_HPP

#include <list>

class myList 
{
public:
    myList();
    myList(const myList& l);
    void addToStart(size_t number);
    void addToEnd(size_t number);
    void delFirst();
    void delLast();
    size_t fistVal() const;
    size_t lastVal() const;
    bool isEmpty() const;
private:
    std::list<size_t> lis;
};

#endif
