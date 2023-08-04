#include <iostream>
#include <string>
#include <string.h>
char* time(int seconds, int minutes, int hours);
wchar_t* time(int seconds, int minutes, int hours, int /*wide*/);

int main()
{
    constexpr int size{ 10 };
    wchar_t array[size ];
    wcscpy_s(array,size , time(3, 5, 1,0));
    std::wcout << array;
}

char* time(int seconds, int minutes, int hours)
{
    std::string str;
    if (seconds < 10)
    {
        str += '0';
    }
    str += std::to_string(seconds);
    str += ':';
    if (minutes < 10)
    {
        str += '0';
    }
    str += std::to_string(minutes);
    str += ':';
    if (hours < 10)
    {
        str += '0';
    }
    str += std::to_string(hours);
    
    
    constexpr int size{ 9 };
    char arr[size];

    for (int i = 0; i < size && i < str.length(); i++)
    {
        arr[i] = str[i];
    }
    arr[str.length()] = '\0';

    return arr;
}

wchar_t* time(int seconds, int minutes, int hours, int /*wide*/)
{
    std::wstring str;
    if (seconds < 10)
    {
        str += L'0';
    }
    str += std::to_wstring(seconds);
    str += L':';
    if (minutes < 10)
    {
        str += L'0';
    }
    str += std::to_wstring(minutes);
    str += L':';
    if (hours < 10)
    {
        str += L'0';
    }
    str += std::to_wstring(hours);


    constexpr int size{ 9 };
    wchar_t arr[size];

    for (int i = 0; i < size && i < str.length(); i++)
    {
        arr[i] = str[i];
    }
    arr[str.length()] = L'\0';

    return arr;
}
