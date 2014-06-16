//andrew west
#include <stdio.h>
//main method
int main()
{
//variables
	int Underweight;
	int Normal;
	int Overweight;
	int Obese;
	int weight;
	int height;
	int bmi;
	int bmi1;
	int bmi2;
//user input
	printf("Enter Weight in Pounds\n");
	scanf("%d", &weight);
	printf("Enter Height in Inches\n");
	scanf("%d", &height);
//setting variables
	bmi1 = weight*703;
	bmi2 = height*height;
	bmi = bmi1/bmi2;
	Underweight = bmi <= 18;
	Normal = bmi >= 18 && bmi <= 25;
	Overweight = bmi >= 25 && bmi <= 30;
	Obese = bmi > 30;
//printing the output in a if/elseif loop
	printf("Your bmi is: %d\n ", bmi, "\n");
	if(bmi = Underweight)
	{
		printf("You are Underweight\n");
	}
	else if(bmi = Normal)
	{
		printf("You are Normal\n");
	}
	else if(bmi = Overweight)
	{
		printf("You are Overweight\n");
	}
	else if(bmi = Obese)
	{
		printf("You are Obese\n");
	}
}
