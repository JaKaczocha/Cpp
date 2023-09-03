#include "post.hpp"

#include <iostream>

post::post()
{
}

post::post(std::string sender, std::string reciver, std::string title, std::string content) :
	sender(sender), reciver(reciver), title(title), content(content)
{
}

void print(post mail)
{
    std::cout << "sender: " << mail.sender << std::endl;
    std::cout << "reciver: " << mail.reciver << std::endl;
    std::cout << "title: " << mail.title << std::endl;
    std::cout << "content: " << mail.content << std::endl;
}

void input(post& mail)
{
    std::cout << "enter reciver: ";
    std::getline(std::cin, mail.reciver);
    std::cout << "enter sender: ";
    std::getline(std::cin, mail.sender);
    std::cout << "enter title: ";
    std::getline(std::cin, mail.title);
    std::cout << "enter content: ";
    std::getline(std::cin, mail.content);
}