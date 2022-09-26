#include <iostream>
#include <ctime>
#include <cstdlib>

std::string getString(std::string);

int main()
{
    /* store possible answers in an array */
    const std::string answers[4] = {"Yes", "No", "Maybe", "Ask again later"};
    /* calculate array size */
    int arrSize = sizeof(answers) / sizeof(answers[0]);

    std::string question = getString("What's your question?: ");

    srand(time(NULL));

    /* Get random answer from array */
    std::string randomAnswer = answers[rand() % arrSize];

    /* Display random answer */
    std::cout << randomAnswer << "\n";

    return 0;
}

std::string getString(std::string text)
{
    std::string input;

    std::cout << text;

    getline(std::cin, input);

    return input;
}