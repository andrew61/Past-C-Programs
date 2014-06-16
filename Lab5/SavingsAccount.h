/*
Andrew West
*/
#ifndef SavingsAccount_H
#define SavingsAccount_H
#include <string>

//derived class
class SavingsAccount: public BankAccount
{
public:
//constructor
	SavingsAccount(double);
	//function get interest adds some money to your balance
	void getInterest(double)
	{
		balance = balance + balance * 3/100;
	}
};


#endif

