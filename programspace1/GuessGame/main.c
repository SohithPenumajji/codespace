#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int RandomNumber = 0;
	int Guess = 0;
	int NumberOfGuesses;
	time_t t;
 
    // initialization of random number generator
	srand((unsigned) time(&t));
	//ge the random nummber
	RandomNumber = rand() % 21;
	
	printf("This is a Guessing Game.\n");
	printf("\nI have choosen to number between 0 and 20. which you must guess my number. \n");
	
	for(NumberOfGuesses = 5; NumberOfGuesses > 0; --NumberOfGuesses)
	{
		printf("\nYou have %d tr%s left.", NumberOfGuesses, NumberOfGuesses == 1 ? "y" : "ies");
		printf("\nEnter a guess: ");
		scanf("%d", &Guess);
		
		if (Guess == RandomNumber)
		{
			printf("\nCongratulations. You've Guessed it correctly. ");
			break;
		}
		else if (Guess < 0 || Guess > 20)
			printf("I said that enter number between 0 and 20. \n");
			
			else if (RandomNumber > Guess)
				printf("Sorry %d is Wrong. My number is greater than that. \n", Guess);
				else if (RandomNumber < 20)
					printf("Sorry %d is Wrong. My Number is lesser that that. \n", Guess);  
	}
      printf("\n You have had 5 tried and failed. The number was %d\n", RandomNumber);
      return 0;
}






	printf("hello world\n");
	return 0;
}
