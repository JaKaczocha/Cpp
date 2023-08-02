#include <iostream>

bool comp(const char str[], const char str2[]);
bool comp(const wchar_t str[], const wchar_t str2[]);

int main()
{
    std::cout << "Hello World!\n";
}


bool comp(const char str[], const char str2[])
{
    for (int i = 0; str[i] != '\0' && str2[i]!= '\0'; i++)
    {
        if (str[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}
bool comp(const wchar_t str[], const wchar_t str2[])
{
    for (int i = 0; str[i] != L'\0' && str2[i] != L'\0'; i++)
    {
        if (str[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}

