#include "book.hpp"
#include <iostream>

void book::print()
{
    std::cout << "author: " << author << std::endl;
    std::cout << "publisher: " << publisher << std::endl;
    std::cout << "title: " << title << std::endl;
}

void book::input()
{

    std::cout << "enter author of the book: ";
    std::getline(std::cin, author);
    std::cout << "enter book publisher: ";
    std::getline(std::cin, publisher);
    std::cout << "enter title: ";
    std::getline(std::cin, title);
}