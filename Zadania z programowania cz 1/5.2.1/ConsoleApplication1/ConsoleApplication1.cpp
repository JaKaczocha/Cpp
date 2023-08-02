#include <iostream>

void clear(char str[]);
void clear(wchar_t str[]);

int main()
{
    std::cout << "Hello World!\n";
}


void clear(char str[])
{
    str[0] = '\0';
}
void clear(wchar_t str[])
{ 
    str[0] = L'\0';    
}

