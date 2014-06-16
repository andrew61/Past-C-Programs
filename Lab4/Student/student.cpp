//student
//function definitions

//preprocessor
#include <string>
#include "headerStudent.h"

//constructor
Student::Student()
{


}
//overload constructor
Student::Student(string name, int average, string grade)
{
newName = name;
newAverage = average;
newGrade = grade;

setName(name);
setAverage(average);
setGrade(grade);
}
