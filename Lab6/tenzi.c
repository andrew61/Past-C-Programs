/*
Andrew West
2/23/14
A game of tenzi
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

size_t face;
unsigned int roll;
unsigned int frequency[7] = {};
int dice[11] = {0,1,2,3,4,5,6,7,8,9,10};
char str[80] = "Rolling Dice";
int counter;
/*
NEXT ADD NUMBER OF DICE TO THE GAME SO THAT AFTER U THE FIRST ROLL 
THE HIGHEST ROLL YOU SUBTRACT THAT BY 10 AND ROLL AGAIN BUT WITH 
LESS DICE THIS TIME.


*/
int max1;

int go();//prototype
int main(void)//main method
{

	srand(time(NULL));

//Rules and ask if user wants to begin
	printf("\n TENZI RULES: \n  Type GO and roll your dice, look at your roll \n  and decide which number you are going for. \n  Whichever number you have the most of go for that number. \n  Roll the remaining dice again and see how much you have of that number. \n  repeat until you have all 10 dice with the same number.");
	printf("\nType tenzi to begin: ");
	scanf("\n%s", str);
	go();

}

int go()
{
	int win;
	int numdice = 10;

	srand(time(NULL));
//while frequency is less than 10....
	while(frequency[face] < 10)
	{
		counter++;
//roll dice iterate through array
		for(roll = 1; roll <= 10; ++roll)
		{
			face = 1 + rand() % 6;
			++frequency[face];
		}
//create table
		printf("\n%s%17s\n", "Face", "Frequency");
		for(face = 1; face < 7; ++face)
		{
			printf("%4d%17d\n", face, frequency[face]);

		}

		max1 = frequency[0];
//		win = frequency[10];
//find maximum number
		for(face = 0; face < 7; face++)
		{
			if(frequency[face] > max1)
			{
				max1 = face;
			}
		}
		numdice = numdice - frequency[max1];

		printf("\nRoll Go For: %d \n Have: %d\n  Remaining Dice: %d\n", max1, frequency[max1], numdice);
//ask user if he/she wants to roll again
		printf("\nRoll again?");
		scanf("\n%s", str);
//if frequency of dice is 10 or over, break loop and TENZI
		for(face = 0; face < 7; face++)
		{
			if(frequency[face] >= 10)
			{
				printf("\nTENZI\nYou Win\n");
				printf("Number of Rolls: %d\n", counter);
				break;
			}
		}

	}
return 0;
}

