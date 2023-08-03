#include <iostream>
#include <cwchar>

char* firstString(char** strings, int size);
wchar_t* firstString(wchar_t** strings, int size);

int main()
{
    constexpr int size{ 3 }, sizeS{ 8 };

    char** array{ new char*[size] };
    for (int i = 0; i < size; i++)
    {
        array[i] = new char[sizeS];
    }
    
    strcpy_s(array[1], sizeS * sizeof(decltype(array[0][0])), "jade");
    strcpy_s(array[0], sizeS * sizeof(decltype(array[0][0])), "aillian");
    strcpy_s(array[2], sizeS * sizeof(decltype(array[0][0])), "krzy¿");

    std::cout << firstString(array, size);
}


char* firstString(char** strings, int size)
{
    char* first{ strings[0] };

    for (int i = 1; i < size - 1; i++)
    {    
        if(std::strcmp(first, strings[i]) > 0)
        {
            first = strings[i];
        }
    }

    return first;
}

wchar_t* firstString(wchar_t** strings, int size)
{
    wchar_t* first{ strings[0] };

    for (int i = 1; i < size - 1; i++)
    {
        if (std::wcscmp(first, strings[i]) > 0)
        {
            first = strings[i];
        }
    }

    return first;
}


