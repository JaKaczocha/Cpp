#include <iostream>

void cprCoDrugie(char tab1[], char tab2[]);

int main()
{
    constexpr int N{ 100 };
    char tablica1[N]{ "abba ojcze" };

    char tablica2[N];

    cprCoDrugie(tablica1, tablica2);

    std::cout << tablica2;

}

void cprCoDrugie(char tab1[], char tab2[])
{
    int i = 0;
    while (tab2[i] = tab1[i])
    {
        i++;
    }
}

