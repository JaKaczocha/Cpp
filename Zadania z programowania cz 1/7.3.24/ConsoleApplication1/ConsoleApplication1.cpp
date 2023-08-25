#include <iostream>

struct element
{
    int i;
    element* next;
};

int sumL(element* List);
int sumHead(element* List);

int main()
{

}

int sumL(element* List)
{
    int sum{ 0 };
    while (List != nullptr)
    {
        sum += List->i;
        List = List->next;
    }
    return sum;
}

int sumHead(element* List)
{
    int sum{ 0 };
    List = List->next;
    while (List != nullptr)
    {
        sum += List->i;
        List = List->next;
    }
    return sum;
}
