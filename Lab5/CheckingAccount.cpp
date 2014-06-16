/*
Andrew West
*/
#include <iostream>
#include "BankAccount.h"
#include "CheckingAccount.h"

using namespace std;
//overload constructor also get amt from bankaccount
   	CheckingAccount::CheckingAccount(double amt)
	: BankAccount(amt)
	{
		balance = amt;
	}
