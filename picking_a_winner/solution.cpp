#include <iostream>
#include <time.h>
#include <cstdlib>
#include <vector>

std::string getString(std::string);

int main()
{
    std::vector<std::string> persons;

    std::string personName = getString("Enter a name: ");

    persons.push_back(personName);

    while (!personName.empty())
    {
        personName = getString("Enter a name: ");

        persons.push_back(personName);

        if (personName.empty())
        {
            break;
        }
    }

    /* select random person from the persons vector */
    srand(time(NULL));

    int random = rand() % persons.size();

    std::string selectedPerson = persons[random];

    if (selectedPerson == "")
    {
        std::cout << "There is not a winner...\n";
    }
    else
    {
        std::cout << "The winner is... " << selectedPerson << "\n";
    }   

    return 0;
}

std::string getString(std::string text)
{
    std::string input;

    std::cout << text;

    std::getline(std::cin, input);

    return input;
}