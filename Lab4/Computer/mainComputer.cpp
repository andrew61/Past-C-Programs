/*
Andrew West
3/31/14
Computer class
*/

//preprocessor
#include <iostream>
#include <string>

#include "headerComputer.h"
#include "computer.cpp"

using namespace std;

//main method
int main() //driver
{
//variables
string brand;
string type;
int benchmark;

//output
cout << "\nEnter the brand: ";
//input for brand
cin >> brand;
//output
cout << "\nEnter the type: ";
//input for type
cin >> type;
//output
cout << "\nEnter benchmark score: ";
//input for benchmark
cin >> benchmark;
//creates student named one with name, breed, and number
Computer one(brand, type, benchmark);
//output for student one name and id user defined
cout << "\n" << one.getBrand();
cout << "\n" << one.getType();
cout << "\n" << one.getBenchmark();
cout << "\n";



return 0;

}
