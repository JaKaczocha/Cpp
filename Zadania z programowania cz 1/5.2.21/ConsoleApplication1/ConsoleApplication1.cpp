#include <iostream>
#include <string>
#include <string.h>
std::string time(int seconds, int minutes, int hours);
std::wstring time(int seconds, int minutes, int hours, int /*wide*/);

int main()
{
    constexpr int size{ 10 };
    wchar_t array[size];
    
    std::wcout << time(3, 5, 1, 0);
}

std::string time(int seconds, int minutes, int hours)
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

    return str;
}

std::wstring time(int seconds, int minutes, int hours, int /*wide*/)
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

    return str;
}

