/*
Andrew West
3/29/14
Date class
*/

//preprocessor
#include <iostream>
#include <string>

#include "headerDate.h"


using namespace std;

//main method
int main() //driver
{
//variables
int year;
int month;
int day;

//output
cout << "\nEnter the year: ";
//input
cin >> year;

//output
cout << "\nEnter the month: ";
//input
cin >> month;

//output
cout << "\nEnter the day: ";
//input
cin >> day;

//create object
Date one(year, month, day);
//output of input
cout << "\n" << one.getYear();
cout << "\n" << one.getMonth();
cout << "\n" << one.getDay();
cout << "\n";
return 0;

}
