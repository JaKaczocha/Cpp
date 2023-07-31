#include <iostream>

template<typename A,typename B, typename C>
auto mean(A a, B b, C c)
{
    return (a + b + c) / 3;
}

template<typename A, typename B>
auto mean(A a, B b)
{
    return (a + b) / 2;
}

int main()
{
    std::cout << "Hello World!\n";
}
