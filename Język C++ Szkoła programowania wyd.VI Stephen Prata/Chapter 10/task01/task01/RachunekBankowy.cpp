#include "RachunekBankowy.h"
#include <iostream>

RachunekBankowy::RachunekBankowy(std::string nazwisko, std::string numerKonta, long double saldo)
{
	this->nazwisko = nazwisko;
	this->numerKonta = numerKonta;
	this->saldo = saldo;
}

void RachunekBankowy::add(long double cash)
{
	this->saldo += cash;
}
void RachunekBankowy::take(long double cash)
{
	if (this->saldo > cash)
		this->saldo -= cash;
	else
		std::cout << "u dont have enought cash!!!" << std::endl;
		return;
}
void RachunekBankowy::showInfo()
{
	std::cout << "nazwisko: " << nazwisko << std::endl;
	std::cout << "numberKonta: " << numerKonta << std::endl;
	std::cout << "saldo: " << saldo << std::endl;
}