/*
Andrew West
2/23/14
*/
#include <stdio.h>
#define SIZE 20
void calculateCharges(int b[]);//determine charges for customer based on hours
void printDailyTotals(int a[]);//prints  tbaular info on customer number, number of hours they parked, and charges, and number of customers towed due to staying more than 12 hours, and the money recieved for the day.


int hours;
int size;
int custArray[SIZE] = {};
int chargeArray[SIZE] = {};
size_t i;
int m;

int main(void)
{
//int hours;
//int custArray[] = {};
//int size;
printf("\nHow many customers are there: ");
scanf("%d", &size);
int custArray[size];
int chargeArray[size];
while(hours != 1)
{
for(i=0; i<size; i++)
{
printf("\nEnter in hours for customer info: ");
scanf("%d", &hours);
custArray[i] = hours;
chargeArray[i] = hours;
}
printDailyTotals(&custArray[0]);
calculateCharges(&chargeArray[0]);
break;
}
}

void printDailyTotals(int a[])
{
int k;

for(k=0; k<size; k++)
{
printf("\t\tCustomer[%d] Hours = %d\n",k , a[k]);
}
//calculateCharges(&custArray[0]);

}


void calculateCharges(int b[])
{

/*$6 for up to 3 hours, additional 1$ for every hour over three hours.
maximum charge in 12 hours is 10$.
if over 12 hours cars are towed with an additional 20$ fee.
*/
int j;
int minimum;
int sum;
minimum = 6;


for(j = 0; j<size; j++)
{
	if(b[j] <= 3)
	{
		b[j] = minimum;
	}
	else if(b[j] >= 4 && b[j] < 7)
	{
		b[j] = minimum + b[j] - 3;
	}
	else if(b[j] > 6 && b[j] < 13)
	{
		b[j] = 10;
	}
	else if(b[j] > 12)
	{
		b[j] = 30;
	}
printf("\t\tPaid:%d\n",b[j]);

}
for(j = 0; j<size; j++)
{
	sum = sum + b[j];
}
	printf("\t\tTotal revenue for today was: $%d\n", sum);

}



