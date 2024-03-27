#include "sales.h"
#include <iostream>

void SALES::Sales::showSales()
{
	for (int i = 0; i < QUARTERS; i++)
	{
		std::cout << "sale number " << i + 1 <<  ": " << sales[i] << std::endl;
	}
	std::cout << "average: " << average << "   min: " << min << "   max : " << max << std::endl;
}

void SALES::Sales::setSales()
{
	double sales[QUARTERS];
	double min, max, average;
	for (int i = 0; i < QUARTERS; i++)
	{
		std::cout << "enter sale for " << i + 1 << " quater: ";
		std::cin >> sales[i];
	}
	
	
	average = min = max = sales[0];
	for (int i = 1; i < QUARTERS; i++)
	{
		average += sales[i];
		if (min > sales[i])
		{
			min = sales[i];
		}
		else if (max < sales[i])
		{
			max = sales[i];
		}
	}
	average /= QUARTERS;
	*this = Sales(sales, QUARTERS);
}

SALES::Sales::Sales(const double ar[], int n)
{
	

	
	average = min = max = ar[0];
	for (int i = 1; i < n; i++)
	{
		average += ar[i];
		if (min > ar[i])
		{
			min = ar[i];
		}
		else if (max < ar[i])
		{
			max = ar[i];
		}
	}
	average /= n;
}