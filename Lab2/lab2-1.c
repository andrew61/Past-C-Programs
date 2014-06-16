//andrew west
//program that prints the decimal equivalent of a binary #
//1/17/14

#include <stdio.h>
//main method
int main()
{
//variables
int ui;
int b1,b2,b3,b4,b5;
int dec;
//user input
printf("Enter up to 5 digits of zeroes and ones \n");
scanf("%d",&ui);
printf("\n%d", ui);
//splitting up the user input into separate #'s
b1 = ui/10000;
b2 = (ui%10000)/1000;
b3 = (ui%1000)/100;
b4 = (ui%100)/10;
b5 = (ui%10)/1;
dec = 0;


//printing userinput
printf("\n%d%d%d%d%d\n", b1, b2, b3, b4, b5);
//converting binary to decimal
if(b5 == 0)
{
	dec = dec + 0;
}
else
{
	dec = dec + 1;
}
if(b4 == 0)
{
	dec = dec + 0;
}
else
{
	dec = dec + 2;
}
if(b3 == 0)
{
	dec = dec + 0;
}
else
{
	dec = dec + 4;
}
if(b2 == 0)
{
	dec = dec + 0;
}
else
{
	dec = dec + 8;
}
if(b1 == 0)
{
	dec = dec + 0;
}
else
{
	dec = dec + 16;
}



printf("\n%d\n", dec);



}
