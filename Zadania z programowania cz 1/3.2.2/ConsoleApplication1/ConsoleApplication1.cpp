#include <iostream>

inline int* minVal(int* const first, int* const second);

int main()
{
    int a{ 6 }, b{ 3 };
    int* aPtr{ &a }, * bPtr{ &b };

    int* minPtr = minVal(aPtr, bPtr);
    std::cout << *minPtr;
}

inline  int* minVal(int* const first,int* const second)
{
    return *first < *second ? first : second;
}

/*3.2.2 (r) Napisz funkcjê otrzymuj¹c¹ jako argumenty wskaŸniki do dwóch
zmiennych typu int, która zwraca jako wartoœæ wskaŸnik na zmienn¹
przechowuj¹c¹ mniejsz¹ z liczb wskazywanych przez argumenty*/
