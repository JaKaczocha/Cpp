#include <iostream>
#include <string.h>

void copy(char* str, char** strPtr);
void copy(wchar_t* str, wchar_t** strPtr);

int main()
{
    wchar_t abc[]{ L"monkeys eats tree" };
    wchar_t* pp;
    
    copy(abc, &pp);
    std::wcout << pp;

    delete[] pp;
    pp = nullptr;
}

void copy(char* str, char** strPtr)
{
    int size = 0;
    for (; str[size] != '\0'; size++);
    size++;
    char* array{ new char[size] };

    strcpy_s(array, sizeof(char) * size, str);

    *strPtr = array;
}

void copy(wchar_t* str,wchar_t** strPtr)
{
    int size = 0;
    for (; str[size] != '\0'; size++);
    size++;
    wchar_t* array{ new wchar_t[size] };
    
    wcscpy_s(array,  size, str);

    *strPtr = array;
}


