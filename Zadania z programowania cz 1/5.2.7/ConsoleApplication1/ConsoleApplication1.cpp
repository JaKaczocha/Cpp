// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void paste(const char src1[], const char src2[], char dest[]);
void paste(const wchar_t src1[], const wchar_t src2[], wchar_t dest[]);

int main()
{
    char dest[12];

    char src1[]{ 'a','m','h','\0'};
    char src2[]{ 'o','r','a','k','\0'};
    paste(src2, src1, dest);
    std::cout << dest;

}

void paste( const char src1[], const char src2[], char dest[])
{
    int i = 0;
    for (; src1[i] != '\0'; i++)
    {
        dest[i] = src1[i];
    }
    for (int j = 0; src2[j] != '\0'; j++, i++)
    {
        dest[i] = src2[j];
    }
    dest[i] = '\0';
}

void paste(const wchar_t src1[],const wchar_t src2[], wchar_t dest[])
{
    int i = 0;
    for (; src1[i] != L'\0'; i++)
    {
        dest[i] = src1[i];
    }
    for (int j = 0; src2[j] != L'\0'; j++, i++)
    {
        dest[i] = src2[j];
    }
    dest[i] = L'\0';
}
