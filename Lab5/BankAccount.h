
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>

class BankAccount {

  public:
    BankAccount( double = 0 );
    void deposit ( double );
    void withdraw ( double );
    double getBalance ();

//  private:
    double balance;
	
};


#endif

