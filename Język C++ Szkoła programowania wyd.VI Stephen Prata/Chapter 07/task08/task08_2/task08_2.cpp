//arrobj.cpp -- funkcje z obiektami typu array (C++11)
#include <iostream>
#include <array>
#include <string>

// dane stałe
const int SEASONS = 4;
const char * Snames[4] =
{ "Wiosna", "Lato", "Jesień", "Zima" };

struct expenses
{
    std::array<double, SEASONS> array;
};
// funkcja modyfikująca tablicę typu array
void fill(expenses *);

// funkcja przetwarzająca tablicę typu array bez ingerencji w jej zawartość
void show(expenses);

int main()
{
    expenses object;
    fill(&object);
    show(object);
    
    return 0;
}

void fill(expenses* pa)
{   
    using namespace std;
    for (int i = 0; i < SEASONS; i++)
    {
        cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
        cin >> (*pa).array[i];
    }
}
void show(expenses da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for (int i = 0; i < SEASONS; i++)
    {
        cout << Snames[i] << ": " << da.array[i] << " zł" << endl;
        total += da.array[i];
    }
    cout << "Łącznie wydatki roczne: " << total << " zł " << endl;
}
