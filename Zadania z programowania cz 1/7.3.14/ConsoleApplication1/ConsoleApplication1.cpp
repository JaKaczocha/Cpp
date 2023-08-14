#include <iostream>

struct element
{
    int i;
    element* next;
};

void add(element* list,element* target, int a);
void deleteList(element* uselessList);

int main()
{
    element* head{ new element };

    head->next = new element;
    head->next->i = 5;
    head->next->next = nullptr;

    element* ele{ new element };

    add(head, head ,999);
    std::cout << head->next->next->i;

    deleteList(head);
}

void add(element* list, element* target, int a )
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