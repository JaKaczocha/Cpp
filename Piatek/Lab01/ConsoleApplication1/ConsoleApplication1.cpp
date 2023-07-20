// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

void task1();
void task2();
void task3();
void task4();
void task5();

void set(int array[], int size);
void print(int array[], int size);

struct sTask3
{
    int a, b, sum, product;
    float average;
};

void load(sTask3* stut);
void calc(sTask3* stut);
void print(const sTask3 stut);

int main()
{
    task1();
    task2();
    task3();
    task4();
    task5();
}

void task1()
{
    std::cout << "task1:\n";
    float average = 0;
    int a;
    std::cout << "enter 3 numbers: ";
    for (int i = 0; i < 3; i++)
    {
        std::cin >> a;
        average += a;
    }
    average /= 3.0;

    std::cout << "average: " << average << std::endl;
    std::cout << "enter sentence: ";
    std::cin.get();

    std::string line;
    getline(std::cin, line);
    std::cout << "length: " << line.length() << std::endl;

    for (int i = 1; i <= 1000; i++)
    {
        std::cout << std::setw(4) << i << std::endl;
    }
}

void set(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = 10 + 5 * i;
    }
}

void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void task2()
{
    std::cout << "\n\ntask2:\n";
    constexpr int size = 100;
    int array[size] { 0 };
    set(array, size);
    print(array, size);

}
void task3()
{
    std::cout << "\n\ntask3:\n";
    sTask3 stut;
    load(&stut);
    calc(&stut);
    print(stut);
}
void load(sTask3* stut)
{
    std::cout << "a: ";
    std::cin >> (*stut).a;
    std::cout << "b: ";
    std::cin >> (*stut).b;
    std::cin.get();
}
void calc(sTask3* stut)
{
    stut->average = (stut->a + stut->b) / 2.0;
    stut->product = stut->a * stut->b;
    stut->sum = stut->a + stut->b;
}
void print(const sTask3 stut)
{
    std::cout << "product: " << stut.product << "\n";
    std::cout << "average: " << stut.average << "\n";
    std::cout << "sum: " << stut.sum << "\n";
}

void task4()
{
    std::cout << "\n\ntask4:\n";
    int array[16][16]{ 0 };
    for (int i = 1; i < 8; i++)
    {
        for (int j = 0 + i; j < 16 - i; j++)
        {
            for (int k = 0 + i; k < 16 - i; k++)
            {
                array[j][k]++;
            }
        }
    }

    for (int j = 0; j < 16 ; j++)
    {
        for (int k = 0; k < 16 ; k++)
        {
            std::cout << array[j][k]<< " ";
        }
        std::cout << std::endl;
    }
}

void task5()
{
    std::cout << "\n\ntask5:\n";
    std::string line;
    std::cout << "enter sentence: ";
    

    getline(std::cin, line);

    std::cout << line.length() << std::endl;
    
    for (int i = 0; i < line.length(); i++)
    {
        if (isdigit(line[i]))
        {
            std::cout << line[i];
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < line.length(); i++)
    {
        if (!isdigit(line[i]))
        {
            std::cout << line[i];
        }
    }
   
}