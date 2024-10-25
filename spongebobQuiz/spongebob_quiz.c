#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char questions[][100] = {"1. What is Spongebob's House?",
				 "2. What is the name of Spongebob's Pet Snail?",
				 "3. What city does Spongebob live in?",
				 "4. Where does Spongebob work?",
				 "5. What instrument does Squidward play?",
				 "6. What sound does Gary the snail make?",
				 "7. Who is always trying to steal Mr. Krabs' secret formula for krabby patties?",
				 "8. What kind of animal is Sandy Cheeks?",
				 "9. Who is Mermaid Man's Sidekick?",
				 "10. Which character doesn't have a nose?"};

	char options[][100] = {"A. A Sea Cucumber", "B. A Seashell", "C. A Pineapple", "D. A Coconut",
			       "A. Gary", "B. Dennis", "C. Nancy", "D. Kenny",
			       "A. Flip Flop Falls", "B. Bikini Bottom", "C. Snorkel City", "D. Dead Eye Gulch",
			       "A. Weenie Hut", "B. Golden Loaf", "C. Chum Bucket", "D. Krusty Krab",
			       "A. Saxophone", "B. Clarinet", "C. Trumpet", "D. Tuba",
			       "A. Moo", "B. Meow", "C. Chirp", "D. Woof",
			       "A. Plankton", "B. Mrs. Puff", "C. Larry the Lobster", "D. Old Man Jenkins",    
			       "A. Whale", "B. Chipmunk", "C. Jellyfish", "D. Squirrel",
			       "A. Barnacle Boy", "B. Shark Boy", "C. Blowfish Boy", "D. Barracude Boy", 
			       "A. Squidward", "B. Patrick", "C. Spongebob", "D. Mr. Krabs"};

	char answers[10] = {'C', 'A', 'B', 'D', 'B', 'B', 'A', 'D', 'A', 'B'};
	int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);
	
	char guess;
	
	int score;

	printf("Are you a TRUE Spongebob stan? FIND OUT NOW!!!!\n");

	for (int i = 0; i < numberOfQuestions; i++)
	{
		printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		printf("%s\n", questions[i]);
		printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");

		guess = toupper(guess);

		for (int j = (i * 4); j < (i * 4) + 4; j++)
		{
			printf("%s\n", options[j]);
		}
		
		printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		printf("Guess: ");
		scanf("%c", &guess);
		scanf("%c"); // clear character from input buffer

		if (guess == answers[i])
		{
			printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			printf("OMG good work gorl!!\n");
			score++;
		}
		else
		{
			printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			printf("BETTER LUCK NEXT TIME DWEEB!!\n");
		}

	}
	
	if (score <= 3)
	{
		printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		printf("Honestly - not your best performance! Score: %d\n", score);
	}
	else if (score > 3 && score <= 6)
	{
		printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		printf("Okay, you've watched a few episodes! Score: %d\n", score);
	}
	else if (score > 6 && score <= 9)
	{
		printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		printf("Definitely a pro, but not yet a STAN! Score: %d\n", score);
	}
	else 
	{
		printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		printf("You're a STAN!! Congratulations! Score: %d\n", score);	
	}
	
	char response;

	response = 'Y';
	response = 'y';
	response = 'N';
	response = 'n';

	while (score == 10) // tells the program to continue to the next set of questions or not, depending on user input 
	{
		printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		printf("Do you want to test your luck?\n");
		printf("Y/N: \n");
		scanf("%c", &response);
			if (response == 'y' || response == 'Y')
			{
				printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
				printf("Good luck!!\n");
				break;
			}
			else if (response == 'n' || response == 'N')			
			{
				printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
				printf("Thanks for playing!!");
				break;
			}
	}
	
	return (0);
}
