//student header
//function declarations


//preprocessor
#include <iostream>
#include <string>

using namespace std;

#ifndef headerStudent_H
#define headerStudent_H

//class Student
class Student
{

public:

//constructors
Student();
//overload
Student(string, int, string);

//function setName
void setName(string s)
{
newName = s;
}
//function getName
string getName()
{
return newName;
}
//
void setAverage(int a)
{
newAverage = a;
avg = ((num1 + num2 + num3)/3);
cout << "\nEnter in three grades: ";
cin >> num1;
cin >> num2;
cin >> num3;
newAverage  = ((num1 + num2 + num3)/3);

}
//
int getAverage()
{
return newAverage;
}
//
void setGrade(string g)
{
newGrade = g;
if(newAverage >= 90)
{
newGrade = "A";
}
else if(newAverage >= 80 && newAverage < 90)
{
newGrade = "B";
}
else if(newAverage >= 70 && newAverage < 80)
{
newGrade = "C";
}
else if(newAverage >= 60 && newAverage < 70)
{
newGrade = "D";
}
else if(newAverage < 60)
{
newGrade = "E";
}
}
//
string getGrade()
{
return newGrade;
}

private:
//member variables;

string newName;
int newAverage;
int num1, num2, num3, avg;
string newGrade;
};

#endif
