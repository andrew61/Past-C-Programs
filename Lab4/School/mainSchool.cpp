/*
Andrew West
3/31/14
School class
*/

//preprocessor
#include <iostream>
#include <string>

#include "headerSchool.h"
#include "school.cpp"

using namespace std;

//main method
int main() //driver
{
//variables
string name;
string state;
int nationalRanking;

//output
cout << "\nEnter name of school: ";
//input for name
cin >> name;
//output
cout << "\nEnter state of school: ";
//input for state
cin >> state;
//output
cout << "\nEnter national ranking of school: ";
//input for national ranking
cin >> nationalRanking;
//creates student named one with name, state, and nationalRanking
School one(name, state, nationalRanking);
//output for school object
cout << "\n" << one.getName();
cout << "\n" << one.getState();
cout << "\n" << one.getNational();




return 0;

}
