#include <iostream>

void copy(char dest[], std::string src);
void copy(wchar_t dest[], std::wstring src);

int main()
{
    std::cout << "Hello World!\n";
}


void copy(char dest[], std::string src)
{
    for (int i = 0; i < src.length(); i++)
    {
        dest[i] = src[i];
    }
    dest[src.length()] = '\0';
}

void copy(wchar_t dest[], std::wstring src)
{
    for (int i = 0; i < src.length(); i++)
    {
        dest[i] = src[i];
    }
    dest[src.length()] = L'\0';
}

