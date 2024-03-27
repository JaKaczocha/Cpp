#include <iostream>

int main()
{
    int ilosc = 2;

    for (char znak = 'A'; znak <= 'Z'; )
    {
        
        for (int i = 0; i < ilosc; i++) {
            std::cout << znak++;
            if (znak > 'Z') {
                break;
            }
        }
        std::cout << std::endl;

        if (znak == 'I') {
            std::cout << "podaj ilosc znaków w rzędzie: ";
            std::cin >> ilosc;
        }
    }
}


