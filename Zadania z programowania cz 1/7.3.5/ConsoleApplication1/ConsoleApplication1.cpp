#include <iostream>

struct element
{
    int i;
    element* next;
};

element** addjw(element** list, element* ele, int a);

int main()
{
    element* i = new element;

    element* tmp{ i };
    for (int j = 0; j < 4; j++)
    {
        tmp->i = j * 5;
        tmp->next = new element;
        tmp = tmp->next;
    }
    tmp->i = 99;
    tmp->next = nullptr;

    tmp = i;
    for (int j = 0; tmp != nullptr; j++)
    {
        std::cout << tmp->i << "   ";

        tmp = tmp->next;
    }
    
    addjw(&i, NULL, 222);
    addjw(&i, i->next->next, 222);

    std::cout << std::endl;
    tmp = i;
    for (int j = 0; tmp != nullptr; j++)
    {
        std::cout << tmp->i << "   ";

        tmp = tmp->next;
    }
}

element** addjw(element** list, element* ele, int a)
{
    element* n{ new element };
    if (ele != NULL && ele != nullptr)
    {
        n->next = ele->next;
        n->i = a;
        ele->next = n;
    }
    else
    {
        n->next = (*list);
        (*list) = n;
        n->i = a;
    }

    return list;
}


