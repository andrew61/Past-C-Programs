//School
//function definitions

//preprocessor
#include <string>
#include "headerSchool.h"

//constructor
School::School()
{


}
//overload constructor
School::School(string name, string state, int nationalRanking)
{
newName = name;
newState = state;
newNational = nationalRanking;

setName(name);
setState(state);
setNational(nationalRanking);
}
