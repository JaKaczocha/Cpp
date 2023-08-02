#include <iostream>

void cpyStr(wchar_t dest[], const wchar_t src[]); 
void cpyStr(char dest[], const char src[]);

int main()
{
        
}

void cpyStr(wchar_t dest[], const wchar_t src[])
{
    for (int i = 0; src[i] != L'\0'; i++)
    {
        dest[i] = src[i];
    }
}

void cpyStr(char dest[], const char src[])
{
    for (int i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
}




