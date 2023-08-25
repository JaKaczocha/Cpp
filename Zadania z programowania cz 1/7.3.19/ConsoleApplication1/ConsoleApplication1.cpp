#include <iostream>

struct element
{
    int i;
    element* next;
};

void deleteELAfter(element* list, element* a);
void deleteList(element* uselessList);
void add(element* list, element* target, int a);

int main()
{
    element* head{ new element };

    head->next = new element;
    head->next->i = 5;
    head->next->next = nullptr;


    add(head, head, 999);
    add(head, head->next, 39);
    add(head, head, 11119);
    add(head, head, 777);
    add(head, head, 178);

    deleteELAfter(head, head->next->next->next->next->next->next);

    const element* tmp{ head };
    while (tmp->next != nullptr)
    {
        std::cout << tmp->next->i << " ";
        tmp = tmp->next;
    }

    deleteList(head);

}

void deleteELAfter(element* list, element* a)
{

    while (list->next != nullptr)
    {
        if (list->next == a)
        {
            if (list->next->next == nullptr)
            {
                break;
            }
            if (list->next->next->next == nullptr)
            {
                delete list->next->next;
                list->next->next = nullptr;
                break;
            }
            else
            {
                element* tmp{ list->next->next };
                list->next = list->next->next->next;
                delete tmp;

                break;
            }
        }
        list = list->next;
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

