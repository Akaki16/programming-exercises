#include <iostream>

int getInt(std::string);

class Month
{
    int number;
};

int main()
{
    int monthNumber = getInt("Please enter the number of the month: ");

    switch (monthNumber)
    {
        case 1:
            std::cout << "The name of the month is Januray" << "\n";
            break;
        case 2:
            std::cout << "The name of the month is February" << "\n";
            break;
        case 3:
            std::cout << "The name of the month is March" << "\n";
            break;
        case 4:
            std::cout << "The name of the month is April" << "\n";
            break;
        case 5:
            std::cout << "The name of the month is May" << "\n";
            break;
        case 6:
            std::cout << "The name of the month is June" << "\n";
            break;
        case 7:
            std::cout << "The name of the month is July" << "\n";
            break;
        case 8:
            std::cout << "The name of the month is August" << "\n";
            break;
        case 9:
            std::cout << "The name of the month is September" << "\n";
            break;
        case 10:
            std::cout << "The name of the month is October" << "\n";
            break;
        case 11:
            std::cout << "The name of the month is November" << "\n";
            break;
        case 12:
            std::cout << "The name of the month is December" << "\n";
            break;
        default:
            std::cout << "Please enter a valid number." << "\n";
            break;
    }

    return 0;
}

int getInt(std::string text)
{
    int number;

    std::cout << text;

    std::cin >> number;

    return number;
}