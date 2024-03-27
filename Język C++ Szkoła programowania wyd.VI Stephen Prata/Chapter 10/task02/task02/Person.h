#pragma once
#include <string>
class Person
{
public:
	Person() { lname = ""; fname[0] = '\0'; }; //#1
	Person(const std::string& ln, const char* fn = "HejTy"); //#2
	
	void show() const; // imie nazwisko
	void FormalShow() const; // nazwisko imie
private:
	static const int LIMIT = 256;
	std::string lname; // nazwisko
	char fname[LIMIT];  //imie

};

