#include <iostream>
#include "book.hpp"

void print(book book1)
{
    std::cout << "author: " << book1.author << std::endl;
    std::cout << "publisher: " << book1.publisher << std::endl;
    std::cout << "title: " << book1.title << std::endl;
}

void input(book& book1)
{
    
 

    std::cout << "enter author of the book: ";
    std::getline(std::cin, book1.author);
    std::cout << "enter book publisher: ";
    std::getline(std::cin, book1.publisher);
    std::cout << "enter title: ";
    std::getline(std::cin, book1.title);
}
int main()
{
    book book1;
    input(book1);
    print(book1);
}

