/*
Andrew West
3/31/14
Student class
*/

//preprocessor
#include <iostream>
#include <string>

#include "headerStudent.h"
#include "student.cpp"

using namespace std;

//main method
int main() //driver
{
//variables
string name;
int average;
string grade;


Student one(name, average, grade);

//output
cout << "\nEnter your name: ";
//input for name
cin >> name;
//
cout << one.getAverage();
//
cout << "\nEnter what you think your grade is: ";
cin >> grade;
//
//
cout <<  one.getName();
cout <<  one.getGrade();
cout << "\n";
return 0;

}
