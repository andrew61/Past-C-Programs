//animal
//function definitions

//preprocessor
#include <string>
#include "headerAnimal.h"

//constructor
Animal::Animal()
{


}
//overload constructor
Animal::Animal(string name, string breed, int number)
{
newName = name;
newBreed = breed;
newNumber = number;

setName(name);
setBreed(breed);
setNumber(number);
}
