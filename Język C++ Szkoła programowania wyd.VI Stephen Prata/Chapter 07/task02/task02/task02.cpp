#include <iostream>

void inputResult(int array[], int size);
void showResult(const int array[], int size, double average);
double averageResult(int array[], int size);

int main()
{
	const int SIZE = 10;
	int array[SIZE];
	inputResult(&array[0], SIZE);
	double average = averageResult(&array[0], SIZE);
	showResult(&array[0], SIZE, average);


}

void inputResult(int array[],int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter result number " << i + 1 << ": ";
		std::cin >> array[i];
		if (array[i] < 0)
		{
			break;
		}
	}
}

double averageResult(int array[], int size)
{
	double average = 0;
	int i = 0;
	for (; i < size && array[i] >= 0; i++)
	{
		average += array[i];
	}
	return average /= i;


}
void showResult(const int array[], int size, double average)
{
	std::cout << "Results: ";
	for (int i = 0; i < size && array[i] >= 0; i++)
	{
		std::cout << " " << array[i];
	}
	std::cout << std::endl;
	std::cout << "Average: " << average << std::endl;

}



