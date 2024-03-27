#pragma once
#include <iostream>

inline auto wieksza(int a, int b) -> decltype(a)
{
	return a > b ? a : b;
}

void druga();
