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
	char response;

	printf("Are you a TRUE Spongebob stan? FIND OUT NOW!!!!\n");

	for (int i = 0; i < numberOfQuestions; i++)
	{
		printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		printf("%s\n", questions[i]);
		printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");

		for (int j = (i * 4); j < (i * 4) + 4; j++)
		{
			printf("%s\n", options[j]);
		}
		
		printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		printf("Guess: ");
		scanf("%c", &guess);
		scanf("%c"); // clear character from input buffer

		guess = toupper(guess);


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
		printf("Honestly - not your best performance!\n");
	}
	else if (score > 3 && score <= 6)
	{
		printf("You've watched a few episodes, I'll give you that!\n");
	}
	else if (score > 6 && score <= 9)
	{
		printf("You're definitely a pro, but not yet a STAN!!\n");
	}
	else 
	{
		printf("You're a STAN!! Congratulations!\n");	
	}

	

	while (!(response == 10)) // until loop in c - the ! stops the while loop from continuing to the next iteration 
	{
		printf("Do you want to test your luck?\n");
		printf("Y/N: \n");
		scanf("%c", &response);
			if (response == 'Y')
			{
				toupper(response);
				printf("GOOD LUCK!!!\n");
				
			}
			else
				toupper(response);
				printf("Goodbye, Friend!\n")
	}

	return (0);
}
