#include <iostream>

struct element
{
    int i;
    element* next;
};

void addElement(element** list, int a);

int main()
{
    element* abc{ new element };
    abc->i = 3;
    abc->next = new element;
    abc->next->i = 5;
    abc->next->next = nullptr;

    addElement(&abc, 66);

    std::cout << abc->i << "  " << abc->next->i << "  " << abc->next->next->i;

    delete abc->next->next;
    delete abc->next;
    delete abc;
}

void addElement(element** list, int a)
{
    element* abc{ new element };
    abc->i = a;
    abc->next = nullptr;

    element* current = *list;

    while ( current->next != nullptr)
    {
        current = current->next;        
    }
    current->next = abc;
}




