//Calender header

#include <iostream>
#include <string>

using namespace std;

#ifndef headerCalender_H
#define headerCalender_H

class Calender
{

public:

Calender();

Calender(int, string, int);

void setYear(int a)
{
newYear = a;
}
int getYear()
{
return newYear;
}

void setMonth(string b)
{
newMonth = b;

}
string getMonth()
{
return newMonth;
}

void setDay(int c)
{
newDay = c;

if(c < 1 || c > 31)
{
cout << "\nEnter day between 1 and 31";
newDay = 1;

}
}
int getDay()
{
return newDay;
}

private:
//member variables

int newYear;
string newMonth;
int newDay;


};

#endif
