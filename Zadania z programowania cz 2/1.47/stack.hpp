#ifndef STACK_HPP
#define STACK_HPP

class Stack
{
public:
    Stack();
    Stack(const Stack& cpy);
    ~Stack();
    int getEle();
    void deleteEle();
    void addEle(int ele);
    bool empty();

private:
    int* stack;
    int currentSize;
    int maxSize;
};

#endif