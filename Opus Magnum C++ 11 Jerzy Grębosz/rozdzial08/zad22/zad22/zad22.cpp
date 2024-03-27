#include <iostream>


void rozbijZdanie(char zrodlo[], char parzyste[], char nieparzyste[]);

int main()
{
    char zrodlo[100] = { "ala ma kota a tomasz ma psa o imieniu pumba" };
    char parzyste[50];
    char nieparzyste[50];

    rozbijZdanie(zrodlo, parzyste, nieparzyste);

    std::cout << nieparzyste << std::endl;
    std::cout << parzyste << std::endl;
}

void rozbijZdanie(char zrodlo[], char parzyste[], char nieparzyste[])
{
    int parz = 0, nieparz = 0;
    for (int i = 0; zrodlo[i] != '\0'; )
    {   
        for (; zrodlo[i] != '\0'; nieparz++, i++)
        {
            nieparzyste[nieparz] = zrodlo[i];
            if (zrodlo[i] == ' ')
            {
                i++;
                break;
            }
        }
        nieparzyste[nieparz++] = ' ';


        for (; zrodlo[i] != '\0'; parz++, i++)
        {
            parzyste[parz] = zrodlo[i];
            if (zrodlo[i] == ' ')
            {
                i++;
                break;
            }
        }
        parzyste[parz++] = ' ';
        
        
    }

    parzyste[parz] = '\0';
    nieparzyste[nieparz] = '\0';
}
