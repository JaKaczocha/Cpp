#include <iostream>


bool sameResult(int(*A)(int), int(*B)(int), unsigned int a);

int main()
{
    std::cout << sameResult([](int res) -> int
        {return res;}, [](int res) -> int{ return res + 0.3 * res;}, 6) << "!!!";
}


bool sameResult(int(*A)(int), int(*B)(int), unsigned int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (A(i) != B(i))
        {
            return false;
        }
    }
    return true;
}

