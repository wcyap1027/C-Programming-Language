#include <stdio.h>

int main()
{
	int guess;
	int secretnumber = 5;
	int guessCount = 0;
	int guessLimit = 3;
	int outOfGuesses = 0;
	
	
	while(guess != secretnumber && outOfGuesses == 0)
	{
		if(guessCount < guessLimit)
		{
			printf("Enter a number:");
			scanf("%d", &guess);
			guessCount++;
		} 
		else{
			outOfGuesses == 1;
		}
		
	}
	
	if(outOfGuesses == 1)
	{
		printf("Out of guesses");
	}
	else
	{
		printf("You won the jackpot!");
	}
	
	
	return 0;
	
}
