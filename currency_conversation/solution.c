#include <stdio.h>

typedef char* string;

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
    printf("%.0lf euros at an exchange rate of %.2lf is %.2lf dollars.\n", amountFrom, rateFrom, amountTo);

    return 0;
}

double getDouble(string text)
{
    double number;

    printf("%s", text);

    scanf("%lf", &number);

    return number;
}