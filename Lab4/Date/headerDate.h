//date header

#include <iostream>
#include <string>

using namespace std;

#ifndef headerDate_H
#define headerDate_H

class Date
{

public:
//contructor
Date()
{

}
//overload
Date(int year, int month, int day)
{
newYear = year;
newMonth = month;
newDay = day;

setYear(year);
setMonth(month);
setDay(day);
}
//function setYear
void setYear(int a)
{
newYear = a;

if((a % 4 == 0) && !(a % 100 == 0) || (a % 400 == 0))
{
cout << "\nIt is a leap year\n";
}
else
{
cout << "\nIt is not a leap year\n";
}
}
//function getYear
int getYear()
{
return newYear;
}
//function setMonth
void setMonth(int b)
{
newMonth = b;

while(b < 1 || b > 12)
{
cout << "\nEnter month between 1 and 12";
newMonth = 1;
break;
}

switch(b)
{
case 2: cout << "Month has between 1 and 28/29 days";
break;
case 4 : cout << "Month has between 1 and 30 days";
break;
case 6 : cout << "Month has between 1 and 30 days";
break;
case 9 : cout << "Month has between 1 and 30 days";
break;
case 11 : cout << "Month has between 1 and 30 days";
break;
default :
cout << "Month has between 1 and 31 days";
}

}
//function getMonth
int getMonth()
{
return newMonth;
}
//function setDay
void setDay(int c)
{
newDay = c;

while(c < 1 || c > 31)
{
cout << "\nEnter day between 1 and 31";
newDay = 1;
break;
}
}
//function getDay
int getDay()
{
return newDay;
}

private:
//member variables

int newYear;
int newMonth;
int newDay;


};

#endif
