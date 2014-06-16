//andrew west
#include <stdio.h>
//main method
int main(void)
{
//variables
	int a;
	int b;
	int c;

	int sum;
	int average;
	int product;
	int minimum;
	int maximum;
//user input 
	printf("Enter the first integer\n");
	scanf("%d", &a);

	printf("Enter the second integer\n");
	scanf("%d", &b);

	printf("Enter the third integer\n");
	scanf("%d", &c);
//variables
	sum = a + b + c;
	average = sum/3;
	product = a * b * c;
//if loop/elseif
	if(a < b && a < c)
	{
		printf("Minimum is %d\n", a);
	}
	else if(b < a && b < c)
	{
		printf("Minimum is %d\n", b);
	}
	else if(c < a && c < b)
	{
		printf("Minimum is %d\n", c);
	}

	if(a > b && a > c)
	{
		printf("Maximum is %d\n", a);
	}
	else if(b > a && b > c)
	{
		printf("Maximum is %d\n", b);
	}
	else if(c > a && c > b)	
	{
		printf("Maximum is %d\n", c);
	}
//print values from user input 
	printf("Sum is %d\n", sum);
	printf("Average is %d\n", average);
	printf("Product is %d\n", product);

}
