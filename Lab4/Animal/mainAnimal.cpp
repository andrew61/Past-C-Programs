/*
Andrew West
3/31/14
Animal class
*/

//preprocessor
#include <iostream>
#include <string>

#include "headerAnimal.h"
#include "animal.cpp"

using namespace std;

//main method
int main() //driver
{
//variables
string name;
string breed;
int number;

//output
cout << "\nEnter the name of animal: ";
//input for name
cin >> name;
//output
cout << "\nEnter the breed of animal: ";
//input for breed
cin >> breed;
//output
cout << "\nEnter number of" << breed << " : ";
//input for number
cin >> number;
//creates student named one with name, breed, and number
Animal one(name, breed, number);
//output for animal object
cout << "\n" << one.getName();
cout << "\n" << one.getBreed();
cout << "\n" << one.getNumber();

return 0;

}
