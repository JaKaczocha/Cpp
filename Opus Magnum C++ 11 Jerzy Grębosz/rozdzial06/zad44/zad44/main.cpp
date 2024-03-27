#include <iostream>
#include "Header.h"

int i;
char c;
double d;

int main()
{
	zmienNa6();
	zmienNa2();
	zmienNa3();
	return 1;
}

void zmienNa3()
{
	std::cout << i << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << j << std::endl;
	std::cout << ch << std::endl;
	std::cout << db << std::endl;

	i = 3;
	c = '3';
	ch = '3';
	d = 3;
	db = 3;
	j = 3;

	std::cout << i << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << j << std::endl;
	std::cout << ch << std::endl;
	std::cout << db << std::endl;


}