
#include <iostream>
//include lots of files just in case
#include "BankAccount.h"
#include "BankAccount.cpp"
#include "SavingsAccount.h"
#include "SavingsAccount.cpp"
#include "CheckingAccount.cpp"
#include "CheckingAccount.h"

using namespace std;

int main() {
//variable for input
double amt;

  BankAccount b(500);
  cout << "The bank account was opened with a balance of $" << b.getBalance() << endl;
  b.deposit(50);
  cout << "The bank account now has a balance of $" << b.getBalance() << endl;
  b.withdraw(150);
  cout << "The bank account now has a balance of $" << b.getBalance() << endl;  

//output
 cout << "\nEnter an amount: ";
//input amount
 cin >> amt;
//new object
 SavingsAccount s(amt);
//show balance
 cout << s.getBalance() << endl;
//add some interest to balance yay more money
 s.getInterest(amt);
//show how much money u got now
 cout << s.getBalance() << endl;

//output
 cout << "\nEnter an amount: ";
//input amount
 cin >> amt;
//new object
 CheckingAccount c(amt);
//show balance
 cout << c.getBalance() << endl;
//charge your blance no! less money
 c.getCharge(amt);
//show how much less money ur account has :(
 cout << c.getBalance() << endl;

  return 0;

}

