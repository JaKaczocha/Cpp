#include <iostream>
#include "Stack.h"

int main()
{
    double allPayment = 0;
    customer one{ "Jakub",36 };
    customer two{ "trycztery",444333 };
    customer three{ "kaczocha", 193 };
    Stack newStack;

    newStack.push(one);
    newStack.push(two);
    newStack.push(three);

    while (!newStack.isempty())
    {
        allPayment += newStack.getItem().payment;
        newStack.pop();
        std::cout << allPayment << std::endl;

    }
}

