#include <iostream>
#include <string>

const char* const scan(char array[]);
const wchar_t* const scan(wchar_t array[]);

int main()
{
    std::cout << "enter word: ";
    wchar_t abc[10];
    std::wcout << scan(abc);
    
}

const char* const scan(char array[])
{
    std::cin >> array;
    return array;
}
const wchar_t* const scan(wchar_t array[])
{
    std::wcin >> array;
    return array;
}


