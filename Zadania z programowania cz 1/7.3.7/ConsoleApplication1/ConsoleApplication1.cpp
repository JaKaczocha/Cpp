#include <iostream>

struct element
{
    int i;
    element* next;
};

element* find(element* list, int i);
element* deleteEle(element* list, int a);

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

    tmp = deleteEle(a, 0);
    a = tmp; 
    std::cout << std::endl << (tmp != nullptr ? 1 : 0) << '\n';



    tmp = a;
    while (tmp != nullptr)
    {
        element* nextTmp = tmp->next;  
        std::cout << tmp->i << "   ";
        delete tmp; 
        tmp = nextTmp; 
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

element* deleteEle(element* list, int a)
{
    element* tmp, *listCpy = list;
    tmp = find(list,a);
    if (tmp == nullptr)
    {
        return nullptr;
    }
    if (tmp == list)
    {
        element* newHead = list->next;
        delete list;

        return newHead;
    }

    while (listCpy->next != tmp)
    {
        listCpy = listCpy->next;
    }
    if (listCpy->next->next != nullptr)
    {
        element* tempNext = listCpy->next;
        listCpy->next = listCpy->next->next;
        delete tempNext;
    }
    else
    {
        delete listCpy->next;
        listCpy->next = nullptr;
    }

    return list;
}
