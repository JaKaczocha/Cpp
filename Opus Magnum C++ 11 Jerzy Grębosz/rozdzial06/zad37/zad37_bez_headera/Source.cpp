#include <iostream>

inline auto wieksza(int i, int j) -> decltype(i) { return i > j ? i : j; }

void druga()
{
	std::cout << wieksza(20, 44) << std::endl;
}

