//school header
//function declarations


//preprocessor
#include <iostream>
#include <string>

using namespace std;

#ifndef headerSchool_H
#define headerSchool_H

//class School
class School
{

public:

//constructors
School();
//overload
School(string, string, int);

//function setName
void setName(string n)
{
newName = n;
}
//function getName
string getName()
{
return newName;
}

//function setState
void setState(string s)
{
newState = s;
if(s == "SC" || s == "sc" || s == "South Carolina" || s == "south carolina")
{
cout << "good choice";
}
else
{
cout << "south carolina is better";
}
}
//function getState
string getState()
{
return newState;
}
//getNational
void setNational(int nat)
{
newNational = nat;
}
//function getNational
int getNational()
{
return newNational;
}
private:
//member variables;

string newName;
string newState;
int newNational;
};

#endif
