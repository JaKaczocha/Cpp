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

/*3.2.2 (r) Napisz funkcj� otrzymuj�c� jako argumenty wska�niki do dw�ch
zmiennych typu int, kt�ra zwraca jako warto�� wska�nik na zmienn�
przechowuj�c� mniejsz� z liczb wskazywanych przez argumenty*/
