#pragma once
#include <string>
class RachunekBankowy
{
public:
	RachunekBankowy(std::string nazwisko, std::string numerKonta, long double saldo = 0);

	void showInfo();
	void add(long double cash);
	void take(long double cash);
private:
	long double saldo;
	std::string nazwisko, numerKonta;

};

