#include <iostream>

int main()
{
   
	std::string str;
	bool isPoli = true;
	std::cout << "enter word: ";
	std::cin >> str;

	for (int i = 0; i < str.length() / 2; i++)
	{
		if (str[i] != str[str.length() - i - 1]) {
			isPoli = false;
			break;
		}
	}
	
	std::cout << "palindrome: " << (isPoli ? "true":"false");
	


	

}

