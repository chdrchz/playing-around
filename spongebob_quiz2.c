char advancedQuestions = [][100] = {"1. Who went to college with Flats the Flounder?",
                                            "2. Who is married to a supercomputer?",
                                            "3. What species is Mr. Krabs' daughter pearl?",
                                            "4. Who is Spongebob's teacher at boarding school?",
                                            "5. Which character is a famous news reporter?",
                                            "6. Who is the lifegaurd at Bikini Bottom's Goo Lagoon?",
                                            "7. What is Squidward's house shaped like?",
                                            "8. What was Spongebob's original name?",
                                            "9. What magazine is Squidward subscribed to?",
                                            "10. What is the name of Plankton's supercomputer wife?"};

        char advancedOptions = [][100] = {"A.", "B.", "C.", "D.",
                                          "A.", "B.", "C.", "D.",
                                          "A.", "B.", "C.", "D.",
                                          "A.", "B.", "C.", "D.",
                                          "A.", "B.", "C.", "D.",
                                          "A.", "B.", "C.", "D.",
                                          "A.", "B.", "C.", "D.",
                                          "A.", "B.", "C.", "D.",
                                          "A.", "B.", "C.", "D.",
                                          "A.", "B.", "C.", "D."};

        char advancedAnswers[10] = {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'};
        int numberOfAdvQuestions = sizeof(advancedQuestions)/sizeof(advancedQuestions[0]);

        char advancedGuess;
        char advancedScore;

        printf("Welcome to the *REAL* quiz!!!!\n");

        if (advancedGuess != advancedOptions)
        {
                printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
                printf("Try Again!: ");
                scanf("%c");

        for (int x = 0; x < numberOfAdvQuestions; x++) // looping through questions
        {
                printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
                printf("%s\n", advancedQuestions[g]);
                printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");

                for (int g = (x * 4); g < (x * 4) + 4; g++) // looping through options and prints the 4th string (starts with string 0)
                {
                        printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
                        printf("%s\n", advancedOptions[g]);
                        printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
                }

                printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
                printf("Guess: ");
                scanf("%c", &advancedGuess);
                scanf("%c");

                if (advancedGuess == advancedAnswers)
                {
                        printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
                        printf("Nice job, soldier!\n");
                }
                else
                {
                        printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
                        printf("So close, yet so far!\n");
                }
        }

        if (advancedScore <= 3)
        {
                printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
                printf("I see you aren't a TRUE fan! Score: %d\n", advancedScore);
        }
        else if (advancedScore > 3 && score <= 6)
        {
                printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
                printf("Probably pure luck, lol. Score: %d\n", advancedScore);
        }
        else if (advancedScore > 6 && score <= 9)
        {
                printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
                printf("Okay okay, you know your lore!! Score: %d\n", advancedScore);
        }
        else
        {
                printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
                printf("Bravo! A TRUE NERD in the house!! Score: %d\n", advancedScore);
        }
                                                                               
