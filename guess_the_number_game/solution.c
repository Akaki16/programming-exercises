#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int generateRandomNumber(int);
int system(const char *command);

int main()
{
    printf("Let's play Guess the Number.\n");

    int difficultyLevel;
    int randomNumber;
    int guessNumber;
    int guesses = 0;
    char buffer1[10];
    char buffer2[10];

    /* prompt for the difficulty level */
    printf("Pick a difficulty level (1, 2, or 3): ");
    fgets(buffer1, 10, stdin);
    difficultyLevel = atoi(buffer1);

    /* validate input */
    while (difficultyLevel < 1 || difficultyLevel > 3)
    {
        printf("Pick a difficulty level (1, 2, or 3): ");
        fgets(buffer1, 10, stdin);
        difficultyLevel = atoi(buffer1);
    }

    srand(time(NULL));

    /* generate random number based on difficulty level */
    if (difficultyLevel == 1)
    {
        randomNumber = generateRandomNumber(10);
    }
    else if (difficultyLevel == 2)
    {
        randomNumber = generateRandomNumber(50);
    }
    else
    {
        randomNumber = generateRandomNumber(1000);
    }

    /* prompt for the guess */
    printf("I have my number. What's your guess? ");
    fgets(buffer2, 10, stdin);
    guessNumber = atoi(buffer2);

    /* check guessed number */
    while (guessNumber != randomNumber)
    {
        /* notify user if his/her guessed number is lower or greater than random number */
        if (guessNumber < randomNumber)
        {
            printf("Too low. Guess again: ");
            fgets(buffer2, 10, stdin);
            guessNumber = atoi(buffer2);
            guesses = guesses + 1;
        }
        if (guessNumber > randomNumber)
        {
            printf("Too high. Guess again: ");
            fgets(buffer2, 10, stdin);
            guessNumber = atoi(buffer2);
            guesses = guesses + 1;
        }
        if (guessNumber == randomNumber)
        {
            printf("You got it in %d guesses!\n", guesses + 1);

            /* ask user if he/she wants to play again */
            char question[1];
            printf("Play again? (y, n) ");
            scanf("%c", question);

            if (strstr(question, "y") || strstr(question, "Y"))
            {
                system("./a.out");
            }
            if (strstr(question, "n") || strstr(question, "N"))
            {
                printf("Goodbye!\n");
                exit(0);
            }
        }
    }

    return 0;
}

int generateRandomNumber(int range)
{
    int randomNumber = 1 + rand() % range;
    return randomNumber;
}