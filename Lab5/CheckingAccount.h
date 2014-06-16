/*
Andrew West
*/
#ifndef CheckingAccount_H
#define CheckingAccount_H
#include <string>
//derived class checking
class CheckingAccount: public BankAccount
{
public:
//constructor
	CheckingAccount(double);
//function get charge takes money from balance
	void getCharge(double)
	{
		balance = balance - balance * 2/100;
	}
};

#endif
