#include <iostream>

inline int minVal(const int* const first, const int* const second);

int main()
{
    int a = 6, b = 9;
    int* aPtr{ &a }, * bPtr{ &b };

    std::cout << minVal(aPtr, bPtr);

}

inline int minVal(const int* const first,const int* const second)
{
    return *first > *second ? *first : *second;
}

