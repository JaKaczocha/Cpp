#include <iostream>

struct element
{
    int i;
    element* next;
};

void add(element* list, element* target, int a);
void deleteList(element* uselessList);
element* search(element* list, int a);

int main()
{
    element* head{ new element };

    head->next = new element;
    head->next->i = 5;
    head->next->next = nullptr;

    element* ele{ new element };

    add(head, head, 999);
    add(head, head->next, 9339);
    add(head, head, 11119);

    
    std::cout << search(head, 999)->next->i;
    std::cout << std::endl << head->next->next->next->next->i << std::endl;
    deleteList(head);
}


element* search(element* list, int a)
{
    list = list->next;
    while (list != nullptr)
    {
        if (list->i == a)
        {
            return list;
        }
        list = list->next;
    }
    return nullptr;
}

void add(element* list, element* target, int a)
{
    while (list->next != nullptr && list != target)
    {
        list = list->next;
    }

    if (list == target)
    {
        if (list->next == nullptr)
        {
            list->next = new element;
            list->next->i = a;
            list->next->next = nullptr;
        }
        else
        {
            element* tmp{ list->next };

            list->next = new element;
            list->next->i = a;
            list->next->next = tmp;
        }
    }

}

void deleteList(element* uselessList)
{
    element* tmp{ uselessList };

    while (uselessList->next != nullptr)
    {
        tmp = tmp->next;
        delete uselessList;
        uselessList = tmp;
    }
    delete tmp;

}


