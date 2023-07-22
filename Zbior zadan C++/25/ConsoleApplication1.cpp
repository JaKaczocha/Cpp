#include <iostream>
#include <string>


int main()
{

	std::string line;
	int a = 0,e = 0,i = 0,o = 0,u = 0,y = 0;
	std::cout << "enter line of text: ";
	std::getline(std::cin, line);

	for (int j = 0; j < line.length(); j++)
	{
		switch (line[j]) {
		case 'a':
			a++;
			break;
		case 'e':
			e++;
			break;
		case 'i':
			i++;
			break;
		case 'o':
			o++;
			break;
		case 'u':
			u++;
			break;
		case 'y':
			y++;
			break;
		}
	}
	std::cout << "a: " << a << "   e: " << e << "  i: " << i << "  o: " << o << "  u: " << u << "  y: " << y;



	//a, e, i, o, u lub y
}

