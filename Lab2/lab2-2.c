// andrew west
//infinite loop
//1/17/14
#include <stdio.h>
//main method
int main()
{
//variables
int i;
i = 2;
//while loop multiplies variable by 2, then that variable by 2,etc
//stops at 1073741824
while (i > 1 )
{
	printf(" %d ",i, " ");
	i = i*2;
}
}
