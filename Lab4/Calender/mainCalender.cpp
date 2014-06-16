/*
Andrew West
3/31/14
Calender class
*/

//preprocessor
#include <iostream>
#include <string>

#include "headerCalender.h"
#include "calender.cpp"

using namespace std;

//main method
int main() //driver
{
//variables
int year;
string month;
int day;

cout << "\nEnter the year: ";
cin >> year;

cout << "\nEnter the month: ";
cin >> month;

cout << "\nEnter the day: ";
cin >> day;

Calender one(year, month, day);

cout << "\n" << one.getYear();
cout << "\n" << one.getMonth();
cout << "\n" << one.getDay();
cout << "\n";
return 0;

}
