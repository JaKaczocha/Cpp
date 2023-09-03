#pragma once

#include <string>

class post
{
public:
	post();
	post(std::string sender, std::string reciver, std::string title, std::string content);
	friend void print(post mail), input(post& mail);

private:

	std::string sender, reciver, title, content;
};

