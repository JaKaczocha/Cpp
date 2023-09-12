#ifndef QUEUE_HPP
#define QUEUE_HPP

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
private:
    int* q;
    int maxSize;
    int currentSize;
};

inline bool Queue::empty()
{
    return currentSize == 0 ? true : false;
}

inline int Queue::getCurrSize()
{
    return currentSize;
}

#endif
