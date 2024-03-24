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
    size_t firstVal() const;
    size_t lastVal() const;
    size_t size() const;
    bool isEmpty() const;
    const std::list<size_t>& getList() const;
private:
    std::list<size_t> lis;
};

#endif
