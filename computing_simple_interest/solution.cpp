#include <iostream>

using namespace std;

double getDouble(string);

int main()
{
    /* prompt for the principal amount */
    double principalAmount = getDouble("Enter the principal: ");
    /* prompt for the rate of interest */
    double rateOfInterest = getDouble("Enter the rate of interest: ");
    double RATE_OF_INTEREST = rateOfInterest;
    RATE_OF_INTEREST = ((RATE_OF_INTEREST / 100) * 10) / 10;
    /* prompt for the number of years */
    double numberOfYears = getDouble("Enter the number of years: ");

    /* do calculation */
    int finalAmount = principalAmount * (1 + RATE_OF_INTEREST * numberOfYears);

    /* print result */
    cout << "After " << numberOfYears << " years" << " at " << rateOfInterest << "%," << " the investment will be worth $" << finalAmount << ".\n";   

    return 0;
}

double getDouble(string text)
{
    double number;

    cout << text;

    cin >> number;

    return number;
}