#include <iostream>

struct element
{
    int i;
    element* next;
};

element* findEleBefore(element* list, int a);
void deleteList(element* uselessList);

int main()
{
    element* list{ new element };
    list->next = new element;
    list->next->i = 5;
    list->next->next = new element;
    list->next->next->i = 24;
    list->next->next->next = new element;
    list->next->next->next->i = 125;
    list->next->next->next->next = nullptr;

    std::cout << findEleBefore(list, 244)->i;

    deleteList(list);
}

element* findEleBefore(element* list, int a)
{
    while (list->next != nullptr)
    {
        if (list->next->i == a)
        {
            return list;
        }
        list = list->next;
    }
    return list;
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