#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

struct stringy
{
	char* str;
	int ct;
};

void set(stringy& str, char* cStyle);

void show(const stringy& source, int counter = 1);
void show(const char * source, int counter = 1);

int main()
{
	stringy beany;
	char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";


	set(beany, testing);

	show(beany);
	show(beany,2);

	testing[0] = 'D';
	testing[1] = 'u';

	show(testing);

	show(testing, 3);

	show("Gotowe!");

	

	return 0;
}


void set(stringy& thisStr, char* cStyle)
{
	thisStr.ct = strlen(cStyle);

	thisStr.str = new char[thisStr.ct];
	strcpy(thisStr.str, cStyle);

}
void show(const stringy& source, int counter)
{
	for (int i = 0; i < counter; i++)
	{
		std::cout << source.str << std::endl;
	}
}
void show(const char* source, int counter)
{
	for (int i = 0; i < counter; i++)
	{
		std::cout << source << std::endl;
	}
}