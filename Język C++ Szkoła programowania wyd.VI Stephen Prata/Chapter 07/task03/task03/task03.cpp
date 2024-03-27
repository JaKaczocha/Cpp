#include <iostream>
#include <cstring>

struct pudlo
{
    char producent[40];
    float wysokosc;
    float dlugosc;
    float szerokosc;
    float objetosc;
};

void pokazParametry(pudlo);
void ustawObjetosc(pudlo*);
int main()
{
    pudlo mojePudlo;
    std::string producent = "kerfur";
    strcpy_s(mojePudlo.producent ,producent.c_str());
    mojePudlo.dlugosc = 2;
    mojePudlo.wysokosc = 3;
    mojePudlo.szerokosc = 4;

    ustawObjetosc(&mojePudlo);
    pokazParametry(mojePudlo);

}

void pokazParametry(pudlo object)
{
    std::cout << "producent: " << object.producent << '\n' << "wysokosc: " << object.wysokosc << "  dlugosc: " << object.dlugosc
        << "  szerokosc: " << object.szerokosc << "  objetosc: " << object.objetosc << std::endl;
}
void ustawObjetosc(pudlo* object)
{
    (*object).objetosc = object->dlugosc * object->szerokosc * object->wysokosc;
}


