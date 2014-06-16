/*
Andrew West
3/15/14
lab 5 question 15.6
*/

//preprocessor
#include <iostream>

//so you don't have to use std cout
using namespace std;
//funtion prototypes
int tripleByValue(int);
void tripleByReference(int& tripleRef);

//main method
int main()
{
//variable
int count;
cout << "\nEnter in a value: ";
cin >> count;
//print variable count
cout << "\ncount = " << count << " before triplebyvalue";
//print variable count multiplied by function tripleByValue
cout << "\nTriple By Value: " << tripleByValue(count) << "\n";
//multiple count by tripleByReference function
tripleByReference(count);
//print count
cout << "Triple By Reference: " << count << "\n";
}
//tripleByValue function
int tripleByValue(int tripleNum)
{
return tripleNum *= 3;
}
//tripleByReference function
void tripleByReference(int& tripleRef)
{
tripleRef = 3*tripleRef;
}
