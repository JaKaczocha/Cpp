#include <iostream>
#include <cwchar>

void copyN(char dest[], const char src[], unsigned int n);
void copyN(wchar_t dest[], const wchar_t src[], unsigned int n);

int main()
{
    char arr1[8];
    char arr2[]{ 'a','b','g','\0' };

    copyN(arr1, arr2, 7);
    std::cout << arr2;
}

void copyN(char dest[], const char src[], unsigned int n)
{
    strncpy_s(dest, n, src, n);
}

void copyN(wchar_t dest[], const wchar_t src[], unsigned int n)
{
    wcsncpy_s(dest, n, src, n);
}


