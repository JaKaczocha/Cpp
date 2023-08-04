#include <iostream>

void upLetters(wchar_t str[]);
void upLetters(char str[]);

int main()
{
    wchar_t abc[]{ L"kaczocha" };
    upLetters(abc);
    std::wcout << abc;
}

void upLetters(wchar_t str[])
{
    for (int i = 0; str[i] != L'\0'; i++)
    {
        str[i] = std::toupper(str[i]);
    }
}

void upLetters(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = std::toupper(str[i]);
    }
}
