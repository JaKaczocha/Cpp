#include <iostream>

inline int counter();

int main()
{
    for (int i = 2; i < 124593; i *= 2)
    {
        counter();
    }
}

inline int counter()
{
    static int count;
    std::cout << (++count) << std::endl;
    return count;
}
