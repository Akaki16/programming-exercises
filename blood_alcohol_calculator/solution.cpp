#include <iostream>
#include <bits/stdc++.h>
#include <string>

std::string getString(std::string);
int getInt(std::string);
double getDouble(std::string);

int main()
{
    /*
        alcohol distribution ratio for men is 0.73
        alcohol distribution ratio for women is 0.66
    */
    const double R_MEN = 0.73;
    const double R_WOMEN = 0.66;
    double BAC;

    /*
        prompt for gender
        prompt for total alcohol consumed
        prompt for body weight
        prompt for number of hours since last drink
    */
    std::string gender = getString("Enter your gender: (M, F) ");
    transform(gender.begin(), gender.end(), gender.begin(), ::tolower);

    double totalAlcoholConsumed = getInt("Enter total alcohol consumed in ounces: ");
    double bodyWeight = getDouble("Enter your weight: ");
    double numberOfHoursSinceLastDrink = getInt("Enter number of hours since last drink: ");

    /* calculate blood alcohol content based on gender */
    if (strstr(gender.c_str(), "m"))
    {
        BAC = (totalAlcoholConsumed * 5.14 / bodyWeight * R_MEN) - .015 * numberOfHoursSinceLastDrink;
    }
    else if (strstr(gender.c_str(), "f"))
    {
        BAC = (totalAlcoholConsumed * 5.14 / bodyWeight * R_WOMEN) - .015 * numberOfHoursSinceLastDrink;
    }

    /* display final result based on blood alcohol content */
    if (BAC < 0.08)
    {
        std::cout << "Your BAC is: " << BAC << "\n";
        std::cout << "It is legal for you to drive\n";
    }
    else
    {
        std::cout << "It is not legal for you to drive" << "\n";
        std::cout << "Your BAC is : " << BAC << "\n";
    }

    return 0;
}


std::string getString(std::string text)
{
    std::string input;

    std::cout << text;

    std::cin >> input;

    return input;
}

int getInt(std::string text)
{
    int number;

    std::cout << text;

    std::cin >> number;

    return number;
}

double getDouble(std::string text)
{
    double number;

    std::cout << text;

    std::cin >> number;

    return number;
}