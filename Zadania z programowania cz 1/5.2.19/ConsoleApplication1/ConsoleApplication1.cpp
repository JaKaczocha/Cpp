#include <iostream>
#include <cwchar>

std::string firstString(std::string strings[], int size);
std::wstring firstString(std::wstring strings[], int size);

int main()
{
    std::string abc[2] {"apple", "pie"};
    std::cout << firstString(abc, 2);
}


std::string firstString(std::string strings[], int size)
{
    std::string first{ strings[0] };

    for (int i = 1; i < size - 1; i++)
    {
        if (first > strings[i])
        {
            first = strings[i];
        }
    }

    return first;
}

std::wstring firstString(std::wstring strings[], int size)
{
    std::wstring first{ strings[0] };

    for (int i = 1; i < size - 1; i++)
    {
        if (first > strings[i])
        {
            first = strings[i];
        }
    }

    return first;
}


