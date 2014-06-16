#include <iostream>
#include "BankAccount.h"
using namespace std;

    BankAccount::BankAccount( double amt ) {
      balance = amt;
    }
    void BankAccount::deposit ( double amt ) {
      balance += amt;
    }
    void BankAccount::withdraw ( double amt ) 
	{
      balance -= amt;
	  if(balance < 0)
	  {
	  cout << "Invalid withdrawal";
	  }
    }
	
    double BankAccount::getBalance () {
      return balance;
    }

