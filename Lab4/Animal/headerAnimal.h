//animal header
//function declarations


//preprocessor
#include <iostream>
#include <string>

using namespace std;

#ifndef headerAnimal_H
#define headerAnimal_H

//class Animal
class Animal
{

public:

//constructors
Animal();
//overload
Animal(string, string, int);

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

//function sBreedID
void setBreed(string b)
{
newBreed = b;
}
//function getBreed
string getBreed()
{
return newBreed;
}
//function setNumber
void setNumber(int num)
{
newNumber = num;
}
//function getNumber
int getNumber()
{
return newNumber;
}
private:
//member variables 

string newName;
string newBreed;
int newNumber;
};

#endif
