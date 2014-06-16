/*
Andrew West
3/15/14
question 15.5
*/
//preprocessor
#include <iostream>

using namespace std;
//constant variable
const double PI = 3.14159;
//inline funtion
inline double circleArea(const double radius)
{
return PI * radius * radius;
}
//main method
int main()
{
//variable
double radiusValue;
//print statement
cout << "Enter the length of the radius of your sphere: ";
//ask for user input add value to radiusValue
cin >> radiusValue;

//print radius value
cout << "Are of sphere with radius " << radiusValue;
//print radius value multiplied by inline function circleArea
cout << " is " << circleArea(radiusValue) << endl;
}
