#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "myList.hpp"

class Queue
{
public:
    Queue();
    Queue(const Queue& queue);
    ~Queue();
    void deleteEle();
    void addEle(int ele);
    bool empty();
    void printFirst();
    int getCurrSize();
    const myList* getList() const;
private:
    myList* list;
};

inline bool Queue::empty()
{
    return (*list).isEmpty();
}

inline int Queue::getCurrSize()
{
    return (*list).size();
}

inline const myList *Queue::getList() const
{
    return list;
}

#endif
