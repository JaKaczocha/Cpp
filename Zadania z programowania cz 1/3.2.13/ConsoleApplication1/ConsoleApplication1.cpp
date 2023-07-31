#include <iostream>

double halfCut(int number);
double useFun(double(*fun)(int), int b);

int main()
{
    std::cout << useFun(halfCut, 9);
}

double halfCut(int number)
{
    return number / 2.0;
}
double useFun(double(*fun)(int), int b)
{
    return fun(b);
}

