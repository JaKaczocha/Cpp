#include <iostream>

const int MAX = 5;

int fill_array(double ar[], double *);
void show_array(const double ar[], double *);
void revalue(double r, double ar[], double*);

int main()
{
    using namespace std;
    double properties[MAX];
    int size = fill_array(properties, &properties[MAX]);
    show_array(properties, &properties[size]);
    if (size > 0)
    {
        cout << "Podaj czynnik zmiany wartosci: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Niepoprawna wartosc; podaj liczbe: ";
        }
        revalue(factor, properties, &properties[size]);
        show_array(properties, &properties[size]);
    }
    cout << "Gotowe. \n";
    cin.get();
    cin.get();

    return 0;
}

int fill_array(double ar[], double* end)
{
    using namespace std;
    double temp;
    double *i;
    int j = 0;
    for (i = &ar[0]; i != end; i++, j++)
    {
        cout << "Podaj wartosc nr " << (j + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get())
            {
                continue;
            }
            cout << "Bledne dane. Wprowadzanie danych przerwane!\n";
            break;
        }
        else if (temp < 0)
        {
            break;
        }
        *i = temp;
    }
    return j;
}

void show_array(const double ar[], double *end)
{
    using namespace std;
    for (int i = 0; &ar[i] != end ; i++)
    {
        cout << "Nieruchomosc nr " << i + 1 << ": ";
        cout << ar[i] << endl;
    }
}
void revalue(double r, double ar[], double* end)
{
    for (int i = 0; &ar[i] != end; i++)
    {
        ar[i] *= r;
    }
}





