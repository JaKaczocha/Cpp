#pragma once

#include <string>

class post
{
public:
	post();
	post(std::string sender, std::string reciver, std::string title, std::string content);
	void print();
	void input();

private:

	std::string sender, reciver, title, content;
};

