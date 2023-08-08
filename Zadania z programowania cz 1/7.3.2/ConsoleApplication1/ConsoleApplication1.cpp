#include <iostream>

struct element
{
    int i;
    element* next;
};

void clear(element* ptr);

int main()
{
    element* el{ new element };
    el->i = 3;
    el->next = new element;
    el->next->i = 5;
    el->next->next = new element;
    el->next->next->i = 7;
    el->next->next->next = nullptr;

    clear(el);


    std::cout << el;

}

void clear(element* ptr)
{
    element* tmp;
    
    while (ptr != nullptr)
    {
        tmp = ptr->next;
        delete ptr;
        ptr = tmp;
    }
    delete ptr;
    ptr = nullptr;
}


