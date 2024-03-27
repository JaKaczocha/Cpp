//arrobj.cpp -- funkcje z obiektami typu array (C++11)
#include <iostream>

#include <string>

// dane stałe
const int SEASONS = 4;
const char * Snames[SEASONS] =
{ "Wiosna", "Lato", "Jesień", "Zima" };

// funkcja modyfikująca tablicę typu array
void fill( double pa[4]);

// funkcja przetwarzająca tablicę typu array bez ingerencji w jej zawartość
void show(const double da[4]);

int main()
{
    double expenses[SEASONS];
    
    fill(&expenses[0]);
    show(expenses);
    return 0;
}

void fill(double pa[SEASONS])
{
    using namespace std;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
        cin >> pa[i];
    }
}
void show(const double da[SEASONS])
{
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for (int i = 0; i < SEASONS; i++)
    {
        cout << Snames[i] << ": " << da[i] << " zł" << endl;
        total += da[i];
    }
    cout << "Łącznie wydatki roczne: " << total << " zł " << endl;
}
