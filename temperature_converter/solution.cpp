#include <iostream>

char getChar(std::string);
double getDouble(std::string);

int main()
{
    std::cout << "Press C to convert from fahrenheit to celsius" << "\n";
    std::cout << "Press F to convert from fahrenheit to celsius" << "\n";

    char option = getChar("Your choice: ");

    if (option == 'c' || option == 'C')
    {
        double fahrenheit = getDouble("Please enter the temperature in fahrenheit: ");
        double celsius = (fahrenheit - 32) * 5 / 9;
        std::cout << "The temperature in celsius is: " << celsius;
    }
    else if (option == 'f' || option == 'F')
    {
        double celsius = getDouble("Please enter the temperature in celsius: ");
        double fahrenheit = (celsius * 9 / 5) + 32;
        std::cout << "The temperature in fahrenheit is: " << fahrenheit;
    }
    else
    {
        std::cout << "Next time, please enter a valid option" << "\n";
    }

    return 0;
}

char getChar(std::string text)
{
    char character;

    std::cout << text;

    std::cin >> character;

    return character;
}

double getDouble(std::string text)
{
    double number;

    std::cout << text;

    std::cin >> number;

    return number;
}