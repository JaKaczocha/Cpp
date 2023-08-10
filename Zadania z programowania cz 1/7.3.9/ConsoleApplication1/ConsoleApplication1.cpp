#include <iostream>

struct element
{
    int i;
    element* next;
};

element* deleteEleNext(element* list, element* ele);

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

    tmp = deleteEleNext(a, a->next);

    std::cout << std::endl << (tmp != nullptr ? 1 : 0) << '\n';




    while (tmp != nullptr)
    {
        element* nextTmp = tmp->next;
        std::cout << tmp->i << "   ";
        delete tmp;
        tmp = nextTmp;
    }

}

element* deleteEleNext(element* list, element* ele)
{
    element* tmp{ list };

    if (ele == NULL || ele == nullptr)
    {
        tmp = tmp->next;
        delete list;
        return tmp;
    }

    while (tmp != ele)
    {
        tmp = tmp->next;
    }

    if (tmp->next == nullptr || tmp->next == NULL)
    {
        return list;
    }
    else
    {
        element* tmp2 = tmp->next;
        tmp->next = tmp->next->next;

        delete tmp2;
        return list;
    }

}//null = delete first else delete ele->next
