#include "Queue.hpp"
#include <algorithm>
#include <iostream>

Queue::Queue()
{
    currentSize = 0;
    maxSize = 5;
    q = new int[maxSize];
}
Queue::Queue(const Queue& queue)
{
    maxSize = queue.maxSize;
    currentSize = queue.currentSize;
    q = new int [maxSize];
    std::copy(queue.q, queue.q + maxSize, q);
}
Queue::~Queue()
{
    delete [] q;
}
void Queue::deleteEle()
{
    if (currentSize > 0)
    {
        currentSize--;
        std::copy(q + 1, q + currentSize + 1, q);
    }
}
void Queue::addEle(int ele)
{
    q[currentSize] = ele;
    currentSize++;
    
    if(currentSize == maxSize)
    {
        maxSize += 10;

        int* qTmp{q};
        q = new int [maxSize];
        std::copy(qTmp, qTmp + maxSize - 10, q);
    }
}

void Queue::printFirst()
{
    if(currentSize > 0)
    {
        std::cout << q[0] << " ";
    }
    
}
