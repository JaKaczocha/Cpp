#include <iostream>
#include <string.h>

char* glue(char str1[], char str2[], char str3[]);
wchar_t* glue(wchar_t str1[], wchar_t str2[], wchar_t str3[]);

int main()
{
    wchar_t arr1[]{ L"kac   zka" };
    wchar_t arr2[]{ L" dzisadwaczka" };
    wchar_t arr3[]{ L"trzy promile" };

    std::wcout << glue(arr1, arr2, arr3);
}

char* glue(char str1[], char str2[], char str3[])
{
    int size1 = 0, size2 = 0, size3 = 0;
    
    for (; str1[size1] != '\0'; size1++);
    for (; str2[size2] != '\0'; size2++);
    for (; str1[size3] != '\0'; size3++);
    size1+=2;
    size2+=2;
    size3+=2;

    int newSize = size1 + size2 + size3 + 1;
    char* glued{ new char[newSize] };
    glued[0] = '\0';
    strcat_s(glued, newSize, str1);
    


    strcat_s(glued, newSize, str2);
    strcat_s(glued, newSize, str3);
    
    glued[newSize - 1] = '\0';

    return glued;
}

wchar_t* glue(wchar_t str1[], wchar_t str2[], wchar_t str3[])
{
    int size1 = 0, size2 = 0, size3 = 0;

    for (; str1[size1] != '\0'; size1++);
    for (; str2[size2] != '\0'; size2++);
    for (; str1[size3] != '\0'; size3++);
    size1 += 2;
    size2 += 2;
    size3 += 2;

    int newSize = size1 + size2 + size3 + 1;
    wchar_t* glued{ new wchar_t[newSize] };
    glued[0] = '\0';
    wcscat_s(glued, newSize, str1);



    wcscat_s(glued, newSize, str2);
    wcscat_s(glued, newSize, str3);

    glued[newSize - 1] = '\0';

    return glued;
}
