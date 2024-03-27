#include <iostream>

long double probability(unsigned numbers, unsigned picks, unsigned totalExtra);

int main()
{
    using namespace std;
    double total, choices, totalExtra;
    cout << "Podaj najwieksza liczbe, jaka mozna wybrac, "
        "liczbe skreslen oraz liczbe extra piłek:\n";

    while ((cin >> total >> choices >> totalExtra) && choices <= total)
    {
        cout << "Szansa wygranej to jeden do ";
        cout << probability(total, choices, totalExtra);
        cout << " .\n";
        cout << "Nastepne trzy liczby (q, aby zakonczyc): ";
    }

    cout << "do widzenia\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned totalExtra)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result = result * n / p;
    }
    result *= (double)totalExtra;

    return result;
}

