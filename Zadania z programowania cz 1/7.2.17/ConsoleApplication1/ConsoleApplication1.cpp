#include <iostream>

enum class man
{
    heIsSingle,heIsMarried
};
enum class woman
{
    sheIsSingle, sheIsMarried
};

union human
{
    woman w;
    man m;
};

enum class sex
{
    woman,man
};
struct personalData
{
    std::string firstName;
    std::string lastName;
    human  status;
    sex sex;
};

void scan(personalData array[],const int size);

int main()
{
    constexpr int size{ 5 };
    personalData pd[size];
    scan(pd, size);
}

void scan(personalData array[], const int size)
{
    int choose;
    for (int i{ 0 }; i < size; i++)
    {
        std::cout << "enter name: ";
        std::cin >> array[i].firstName;
        std::cout << "enter last name: ";
        std::cin >> array[i].lastName;
        std::cout << "enter 0 if female or other number if male: ";
        std::cin >> choose;
        if (choose)
        {
            array[i].sex = sex::man;
        }
        else
        {
            array[i].sex = sex::woman;
        }
        std::cout << "enter 0 if single or other number if marriage: ";
        std::cin >> choose;
        if (choose)
        {
            if (array[i].sex == sex::woman)
            {
                array[i].status.w = woman::sheIsMarried;
            }
            else
            {
                array[i].status.m = man::heIsMarried;
            }
        }
        else
        {
            if (array[i].sex == sex::woman)
            {
                array[i].status.w = woman::sheIsSingle;
            }
            else
            {
                array[i].status.m = man::heIsSingle;
            }
        }
    }
}
