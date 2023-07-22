#include <iostream>
#include <string>
#include <cctype>

int main()
{
	float first, second;
	char op;
	bool next = true;
	while (next) {


		std::cout << "enter number: ";
		std::cin >> first;

		std::cout << "enter operator: ";
		std::cin >> op;

		std::cout << "enter second number: ";
		std::cin >> second;


		switch (op)
		{
		case '+':
			std::cout << first + second << " ";
			break;
		case '-':
			std::cout << first - second << " ";
			break;
		case '*':
			std::cout << first * second << " ";
			break;
		case'/':
			std::cout << first / second << " ";
			break;
		case '%':
			std::cout << static_cast<int>(first) % static_cast<int>(second) << " ";
			break;
		case'^':
			std::cout << pow(first, second) << " ";
			break;
		default:
			next = false;
			break;
		}

	}


}

