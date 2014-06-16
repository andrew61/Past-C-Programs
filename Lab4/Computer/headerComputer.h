//computer header
//function declarations


//preprocessor
#include <iostream>
#include <string>

using namespace std;

#ifndef headerComputer_H
#define headerComputer_H

//class computer
class Computer
{

public:

//constructors
Computer();
//overload
Computer(string, string, int);

//function setBrand
void setBrand(string b)
{
newBrand = b;
if(b == "intel" || b == "Intel")
{
cout << "good choice";
}
else if(b == "amd" || b == "AMD" || b == "Amd")
{
cout << "consider buying intel, they have better threading";
}
else
{
cout << "you have an offbrand cpu";
}


}
//function getBrand
string getBrand()
{
return newBrand;
}

//function setType
void setType(string t)
{
newType = t;
}
//function getType
string getType()
{
return newType;
}

void setBenchmark(int ben)
{
newBenchmark = ben;

if(ben < 5000)
{
cout << "\nYou need more processing power";
}
else if(ben > 5000)
{
cout << "\nYou have enough processing power";
}

}
//function getBenchmark
int getBenchmark()
{
return newBenchmark;
}
private:
//member variables

string newBrand;
string newType;
int newBenchmark;
};

#endif
