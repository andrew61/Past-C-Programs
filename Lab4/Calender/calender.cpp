//Calender
//function definitions

//preprocessor
#include <string>
#include "headerCalender.h"

//constructor
Calender::Calender()
{


}
//overload constructor
Calender::Calender(int year, string month, int day)
{
newYear = year;
newMonth = month;
newDay = day;

setYear(year);
setMonth(month);
setDay(day);
}


