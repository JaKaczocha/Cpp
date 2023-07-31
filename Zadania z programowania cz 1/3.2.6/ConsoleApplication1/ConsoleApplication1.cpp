#include <iostream>

void apply(int n, int* ptr);

int main()
{
    int a;
    apply(-100, &a);

    std::cout << a;

}

void apply(int n, int* ptr)
{
    *ptr = n;
}
