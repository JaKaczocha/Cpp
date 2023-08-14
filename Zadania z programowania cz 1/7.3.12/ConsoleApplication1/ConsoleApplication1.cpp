#include <iostream>

struct element
{
    int i;
    element* next;
};

void add(element* list, int a);
void deleteList(element* uselessList);

int main()
{
    element* head{ new element };

    head->next = new element;
    head->next->i = 5;
    head->next->next = nullptr;

    element* ele{ new element };

    add(head, 999);
    std::cout << head->next->i;
    
    deleteList(head);
}

void add(element* list, int a)
{
    element* ele{ new element };

    ele->i = a;
    if (list->next != nullptr)
    {

        ele->next = list->next;       
        list->next = ele;
    }
    else
    {
        ele->next = nullptr;
        list->next = ele;
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