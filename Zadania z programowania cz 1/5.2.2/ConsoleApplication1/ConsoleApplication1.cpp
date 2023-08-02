#include <iostream>

unsigned int len(const char str[]);
unsigned int len(const wchar_t str[]);

int main()
{
    std::cout << "Hello World!\n";
}


unsigned int len(const char str[])
{
    for (int i = 0; true; i++)
    {
        if (str[i] == '\0')
        {
            return i;
        }
    }
}
unsigned int len(const wchar_t str[])
{
    for (int i = 0; true; i++)
    {
        if (str[i] == L'\0')
        {
            return i;
        }
    }
}

