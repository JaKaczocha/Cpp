#include <iostream>

struct element
{
    int i;
    element* next;
};

element* find(element* list, int i);

int main()
{
    element* a = new element;
    element* tmp{ a };

    tmp->i = 0;
    for (int i = 1; i < 20; i++)
    {
        tmp->next = new element;
        tmp = tmp->next;
        tmp->i = i * 4;
    }
    tmp->next = nullptr;

    tmp = a;
    while (tmp != nullptr)
    {
        std::cout << tmp->i << "   ";
        tmp = tmp->next;
    }

    tmp = find(a,45);
    std::cout << std::endl << (tmp != nullptr ? 1 : 0);

    tmp = a;
    while (tmp != nullptr)
    {
        a = tmp->next;
        delete tmp;
        tmp = a;
    }
}

element* find(element* list, int i)
{
    while (list != nullptr)
    {
        if (list->i == i)
        {
            return list;
        }
        list = list->next;
    }
    return nullptr;
}
