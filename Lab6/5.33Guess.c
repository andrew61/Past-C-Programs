/*
Andrew West
2/25/14
A guessing game
*/

#include <stdio.h>
#include <time.h>

int main(void)
{
int guess;
unsigned int num;
char y;

//char *n = 'n';
srand(time(NULL));
for(num = 1; num <= 10; ++num)
{

	num = rand() % 1000 + 1;
	printf("%d", num);
}
while(y != 'n')
{
	printf("\nI have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess: ");
	scanf("%d", &guess);
	if(guess == num)
	{
		printf("\nExcellent! You guessed the number!\nWould you like to play again(y or n)?");
		scanf("%s", &y);
		if(y = 'y')
		{
			continue;
		}
	}
	else if(guess < num)
	{
		printf("\nToo Low. Try Again\n");
	}
	else if(guess > num)
	{
		printf("\nToo high. Try Again\n");
	}

}

}


