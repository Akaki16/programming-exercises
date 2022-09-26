#include <iostream>
#include <limits>

int main()
{
    int rateOfReturn = 0;

    while ((std::cout << "What is the rate of return?: ")
            && !(std::cin >> rateOfReturn)) {
        std::cout << "Sorry. That's not a valid input.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    int years = 72 / rateOfReturn;

    std::cout << "It will take " << years << " years to double your initial investment\n";

    return 0;
}