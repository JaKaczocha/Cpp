#include <iostream>


struct element {
    int i;
    element* next;
};

void deleteList(element* uselessList);

int main()
{
    element* head{ new element };

    head->next = new element;
    head->next->i = 6;
    head->next->next = new element;
    head->next->next->i = 11;
    head->next->next->next = nullptr;
 
    deleteList(head);

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