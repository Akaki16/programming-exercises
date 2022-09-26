#include <iostream>
#include <ctime>
#include <cstdlib>

int getInt(std::string);
std::string getString(std::string);

int generateRandomNumber(int);

int system(const char *command);

int main()
{
    std::cout << "Let's play Guess the Number.\n";

    int randomNumber;
    int difficultyLevel = getInt("Pick a difficulty level: (1, 2 or 3): ");

    srand(time(NULL));

    if (difficultyLevel == 1)
    {
        randomNumber = generateRandomNumber(10);
    }
    else if (difficultyLevel == 2)
    {
        randomNumber = generateRandomNumber(100);
    }
    else if (difficultyLevel == 3)
    {
        randomNumber = generateRandomNumber(1000);
    }

    /* to keep track of guesses */
    int guesses = 0;
    int userGuess = getInt("I have my number. What's your guess?: ");

    while (userGuess != randomNumber)
    {

        if (userGuess > randomNumber)
        {
            guesses++;
            userGuess = getInt("Too high. Guess again: ");
        }

        if (userGuess < randomNumber)
        {
            guesses++;
            userGuess = getInt("Too low. Guess again: ");
        }
        
        if (userGuess == randomNumber)
        {
            std::cout << "You got it in " << guesses + 1 << " guesses\n";
            
            std::string playAgain = getString("Play again?: (n, y) ");

            if (playAgain == "n" || playAgain == "N")
            {
                std::cout << "Goodbye!\n";
                exit(0);
            }
            else if (playAgain == "y" || playAgain == "Y")
            {
                system("./solution");
            }
        }

    }

    return 0;
}

int getInt(std::string text)
{
    int number;

    std::cout << text;

    std::cin >> number;

    return number;int generateRandomNumber(int);
}

std::string getString(std::string text)
{
    std::string input;

    std::cout << text;

    std::cin >> input;

    return input;
}

int generateRandomNumber(int range)
{
    int randomNumber = 1 + rand() % range;
    return randomNumber;
}