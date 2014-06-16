/*
Andrew West
*/
#include <iostream>
#include "BankAccount.h"
#include "SavingsAccount.h"

using namespace std;

//overload constructor also gets amt from bankaccount
	SavingsAccount::SavingsAccount(double amt)
	: BankAccount(amt)
	{
		balance = amt;
	}


