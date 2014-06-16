/*
Andrew West
3/15/14
Lab 5
*/
//include header file
#include "lab5templates.h"
//preprocessor
#include <iostream>

using namespace std;

//main method
int main()
{
//variables
int a;
int b;
int c;
char d;
char e;
char f;
double g;
double h;
double i;
//print
cout << "\nEnter in 2 Values: ";
//user input to assign values to variables
cin >> a >> b;
//print variables
cout << "\nThe values entered were " << a << " & " << b;
//use template
int min2 = minOfTwo(a , b);
//print min
cout << "\nThe min of the two numbers: " << a << " & " << b << " is " << min2 << "\n";
//use template
int max2 = maxOfTwo(a , b);
//print max
cout << "\nThe max of the two numbers: " << a << " & " << b << " is " << max2 << "\n";



//print
cout << "\nEnter in 2 Characters: ";
//user input
cin >> d >> e;
//print variables
cout <<"\nThe characters entered were " << d << " & " << e;
//template
char minchar2 = minOfTwo(d , e);
//print min
cout << "\nThe min of the two characters: " << d << " & " << e << " is " << minchar2 << "\n"; 
//use template
char maxchar2 = maxOfTwo(d , e);
//print max
cout << "\nThe max of the two characters: " << d << " & " << e << " is " << maxchar2 << "\n";



//print
cout << "\nEnter in 2 floats: ";
//input
cin >> g >> h;
//print variables
cout << "\nThe values entered were " << g << " & " << h;
//template
double mindouble2 = minOfTwo(g, h);
//print min
cout << "\nThe min of the two floats: " << g << " & " << h << " is " << mindouble2 << "\n";
//use template
double maxdouble2 = maxOfTwo(g , h);
//print max
cout << "\nThe max of the two floats: " << g << " & " << h << " is " << maxdouble2 << "\n";


//print
cout << "\nEnter in 3 integers: ";
//input
cin >> a >> b >> c;
//print variables
cout << "\nThe integers entered were " << a << " & " << b << " & " << c;
//use template
int min3 = minOfThree(a, b, c);
//print min
cout << "\nThe min of the three integers: " << a << " & " << b << " & " << c << " is " <<min3 << "\n";
//use template
int max3 = maxOfThree(a, b, c);
//print max
cout << "\nThe max of the three integers: " << a << " & " << b << " & " << c << " is " <<max3 << "\n";


//print
cout << "\nEnter in 3 characters: ";
//input
cin >> d >> e >> f;
//print variables
cout << "\nThe characters entered were " << d << " & " << e << " & " << f;
//use template
char minchar3 = minOfThree(d, e, f);
//print min
cout << "\nThe min of the three characters: " << d << " & " << e << " & " << f << " is " <<minchar3 << "\n";
//use template
char maxchar3 = maxOfThree(d, e, f);
//print max
cout << "\nThe max of the three characters: " << d << " & " << e << " & " << f << " is " <<maxchar3 << "\n";


//print
cout << "\nEnter in 3 floats: ";
//input
cin >> g >> h >> i;
//print variables
cout << "\nThe floats entered were " << g << " & " << h << " & " << i;
//use template
double mindouble3 = minOfThree(g, h, i);
//print min
cout << "\nThe min of the three floats: " << g << " & " << h << " & " << i << " is " <<mindouble3 << "\n";
//use template
double maxdouble3 = maxOfThree(g, h, i);
//print max
cout << "\nThe max of the three floats: " << g << " & " << h << " & " << i << " is " <<maxdouble3 << "\n";


return 0;
}

