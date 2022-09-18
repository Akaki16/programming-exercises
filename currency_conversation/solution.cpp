#include <iostream>

using namespace std;

double getDouble(string);

int main()
{
    const int DOLLAR_EXCHANGE_RATE = 100;

    /* prompt user for the amount of euro and for the current euro exchange rate */
    double amountFrom = getDouble("How many euros are you exchanging?: ");
    double rateFrom = getDouble("What is the exchange rate?: ");

    /* make calculations */
    double amountTo = (amountFrom * rateFrom) / DOLLAR_EXCHANGE_RATE;

    /* print result */
    cout << amountFrom << " euros at an exchange rate of " << rateFrom << " is " << amountTo << " dollars\n"; 

    return 0;
}

double getDouble(string text)
{
    double number;

    cout << text;

    cin >> number;

    return number;
}