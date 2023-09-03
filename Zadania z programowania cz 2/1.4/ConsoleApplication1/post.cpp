#include "post.hpp"

#include <iostream>

post::post()
{
}

post::post(std::string sender, std::string reciver, std::string title, std::string content) :
    sender(sender), reciver(reciver), title(title), content(content)
{
}

void post::print()
{
    std::cout << "sender: " << sender << std::endl;
    std::cout << "reciver: " << reciver << std::endl;
    std::cout << "title: " << title << std::endl;
    std::cout << "content: " << content << std::endl;
}

void post::input()
{
    std::cout << "enter reciver: ";
    std::getline(std::cin, reciver);
    std::cout << "enter sender: ";
    std::getline(std::cin, sender);
    std::cout << "enter title: ";
    std::getline(std::cin, title);
    std::cout << "enter content: ";
    std::getline(std::cin, content);
}