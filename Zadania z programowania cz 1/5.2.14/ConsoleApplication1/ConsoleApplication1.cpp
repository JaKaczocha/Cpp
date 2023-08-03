#include <iostream>

void print(char string[]);
void print(wchar_t string[]);

int main()
{
    wchar_t array[7]{ L"lambda" };
    print(array);
}

void print(char string[])
{
    std::cout << string;
}

void print(wchar_t string[])
{
    std::wcout << string;
}

