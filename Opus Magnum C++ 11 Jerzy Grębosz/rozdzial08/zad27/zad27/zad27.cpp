#include <iostream>

void sklej(char docelowy[], int rozmiar,char zrodlowy[]);

int main()
{
    char doc[40]{ "kasia i basia" };
    char zr[30]{ " maja dwa placki cz" };
    sklej(doc, 40, zr);
    std::cout << doc << std::endl;
}

void sklej(char docelowy[],int rozmiar, char zrodlowy[])
{
    int i = 0;
    for (; docelowy[i] != '\0'; i++);
    for (int j = 0; i < rozmiar; j++, i++)
    {
        docelowy[i] = zrodlowy[j];
        if (zrodlowy[j] == '\0')
        {
            break;
        }
    }
    docelowy[rozmiar - 1] = '\0';

}

