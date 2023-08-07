// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct student
{
    std::string lastName;
    std::string firstName;
    std::string studentCardID;
    std::string personalID;
    std::string studyField;
    std::string address;
};

void enterNewStudent(student* stu);

int main()
{
    
}

void enterNewStudent(student* stu)
{
    std::cout << "enter lastName: ";
    std::cin >> stu->lastName;
    std::cout << "enter firstName: ";
    std::cin >> stu->firstName;
    std::cout << "enter studentCardId: ";
    std::cin >> stu->studentCardID;
    std::cout << "enter personalId: ";
    std::cin >> stu->personalID;
    std::cout << "enter studyField: ";
    std::cin >> stu->studyField;
    std::cout << "enter address: ";
    std::cin >> stu->address;
}

