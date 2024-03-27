#include <iostream>

struct Batonik
{
	std::string marka;
	double waga;
	int kalorie;
};

void ustaw(Batonik &, const char* marka = "Milki way", double waga = 2.85, int kalorie = 350);
void poka¿(Batonik& baton);

int main()
{
	Batonik baton;

	ustaw(baton);
	poka¿(baton);
	
}

void ustaw(Batonik& baton, const char* marka, double waga, int kalorie)
{
	baton.marka = marka;
	baton.waga = waga;
	baton.kalorie = kalorie;
}

void poka¿(Batonik& baton)
{
	std::cout << "Marka: " << baton.marka << std::endl;
	std::cout << "Kalorie: " << baton.kalorie << std::endl;
	std::cout << "Waga: " << baton.waga << std::endl;
}