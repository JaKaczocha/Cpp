#include "Queue.hpp"
#include <algorithm>
#include <iostream>

Queue::Queue()
{
    list = new myList();
}
Queue::Queue(const Queue& queue)
{
    list = new myList();
    for (const auto &i : queue.getList()->getList())
    {
        list->addToEnd(i);
    }
    
   
    
}
Queue::~Queue()
{
    delete list;
}
void Queue::deleteEle()
{
    list->delFirst();
}
void Queue::addEle(int ele)
{
    list->addToEnd(ele);
}

void Queue::printFirst()
{
    if(getCurrSize() > 0)
    {
        std::cout << list->firstVal() << " ";
    }
    
}
